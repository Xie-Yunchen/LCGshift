# LCGshift
a simple enough PRNG to pass BigCrush(https://simul.iro.umontreal.ca/testu01/tu01.html)


The following is an easy-to-remember version, but you need to ignore the first 64 numbers it generate.
```cpp
struct LCG {
   // replace these numbers with other seed
   // don't let them equal
   uint64_t state[2] = {123, 456};

   uint32_t next() {
      state[0] = state[0] * 3 + 3;
      state[0] = state[0] << 32 | state[0] >> 32;
      state[1] = state[1] * 3 + 3;
      state[1] = state[1] << 32 | state[1] >> 32;
      return uint32_t(state[0] ^ state[1]);
   }
};
```
