// SPDX-License-Identifier: MIT
// cctest_csmith_041e4a50.c --- cctest case csmith_041e4a50 (csmith seed 69093968)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x97abb11d */

#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>

static unsigned int crc32_tab[256];
static unsigned int crc32_context = 0xFFFFFFFFUL;

static void crc32_gentab(void)
{
   int i, j;
   unsigned int crc;
   for (i = 0; i < 256; i++) {
      crc = (unsigned int)i;
      for (j = 0; j < 8; j++)
         crc = (crc & 1U) ? ((crc >> 1) ^ 0xEDB88320UL) : (crc >> 1);
      crc32_tab[i] = crc;
   }
}

static void crc32_byte(unsigned char b)
{
   crc32_context = ((crc32_context >> 8) & 0x00FFFFFFUL) ^
                   crc32_tab[(crc32_context ^ (unsigned int)b) & 0xFFU];
}

static void transparent_crc(unsigned long long val, const char *vname, int flag)
{
   int i;
   (void)vname;
   (void)flag;
   for (i = 0; i < 8; i++)
      crc32_byte((unsigned char)((val >> (i * 8)) & 0xFFULL));
}

static void platform_main_begin(void) {}

static int8_t
safe_unary_minus_func_int8_t_s(int8_t si )
{
 
  return
    -si;
}
static int8_t
safe_add_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 + si2);
}
static int8_t
safe_sub_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    (si1 - si2);
}
static int8_t
safe_mul_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    si1 * si2;
}
static int8_t
safe_mod_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int8_t
safe_div_func_int8_t_s_s(int8_t si1, int8_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int8_t
safe_lshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((127) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int8_t
safe_lshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((127) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int8_t
safe_rshift_func_int8_t_s_s(int8_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int8_t
safe_rshift_func_int8_t_s_u(int8_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int16_t
safe_unary_minus_func_int16_t_s(int16_t si )
{
 
  return
    -si;
}
static int16_t
safe_add_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 + si2);
}
static int16_t
safe_sub_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    (si1 - si2);
}
static int16_t
safe_mul_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    si1 * si2;
}
static int16_t
safe_mod_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int16_t
safe_div_func_int16_t_s_s(int16_t si1, int16_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-32767-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int16_t
safe_lshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((32767) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int16_t
safe_lshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((32767) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int16_t
safe_rshift_func_int16_t_s_s(int16_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int16_t
safe_rshift_func_int16_t_s_u(int16_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int32_t
safe_unary_minus_func_int32_t_s(int32_t si )
{
 
  return
    (si==(-2147483647-1)) ?
    ((si)) :
    -si;
}
static int32_t
safe_add_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((2147483647)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-2147483647-1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int32_t
safe_sub_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(2147483647))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int32_t
safe_mul_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((2147483647) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-2147483647-1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-2147483647-1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((2147483647) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int32_t
safe_mod_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int32_t
safe_div_func_int32_t_s_s(int32_t si1, int32_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-2147483647-1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int32_t
safe_lshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((2147483647) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int32_t
safe_lshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((2147483647) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int32_t
safe_rshift_func_int32_t_s_s(int32_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int32_t
safe_rshift_func_int32_t_s_u(int32_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static int64_t
safe_unary_minus_func_int64_t_s(int64_t si )
{
 
  return
    (si==(-9223372036854775807L -1)) ?
    ((si)) :
    -si;
}
static int64_t
safe_add_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1>0) && (si2>0) && (si1 > ((9223372036854775807L)-si2))) || ((si1<0) && (si2<0) && (si1 < ((-9223372036854775807L -1)-si2)))) ?
    ((si1)) :
    (si1 + si2);
}
static int64_t
safe_sub_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1^si2) & (((si1 ^ ((si1^si2) & (~(9223372036854775807L))))-si2)^si2)) < 0) ?
    ((si1)) :
    (si1 - si2);
}
static int64_t
safe_mul_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    (((si1 > 0) && (si2 > 0) && (si1 > ((9223372036854775807L) / si2))) || ((si1 > 0) && (si2 <= 0) && (si2 < ((-9223372036854775807L -1) / si1))) || ((si1 <= 0) && (si2 > 0) && (si1 < ((-9223372036854775807L -1) / si2))) || ((si1 <= 0) && (si2 <= 0) && (si1 != 0) && (si2 < ((9223372036854775807L) / si1)))) ?
    ((si1)) :
    si1 * si2;
}
static int64_t
safe_mod_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 % si2);
}
static int64_t
safe_div_func_int64_t_s_s(int64_t si1, int64_t si2 )
{
 
  return
    ((si2 == 0) || ((si1 == (-9223372036854775807L -1)) && (si2 == (-1)))) ?
    ((si1)) :
    (si1 / si2);
}
static int64_t
safe_lshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32) || (left > ((9223372036854775807L) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static int64_t
safe_lshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32) || (left > ((9223372036854775807L) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static int64_t
safe_rshift_func_int64_t_s_s(int64_t left, int right )
{
 
  return
    ((left < 0) || (((int)right) < 0) || (((int)right) >= 32))?
    ((left)) :
    (left >> ((int)right));
}
static int64_t
safe_rshift_func_int64_t_s_u(int64_t left, unsigned int right )
{
 
  return
    ((left < 0) || (((unsigned int)right) >= 32)) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint8_t
safe_unary_minus_func_uint8_t_u(uint8_t ui )
{
 
  return -ui;
}
static uint8_t
safe_add_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 + ui2;
}
static uint8_t
safe_sub_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ui1 - ui2;
}
static uint8_t
safe_mul_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint8_t
safe_mod_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint8_t
safe_div_func_uint8_t_u_u(uint8_t ui1, uint8_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint8_t
safe_lshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((255) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint8_t
safe_lshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((255) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_s(uint8_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint8_t
safe_rshift_func_uint8_t_u_u(uint8_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint16_t
safe_unary_minus_func_uint16_t_u(uint16_t ui )
{
 
  return -ui;
}
static uint16_t
safe_add_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 + ui2;
}
static uint16_t
safe_sub_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ui1 - ui2;
}
static uint16_t
safe_mul_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint16_t
safe_mod_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint16_t
safe_div_func_uint16_t_u_u(uint16_t ui1, uint16_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint16_t
safe_lshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((65535) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint16_t
safe_lshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((65535) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_s(uint16_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint16_t
safe_rshift_func_uint16_t_u_u(uint16_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint32_t
safe_unary_minus_func_uint32_t_u(uint32_t ui )
{
 
  return -ui;
}
static uint32_t
safe_add_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 + ui2;
}
static uint32_t
safe_sub_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ui1 - ui2;
}
static uint32_t
safe_mul_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return ((unsigned int)ui1) * ((unsigned int)ui2);
}
static uint32_t
safe_mod_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint32_t
safe_div_func_uint32_t_u_u(uint32_t ui1, uint32_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint32_t
safe_lshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((4294967295U) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint32_t
safe_lshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((4294967295U) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_s(uint32_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint32_t
safe_rshift_func_uint32_t_u_u(uint32_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static uint64_t
safe_unary_minus_func_uint64_t_u(uint64_t ui )
{
 
  return -ui;
}
static uint64_t
safe_add_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 + ui2;
}
static uint64_t
safe_sub_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ui1 - ui2;
}
static uint64_t
safe_mul_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return ((unsigned long long)ui1) * ((unsigned long long)ui2);
}
static uint64_t
safe_mod_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 % ui2);
}
static uint64_t
safe_div_func_uint64_t_u_u(uint64_t ui1, uint64_t ui2 )
{
 
  return
    (ui2 == 0) ?
    ((ui1)) :
    (ui1 / ui2);
}
static uint64_t
safe_lshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32) || (left > ((18446744073709551615UL) >> ((int)right)))) ?
    ((left)) :
    (left << ((int)right));
}
static uint64_t
safe_lshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    ((((unsigned int)right) >= 32) || (left > ((18446744073709551615UL) >> ((unsigned int)right)))) ?
    ((left)) :
    (left << ((unsigned int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_s(uint64_t left, int right )
{
 
  return
    ((((int)right) < 0) || (((int)right) >= 32)) ?
    ((left)) :
    (left >> ((int)right));
}
static uint64_t
safe_rshift_func_uint64_t_u_u(uint64_t left, unsigned int right )
{
 
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}
static float
safe_add_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) + (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static float
safe_sub_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0.5f * sf1) - (0.5f * sf2)) > (0.5f * FLT_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static float
safe_mul_func_float_f_f(float sf1, float sf2 )
{
 
  return
    (fabsf((0x1.0p-100f * sf1) * (0x1.0p-28f * sf2)) > (0x1.0p-100f * (0x1.0p-28f * FLT_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static float
safe_div_func_float_f_f(float sf1, float sf2 )
{
 
  return
    ((fabsf(sf2) < 1.0f) && (((sf2 == 0.0f) || (fabsf((0x1.0p-49f * sf1) / (0x1.0p100f * sf2))) > (0x1.0p-100f * (0x1.0p-49f * FLT_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static double
safe_add_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) + (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 + sf2);
}
static double
safe_sub_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0.5 * sf1) - (0.5 * sf2)) > (0.5 * DBL_MAX)) ?
    (sf1) :
    (sf1 - sf2);
}
static double
safe_mul_func_double_f_f(double sf1, double sf2 )
{
 
  return
    (fabs((0x1.0p-100 * sf1) * (0x1.0p-924 * sf2)) > (0x1.0p-100 * (0x1.0p-924 * DBL_MAX))) ?
    (sf1) :
    (sf1 * sf2);
}
static double
safe_div_func_double_f_f(double sf1, double sf2 )
{
 
  return
    ((fabs(sf2) < 1.0) && (((sf2 == 0.0) || (fabs((0x1.0p-974 * sf1) / (0x1.0p100 * sf2))) > (0x1.0p-100 * (0x1.0p-974 * DBL_MAX))))) ?
    (sf1) :
    (sf1 / sf2);
}
static int32_t
safe_convert_func_float_to_int32_t(float sf1 )
{
 
  return
    ((sf1 <= (-2147483647-1)) || (sf1 >= (2147483647))) ?
    ((2147483647)) :
    ((int32_t)(sf1));
}

// Options:   -s 69093968 -o /tmp/csmith_gen_iz5d8zst/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


#pragma pack(push)
#pragma pack(1)
struct S0 {
   const uint32_t  f0;
};
#pragma pack(pop)

struct S1 {
   uint64_t  f0;
   int32_t  f1;
   const int16_t  f2;
   int64_t  f3;
   uint8_t  f4;
   uint32_t  f5;
   int8_t  f6;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const int16_t  f0;
   int32_t  f1;
   const int32_t  f2;
   uint16_t  f3;
};
#pragma pack(pop)

union U3 {
   int32_t  f0;
   uint8_t  f1;
   int32_t  f2;
   const int32_t  f3;
};


static int32_t g_2 = 0xCCCDDD1DL;
static int32_t g_6 = 8L;
static uint32_t g_10 = 0x1B0CE7AEL;
static uint64_t g_29 = 0x63A47399D012CD0ALL;
static const union U3 g_43 = {-9L};
static int32_t *g_58 = &g_2;
static int32_t **g_57 = &g_58;
static int32_t ***g_71 = &g_57;
static int32_t ****g_70 = &g_71;
static uint16_t g_75 = 1UL;
static uint32_t g_77 = 0x31463D90L;
static uint64_t g_80[5][5][2] = {{{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL},{18446744073709551615UL,18446744073709551615UL},{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL}},{{18446744073709551615UL,18446744073709551615UL},{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL},{18446744073709551615UL,18446744073709551615UL},{0x116ABE3F132C5A17LL,18446744073709551615UL}},{{18446744073709551615UL,0x116ABE3F132C5A17LL},{18446744073709551615UL,18446744073709551615UL},{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL},{18446744073709551615UL,18446744073709551615UL}},{{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL},{18446744073709551615UL,18446744073709551615UL},{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL}},{{18446744073709551615UL,18446744073709551615UL},{0x116ABE3F132C5A17LL,18446744073709551615UL},{18446744073709551615UL,0x116ABE3F132C5A17LL},{0x116ABE3F132C5A17LL,0x116ABE3F132C5A17LL},{0x94FDEA94120B1A55LL,0x116ABE3F132C5A17LL}}};
static struct S2 g_84 = {0L,0xB6FCE132L,0L,0x4E19L};
static const int64_t g_90 = (-7L);
static const int64_t *g_89[4][5][3] = {{{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90}},{{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90}},{{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{(void*)0,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90}},{{(void*)0,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90},{&g_90,&g_90,&g_90}}};
static int8_t g_95 = 0x01L;
static int64_t g_105 = (-1L);
static struct S2 g_106[4][5] = {{{0L,0x733D09B3L,-3L,3UL},{1L,0x53535970L,0xEDAF9C58L,1UL},{0x2A49L,-7L,-9L,0x93E8L},{0x2A49L,-7L,-9L,0x93E8L},{1L,0x53535970L,0xEDAF9C58L,1UL}},{{0x0419L,1L,0L,65535UL},{0x6EECL,8L,7L,7UL},{0x6520L,-1L,0L,7UL},{0x6520L,-1L,0L,7UL},{0x6EECL,8L,7L,7UL}},{{0L,0x733D09B3L,-3L,3UL},{1L,0x53535970L,0xEDAF9C58L,1UL},{0x2A49L,-7L,-9L,0x93E8L},{0x2A49L,-7L,-9L,0x93E8L},{1L,0x53535970L,0xEDAF9C58L,1UL}},{{0x0419L,1L,0L,65535UL},{0x6EECL,8L,7L,7UL},{0x6520L,-1L,0L,7UL},{0x6520L,-1L,0L,7UL},{0x6EECL,8L,7L,7UL}}};
static uint32_t g_123 = 0x7D366BA4L;
static int32_t g_148 = (-7L);
static uint32_t g_149[5] = {0UL,0UL,0UL,0UL,0UL};
static struct S1 g_156[2] = {{0x4549C76149A46C97LL,0xF601976AL,0xA2F9L,0x22FFCB4505FA698ELL,255UL,0UL,0x4EL},{0x4549C76149A46C97LL,0xF601976AL,0xA2F9L,0x22FFCB4505FA698ELL,255UL,0UL,0x4EL}};
static struct S1 g_159 = {0x11B318C5888CA29FLL,-1L,1L,0xB7AFBAD67FFFD43ELL,0x6FL,0xE17F8277L,0xDDL};
static int64_t ***g_163 = (void*)0;
static uint16_t g_177 = 65526UL;
static const struct S1 *g_205 = &g_156[1];
static const struct S1 **g_204[6] = {&g_205,&g_205,&g_205,&g_205,&g_205,&g_205};
static const struct S1 **g_209 = &g_205;
static int16_t g_226 = 0x580EL;
static struct S0 g_229 = {0x22262658L};
static uint32_t g_235 = 0xCFF9A101L;
static const uint32_t g_245 = 18446744073709551608UL;
static int16_t g_275[4] = {0x9843L,0x9843L,0x9843L,0x9843L};
static int16_t * const *g_277 = (void*)0;
static int16_t *g_280 = &g_275[0];
static int16_t * const *g_279[7][2][5] = {{{&g_280,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280}},{{(void*)0,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,(void*)0,&g_280,&g_280,(void*)0},{&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,(void*)0,&g_280,(void*)0,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280}},{{&g_280,&g_280,&g_280,&g_280,&g_280},{&g_280,&g_280,&g_280,&g_280,&g_280}}};
static int64_t g_288 = 0x27778E152159D9BBLL;
static int8_t g_289 = 0x90L;
static int8_t g_291[1][1] = {{0x61L}};
static int8_t g_292 = 0L;
static uint32_t g_293 = 0xEAA5562FL;
static union U3 g_297 = {1L};
static uint8_t g_328[5] = {0x06L,0x06L,0x06L,0x06L,0x06L};
static uint16_t g_378 = 0x0256L;
static int8_t g_394 = (-2L);
static union U3 *g_413 = &g_297;
static union U3 **g_412 = &g_413;
static int32_t g_415[2] = {3L,3L};
static int16_t g_469 = 3L;
static int8_t g_472 = 0L;
static int32_t g_476 = 0xA0C79D9AL;
static uint32_t g_477 = 4294967295UL;
static struct S2 *g_491 = &g_84;
static struct S2 **g_490 = &g_491;
static int32_t g_537 = (-1L);
static uint8_t g_539 = 0xE8L;
static uint16_t *g_567 = &g_378;
static int32_t g_669 = 0x4C096AB4L;
static uint8_t g_670 = 4UL;
static int16_t g_673[3][1] = {{7L},{7L},{7L}};
static int8_t g_674 = (-5L);
static int16_t g_675 = 0xBC7DL;
static uint8_t g_676 = 1UL;
static int64_t g_697 = 0x6E6F9562A23A6687LL;
static union U3 ***g_715 = &g_412;
static union U3 ****g_714 = &g_715;
static uint64_t * const g_794 = &g_159.f0;
static uint64_t * const * const g_793 = &g_794;
static uint16_t g_807[1][4] = {{8UL,8UL,8UL,8UL}};
static int32_t g_810 = 0x56B82FFDL;
static int64_t g_811 = 0x77AE71FC0768B6D5LL;
static uint32_t g_812 = 18446744073709551615UL;
static const int32_t *g_817 = &g_297.f0;
static int32_t g_986 = 1L;



static uint64_t  func_1(void);
static int8_t  func_20(int32_t  p_21, int16_t  p_22, struct S0  p_23);
static struct S0  func_30(int32_t  p_31, int32_t * p_32, const int64_t  p_33, uint8_t  p_34);
static uint16_t  func_35(int64_t  p_36, const union U3  p_37, uint8_t  p_38);
static const int32_t * func_44(struct S0  p_45);
static struct S0  func_46(uint8_t  p_47, struct S2  p_48);
static int16_t  func_49(uint32_t  p_50, int32_t ** p_51);
static int32_t  func_54(int32_t ** p_55, struct S1  p_56);




static uint64_t  func_1(void)
{ 
    int64_t l_7[1];
    int32_t l_8 = 0x28EAF608L;
    int32_t l_9 = 0x4D258D03L;
    int8_t l_838 = 0x3AL;
    int32_t l_938 = (-5L);
    uint32_t l_939[5][6] = {{0x4B425F5CL,0xC47986C8L,0x4B425F5CL,18446744073709551615UL,9UL,0xC47986C8L},{0x4B425F5CL,1UL,1UL,0x4B425F5CL,0xC8596C0FL,18446744073709551615UL},{18446744073709551615UL,0x4B425F5CL,0xC47986C8L,0x4B425F5CL,18446744073709551615UL,9UL},{0x4B425F5CL,18446744073709551615UL,9UL,9UL,18446744073709551615UL,0x4B425F5CL},{1UL,0x4B425F5CL,0xC8596C0FL,18446744073709551615UL,0xC8596C0FL,0x4B425F5CL}};
    uint32_t l_962[2][2][7] = {{{4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL},{0x1FCCD1BAL,5UL,0x1FCCD1BAL,5UL,0x1FCCD1BAL,5UL,0x1FCCD1BAL}},{{4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL},{0x1FCCD1BAL,5UL,0x1FCCD1BAL,5UL,0x1FCCD1BAL,5UL,0x1FCCD1BAL}}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_7[i] = 0x7AB89BDD7770B168LL;
    for (g_2 = (-19); (g_2 != 11); g_2 = safe_add_func_int64_t_s_s(g_2, 5))
    { 
        int32_t *l_5[7][3][7] = {{{&g_2,&g_2,&g_2,(void*)0,&g_2,&g_2,&g_6},{&g_2,&g_2,(void*)0,&g_2,&g_6,&g_6,&g_2},{&g_2,&g_2,&g_2,(void*)0,(void*)0,(void*)0,&g_2}},{{&g_6,&g_2,(void*)0,(void*)0,(void*)0,&g_6,(void*)0},{&g_2,(void*)0,&g_2,&g_6,&g_6,(void*)0,&g_6},{&g_6,(void*)0,&g_6,(void*)0,(void*)0,&g_6,&g_2}},{{(void*)0,(void*)0,&g_2,&g_6,&g_6,&g_2,&g_2},{&g_2,&g_2,&g_2,&g_6,(void*)0,&g_6,&g_2},{&g_2,&g_6,&g_6,(void*)0,&g_2,&g_6,(void*)0}},{{(void*)0,&g_2,&g_6,&g_6,&g_6,&g_2,(void*)0},{&g_6,&g_6,&g_2,&g_2,(void*)0,&g_6,&g_6},{&g_2,&g_2,(void*)0,&g_2,&g_2,&g_6,&g_2}},{{&g_6,&g_2,&g_2,&g_2,&g_2,&g_2,&g_6},{&g_2,&g_6,&g_6,&g_2,&g_2,&g_2,&g_6},{&g_2,&g_2,&g_6,&g_6,&g_2,&g_6,&g_2}},{{&g_2,&g_6,&g_2,&g_6,&g_2,&g_6,&g_2},{&g_2,(void*)0,&g_2,&g_2,&g_2,&g_6,&g_2},{&g_2,&g_6,&g_6,&g_2,&g_2,(void*)0,&g_2}},{{&g_2,&g_2,&g_2,&g_6,&g_2,(void*)0,&g_2},{(void*)0,&g_6,(void*)0,&g_6,&g_6,&g_2,&g_2},{&g_2,&g_2,&g_6,&g_2,&g_2,&g_2,(void*)0}}};
        int32_t *l_27 = (void*)0;
        uint32_t l_956 = 1UL;
        union U3 **** const *l_974 = &g_714;
        int i, j, k;
        g_10++;
        for (l_9 = (-7); (l_9 <= 14); l_9 = safe_add_func_int32_t_s_s(l_9, 5))
        { 
            const int32_t l_839[5][1] = {{(-7L)},{(-7L)},{(-7L)},{(-7L)},{(-7L)}};
            union U3 l_942 = {-1L};
            int32_t *l_983 = (void*)0;
            int i, j;
            for (g_10 = 6; (g_10 > 14); g_10 = safe_add_func_int32_t_s_s(g_10, 2))
            { 
                uint8_t l_840[4][3][2] = {{{4UL,4UL},{4UL,4UL},{4UL,4UL}},{{4UL,4UL},{4UL,4UL},{4UL,4UL}},{{4UL,4UL},{4UL,4UL},{4UL,4UL}},{{4UL,4UL},{4UL,4UL},{4UL,4UL}}};
                int32_t l_937 = 1L;
                int i, j, k;
                for (l_8 = 13; (l_8 == (-15)); l_8 = safe_sub_func_int64_t_s_s(l_8, 8))
                { 
                    uint8_t l_24[4][6][2] = {{{255UL,251UL},{255UL,252UL},{0x19L,255UL},{0x6FL,4UL},{0x6FL,255UL},{0x19L,252UL}},{{255UL,251UL},{255UL,0x1DL},{249UL,0x63L},{0x63L,0UL},{255UL,249UL},{4UL,6UL}},{{0x1DL,6UL},{4UL,249UL},{255UL,0UL},{0x63L,0x63L},{249UL,0x1DL},{255UL,251UL}},{{255UL,252UL},{0x19L,255UL},{0x6FL,4UL},{0x6FL,255UL},{0x19L,252UL},{255UL,251UL}}};
                    int32_t *l_25 = &g_6;
                    int32_t * const l_26 = &g_6;
                    int32_t **l_28 = &l_25;
                    int64_t *l_41 = (void*)0;
                    int64_t *l_42 = &l_7[0];
                    struct S1 *l_936 = &g_156[1];
                    struct S1 **l_935 = &l_936;
                    uint16_t *l_959 = &g_75;
                    int i, j, k;
                    g_148 &= (safe_unary_minus_func_int8_t_s(func_20(g_2, (l_24[0][4][0] && (g_29 = (l_5[4][1][1] != ((l_25 != l_26) , ((*l_28) = l_27))))), func_30(((func_35(((*l_42) = (safe_rshift_func_int8_t_s_u((g_6 <= 6L), 0))), g_43, g_43.f0) | 2L) || l_838), &l_9, l_839[3][0], l_840[2][0][0]))));
                    l_937 = ((~(((*l_26) = 2L) ^ (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(0UL, (safe_rshift_func_int8_t_s_u((((g_106[3][4].f1 == (((safe_div_func_int8_t_s_s((((++(*g_567)) && (safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((l_840[2][1][0] != (*g_280)), (safe_mul_func_uint8_t_u_u(((((*l_935) = &g_159) == (*g_209)) == g_476), 0x27L)))) || (*g_567)), 65527UL)) & l_839[1][0]), g_807[0][2])) , g_105), l_839[4][0])), l_838))) < l_8), g_29)) , (*g_280)) >= g_149[3])) < g_297.f3) ^ 0L), 2)))), l_840[2][0][0])))) | 0x56A6792EL);
                    l_939[1][1]++;
                    (*l_26) = (((-5L) != (l_942 , ((safe_rshift_func_uint16_t_u_s((l_938 , (safe_rshift_func_uint16_t_u_s(((*l_959) = (+((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u(l_937, 1)) >= (***g_71)), (((*g_567) = ((l_956 < ((safe_sub_func_uint16_t_u_u(1UL, (*g_280))) ^ (*g_567))) & l_839[1][0])) , (**g_793)))), l_942.f2)), (*g_794))) & (**g_793)))), l_840[2][0][0]))), 10)) | 0xA2EEC353FB908E96LL))) < 0xACC5AFAAL);
                }
                g_297.f0 = (safe_div_func_uint32_t_u_u(l_840[2][0][1], l_962[0][0][1]));
                for (g_159.f3 = 0; (g_159.f3 > (-4)); g_159.f3--)
                { 
                    union U3 **** const *l_973 = &g_714;
                    int32_t l_981 = 0x05ACDB2FL;
                    int32_t **l_982[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_982[i] = &l_5[4][1][1];
                }
                for (g_159.f5 = 0; (g_159.f5 > 49); g_159.f5 = safe_add_func_uint16_t_u_u(g_159.f5, 4))
                { 
                    int32_t l_987 = (-7L);
                    l_987 ^= g_986;
                }
            }
        }
    }
    return l_8;
}



