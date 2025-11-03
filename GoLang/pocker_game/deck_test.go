package main

import (
	"os"
	"testing"
)

func TestNewDeck(t *testing.T) {
	d := newDeck()

	if len(d) != 52 {
		t.Errorf("Expected Deck length of 20 , but got %d", len(d))
	}
	if d[0] != "Ace of Spades" {
		t.Errorf("Expected first cards of Ace of Spades , ,but got %v", d[0])
	}
	if d[len(d)-1] != "King of Club" {
		t.Errorf("Expected Last card of King of club , but got %v", d[len(d)])
	}
}
func TestSaveandNewDecFile(t *testing.T) {
	os.Remove("_decktesting")

	deck := newDeck()
	deck.saveToFile("_decktesting")

	loadedDeck := newDeckFromFile("_decktesting")

	if len(loadedDeck) != 52 {
		t.Errorf("Expected Deck length of 20 , but got %d", len(loadedDeck))
	}
	os.Remove("_decktesting")

}
