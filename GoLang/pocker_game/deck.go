package main

import (
	"fmt"
	"math/rand"
	"os"
	"strings"
)

//Create a new type of 'deck
// which is a slice of string

type deck []string // deck borrows powers of string

func newDeck() deck {
	cards := deck{}
	cardSuits := []string{"Spades", "Diamonds", "Hearts", "Club"}
	cardValues := []string{"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"}

	for _, suit := range cardSuits {
		for _, value := range cardValues {
			cards = append(cards, value+" of "+suit)
		}
	}
	return cards

}

func (d deck) print() {
	for i, card := range d {
		fmt.Println(i, card)
	}
}

func deal(d deck, handSize int) (deck, deck) {
	return d[:handSize], d[handSize:]
}

func (d deck) toString() string {
	return strings.Join([]string(d), ",")
}

func (d deck) saveToFile(filename string) error {
	return os.WriteFile(filename, []byte(d.toString()), 0666)
}

func newDeckFromFile(fileName string) deck {
	bs, err := os.ReadFile(fileName)
	if err != nil {
		// log the error and return call to newDec()

		// log and stop the programm.
		fmt.Println("Error:", err)
		os.Exit(1)
	}
	str := (strings.Split(string(bs), ","))
	return (deck(str))

}

func (d deck) shuffel() {
	
	for i := range d {
		newPosition := rand.Intn(len(d) - 1)
		d[i], d[newPosition] = d[newPosition], d[i]
	}
}