static int8_t  func_20(int32_t  p_21, int16_t  p_22, struct S0  p_23)
{ 
    int32_t *l_902[4][6][3] = {{{&g_297.f0,(void*)0,(void*)0},{&g_297.f0,&g_297.f0,&g_106[3][4].f1},{&g_669,&g_537,&g_148},{&g_2,&g_537,(void*)0},{&g_6,&g_297.f0,&g_6},{(void*)0,(void*)0,&g_537}},{{&g_148,&g_84.f1,(void*)0},{&g_297.f2,&g_669,&g_669},{&g_537,&g_106[3][4].f1,&g_297.f2},{&g_297.f2,&g_106[3][4].f1,&g_297.f0},{&g_148,&g_2,&g_84.f1},{(void*)0,&g_297.f0,&g_84.f1}},{{&g_6,&g_537,(void*)0},{&g_2,(void*)0,(void*)0},{&g_669,&g_84.f1,&g_84.f1},{&g_297.f0,&g_297.f2,&g_84.f1},{&g_297.f0,(void*)0,&g_297.f0},{&g_669,(void*)0,&g_297.f2}},{{(void*)0,&g_148,&g_669},{&g_537,(void*)0,(void*)0},{&g_669,(void*)0,&g_537},{&g_106[3][4].f1,&g_297.f2,&g_6},{&g_297.f0,&g_84.f1,(void*)0},{&g_84.f1,(void*)0,&g_148}}};
    uint32_t l_903 = 0x020F7B11L;
    int16_t ***l_906 = (void*)0;
    int16_t **l_908 = (void*)0;
    int16_t ***l_907 = &l_908;
    int8_t l_911 = (-1L);
    int i, j, k;
    l_903++;
    (*l_907) = (void*)0;
    for (l_903 = 0; (l_903 >= 55); l_903 = safe_add_func_uint64_t_u_u(l_903, 2))
    { 
        return g_810;
    }
    return l_911;
}



