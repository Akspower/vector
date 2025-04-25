#include <stdio.h>
#include <stdlib.h>

// ==========================
// ✅ 1. Basic MAX Macro
// - Be careful with side effects like MAX(x++, y++)
// ==========================
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// ==========================
// ✅ 2. Swap Macro
// - Type-safe using third 'type' argument
// - Always wrap in `do{...}while(0)` for safety in blocks
// ==========================
#define SWAP(a, b, type) do { \
    type temp = (a);          \
    (a) = (b);                \
    (b) = temp;               \
} while(0)

// ==========================
// ✅ 3. Safe Stringify
// - Turns code into string literals safely
// ==========================
#define STRINGIFY(x) #x         // Step 1
#define TOSTRING(x) STRINGIFY(x) // Step 2 to evaluate macros passed as argument

// ==========================
// ✅ 4. MIN Macro (GCC-specific)
// - Uses `typeof` to ensure type-safety
// - Only works with GCC or Clang (not MSVC)
// ==========================
#define MIN(a, b) ({             \
    typeof(a) _a = (a);          \
    typeof(b) _b = (b);          \
    _a < _b ? _a : _b;           \
})

// ==========================
// ✅ 5. Array Size Macro
// - Works only with actual arrays, NOT pointers!
// ==========================
#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

// ==========================
// ✅ 6. Bit Manipulation Macros
// - Efficient register-level operations
// ==========================
#define SET_BIT(reg, bit) ((reg) |= (1UL << (bit)))
#define CLEAR_BIT(reg, bit) ((reg) &= ~(1UL << (bit)))
#define TOGGLE_BIT(reg, bit) ((reg) ^= (1UL << (bit)))
#define CHECK_BIT(reg, bit) (((reg) >> (bit)) & 1)

// ==========================
// ✅ 7. Debug Print
// - Only prints if DEBUG is defined
// ==========================
#ifdef DEBUG
#define DEBUG_PRINT(fmt, ...) fprintf(stderr, "DEBUG: %s:%d: " fmt, __FILE__, __LINE__, __VA_ARGS__)
#else
#define DEBUG_PRINT(fmt, ...) do {} while(0)
#endif

// ==========================
// ✅ 8. Concatenation Macro
// - Combines two identifiers into one (e.g., var1 = CONCAT(var, 1))
// ==========================
#define CONCAT(a, b) a##b

// ==========================
// ✅ 9. Power of 2 Check
// - Only true if n is a power of two
// - n must be > 0
// ==========================
#define IS_POWER_OF_2(n) ((n) && !((n) & ((n) - 1)))

// ==========================
// ✅ Demonstration Function
// ==========================
void demonstrate_macros() {
    printf("==== Macro Demonstrations ====\n");

    // --- MAX Macro ---
    int x = 10, y = 20;
    printf("MAX(%d, %d) = %d\n", x, y, MAX(x, y));

    int a = 5, b = 10;
    printf("MAX(a++, b++) = %d (a=%d, b=%d) <- ⚠️ Side Effects!\n", MAX(a++, b++), a, b);

    // --- SWAP Macro ---
    x = 100, y = 200;
    printf("\nBefore SWAP: x=%d, y=%d\n", x, y);
    SWAP(x, y, int);
    printf("After SWAP:  x=%d, y=%d\n", x, y);

    // --- Stringification ---
    printf("\nStringified: %s\n", TOSTRING(Hello_World_123));

    // --- MIN Macro ---
    printf("\nMIN(15.5, 20.2) = %.1f\n", MIN(15.5, 20.2));

    // --- ARRAY_SIZE ---
    int arr[] = {1, 2, 3, 4, 5};
    printf("\nArray size: %zu\n", ARRAY_SIZE(arr));

    // --- Bit Manipulation ---
    unsigned int reg = 0;
    SET_BIT(reg, 2);
    printf("\nSET_BIT 2: %u\n", reg);
    TOGGLE_BIT(reg, 2);
    printf("TOGGLE_BIT 2: %u\n", reg);
    CLEAR_BIT(reg, 2);
    printf("CLEAR_BIT 2: %u\n", reg);

    // --- Debug Print ---
    DEBUG_PRINT("Debug value: %d\n", 99);  // Only works if -DDEBUG is passed during compile

    // --- Concatenation ---
    int CONCAT(my, Var) = 50;
    printf("\nConcatenation: myVar = %d\n", myVar);

    // --- Power of 2 ---
    printf("\nIs 8 power of 2? %s\n", IS_POWER_OF_2(8) ? "Yes" : "No");
    printf("Is 10 power of 2? %s\n", IS_POWER_OF_2(10) ? "Yes" : "No");
}

// ==========================
// ✅ Macro Pitfall Examples
// ==========================
void macro_pitfalls() {
    printf("\n==== Macro Pitfalls ====\n");

    // --- Operator Precedence ---
    int result = MAX(2 + 3, 4) * 2; // Expanded as: ((2 + 3) > 4 ? (2 + 3) : 4) * 2
    printf("MAX(2+3,4)*2 = %d\n", result);

    // --- Array size on pointers (⚠️ Wrong usage) ---
    int *ptr = malloc(5 * sizeof(int));
    printf("⚠️ ARRAY_SIZE(ptr) is invalid because ptr is not an array!\n");

    // --- Multiple Evaluations ---
    int count = 0;
    MAX(count++, 5);  // count++ will execute even if 5 is greater
    printf("MAX(count++, 5): count = %d\n", count);

    free(ptr);
}

// ==========================
// ✅ Main Entry Point
// ==========================
int main() {
    demonstrate_macros();
    macro_pitfalls();
    return 0;
}
