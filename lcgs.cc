struct LCG {
   // replace these numbers with other seed
   // don't let them equal
   uint64_t state[2] = {123, 456};

   uint32_t next() {
      state[0] = state[0] * 6364136223846793005ULL + 1442695040888963407ULL;
      state[0] = state[0] << 32 | state[0] >> 32;
      state[1] = state[1] * 6364136223846793005ULL + 1442695040888963407ULL;
      state[1] = state[1] << 32 | state[1] >> 32;
      return uint32_t(state[0] ^ state[1]);
   }
};