static struct S0  func_30(int32_t  p_31, int32_t * p_32, const int64_t  p_33, uint8_t  p_34)
{ 
    const int64_t l_851 = 0xDBC38DB2D0C4B957LL;
    struct S2 l_860[3][7][1] = {{{{6L,7L,0L,65530UL}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{6L,7L,0L,65530UL}},{{0x3DC5L,3L,0xE87B050DL,1UL}},{{6L,7L,0L,65530UL}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}}},{{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{6L,7L,0L,65530UL}},{{0x3DC5L,3L,0xE87B050DL,1UL}},{{6L,7L,0L,65530UL}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{6L,7L,0L,65530UL}}},{{{0x3DC5L,3L,0xE87B050DL,1UL}},{{6L,7L,0L,65530UL}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{0x199CL,0xB3D3009EL,0xB8DE0DD6L,0x4839L}},{{6L,7L,0L,65530UL}},{{0x3DC5L,3L,0xE87B050DL,1UL}},{{6L,7L,0L,65530UL}}}};
    int32_t l_861 = 0xD9C467F2L;
    struct S1 l_883 = {0x9B96CB15F39CA0C6LL,1L,1L,0x30B41F19CA011F37LL,0x7DL,0xFCC737FAL,0xAEL};
    int16_t **l_899 = &g_280;
    int16_t **l_900 = &g_280;
    int32_t *l_901 = &l_860[1][4][0].f1;
    int i, j, k;
    l_861 ^= (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((0xA962L < (p_31 > ((((safe_mod_func_int8_t_s_s(0x71L, l_851)) || (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((0x20L ^ (l_851 <= ((l_860[1][4][0] , (void*)0) == &g_279[2][0][1]))), p_33)), 1)), l_860[1][4][0].f2)) , g_149[3]), 1))) != g_75) == p_33))), 65528UL)), p_31)) || 0x4B07L) ^ g_2), l_860[1][4][0].f2)) && l_860[1][4][0].f2), p_34));
    for (g_288 = (-30); (g_288 != 5); g_288 = safe_add_func_uint64_t_u_u(g_288, 7))
    { 
        int16_t l_875 = 0L;
        uint32_t l_897[1];
        const int32_t **l_898[3][7] = {{&g_817,(void*)0,&g_817,&g_817,&g_817,&g_817,(void*)0},{&g_817,&g_817,&g_817,&g_817,(void*)0,(void*)0,&g_817},{&g_817,&g_817,&g_817,(void*)0,&g_817,&g_817,&g_817}};
        int i, j;
        for (i = 0; i < 1; i++)
            l_897[i] = 0xDB0225E0L;
        for (g_235 = 0; (g_235 <= 3); g_235 += 1)
        { 
            int8_t *l_867 = &g_95;
            const struct S1 **l_871 = &g_205;
            const struct S1 ***l_872 = (void*)0;
            const struct S1 ***l_873 = &g_204[2];
            int32_t *l_874 = &g_6;
            int i;
            (*l_874) |= (l_861 &= (safe_mul_func_uint16_t_u_u(0xA4A2L, ((~(g_275[g_235] <= (((*l_867) = 0L) == ((safe_div_func_uint8_t_u_u((+6L), g_275[g_235])) ^ p_34)))) != (((*l_873) = l_871) == (void*)0)))));
            for (g_675 = 0; (g_675 <= 0); g_675 += 1)
            { 
                uint32_t l_876 = 0x4EADC1B4L;
                uint32_t *l_884 = (void*)0;
                int32_t l_885 = (-8L);
                int i, j;
                for (g_676 = 0; (g_676 <= 0); g_676 += 1)
                { 
                    (*l_874) = 0xC841629CL;
                }
                for (g_77 = 0; (g_77 <= 4); g_77 += 1)
                { 
                    int i, j;
                    (*l_874) = g_291[g_675][g_675];
                }
                l_876--;
                (*l_874) = (safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((((*g_209) != ((l_883 , ((((--g_477) != (g_291[g_675][g_675] || (((safe_lshift_func_uint8_t_u_u((g_291[g_675][g_675] == (1UL & ((1L > (safe_add_func_int8_t_s_s((+(((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int16_t_s_s((g_275[g_675] = g_291[g_675][g_675]), g_291[g_675][g_675])) , 0xA0B20873L) || (*l_874)), p_33)) == (-1L)) , (*p_32))), l_897[0]))) || p_31))), p_31)) , 0x64L) <= 1L))) < (*g_567)) , (**g_412))) , (*g_209))) == 0xD5B7L) >= 2L), 14)), 7));
                if ((*p_32))
                    break;
            }
        }
        g_817 = func_44(g_229);
    }
    (*l_901) = (l_899 != l_900);
    return g_229;
}



