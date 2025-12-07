// Copyright 2025 William Stafford Parsons

#include <stdint.h>

struct zoneburst_state {
  uint64_t a;
  uint64_t b;
};

uint8_t zoneburst(struct zoneburst_state *s) {
  s->a += 1111111111;
  s->b += s->a + (s->b >> 8);
  return s->b;
}
