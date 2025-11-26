// Copyright 2025 William Stafford Parsons

public class ZoneBurst {
  public ulong a;
  public ulong b;

  public byte Next() {
    a += 1111111111;
    b += a + (b >> 8);
    return (byte)b;
  }
}