static uint16_t  func_35(int64_t  p_36, const union U3  p_37, uint8_t  p_38)
{ 
    int32_t ***l_59 = &g_57;
    struct S1 l_62 = {0x453F477944D42BE3LL,0x69BB0CEAL,0xF543L,0x9B16E5D1C1BBB80ELL,0xEAL,0xC79E06D3L,0L};
    int32_t *l_63[1];
    const int32_t **l_659 = (void*)0;
    const int32_t *l_660 = &g_84.f1;
    int64_t *l_749 = &g_156[1].f3;
    int64_t **l_748[1][1][4];
    int64_t ***l_747 = &l_748[0][0][1];
    int32_t *l_778 = &g_148;
    uint8_t l_828[2][2] = {{247UL,247UL},{247UL,247UL}};
    uint8_t l_831 = 0UL;
    union U3 ***l_834 = &g_412;
    uint64_t l_837[5] = {18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL,18446744073709551606UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_63[i] = &g_6;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_748[i][j][k] = &l_749;
        }
    }
    return (***l_59);
}



static const int32_t * func_44(struct S0  p_45)
{ 
    uint32_t l_356 = 1UL;
    const int32_t *l_369 = &g_43.f2;
    const int32_t **l_368 = &l_369;
    const int32_t ***l_367 = &l_368;
    union U3 ***l_423[3][5][2];
    union U3 ****l_422 = &l_423[2][0][0];
    union U3 *****l_421 = &l_422;
    int32_t l_460 = 0L;
    int32_t l_475[1];
    int64_t ** const l_504 = (void*)0;
    uint16_t *l_507 = &g_378;
    uint16_t **l_506 = &l_507;
    uint32_t *l_528 = (void*)0;
    uint32_t **l_527[2][5] = {{&l_528,&l_528,&l_528,&l_528,&l_528},{&l_528,&l_528,&l_528,&l_528,&l_528}};
    struct S0 l_556 = {0x7C6220BEL};
    int32_t l_573 = 6L;
    int64_t l_593[5][7][6] = {{{0x020854440CDB6751LL,0xBBB00E7C49798385LL,0xBBB00E7C49798385LL,0x020854440CDB6751LL,0x7D33AFD4C1F03871LL,0x47D3678853474502LL},{0x81A2C8A0D642B21CLL,1L,0x2F21D3C004E13DBBLL,0xA48A71A114269E5ALL,1L,(-1L)},{1L,0x0598351C9EA3F35FLL,0xB4C5289B28D741ABLL,5L,1L,0x0714DF50196CCCDCLL},{0L,1L,1L,(-1L),0x7D33AFD4C1F03871LL,0x0598351C9EA3F35FLL},{0x6C83002A9CEC2981LL,0xBBB00E7C49798385LL,0x9D4FC97C912F7CD7LL,0L,0L,0x7D33AFD4C1F03871LL},{0xA48A71A114269E5ALL,0x0714DF50196CCCDCLL,6L,0L,(-1L),6L},{0x6C83002A9CEC2981LL,0x47D3678853474502LL,1L,(-1L),0x9D4FC97C912F7CD7LL,1L}},{{0L,1L,0x47D3678853474502LL,5L,0xBBB00E7C49798385LL,1L},{1L,1L,0x47D3678853474502LL,0xA48A71A114269E5ALL,0x47D3678853474502LL,1L},{0x81A2C8A0D642B21CLL,0xDDEC077EBAD189D0LL,1L,0x020854440CDB6751LL,0x258146954A7FEDD1LL,6L},{0x020854440CDB6751LL,0x258146954A7FEDD1LL,6L,0x6C83002A9CEC2981LL,0xB4C5289B28D741ABLL,0x7D33AFD4C1F03871LL},{0x8F4B44E849F56F0ELL,0x258146954A7FEDD1LL,0x9D4FC97C912F7CD7LL,1L,0x258146954A7FEDD1LL,0x0598351C9EA3F35FLL},{0xD7F1105FF6A7CA8ELL,0xDDEC077EBAD189D0LL,1L,(-7L),0x47D3678853474502LL,0x0714DF50196CCCDCLL},{1L,1L,0xB4C5289B28D741ABLL,1L,0xBBB00E7C49798385LL,(-1L)}},{{1L,1L,0x2F21D3C004E13DBBLL,(-7L),0x9D4FC97C912F7CD7LL,0x47D3678853474502LL},{0xD7F1105FF6A7CA8ELL,0x47D3678853474502LL,0xBBB00E7C49798385LL,1L,(-1L),0L},{0x8F4B44E849F56F0ELL,0x0714DF50196CCCDCLL,(-1L),0x6C83002A9CEC2981LL,0L,0L},{0x020854440CDB6751LL,0xBBB00E7C49798385LL,0xBBB00E7C49798385LL,0x020854440CDB6751LL,0x7D33AFD4C1F03871LL,0x47D3678853474502LL},{0x81A2C8A0D642B21CLL,1L,0x2F21D3C004E13DBBLL,0xA48A71A114269E5ALL,1L,(-1L)},{1L,0x0598351C9EA3F35FLL,0xB4C5289B28D741ABLL,5L,1L,0x0714DF50196CCCDCLL},{0L,1L,1L,(-1L),0x7D33AFD4C1F03871LL,0x0598351C9EA3F35FLL}},{{0x6C83002A9CEC2981LL,0xBBB00E7C49798385LL,0x9D4FC97C912F7CD7LL,0L,0L,0x7D33AFD4C1F03871LL},{0xA48A71A114269E5ALL,0x0714DF50196CCCDCLL,6L,0L,(-1L),6L},{0x6C83002A9CEC2981LL,0x47D3678853474502LL,1L,(-1L),0x9D4FC97C912F7CD7LL,1L},{0L,1L,0x47D3678853474502LL,5L,0xBBB00E7C49798385LL,1L},{1L,1L,0x47D3678853474502LL,0xA48A71A114269E5ALL,0x47D3678853474502LL,1L},{0x81A2C8A0D642B21CLL,0xDDEC077EBAD189D0LL,1L,0x020854440CDB6751LL,0x258146954A7FEDD1LL,6L},{0L,0xFF16900822B6BC46LL,(-7L),0x2F21D3C004E13DBBLL,0xEC0CA38454A4D065LL,0x09E703182B4E709BLL}},{{1L,0xFF16900822B6BC46LL,0L,1L,0xFF16900822B6BC46LL,0xDD07DE999B76A7D8LL},{0xBBB00E7C49798385LL,3L,1L,0x47D3678853474502LL,0x6E577B36FF8A205DLL,1L},{1L,1L,0xEC0CA38454A4D065LL,0xDDEC077EBAD189D0LL,0x67DC0E57D9AE1EF3LL,0x1CC63F308271C945LL},{1L,0x3EA072E6F3730C2ALL,0L,0x47D3678853474502LL,0L,0x6E577B36FF8A205DLL},{0xBBB00E7C49798385LL,0x6E577B36FF8A205DLL,0x67DC0E57D9AE1EF3LL,1L,0x1CC63F308271C945LL,0x2680E869EB959068LL},{1L,1L,0x1CC63F308271C945LL,0x2F21D3C004E13DBBLL,0x2680E869EB959068LL,0x2680E869EB959068LL},{0L,0x67DC0E57D9AE1EF3LL,0x67DC0E57D9AE1EF3LL,0L,0x09E703182B4E709BLL,0x6E577B36FF8A205DLL}}};
    uint64_t *l_632[4][6] = {{&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0},{&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0},{&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0},{&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0,&g_156[1].f0}};
    int32_t l_657 = 0x005D3B29L;
    const int32_t *l_658 = &g_297.f2;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
                l_423[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 1; i++)
        l_475[i] = 3L;
lbl_379:
    ++l_356;
    for (g_159.f4 = 0; (g_159.f4 <= 0); g_159.f4 += 1)
    { 
        uint8_t l_375 = 0UL;
        uint64_t l_418[5] = {0UL,0UL,0UL,0UL,0UL};
        int32_t l_438 = 0xCD8F33B5L;
        int32_t l_459 = 0x1EB192F1L;
        int32_t l_462 = 0x92FD68C8L;
        int32_t l_463 = 0xD7976DDAL;
        int32_t l_464 = (-1L);
        int32_t l_467 = (-7L);
        int32_t l_468 = 0xCD286626L;
        int32_t l_474[3][7] = {{(-3L),0x66011E23L,(-6L),(-2L),(-6L),0x66011E23L,(-3L)},{(-3L),0x66011E23L,(-6L),(-2L),(-6L),0x66011E23L,(-3L)},{(-3L),0x66011E23L,(-6L),(-2L),(-6L),0x66011E23L,(-3L)}};
        uint64_t l_480 = 18446744073709551608UL;
        const int64_t l_487 = 1L;
        int64_t *l_514 = &g_159.f3;
        int64_t **l_513 = &l_514;
        uint32_t **l_529 = (void*)0;
        uint32_t l_533 = 0x5530713DL;
        int32_t *l_553 = &l_474[0][5];
        uint32_t l_572 = 8UL;
        int32_t ** const *l_577 = (void*)0;
        int32_t ** const **l_576 = &l_577;
        int i, j;
        for (g_105 = 1; (g_105 <= 5); g_105 += 1)
        { 
            const uint32_t l_377[6] = {4UL,4UL,4UL,4UL,4UL,4UL};
            uint32_t l_383 = 1UL;
            int32_t l_406 = 0x19C78306L;
            int32_t ****l_416 = &g_71;
            uint32_t l_436 = 0UL;
            int16_t l_470 = 0xC047L;
            int32_t l_471 = 1L;
            int32_t l_473 = 0x951FFD2FL;
            uint32_t l_484 = 0xC10EF601L;
            const uint32_t *l_496 = &l_383;
            const uint32_t **l_495 = &l_496;
            int32_t *l_501[2][1][5];
            int64_t *l_503 = (void*)0;
            int64_t **l_502 = &l_503;
            uint16_t l_530 = 65535UL;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_501[i][j][k] = &l_464;
                }
            }
        }
        l_553 = &l_459;
        for (g_84.f1 = 0; (g_84.f1 <= 0); g_84.f1 += 1)
        { 
            const struct S2 l_557 = {2L,0x4B3E79E4L,0x040FC65DL,1UL};
            uint16_t *l_566 = &g_84.f3;
            int32_t *l_574[1][4] = {{&g_415[1],&g_415[1],&g_415[1],&g_415[1]}};
            int32_t l_575 = 0x49AC53F6L;
            int32_t ** const **l_578 = &l_577;
            int i, j;
            if (g_159.f4)
                goto lbl_379;
            l_578 = ((safe_mod_func_uint8_t_u_u((((l_556 , (l_575 = (0x93L ^ ((((*l_553) = ((((g_291[g_159.f4][g_84.f1] < (l_557 , (!(safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint64_t_u(((safe_sub_func_int8_t_s_s((((*l_506) = &g_177) == (g_567 = l_566)), ((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(0UL, 1)), 1UL)) > g_291[g_159.f4][g_84.f1]))) , l_572))), l_573)), g_156[1].f2))))) & l_557.f3) , l_574[0][3]) != l_553)) == 0x264F0687225E02E9LL) >= l_557.f0)))) <= 0x37A3F2DCL) && l_557.f3), 0xC6L)) , l_576);
        }
    }
    if (g_84.f1)
        goto lbl_379;
    for (g_84.f1 = 0; (g_84.f1 < 27); g_84.f1++)
    { 
        uint32_t l_587 = 4294967295UL;
        int64_t *l_588 = (void*)0;
        int32_t *l_594 = &g_297.f2;
        int16_t **l_600 = &g_280;
        int16_t ***l_599 = &l_600;
        int32_t l_631 = (-1L);
        l_593[1][1][1] |= ((safe_rshift_func_int8_t_s_u(0xB7L, (safe_mul_func_uint16_t_u_u(p_45.f0, (safe_sub_func_uint64_t_u_u(g_226, (g_156[1].f4 & p_45.f0))))))) , ((l_573 = l_587) && (safe_rshift_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(8UL, 4)) && g_159.f4) != (-4L)), (*g_567)))));
        if ((*l_369))
            break;
        (*l_594) = 6L;
        for (l_587 = (-22); (l_587 > 52); l_587++)
        { 
            return &g_6;
        }
        for (g_235 = 24; (g_235 != 24); g_235 = safe_add_func_int32_t_s_s(g_235, 8))
        { 
            int16_t ****l_601 = &l_599;
            int64_t ****l_604 = (void*)0;
            int64_t ***l_605 = (void*)0;
            const int32_t l_613 = 0xB804B9B0L;
            uint64_t *l_624 = &g_159.f0;
            struct S1 *l_627 = &g_156[1];
            struct S1 **l_626 = &l_627;
            struct S1 ***l_625 = &l_626;
            uint8_t *l_628 = (void*)0;
            uint8_t *l_629 = &g_328[3];
            int32_t *l_630 = &g_297.f2;
            (*l_601) = l_599;
            l_631 = ((safe_sub_func_uint16_t_u_u(8UL, (((l_605 = g_163) == g_163) >= ((*l_629) &= (l_460 = (safe_mul_func_uint8_t_u_u(((-3L) & (~((safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u((l_613 , (safe_mul_func_uint16_t_u_u(((((*l_624) = (safe_mod_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(l_613, 1)) > (safe_sub_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(((p_45.f0 & g_476) > l_613), p_45.f0)) != p_45.f0), 0x1DL))), 0x40L))) , l_625) != &l_626), p_45.f0))), 0x56A9L)), p_45.f0)) && (***l_367)))), g_106[3][4].f2))))))) , (*l_594));
        }
    }
    for (g_297.f2 = 5; (g_297.f2 >= 0); g_297.f2 -= 1)
    { 
        uint64_t **l_633[7] = {&l_632[3][2],(void*)0,(void*)0,&l_632[3][2],(void*)0,(void*)0,&l_632[3][2]};
        int32_t l_636[6][6][3] = {{{0xA38B07EFL,0x5918E7FEL,0x8533BF59L},{0xA38B07EFL,(-1L),1L},{1L,1L,0xE8E110F4L},{0xA38B07EFL,0L,0L},{0xA38B07EFL,1L,0xA38B07EFL},{1L,0xFFDA5A62L,0xFF40F7E6L}},{{0xA38B07EFL,0xDA6BE30CL,0xC9B0A1CAL},{0xA38B07EFL,(-1L),(-1L)},{1L,0x1FC064E0L,0xB0EA1CB3L},{0xA38B07EFL,0x5918E7FEL,0x8533BF59L},{0xA38B07EFL,(-1L),1L},{1L,1L,0xE8E110F4L}},{{0xA38B07EFL,0L,0L},{0xA38B07EFL,1L,0xA38B07EFL},{1L,0xFFDA5A62L,0xFF40F7E6L},{0xA38B07EFL,0xDA6BE30CL,0xC9B0A1CAL},{0xA38B07EFL,(-1L),(-1L)},{1L,0x1FC064E0L,0xB0EA1CB3L}},{{0xA38B07EFL,0x5918E7FEL,0x8533BF59L},{0xA38B07EFL,(-1L),1L},{1L,1L,0xE8E110F4L},{0xA38B07EFL,0L,0L},{0xA38B07EFL,1L,0xA38B07EFL},{1L,0xFFDA5A62L,0xFF40F7E6L}},{{0xA38B07EFL,0xDA6BE30CL,0xC9B0A1CAL},{0xA38B07EFL,0xE8E110F4L,0x80DE68BBL},{0xF5895423L,1L,0x9E16B8F2L},{2L,0x8533BF59L,0x37420069L},{2L,0xB0EA1CB3L,0xF5895423L},{0xF5895423L,(-1L),0L}},{{2L,0xC9B0A1CAL,(-1L)},{2L,0xFF40F7E6L,2L},{0xF5895423L,0xA38B07EFL,(-1L)},{2L,0L,7L},{2L,0xE8E110F4L,0x80DE68BBL},{0xF5895423L,1L,0x9E16B8F2L}}};
        int32_t *l_637 = &g_84.f1;
        struct S2 l_650 = {3L,-8L,0L,0UL};
        int i, j, k;
        l_460 ^= (&l_507 == &g_567);
        l_475[0] ^= ((l_632[3][3] = l_632[3][4]) != (void*)0);
        if (p_45.f0)
            continue;
        (*l_637) &= (safe_mod_func_int8_t_s_s(((void*)0 != (*l_368)), ((p_45.f0 ^ l_636[4][2][1]) && 1UL)));
        for (g_289 = 5; (g_289 >= 0); g_289 -= 1)
        { 
            uint64_t *l_641 = &g_80[1][3][0];
            uint8_t *l_655 = (void*)0;
            uint8_t *l_656 = &g_539;
            (*l_637) = ((safe_sub_func_uint32_t_u_u((2UL == (&g_80[3][1][1] == ((!p_45.f0) , l_641))), (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((l_657 = (safe_lshift_func_uint16_t_u_s(((l_650 , ((safe_mod_func_uint16_t_u_u((p_45.f0 && (safe_lshift_func_uint8_t_u_u(((*l_656) = (((-1L) > (**l_368)) <= 65535UL)), 4))), 0x1CFEL)) >= 4294967295UL)) , 0x2355L), p_45.f0))) , g_2), 0xE4L)) | (*l_637)), 0xB9L)), p_45.f0)))) & 0x2E624F423F14F2A6LL);
            if (g_84.f3)
                goto lbl_379;
        }
    }
    return l_658;
}



