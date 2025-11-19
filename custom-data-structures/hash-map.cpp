#include <iostream>
#include <cstring>
#include <cstdlib>

// Linked List node
struct node {
    char* key;
    char* value;
    struct node* next;
};

void setNode(struct node* n, const char* key, const char* value) {
    n->key = strdup(key);     // Copy key
    n->value = strdup(value); // Copy value
    n->next = NULL;
}

struct hashMap {
    int numOfElements;
    int capacity;
    struct node** arr;
};

void initializeHashMap(struct hashMap* mp) {
    mp->capacity = 100;
    mp->numOfElements = 0;

    // calloc initializes all buckets to NULL
    mp->arr = (struct node**)calloc(mp->capacity, sizeof(struct node*));
}

int hashFunction(struct hashMap* mp, const char* key) {
    long long hash = 0;
    long long p = 31;
    long long pow = 1;

    int n = strlen(key);
    for (int i = 0; i < n; i++) {
        hash = (hash + (key[i] * pow)) % mp->capacity;
        pow = (pow * p) % mp->capacity;
    }
    return (int)hash;
}

void insert(struct hashMap* mp, const char* key, const char* value) {
    int index = hashFunction(mp, key);

    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    setNode(newNode, key, value);

    // Insert at head (simple)
    newNode->next = mp->arr[index];
    mp->arr[index] = newNode;

    mp->numOfElements++;
}

void deleteKey(struct hashMap* mp, const char* key) {
    int index = hashFunction(mp, key);

    struct node* curr = mp->arr[index];
    struct node* prev = NULL;

    while (curr != NULL) {
        if (strcmp(curr->key, key) == 0) {
            if (prev == NULL) {
                mp->arr[index] = curr->next;
            } else {
                prev->next = curr->next;
            }

            // Free key and value too
            free(curr->key);
            free(curr->value);
            free(curr);
            return;
        }
        prev = curr;
        curr = curr->next;
    }
}

char* search(struct hashMap* mp, const char* key) {
    int index = hashFunction(mp, key);

    struct node* curr = mp->arr[index];

    while (curr != NULL) {
        if (strcmp(curr->key, key) == 0) {
            return curr->value;
        }
        curr = curr->next;
    }

    return (char*)"Oops! No data found.";
}

int main() {
    struct hashMap* mp = (struct hashMap*)malloc(sizeof(struct hashMap));
    initializeHashMap(mp);

    insert(mp, "Yogaholic", "Anjali");
    insert(mp, "pluto14", "Vartika");
    insert(mp, "elite_Programmer", "Manish");
    insert(mp, "GFG", "GeeksforGeeks");
    insert(mp, "decentBoy", "Mayank");

    printf("%s\n", search(mp, "elite_Programmer"));
    printf("%s\n", search(mp, "Yogaholic"));
    printf("%s\n", search(mp, "pluto14"));
    printf("%s\n", search(mp, "decentBoy"));
    printf("%s\n", search(mp, "GFG"));

    printf("%s\n", search(mp, "randomKey"));

    printf("\nAfter deletion:\n");
    deleteKey(mp, "decentBoy");
    printf("%s\n", search(mp, "decentBoy"));

    return 0;
}
