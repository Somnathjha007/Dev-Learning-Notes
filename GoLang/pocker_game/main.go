package main

func main() {
	//cards := newDeck()

	//cards.saveToFile("my_cards")
	cards := newDeck()
	cards.shuffel()
	cards.print()

}