static struct S0  func_46(uint8_t  p_47, struct S2  p_48)
{ 
    int8_t l_102 = 0L;
    int32_t l_126 = 0L;
    struct S1 *l_158 = &g_159;
    int32_t l_183 = 0xF519B726L;
    int32_t l_184 = 0xE9344955L;
    int64_t l_185 = 0x093934F9474E044ELL;
    int32_t l_186 = 0x9FD3CF24L;
    int32_t ****l_212 = (void*)0;
    int64_t *l_221 = &g_156[1].f3;
    int64_t **l_220 = &l_221;
    uint16_t l_276 = 0x5657L;
    int32_t l_325 = (-8L);
    int32_t *l_338 = &g_84.f1;
    int32_t *l_339 = (void*)0;
    int32_t *l_340 = &l_126;
    uint64_t l_345 = 0xC65E760D366C35C3LL;
    int16_t *l_352 = &g_226;
    uint16_t *l_353 = &g_106[3][4].f3;
    uint8_t l_354 = 2UL;
    struct S0 l_355[4] = {{0x6F0562B5L},{0x6F0562B5L},{0x6F0562B5L},{0x6F0562B5L}};
    int i;
    for (g_77 = 0; (g_77 <= 1); g_77 += 1)
    { 
        int64_t *l_91 = (void*)0;
        int64_t **l_92 = &l_91;
        int8_t *l_93 = (void*)0;
        int8_t *l_94 = &g_95;
        const int32_t l_103 = 0xDFC5AECEL;
        int64_t *l_104 = &g_105;
        int32_t l_146[2][7];
        struct S1 *l_155 = &g_156[1];
        const struct S1 **l_207 = &g_205;
        uint8_t l_217[1][3][5] = {{{0x36L,0x36L,0x36L,0x36L,0x36L},{247UL,0xD2L,247UL,0xD2L,247UL},{0x36L,0x36L,0x36L,0x36L,0x36L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
                l_146[i][j] = 0x041155C2L;
        }
        if ((((*l_104) = ((***g_70) == ((1L == ((safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s((((*l_94) = (g_89[1][3][2] == ((*l_92) = l_91))) > 0x63L), (safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0xFDL, (safe_lshift_func_int8_t_s_s((l_102 >= 8L), l_103)))), 248UL)))), g_43.f3)) <= p_48.f3)) , (void*)0))) != 0x4C462F11252BC438LL))
        { 
            uint64_t l_120 = 0UL;
            int32_t l_124[3];
            struct S2 *l_127 = &g_84;
            uint16_t l_129 = 0x730FL;
            uint32_t *l_154 = &g_123;
            uint32_t l_187 = 1UL;
            int i;
            for (i = 0; i < 3; i++)
                l_124[i] = 1L;
            for (g_6 = 0; (g_6 <= 1); g_6 += 1)
            { 
                int8_t l_107 = 0L;
                uint32_t *l_121 = (void*)0;
                uint32_t *l_122 = &g_123;
                if (((-7L) && (((g_106[3][4] , (l_107 < ((safe_sub_func_uint16_t_u_u((l_91 == &g_80[1][2][1]), (((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(p_48.f1, ((*l_122) = (safe_div_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(((p_47 & 0x548CD50EL) >= l_103), p_48.f2)), l_120))))), 0)), p_48.f1)) <= g_43.f1) >= l_107))) , p_47))) | 0x40L) <= l_107)))
                { 
                    int16_t l_125 = (-7L);
                    struct S2 **l_128 = &l_127;
                    l_124[1] ^= p_48.f1;
                    l_126 = ((0xB60DL != l_102) > (l_125 , g_84.f2));
                    if ((****g_70))
                        continue;
                    (*l_128) = l_127;
                    ++l_129;
                }
                else
                { 
                    int32_t *l_132 = &l_126;
                    int32_t *l_133 = (void*)0;
                    int32_t *l_134 = &g_106[3][4].f1;
                    int32_t *l_135 = (void*)0;
                    int32_t *l_136 = &l_124[1];
                    int32_t *l_137 = &l_124[1];
                    int32_t *l_138 = &l_126;
                    int32_t *l_139 = &l_124[1];
                    int32_t *l_140 = &l_124[1];
                    int32_t *l_141 = &l_124[1];
                    int32_t *l_142 = &g_84.f1;
                    int32_t *l_143 = &l_126;
                    int32_t *l_144 = &g_106[3][4].f1;
                    int32_t *l_145 = &g_106[3][4].f1;
                    int32_t *l_147[3][7][7] = {{{&g_6,&g_106[3][4].f1,&g_106[3][4].f1,&l_124[1],&g_106[3][4].f1,&g_106[3][4].f1,&l_124[1]},{&g_6,&g_84.f1,&g_6,&g_6,(void*)0,&g_106[3][4].f1,&l_124[1]},{&l_124[1],&l_146[1][5],&l_124[1],&g_6,&l_124[1],&g_106[3][4].f1,&l_146[1][2]},{&l_124[1],&l_124[1],(void*)0,&l_124[1],&g_6,&g_106[3][4].f1,&g_6},{&g_106[3][4].f1,&g_2,&g_6,&g_2,&l_146[1][2],&g_106[3][4].f1,&l_124[0]},{(void*)0,&l_146[1][1],&l_124[1],&l_124[0],(void*)0,&g_106[3][4].f1,&g_6},{&g_106[3][4].f1,&g_106[3][4].f1,&g_106[3][4].f1,&l_146[1][2],&l_146[1][2],&g_106[3][4].f1,&g_2}},{{&g_6,&g_106[3][4].f1,&g_106[3][4].f1,&l_124[1],&g_106[3][4].f1,&g_106[3][4].f1,&l_124[1]},{&g_6,&g_84.f1,&g_6,&g_6,(void*)0,&g_106[3][4].f1,&l_124[1]},{&l_124[1],&l_146[1][5],&l_124[1],&g_6,&l_124[1],&g_106[3][4].f1,&l_146[1][2]},{&l_124[1],&l_124[1],(void*)0,&l_124[1],&g_6,&g_106[3][4].f1,&g_6},{&g_106[3][4].f1,&g_2,&g_6,&g_2,&l_146[1][2],&g_106[3][4].f1,&l_124[0]},{(void*)0,&l_146[1][1],&l_124[1],&l_124[0],(void*)0,&g_106[3][4].f1,&g_6},{&g_106[3][4].f1,&g_106[3][4].f1,&g_106[3][4].f1,&l_146[1][2],&l_146[1][2],&g_106[3][4].f1,&g_2}},{{&g_6,&g_106[3][4].f1,&g_106[3][4].f1,&l_124[1],&g_106[3][4].f1,&g_106[3][4].f1,&l_124[1]},{&g_6,&g_84.f1,&g_6,&g_6,(void*)0,&g_106[3][4].f1,&l_124[1]},{&l_124[1],&l_146[1][5],&l_124[1],&g_6,&l_124[1],&g_106[3][4].f1,&l_146[1][2]},{&l_124[1],&l_124[1],(void*)0,&l_124[1],&g_6,&g_106[3][4].f1,&g_6},{&g_106[3][4].f1,&g_2,&g_6,&g_2,&l_146[1][2],&g_106[3][4].f1,&l_124[0]},{(void*)0,&l_146[1][1],&l_124[1],&l_124[0],(void*)0,&g_106[3][4].f1,(void*)0},{(void*)0,&l_146[1][4],&l_146[0][2],&l_146[1][2],&g_106[3][4].f1,&l_146[1][5],&g_106[3][4].f1}}};
                    int i, j, k;
                    ++g_149[3];
                    p_48.f1 = l_146[0][2];
                }
                l_126 = (safe_mul_func_uint8_t_u_u(l_146[1][4], (l_154 != &g_10)));
                (***g_70) = l_122;
                for (l_126 = 0; (l_126 <= 1); l_126 += 1)
                { 
                    struct S1 **l_157 = &l_155;
                    int32_t *l_162 = (void*)0;
                    int i, j, k;
                    l_158 = ((*l_157) = l_155);
                }
            }
            if (p_48.f2)
            { 
                int32_t *l_165 = &l_126;
                int32_t l_181 = (-1L);
                int32_t l_182[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_182[i][j] = 0x37B09033L;
                }
                (**g_71) = (void*)0;
                for (g_75 = 0; (g_75 <= 1); g_75 += 1)
                { 
                    int32_t l_170[7] = {0x39F120E9L,0x39F120E9L,0x39F120E9L,0x39F120E9L,0x39F120E9L,0x39F120E9L,0x39F120E9L};
                    int32_t *l_178 = &l_124[1];
                    int32_t *l_179 = &g_84.f1;
                    int32_t *l_180[1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_180[i][j] = &l_146[0][2];
                    }
                    (*g_57) = ((~p_48.f0) , l_165);
                    (****g_70) = (safe_rshift_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(l_170[5], g_159.f6)) , 1L), (safe_div_func_uint64_t_u_u(p_48.f1, (safe_lshift_func_uint16_t_u_s(l_170[1], (safe_lshift_func_uint16_t_u_s((*l_165), (((*l_178) = (l_146[1][1] &= (((*l_104) = ((p_48.f0 && (-6L)) | p_47)) | g_177))) && p_47)))))))));
                    ++l_187;
                }
            }
            else
            { 
                int32_t * const l_190 = &l_183;
                int32_t **l_191 = (void*)0;
                int32_t **l_192 = (void*)0;
                int32_t **l_193 = (void*)0;
                int32_t **l_194 = &g_58;
                (*l_194) = l_190;
            }
        }
        else
        { 
            const struct S1 ***l_206 = &g_204[4];
            const struct S1 ***l_208 = &l_207;
            const int32_t l_214 = 0x54160E17L;
            int32_t *l_224 = &g_156[1].f1;
            int16_t *l_225 = &g_226;
            int32_t *l_227 = (void*)0;
            int32_t *l_228 = &l_184;
            p_48.f1 ^= (((safe_div_func_int16_t_s_s((l_183 &= (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((~(safe_lshift_func_int8_t_s_u((-4L), 2))), 6)), 14))), ((((*l_206) = g_204[3]) == (g_209 = ((*l_208) = l_207))) , (safe_unary_minus_func_uint32_t_u((safe_unary_minus_func_uint32_t_u(((void*)0 != l_212)))))))) <= (+(0L == ((*l_104) ^= (((((g_84.f1 <= p_48.f3) < g_6) >= l_214) && 0xFDF36518L) < p_48.f3))))) == 0x4FA9L);
            (*l_228) = (safe_add_func_int8_t_s_s((l_217[0][2][4] | (safe_sub_func_uint16_t_u_u((((((((*l_225) &= ((l_220 != (((*l_224) ^= (((g_105 && (g_106[3][4] , g_149[3])) ^ (safe_mul_func_uint8_t_u_u(p_48.f0, (((*l_220) == (void*)0) == p_48.f2)))) , 0L)) , (void*)0)) ^ p_48.f3)) != g_80[0][4][0]) , (**g_57)) ^ l_146[0][3]) <= p_48.f1) || g_80[3][3][1]), 0x35C5L))), 1UL));
            if (p_47)
                continue;
        }
        return g_229;
    }
    for (g_75 = (-28); (g_75 >= 25); g_75 = safe_add_func_int16_t_s_s(g_75, 3))
    { 
        int32_t * const l_232[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int32_t **l_233 = &g_58;
        int8_t l_234 = (-1L);
        int16_t *l_242 = &g_226;
        uint64_t *l_254 = &g_80[1][4][1];
        const struct S0 l_281 = {0xE6BA40BAL};
        union U3 *l_333 = (void*)0;
        union U3 **l_332 = &l_333;
        union U3 ***l_331[4];
        int i;
        for (i = 0; i < 4; i++)
            l_331[i] = &l_332;
        (*l_233) = l_232[0];
        g_235++;
        l_184 &= ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(g_123, ((((((*l_242) ^= g_159.f2) > (safe_div_func_int16_t_s_s(g_245, p_48.f3))) | (safe_div_func_int32_t_s_s((p_48 , (safe_sub_func_uint8_t_u_u((1UL && (safe_mod_func_int16_t_s_s((((((*l_254) = (safe_mod_func_int32_t_s_s((g_159.f2 >= p_48.f0), 0xAC006015L))) , l_212) != (void*)0) | g_149[3]), g_10))), g_177))), 0xF76A9F0FL))) == g_84.f1) , 1L))), p_48.f1)) < p_48.f3);
        for (g_95 = 21; (g_95 == (-10)); g_95--)
        { 
            int16_t l_262 = 0x86E1L;
            int16_t *l_274 = &g_275[0];
            int32_t l_284 = 0xABE1C99CL;
            int32_t l_285[7];
            struct S0 l_317 = {0x7BFAF387L};
            union U3 ****l_334 = &l_331[0];
            int i;
            for (i = 0; i < 7; i++)
                l_285[i] = 0xE1C72E30L;
            if ((((safe_add_func_uint8_t_u_u((g_156[1].f4 &= ((safe_mul_func_int16_t_s_s(((*l_242) = (safe_unary_minus_func_int16_t_s((p_48.f1 | l_262)))), ((g_6 = (safe_mod_func_int8_t_s_s(((0x44L | (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((g_149[3] || ((+(p_48.f0 ^ p_47)) & ((((*l_274) = (((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_262, p_48.f1)), p_48.f1)) | l_262) | 0UL)) > 0x78E6L) || p_48.f0))), 0x94CDL)) ^ 0x0FF0L) >= g_159.f2), p_48.f1))) >= l_276), l_262))) , g_123))) >= g_2)), g_156[1].f2)) & p_48.f3) >= l_262))
            { 
                int16_t * const **l_278[5];
                union U3 *l_282 = (void*)0;
                int32_t l_286 = (-3L);
                int32_t l_287 = 0x09A6BEF0L;
                struct S2 l_316 = {0x9EB9L,0x4AA1E9C3L,-1L,1UL};
                int i;
                for (i = 0; i < 5; i++)
                    l_278[i] = &g_277;
                g_279[6][1][0] = (g_277 = g_277);
                if (l_183)
                { 
                    union U3 **l_283 = &l_282;
                    int32_t l_290[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_290[i] = 1L;
                    (*l_283) = (l_281 , l_282);
                    ++g_293;
                }
                else
                { 
                    union U3 *l_296 = &g_297;
                    l_296 = l_296;
                    (***g_70) = (*g_57);
                }
                for (l_262 = (-2); (l_262 != (-29)); l_262--)
                { 
                    struct S2 **l_300 = (void*)0;
                    struct S2 *l_302 = &g_106[2][1];
                    struct S2 **l_301 = &l_302;
                    uint32_t *l_303 = &g_149[3];
                    int32_t l_310[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_310[i] = 0x73596953L;
                    (*l_301) = &p_48;
                    l_310[2] = (((*l_303) &= g_106[3][4].f2) , ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((l_286 <= (safe_mul_func_uint16_t_u_u(p_48.f3, (l_310[2] && (safe_mul_func_uint16_t_u_u(65533UL, (!(((g_156[1].f0 = 0x55B06E9F9F4B5799LL) <= (((safe_sub_func_int32_t_s_s((l_316 , 0xC9CA6B34L), l_102)) , l_317) , 0x391288609CC27558LL)) ^ p_48.f3)))))))), 0xD8EAL)), l_285[6])) , p_48.f0) == p_48.f1) >= 0xA4L));
                    return g_229;
                }
            }
            else
            { 
                int32_t l_324 = (-7L);
                int32_t l_326 = 0x97FF8A4DL;
                int32_t l_327[4] = {(-3L),(-3L),(-3L),(-3L)};
                int i;
                if (p_47)
                    break;
                if (p_48.f2)
                    continue;
                p_48.f1 &= (safe_div_func_int32_t_s_s((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u(g_43.f3, 7)) != 0UL), p_47)), (-1L)));
                ++g_328[3];
            }
            if (p_48.f3)
                break;
            (*l_334) = l_331[1];
            if (l_284)
                break;
            (**g_71) = (*l_233);
        }
    }
    l_325 = ((((safe_lshift_func_int8_t_s_u(((!(((p_48.f1 = ((p_48.f0 | ((((*l_340) = ((*l_338) &= 0xC6F29780L)) >= (0xF397L && (safe_div_func_uint64_t_u_u((((safe_add_func_int32_t_s_s(l_345, ((g_156[1].f3 = (safe_lshift_func_uint16_t_u_u((p_48.f0 ^ ((*l_353) = (safe_add_func_int16_t_s_s(((*l_352) ^= ((*g_280) = (safe_rshift_func_int16_t_s_u((&g_80[0][4][0] != &g_80[0][4][0]), 3)))), 0xC8A5L)))), g_297.f0))) > (-1L)))) >= p_47) ^ l_354), p_47)))) | p_47)) < p_48.f2)) ^ 1L) ^ g_159.f0)) >= 65528UL), p_48.f3)) || 0x11L) && p_48.f2) <= p_47);
    return l_355[3];
}



