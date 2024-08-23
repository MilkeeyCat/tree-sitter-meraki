package tree_sitter_meraki_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-meraki"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_meraki.Language())
	if language == nil {
		t.Errorf("Error loading Meraki grammar")
	}
}
