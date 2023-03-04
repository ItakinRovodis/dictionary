#include "dictionary.h"

int main() {
	HashTable* ht = create_table(CAPACITY);
	ht_insert(ht, "e", "First adress");
	ht_insert(ht, "f", "Second_adress");
	print_search(ht, "e");
    print_search(ht, "f");
    print_search(ht, "3");
    print_table(ht);
    free_table(ht);
    return 0;
}