static int16_t  func_49(uint32_t  p_50, int32_t ** p_51)
{ 
    int32_t ***l_64 = &g_57;
    int32_t ****l_65 = &l_64;
    uint16_t *l_74 = &g_75;
    uint16_t *l_76[5][2][6];
    uint32_t l_78 = 9UL;
    uint64_t *l_79 = &g_80[0][4][0];
    int32_t *l_81 = &g_6;
    int32_t *l_82 = (void*)0;
    int8_t l_83 = 0L;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
                l_76[i][j][k] = (void*)0;
        }
    }
    (*l_65) = l_64;
    l_83 = ((*l_81) = (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((((g_70 == &g_71) , (0xB0F8L > p_50)) >= (safe_sub_func_uint16_t_u_u(((*l_74) |= g_43.f2), ((0x14D58F1AF85E685ALL < ((*l_79) = ((g_77 |= (****l_65)) , l_78))) , 0xDD0FL)))), 0xA0D6L)) == (***l_64)), p_50)));
    return g_80[1][4][1];
}



static int32_t  func_54(int32_t ** p_55, struct S1  p_56)
{ 
    return (**p_55);
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_80[i][j][k], "g_80[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_84.f0, "g_84.f0", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_84.f3, "g_84.f3", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_106[i][j].f0, "g_106[i][j].f0", print_hash_value);
            transparent_crc(g_106[i][j].f1, "g_106[i][j].f1", print_hash_value);
            transparent_crc(g_106[i][j].f2, "g_106[i][j].f2", print_hash_value);
            transparent_crc(g_106[i][j].f3, "g_106[i][j].f3", print_hash_value);

        }
    }
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_149[i], "g_149[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_156[i].f0, "g_156[i].f0", print_hash_value);
        transparent_crc(g_156[i].f1, "g_156[i].f1", print_hash_value);
        transparent_crc(g_156[i].f2, "g_156[i].f2", print_hash_value);
        transparent_crc(g_156[i].f3, "g_156[i].f3", print_hash_value);
        transparent_crc(g_156[i].f4, "g_156[i].f4", print_hash_value);
        transparent_crc(g_156[i].f5, "g_156[i].f5", print_hash_value);
        transparent_crc(g_156[i].f6, "g_156[i].f6", print_hash_value);

    }
    transparent_crc(g_159.f0, "g_159.f0", print_hash_value);
    transparent_crc(g_159.f1, "g_159.f1", print_hash_value);
    transparent_crc(g_159.f2, "g_159.f2", print_hash_value);
    transparent_crc(g_159.f3, "g_159.f3", print_hash_value);
    transparent_crc(g_159.f4, "g_159.f4", print_hash_value);
    transparent_crc(g_159.f5, "g_159.f5", print_hash_value);
    transparent_crc(g_159.f6, "g_159.f6", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_275[i], "g_275[i]", print_hash_value);

    }
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_291[i][j], "g_291[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_297.f0, "g_297.f0", print_hash_value);
    transparent_crc(g_297.f1, "g_297.f1", print_hash_value);
    transparent_crc(g_297.f2, "g_297.f2", print_hash_value);
    transparent_crc(g_297.f3, "g_297.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_328[i], "g_328[i]", print_hash_value);

    }
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_415[i], "g_415[i]", print_hash_value);

    }
    transparent_crc(g_469, "g_469", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_477, "g_477", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_539, "g_539", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_673[i][j], "g_673[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_807[i][j], "g_807[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    transparent_crc(g_812, "g_812", print_hash_value);
    transparent_crc(g_986, "g_986", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
