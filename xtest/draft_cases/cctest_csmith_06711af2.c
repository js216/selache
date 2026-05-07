// SPDX-License-Identifier: MIT
// cctest_csmith_06711af2.c --- cctest case csmith_06711af2 (csmith seed 108075762)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x91bc0eea */

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

// Options:   -s 108075762 -o /tmp/csmith_gen_7ij5kjef/csmith.c --concise --no-volatiles --no-volatile-pointers --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   unsigned f0 : 7;
   unsigned : 0;
};

struct S1 {
   const unsigned f0 : 10;
   uint32_t  f1;
   const unsigned f2 : 8;
   unsigned f3 : 13;
   const unsigned f4 : 16;
   unsigned f5 : 23;
   int32_t  f6;
   unsigned f7 : 3;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   uint32_t  f0;
   int16_t  f1;
   struct S0  f2;
   struct S0  f3;
   struct S1  f4;
   uint16_t  f5;
};
#pragma pack(pop)

union U3 {
   int32_t  f0;
   uint32_t  f1;
   uint16_t  f2;
   const uint8_t  f3;
   int8_t * const  f4;
};

union U4 {
   int64_t  f0;
   int16_t  f1;
   const uint16_t  f2;
   int64_t  f3;
};


static int8_t g_10 = (-1L);
static struct S1 g_11 = {22,1UL,2,80,21,2393,0xC86992F1L,0};
static union U4 g_23 = {-10L};
static int32_t g_39 = 0x6EE3E4F6L;
static int32_t g_44 = 1L;
static int32_t g_45[6] = {0x89BE308DL,0x89BE308DL,0x89BE308DL,0x89BE308DL,0x89BE308DL,0x89BE308DL};
static uint16_t g_46[6] = {0x4546L,0x4546L,0x4546L,0x4546L,0x4546L,0x4546L};
static int32_t g_73 = 0xA65742D1L;
static const int8_t * const g_87 = (void*)0;
static const int8_t * const * const g_86 = &g_87;
static const int8_t * const * const *g_85[5][2] = {{&g_86,&g_86},{&g_86,&g_86},{&g_86,&g_86},{&g_86,(void*)0},{&g_86,(void*)0}};
static uint32_t g_89 = 0xC74F2DDDL;
static uint8_t g_93 = 1UL;
static int32_t g_98 = 0x470AD0C7L;
static int16_t g_121 = 0x04EFL;
static uint32_t g_125 = 0UL;
static uint8_t g_143 = 0UL;
static uint64_t g_147 = 0x11E2934973AC0290LL;
static struct S0 g_149 = {3};
static struct S2 g_158 = {0x5F4AA8B2L,0x03D7L,{3},{1},{23,0xE8C5F53CL,10,51,200,909,0xF48E3CAEL,0},1UL};
static struct S2 *g_157 = &g_158;
static struct S0 *g_165 = &g_158.f2;
static union U3 g_274 = {0x626E11B9L};
static int8_t **g_295 = (void*)0;
static int8_t ***g_294 = &g_295;
static int8_t ****g_293 = &g_294;
static int8_t *****g_292 = &g_293;
static struct S1 g_298 = {15,1UL,2,63,58,1672,8L,0};
static struct S1 *g_297 = &g_298;
static int8_t g_299[6][6][5] = {{{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L},{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL},{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L}},{{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL},{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L},{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL}},{{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L},{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL},{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L}},{{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL},{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L},{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL}},{{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L},{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL},{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L}},{{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL},{0x5CL,0x5CL,0L,0L,0x5CL},{0L,4L,0L,4L,0L},{0x5CL,0L,0L,0x5CL,0x5CL},{0xCFL,4L,0xCFL,4L,0xCFL}}};
static uint16_t g_300 = 0x82AEL;
static int32_t *g_306[5] = {&g_98,&g_98,&g_98,&g_98,&g_98};
static int8_t *g_316 = &g_299[1][3][2];
static int8_t ** const g_315 = &g_316;
static int8_t ** const *g_314 = &g_315;
static int8_t ** const **g_313 = &g_314;
static struct S0 **g_354 = &g_165;
static struct S0 ***g_353 = &g_354;
static uint8_t g_390 = 248UL;
static uint64_t g_410 = 0xC4D78A4ADEA55A6CLL;
static int32_t g_426 = (-2L);
static struct S2 g_448 = {4UL,-3L,{2},{6},{16,1UL,7,77,42,502,-10L,1},1UL};
static union U4 * const *g_456[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int16_t g_534[6] = {0xD928L,(-1L),0xD928L,0xD928L,(-1L),0xD928L};
static int64_t g_558 = 1L;
static union U4 ****g_630 = (void*)0;
static int64_t *g_642 = &g_23.f3;
static int64_t **g_641 = &g_642;
static union U4 *g_696[7][7][5] = {{{&g_23,&g_23,&g_23,&g_23,&g_23},{(void*)0,&g_23,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,(void*)0,&g_23},{&g_23,(void*)0,(void*)0,(void*)0,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0},{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23}},{{(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,(void*)0,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0},{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,(void*)0,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0},{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23}},{{&g_23,(void*)0,&g_23,(void*)0,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0},{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,(void*)0,&g_23}},{{&g_23,&g_23,(void*)0,&g_23,(void*)0},{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,(void*)0,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0}},{{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,&g_23},{(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23},{&g_23,(void*)0,&g_23,(void*)0,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0},{(void*)0,(void*)0,&g_23,&g_23,(void*)0}},{{&g_23,(void*)0,(void*)0,&g_23,&g_23},{&g_23,&g_23,&g_23,&g_23,&g_23},{(void*)0,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,(void*)0,(void*)0},{(void*)0,&g_23,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,(void*)0},{&g_23,(void*)0,(void*)0,&g_23,&g_23}}};
static union U4 **g_695[6] = {&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3]};
static const uint64_t g_805 = 0x0445CAFA4342E0ACLL;
static const uint64_t g_807 = 0x6FA7DF3A9B52D85BLL;
static const uint64_t *g_806 = &g_807;
static int16_t g_831 = 1L;
static union U4 g_886 = {0x202BACFBB19083FALL};
static struct S2 g_984 = {0x8F5DF0B8L,-7L,{10},{1},{8,0xB1E0490DL,0,32,70,1332,0xA4CC4526L,1},0x6A33L};
static struct S2 *g_983 = &g_984;
static uint32_t g_1021 = 0xB0432B82L;
static uint16_t **g_1034 = (void*)0;
static union U4 g_1124 = {3L};
static union U3 *g_1182 = &g_274;
static union U3 **g_1181 = &g_1182;
static struct S1 g_1207 = {30,0xEEF0FA3CL,7,81,249,526,5L,1};
static int32_t *g_1232 = &g_45[5];
static uint32_t g_1318[3] = {0x877290C2L,0x877290C2L,0x877290C2L};
static uint16_t * const *g_1372 = (void*)0;
static uint16_t * const **g_1371 = &g_1372;
static union U4 ***g_1432 = &g_695[2];
static union U4 ****g_1431 = &g_1432;
static int32_t g_1439[2] = {5L,5L};
static uint32_t *g_1450 = &g_1021;
static int8_t g_1548 = 3L;
static uint64_t g_1569[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
static uint64_t ***g_1592 = (void*)0;
static uint16_t g_1612[7] = {0x9E6EL,0x9E6EL,0x9E6EL,0x9E6EL,0x9E6EL,0x9E6EL,0x9E6EL};
static uint64_t g_1832 = 0x05BE45E08BF942E3LL;
static int8_t g_1884 = 0x35L;
static int8_t *g_2065 = (void*)0;
static union U4 g_2076 = {0x79AD6D48120F1F55LL};
static const union U4 ** const **g_2114 = (void*)0;
static const union U4 ** const ***g_2113 = &g_2114;
static int32_t g_2123 = 0x6E4CB494L;
static int32_t *g_2129 = (void*)0;
static int8_t g_2170 = 1L;
static union U4 g_2182[5][2] = {{{6L},{0x414EE6FA8EB0DF23LL}},{{0x414EE6FA8EB0DF23LL},{6L}},{{0x414EE6FA8EB0DF23LL},{0x414EE6FA8EB0DF23LL}},{{6L},{0x414EE6FA8EB0DF23LL}},{{0x414EE6FA8EB0DF23LL},{6L}}};
static uint64_t **** const g_2194 = (void*)0;
static uint64_t **** const *g_2193 = &g_2194;
static const int8_t g_2243[4][5] = {{0x2AL,0x2AL,0x02L,0xE0L,0x02L},{0x2AL,0x2AL,0x02L,0xE0L,0x02L},{0x2AL,0x2AL,0x02L,0xE0L,0x02L},{0x2AL,0x2AL,0x02L,0xE0L,0x02L}};
static const struct S0 ***g_2269 = (void*)0;
static struct S2 **g_2290 = (void*)0;
static struct S2 ***g_2289 = &g_2290;
static struct S2 ****g_2288[7][2] = {{&g_2289,&g_2289},{&g_2289,&g_2289},{&g_2289,(void*)0},{&g_2289,(void*)0},{&g_2289,&g_2289},{&g_2289,&g_2289},{&g_2289,&g_2289}};
static struct S2 *****g_2287 = &g_2288[4][1];



static uint8_t  func_1(void);
static int8_t * func_4(int8_t  p_5, struct S1  p_6, int32_t  p_7, int8_t * p_8, uint64_t  p_9);
static int32_t  func_25(int32_t  p_26, int8_t * p_27);
static int32_t  func_28(union U4 ** p_29, union U4 * p_30, int64_t  p_31);
static union U4 ** func_32(uint32_t  p_33, int8_t * p_34, int8_t * p_35, int8_t * p_36);
static struct S0  func_53(union U4 * p_54, int8_t * p_55, int8_t * p_56, uint8_t  p_57, const uint64_t  p_58);
static struct S0  func_59(int8_t * p_60, struct S0  p_61, struct S1  p_62);
static int8_t * func_63(int16_t  p_64);




static uint8_t  func_1(void)
{ 
    int64_t l_12 = (-1L);
    int8_t *l_1764 = &g_299[4][0][3];
    int16_t *l_1765 = &g_534[3];
    int32_t *l_1766 = &g_274.f0;
    int16_t l_1767 = 0x6B95L;
    int32_t l_1793 = 1L;
    struct S2 l_1807 = {1UL,0x0E5DL,{6},{6},{21,4294967295UL,9,16,146,1084,0xDEAB6D9FL,0},1UL};
    uint32_t l_1864 = 4294967293UL;
    uint8_t l_1887 = 0x9EL;
    int32_t l_1896[6] = {0xD7183996L,0x23B7A0BBL,0x23B7A0BBL,0xD7183996L,0x23B7A0BBL,0x23B7A0BBL};
    uint16_t ** const *l_1914 = &g_1034;
    uint16_t ** const **l_1913 = &l_1914;
    int32_t l_1939 = 0L;
    uint16_t ***l_1988[7][1] = {{&g_1034},{&g_1034},{&g_1034},{&g_1034},{&g_1034},{&g_1034},{&g_1034}};
    uint16_t ****l_1987 = &l_1988[6][0];
    const struct S1 * const l_2029 = &g_448.f4;
    uint8_t l_2039 = 0UL;
    struct S0 ****l_2063[5][7] = {{&g_353,(void*)0,&g_353,&g_353,&g_353,(void*)0,&g_353},{&g_353,&g_353,&g_353,&g_353,&g_353,&g_353,&g_353},{&g_353,&g_353,&g_353,&g_353,&g_353,&g_353,&g_353},{(void*)0,&g_353,&g_353,&g_353,&g_353,&g_353,&g_353},{&g_353,&g_353,&g_353,&g_353,&g_353,&g_353,(void*)0}};
    uint32_t l_2097 = 1UL;
    int8_t *l_2117 = &g_299[4][0][3];
    int32_t l_2122 = 0xDC9CD8C1L;
    int32_t l_2124 = 0L;
    int64_t l_2135 = (-1L);
    union U3 l_2144 = {0xE33B03B4L};
    union U4 *l_2147 = &g_886;
    int8_t l_2172 = 0xEFL;
    uint8_t l_2190 = 0UL;
    struct S2 ** const *l_2199 = (void*)0;
    struct S1 l_2217[5] = {{12,0x61864BF2L,15,32,100,1301,1L,0},{12,0x61864BF2L,15,32,100,1301,1L,0},{12,0x61864BF2L,15,32,100,1301,1L,0},{12,0x61864BF2L,15,32,100,1301,1L,0},{12,0x61864BF2L,15,32,100,1301,1L,0}};
    int32_t l_2254[4];
    const struct S0 ***l_2271 = (void*)0;
    struct S2 **l_2294 = &g_983;
    uint64_t *l_2314 = &g_1832;
    uint64_t **l_2313 = &l_2314;
    uint64_t ***l_2312 = &l_2313;
    uint32_t *l_2315 = &g_1207.f1;
    int32_t *l_2316 = (void*)0;
    int32_t *l_2317 = &g_1439[1];
    int i, j;
    for (i = 0; i < 4; i++)
        l_2254[i] = 1L;
    if ((l_1767 = ((*l_1766) = ((safe_lshift_func_int16_t_s_s(((*l_1765) ^= ((l_1764 = ((***g_313) = func_4(g_10, g_11, l_12, &g_10, l_12))) != (void*)0)), 9)) & 5L))))
    { 
        uint8_t l_1786 = 7UL;
        int32_t l_1795[6][4] = {{0x019BC38BL,0x019BC38BL,0x019BC38BL,0x019BC38BL},{0x019BC38BL,0x019BC38BL,0x019BC38BL,0x019BC38BL},{0x019BC38BL,0x019BC38BL,0x019BC38BL,0x019BC38BL},{0x019BC38BL,0x019BC38BL,0x019BC38BL,0x019BC38BL},{0x019BC38BL,0x019BC38BL,0x019BC38BL,0x019BC38BL},{0x019BC38BL,0x019BC38BL,0x019BC38BL,0x019BC38BL}};
        uint32_t l_1836 = 0UL;
        int32_t *l_1842 = &g_984.f4.f6;
        const struct S2 l_1852 = {0xA1F7DCA0L,0x72C0L,{2},{6},{18,7UL,14,56,142,1027,1L,1},0x5388L};
        struct S2 **l_1869[1];
        struct S2 ** const *l_1868 = &l_1869[0];
        struct S2 ** const **l_1867 = &l_1868;
        int64_t l_1881 = 0xC485F00D557D3392LL;
        int32_t l_1915 = 1L;
        int32_t **l_1918 = &g_306[2];
        int64_t l_1937 = 1L;
        uint32_t l_1940 = 0xEC743BF9L;
        int8_t ***l_1970[6];
        uint16_t l_1976 = 8UL;
        uint64_t *l_2006 = &g_147;
        uint64_t **l_2005[3];
        uint32_t l_2041[3];
        uint64_t l_2054 = 0x3690162F0078F566LL;
        struct S0 ****l_2064 = &g_353;
        const int32_t l_2070 = (-10L);
        struct S1 l_2081 = {20,1UL,11,13,22,2863,-1L,0};
        union U4 l_2121 = {1L};
        uint16_t l_2125 = 0xC03CL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1869[i] = &g_983;
        for (i = 0; i < 6; i++)
            l_1970[i] = &g_295;
        for (i = 0; i < 3; i++)
            l_2005[i] = &l_2006;
        for (i = 0; i < 3; i++)
            l_2041[i] = 0x0A41F234L;
    }
    else
    { 
        int32_t l_2142 = 0x65A708B9L;
        int8_t *l_2148 = &g_1548;
        int32_t l_2159 = 0x5BFA82D6L;
        int32_t l_2168 = 0x62C30EF5L;
        int32_t l_2173 = 0x49103E94L;
        uint16_t ****l_2179[2][5] = {{&l_1988[3][0],&l_1988[3][0],&l_1988[3][0],&l_1988[3][0],&l_1988[3][0]},{&l_1988[6][0],&l_1988[6][0],&l_1988[6][0],&l_1988[6][0],&l_1988[6][0]}};
        uint64_t **** const l_2196 = &g_1592;
        uint64_t **** const *l_2195[7] = {(void*)0,&l_2196,&l_2196,(void*)0,&l_2196,&l_2196,(void*)0};
        const struct S2 *l_2204[7] = {(void*)0,&g_448,(void*)0,(void*)0,&g_448,(void*)0,(void*)0};
        const struct S2 * const *l_2203 = &l_2204[6];
        const struct S2 * const * const *l_2202 = &l_2203;
        const union U4 *l_2218 = &g_1124;
        uint16_t l_2246 = 0xEB43L;
        int32_t *l_2265[6][7] = {{&g_1439[0],&g_1439[0],&g_39,&g_274.f0,&g_274.f0,(void*)0,&g_73},{&l_2142,(void*)0,&l_2173,&g_274.f0,&g_1439[1],&g_1439[1],&g_274.f0},{&g_39,(void*)0,&g_39,&l_2168,&g_73,&l_2142,(void*)0},{&g_39,&g_274.f0,&g_274.f0,(void*)0,&g_73,(void*)0,&l_2142},{&l_2142,&g_1439[0],&l_2124,&l_2124,&g_1439[0],&l_2142,&g_1439[1]},{&g_1439[0],&g_274.f0,&g_73,&l_2124,&l_2173,&g_1439[1],&g_73}};
        struct S0 l_2266 = {10};
        int8_t l_2274 = (-1L);
        int i, j;
        if ((*l_1766))
        { 
            struct S0 l_2128 = {9};
            int32_t **l_2130 = &g_306[2];
            union U4 l_2143 = {0x84B4DFE80EB641C2LL};
            int8_t *l_2145 = &g_10;
            (***g_353) = l_2128;
            (*l_2130) = g_2129;
            (*l_1766) = (safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_u(((l_2135 == 0x6FB4DA18L) , ((*l_1765) = (3UL | ((*g_316) ^ ((*l_2145) = (safe_rshift_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s((*l_1766), 2)) != (((((safe_div_func_uint8_t_u_u(((*g_1450) , g_1569[2]), l_2142)) , l_2143) , l_2144) , g_46[3]) ^ (*l_1766))) , (*l_1766)), g_984.f4.f7))))))), 5)), (*l_1766)));
        }
        else
        { 
            int64_t l_2146[7][4][6] = {{{0x72CB9261E0BB40C0LL,5L,0L,0L,5L,0x72CB9261E0BB40C0LL},{(-1L),0x2A65931E2B081B98LL,(-3L),0L,(-1L),0L},{1L,1L,5L,0x156BB83F244F4A18LL,0x62B9D1D370F07F5DLL,0x7904C1406CF8E795LL},{1L,0L,0x156BB83F244F4A18LL,0L,2L,(-7L)}},{{(-1L),(-1L),5L,0L,(-3L),0xA5424B8BCDBCF8D7LL},{0x72CB9261E0BB40C0LL,0L,0L,0xA8F17C57E6522046LL,1L,1L},{0x62B9D1D370F07F5DLL,0L,0L,0x7904C1406CF8E795LL,1L,1L},{0L,(-1L),1L,0x09822F0C1CD22CFCLL,1L,(-1L)}},{{0L,2L,0x8C4D93DAB574D68CLL,0L,(-9L),(-1L)},{2L,0xB76F2EC005B9E4ADLL,0x05B6A9BF68488775LL,1L,0x72CB9261E0BB40C0LL,(-1L)},{0x59A47671156B309BLL,0xB76F2EC005B9E4ADLL,(-7L),0x2B2844427026FFB6LL,(-9L),5L},{(-1L),2L,1L,0L,1L,5L}},{{2L,(-1L),0x2A65931E2B081B98LL,0L,1L,9L},{9L,0L,0L,0x95F2F704EFE9B02DLL,1L,0L},{(-1L),0L,0x62B9D1D370F07F5DLL,(-3L),(-3L),0x62B9D1D370F07F5DLL},{(-1L),(-1L),0x95F2F704EFE9B02DLL,0x59A47671156B309BLL,2L,0L}},{{1L,0L,0x72CB9261E0BB40C0LL,0xB76F2EC005B9E4ADLL,0x62B9D1D370F07F5DLL,0x95F2F704EFE9B02DLL},{6L,1L,0x72CB9261E0BB40C0LL,0x2A65931E2B081B98LL,(-1L),0L},{0xA8F17C57E6522046LL,0x2A65931E2B081B98LL,0x95F2F704EFE9B02DLL,(-1L),5L,0x62B9D1D370F07F5DLL},{(-1L),5L,0x62B9D1D370F07F5DLL,2L,0L,0L}},{{(-7L),0L,0L,0L,0x09822F0C1CD22CFCLL,9L},{0x09822F0C1CD22CFCLL,1L,0x2A65931E2B081B98LL,5L,0L,5L},{1L,(-1L),0x2A65931E2B081B98LL,0x05B6A9BF68488775LL,1L,0x1E8EE4B7FA543ED9LL},{0xA5424B8BCDBCF8D7LL,0xB76F2EC005B9E4ADLL,6L,0L,0L,2L}},{{1L,0xA8F17C57E6522046LL,0L,0L,0x72CB9261E0BB40C0LL,0x05B6A9BF68488775LL},{0xA5424B8BCDBCF8D7LL,0x62B9D1D370F07F5DLL,0xA8F17C57E6522046LL,0x05B6A9BF68488775LL,0x2B2844427026FFB6LL,1L},{0x2A65931E2B081B98LL,5L,1L,0xA5424B8BCDBCF8D7LL,(-1L),0x62B9D1D370F07F5DLL},{(-3L),0x8C4D93DAB574D68CLL,0L,(-1L),0x05B6A9BF68488775LL,5L}}};
            int32_t l_2150 = 0x27A8EEFCL;
            int32_t l_2160 = 0x094EAD9BL;
            int32_t l_2169 = (-3L);
            int32_t l_2174[6][4][2] = {{{(-1L),(-1L)},{0xC56F8CC4L,0x896C2881L},{0x5B255D53L,0xEBA64B94L},{0x896C2881L,0L}},{{0L,0x896C2881L},{(-1L),0xC56F8CC4L},{(-1L),0x896C2881L},{0L,0L}},{{0x896C2881L,0xEBA64B94L},{0x5B255D53L,0x896C2881L},{0xC56F8CC4L,(-1L)},{(-1L),0x742F0175L}},{{0x5B255D53L,0L},{0x742F0175L,0L},{0x5B255D53L,0x742F0175L},{(-1L),(-1L)}},{{0xC56F8CC4L,0x896C2881L},{0x5B255D53L,0xEBA64B94L},{0x896C2881L,0L},{0L,0x896C2881L}},{{(-1L),0xC56F8CC4L},{(-1L),0x896C2881L},{0L,0L},{0x896C2881L,0xEBA64B94L}}};
            union U4 *l_2181[5][5][7] = {{{(void*)0,&g_2182[3][1],&g_2182[3][1],(void*)0,&g_886,(void*)0,&g_2182[3][1]},{&g_886,&g_886,(void*)0,&g_23,(void*)0,&g_886,&g_886},{&g_2182[3][1],&g_2182[3][1],&g_2076,&g_2182[3][1],&g_2182[3][1],&g_2182[3][1],&g_2182[3][1]},{&g_886,(void*)0,&g_886,(void*)0,(void*)0,&g_886,(void*)0},{&g_2182[3][1],&g_886,&g_2076,&g_2076,&g_886,&g_2182[3][1],&g_886}},{{&g_886,(void*)0,(void*)0,&g_886,(void*)0,&g_886,(void*)0},{&g_2182[3][1],&g_2182[3][1],&g_2182[3][1],&g_2076,&g_2182[3][1],&g_2182[3][1],&g_2182[3][1]},{&g_886,(void*)0,&g_23,(void*)0,&g_886,&g_886,(void*)0},{(void*)0,&g_886,(void*)0,&g_2182[3][1],&g_2182[3][1],(void*)0,&g_886},{(void*)0,(void*)0,&g_23,&g_23,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_2182[3][1],&g_2182[3][1],(void*)0,&g_886,(void*)0,&g_2182[3][1]},{&g_886,&g_886,(void*)0,&g_23,(void*)0,&g_886,&g_886},{&g_2182[3][1],&g_2182[3][1],&g_2076,&g_2182[3][1],&g_2182[3][1],&g_2182[3][1],&g_2182[3][1]},{&g_886,(void*)0,&g_886,(void*)0,(void*)0,&g_886,(void*)0},{&g_2182[3][1],&g_886,&g_2076,&g_2076,&g_886,&g_2182[3][1],&g_886}},{{&g_886,(void*)0,(void*)0,&g_23,&g_886,&g_23,&g_886},{&g_2182[3][1],&g_2182[3][1],(void*)0,&g_886,(void*)0,&g_2182[3][1],&g_2182[3][1]},{(void*)0,&g_886,(void*)0,&g_886,(void*)0,(void*)0,&g_886},{&g_2076,&g_2182[3][1],&g_2076,(void*)0,(void*)0,&g_2076,&g_2182[3][1]},{&g_886,&g_886,(void*)0,(void*)0,&g_886,&g_886,&g_886}},{{&g_2076,(void*)0,(void*)0,&g_2076,&g_2182[3][1],&g_2076,(void*)0},{(void*)0,(void*)0,&g_886,(void*)0,&g_886,(void*)0,(void*)0},{&g_2182[3][1],(void*)0,&g_886,(void*)0,&g_2182[3][1],&g_2182[3][1],(void*)0},{&g_23,&g_886,&g_23,&g_886,&g_886,&g_23,&g_886},{(void*)0,&g_2182[3][1],&g_886,&g_886,&g_2182[3][1],(void*)0,&g_2182[3][1]}}};
            struct S2 ** const **l_2200 = (void*)0;
            struct S2 ** const **l_2201 = &l_2199;
            const struct S2 * const * const **l_2205 = &l_2202;
            struct S0 l_2215 = {2};
            int8_t * const l_2244 = &g_10;
            union U3 l_2280 = {0x9A54DFD5L};
            int32_t **l_2291 = &l_2265[4][4];
            int i, j, k;
            (*l_1766) ^= (-6L);
            if (l_2146[5][0][0])
            { 
                int8_t *l_2149 = &g_299[0][1][0];
                struct S1 *l_2151 = (void*)0;
                int32_t l_2167 = 0x8DEC3C17L;
                union U4 *l_2180 = &g_23;
                int32_t l_2189 = 0x46006F83L;
                int32_t **l_2198 = &g_306[2];
                (**g_354) = func_53(l_2147, l_2148, l_1764, (((*g_315) == (l_2149 = func_63(g_1612[0]))) , (l_2150 = 255UL)), (*g_806));
                if ((l_2151 == &g_1207))
                { 
                    int32_t *l_2152 = &l_2142;
                    int32_t *l_2153 = (void*)0;
                    int32_t *l_2154 = &l_2150;
                    int32_t *l_2155 = &g_274.f0;
                    int32_t *l_2156 = (void*)0;
                    int32_t *l_2157 = &g_426;
                    int32_t l_2158 = (-10L);
                    int32_t *l_2161 = &l_2160;
                    int32_t *l_2162 = &l_1793;
                    int32_t *l_2163 = (void*)0;
                    int32_t *l_2164 = &g_98;
                    int32_t *l_2165 = &g_39;
                    int32_t *l_2166[6][5] = {{&g_73,&g_1439[1],&g_1439[1],&g_73,&g_1439[1]},{&l_1896[1],&l_1896[1],&l_2159,&l_1896[1],&l_1896[1]},{&g_1439[1],&g_73,&g_1439[1],&g_1439[1],&g_73},{&l_1896[1],&l_1896[3],&l_1896[3],&l_1896[1],&l_1896[3]},{&g_73,&g_73,&l_2158,&g_73,&g_73},{&l_1896[3],&l_1896[1],&l_1896[3],&l_1896[3],&l_1896[1]}};
                    int64_t l_2171 = 0xB89ECDDA744FFE2CLL;
                    uint16_t l_2175 = 0x2286L;
                    int i, j;
                    l_2175--;
                    return l_2174[5][3][1];
                }
                else
                { 
                    uint16_t *****l_2178[3];
                    int32_t *l_2183 = (void*)0;
                    int32_t *l_2184 = &l_2173;
                    int32_t *l_2185 = &l_2174[5][3][1];
                    int32_t l_2186 = 1L;
                    int32_t *l_2187 = &l_2186;
                    int32_t *l_2188[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2178[i] = &l_1987;
                    for (i = 0; i < 1; i++)
                        l_2188[i] = &l_2173;
                    l_2181[1][1][6] = ((0UL >= (&g_1371 != (l_2179[0][4] = &l_1988[6][0]))) , l_2180);
                    l_2190++;
                    if (g_23.f3)
                        goto lbl_2197;
                    (*l_2187) |= ((*l_2185) = l_2142);
lbl_2197:
                    l_2195[6] = g_2193;
                    (*l_2185) &= l_2146[5][0][0];
                }
                (*l_2198) = &g_98;
                return l_2142;
            }
            else
            { 
                (*l_1766) = (-8L);
            }
            if ((((*l_2201) = l_2199) != ((*l_2205) = l_2202)))
            { 
                int32_t l_2212 = 0xB8B7E7C3L;
                struct S0 l_2216 = {5};
                const union U4 **l_2219 = &l_2218;
                l_2216 = (l_2215 = ((safe_div_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s((((*l_1766) >= (safe_mod_func_uint64_t_u_u(8UL, 0xBA531BA182CD868ELL))) | ((((l_2212 &= (-2L)) < (*g_1450)) || (*g_1450)) > (g_1612[3] = ((safe_mod_func_int64_t_s_s(0xF780AAC7B1F212B8LL, 0x3A3F01CC678D3139LL)) >= g_298.f0)))), 12)) && g_390), 0xD011D527L)) , (***g_353)));
                (*l_1766) &= l_2160;
                (*l_1766) ^= (l_2217[2] , 1L);
                (*l_2219) = l_2218;
            }
            else
            { 
                int32_t **l_2220 = &g_2129;
                const int8_t *l_2242 = &g_2243[2][1];
                const int8_t **l_2241 = &l_2242;
                uint8_t *l_2253 = &g_143;
                union U3 l_2263 = {-6L};
                union U3 ***l_2285 = &g_1181;
                (*l_2220) = (((-1L) && (g_46[3] < 255UL)) , &g_73);
                (**l_2220) = (safe_div_func_int8_t_s_s(((*l_2148) ^= ((*g_2129) , (safe_sub_func_uint8_t_u_u((((*l_1766) | ((safe_mul_func_uint8_t_u_u((((**g_293) == (**g_293)) || ((safe_div_func_int32_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((((((safe_mul_func_int16_t_s_s(0x7F20L, (safe_lshift_func_uint16_t_u_u((((*l_2241) = (**g_314)) == l_2244), l_2173)))) >= g_45[5]) >= (*g_2129)) == (*l_1766)) > (**l_2220)), 6)), g_1124.f0)), g_984.f2.f0)) , (-8L)), (*l_1766))) || (*g_642))), g_984.f4.f4)) > (***g_314))) | (*g_642)), 4L)))), 0x22L));
                if (g_11.f1)
                    goto lbl_2318;
                if ((+(0x9BFA1BB4L < (l_2246 == ((((safe_rshift_func_int16_t_s_u((0x48DD009DL < ((g_390 &= g_125) == ((*l_2253) ^= (((safe_div_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((&g_1371 == (((*g_157) , 0xD2L) , (void*)0)), 0xF24AL)) , 1L), (*l_1766))) > l_2246) != (*l_1766))))), (**l_2220))) != l_2169) || l_2254[2]) , (*g_642))))))
                { 
                    uint8_t l_2258[3];
                    int32_t *l_2264[2];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_2258[i] = 0x58L;
                    for (i = 0; i < 2; i++)
                        l_2264[i] = &g_426;
                    l_2159 &= (~(((safe_mul_func_uint16_t_u_u(l_2258[0], (safe_div_func_int16_t_s_s((((((safe_add_func_uint32_t_u_u(0x778491C0L, ((*g_2129) | 0x6EE72249L))) ^ ((*l_2253) = (&g_983 != (l_2263 , &g_983)))) ^ 18446744073709551606UL) , (void*)0) != (void*)0), (*l_1766))))) <= 0x7F0CL) , (*l_1766)));
                    (*g_2129) ^= 0x647028B8L;
                }
                else
                { 
                    const struct S0 ****l_2270 = &g_2269;
                    const struct S0 ****l_2272[4][6][2] = {{{&l_2271,&l_2271},{&l_2271,&l_2271},{&l_2271,&l_2271},{&l_2271,(void*)0},{&l_2271,(void*)0},{&l_2271,&l_2271}},{{&l_2271,&l_2271},{&l_2271,&l_2271},{&l_2271,(void*)0},{&l_2271,(void*)0},{&l_2271,&l_2271},{&l_2271,&l_2271}},{{&l_2271,&l_2271},{&l_2271,(void*)0},{&l_2271,(void*)0},{&l_2271,&l_2271},{&l_2271,&l_2271},{&l_2271,&l_2271}},{{&l_2271,(void*)0},{&l_2271,(void*)0},{&l_2271,&l_2271},{&l_2271,&l_2271},{&l_2271,&l_2271},{&l_2271,(void*)0}}};
                    int32_t l_2273 = (-1L);
                    uint16_t *l_2275 = (void*)0;
                    int32_t l_2276[4] = {(-1L),(-1L),(-1L),(-1L)};
                    int i, j, k;
                    l_2265[4][4] = (g_2129 = (void*)0);
                    l_2276[2] |= (((((void*)0 != &g_1181) < ((*l_1766) ^ ((l_2266 , g_274) , ((**g_641) |= ((((safe_add_func_int8_t_s_s((((*l_2270) = g_2269) != (l_2271 = l_2271)), l_2273)) > l_2273) , l_2273) ^ l_2274))))) , l_2275) == l_2275);
                    return (*l_1766);
                }
                for (g_558 = 0; (g_558 == 7); g_558 = safe_add_func_int32_t_s_s(g_558, 1))
                { 
                    union U3 ***l_2282 = &g_1181;
                    union U3 ****l_2281 = &l_2282;
                    union U3 ***l_2284 = &g_1181;
                    union U3 ****l_2283[4][6] = {{&l_2284,&l_2284,&l_2284,&l_2284,&l_2284,&l_2284},{(void*)0,&l_2284,&l_2284,&l_2284,&l_2284,&l_2284},{&l_2284,(void*)0,&l_2284,&l_2284,&l_2284,&l_2284},{&l_2284,&l_2284,&l_2284,&l_2284,&l_2284,&l_2284}};
                    int32_t l_2286 = 0x352ECAABL;
                    int i, j;
                    (*l_1766) &= (((~(((((((***g_314) = (g_984.f4.f3 , ((l_2280 , ((*g_157) , &g_1181)) == (l_2285 = ((*l_2281) = (void*)0))))) | (((**l_2220) > ((*g_1450) |= (((l_2286 | (**l_2220)) <= l_2174[1][0][0]) <= 0x777250AC7E0D1905LL))) ^ (**g_641))) > (*g_2129)) >= 18446744073709551615UL) , g_149.f0) <= l_2286)) && 0xC07D7E65FE71F8EFLL) > (*g_806));
                    if (l_2286)
                        break;
                    (*l_2220) = &g_1439[1];
                    if ((*g_2129))
                        break;
                }
                g_2287 = g_2287;
            }
            (*l_2291) = &g_73;
            return (*l_1766);
        }
        for (g_39 = 0; (g_39 >= 0); g_39--)
        { 
            return g_158.f4.f1;
        }
    }
    (*l_2294) = &l_1807;
lbl_2318:
    (*l_2317) ^= (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((!((*l_1766) && (((*l_2315) |= ((*g_1450) ^= (((safe_mod_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u((*l_1766), 11)) | (*g_642)), 1L)) & (safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(((*l_1765) = 0x7F94L), ((((*l_1766) , l_2312) != &l_2313) , (*l_1766)))), 12))), (*l_1766))) <= 0x60504A6B08110508LL) , 0x62519A04L))) <= (*l_1766)))), (*l_1766))), 5));
    return (*l_2317);
}



static int8_t * func_4(int8_t  p_5, struct S1  p_6, int32_t  p_7, int8_t * p_8, uint64_t  p_9)
{ 
    uint8_t l_1189[4] = {0xECL,0xECL,0xECL,0xECL};
    struct S2 l_1204 = {0x30804820L,2L,{9},{2},{28,0xFF728BBEL,2,65,195,190,1L,1},0x758BL};
    uint32_t **l_1220 = (void*)0;
    int32_t l_1222[5] = {0L,0L,0L,0L,0L};
    int32_t l_1260[6] = {5L,1L,5L,5L,1L,5L};
    int64_t l_1297 = 0L;
    union U3 *l_1350[3][6][2] = {{{&g_274,&g_274},{&g_274,&g_274},{(void*)0,(void*)0},{(void*)0,&g_274},{&g_274,&g_274},{&g_274,&g_274}},{{&g_274,&g_274},{&g_274,&g_274},{&g_274,&g_274},{&g_274,&g_274},{&g_274,&g_274},{&g_274,&g_274}},{{&g_274,&g_274},{(void*)0,(void*)0},{(void*)0,&g_274},{&g_274,&g_274},{&g_274,&g_274},{&g_274,&g_274}}};
    int64_t ** const *l_1440 = &g_641;
    int64_t l_1453 = 0xC5EE1787CE02D1B8LL;
    struct S0 * const **l_1475 = (void*)0;
    struct S0 **l_1484 = &g_165;
    int32_t l_1542 = 1L;
    uint16_t l_1549[7] = {0xE389L,0xE389L,0xE389L,0xE389L,0xE389L,0xE389L,0xE389L};
    int32_t *l_1551 = &l_1542;
    uint8_t l_1564[2][5][1] = {{{0x21L},{0xFDL},{0x21L},{0xFDL},{0x21L}},{{0xFDL},{0x21L},{0xFDL},{0x21L},{0xFDL}}};
    int8_t l_1597 = 0x8DL;
    uint32_t l_1598[4];
    int32_t l_1618 = 0xF87F7170L;
    const union U4 l_1625 = {-1L};
    uint32_t l_1717 = 0x6D1456FBL;
    uint32_t *l_1749[1];
    int16_t *l_1761[6] = {(void*)0,&g_448.f1,&g_448.f1,(void*)0,&g_448.f1,&g_448.f1};
    int32_t *l_1762 = &g_274.f0;
    int32_t *l_1763 = &g_1439[0];
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_1598[i] = 18446744073709551607UL;
    for (i = 0; i < 1; i++)
        l_1749[i] = &g_298.f1;
    for (g_11.f1 = 0; (g_11.f1 > 39); g_11.f1 = safe_add_func_uint32_t_u_u(g_11.f1, 3))
    { 
        int8_t l_19 = (-1L);
        union U4 l_1187 = {-1L};
        uint32_t l_1200 = 0xC09496E5L;
        struct S1 *l_1206[1][5] = {{&g_298,&g_298,&g_298,&g_298,&g_298}};
        int32_t *l_1231[4];
        int32_t l_1250 = 0x60EC717BL;
        int32_t l_1251 = 3L;
        int32_t l_1252 = 0x737C347FL;
        int32_t l_1253 = 7L;
        int32_t l_1254 = 0x5EB677A5L;
        int32_t l_1255 = (-10L);
        int32_t l_1256 = 0xB14D2B93L;
        int32_t l_1257 = 0L;
        int32_t l_1258 = 0xEE878AE4L;
        int32_t l_1259 = 0L;
        int32_t l_1261 = 0x3BE5A405L;
        int32_t l_1262 = 0xB90F3FB8L;
        int32_t l_1263 = (-9L);
        int32_t *l_1336 = &l_1222[1];
        int i, j;
        for (i = 0; i < 4; i++)
            l_1231[i] = &g_1207.f6;
        for (g_10 = 0; (g_10 >= (-29)); --g_10)
        { 
            union U4 *l_22 = &g_23;
            union U4 *l_885 = &g_886;
            int8_t *l_888[3];
            int i;
            for (i = 0; i < 3; i++)
                l_888[i] = (void*)0;
            for (p_5 = 0; (p_5 <= 6); p_5 = safe_add_func_int16_t_s_s(p_5, 1))
            { 
                int8_t *l_37 = &l_19;
                int32_t l_1180[2];
                int32_t **l_1184 = &g_306[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1180[i] = 6L;
                if (l_19)
                    break;
            }
        }
        for (g_448.f0 = (-21); (g_448.f0 < 53); ++g_448.f0)
        { 
            uint8_t *l_1188 = &g_143;
            uint32_t *l_1201[6][2][5] = {{{(void*)0,&g_448.f4.f1,&g_448.f4.f1,(void*)0,(void*)0},{(void*)0,&g_89,(void*)0,&g_11.f1,(void*)0}},{{(void*)0,(void*)0,&g_11.f1,&g_448.f4.f1,(void*)0},{&g_89,&g_11.f1,&g_125,&g_11.f1,&g_89}},{{(void*)0,&g_448.f4.f1,&g_11.f1,(void*)0,(void*)0},{(void*)0,&g_11.f1,(void*)0,&g_89,(void*)0}},{{(void*)0,(void*)0,&g_448.f4.f1,&g_448.f4.f1,(void*)0},{&g_89,&g_89,&g_125,&g_89,&g_89}},{{(void*)0,&g_448.f4.f1,&g_448.f4.f1,(void*)0,(void*)0},{(void*)0,&g_89,(void*)0,&g_11.f1,(void*)0}},{{(void*)0,(void*)0,&g_11.f1,&g_448.f4.f1,(void*)0},{&g_89,&g_11.f1,&g_125,&g_11.f1,&g_89}}};
            int32_t l_1202 = 0x5A479ECCL;
            uint8_t l_1203 = 0xE5L;
            struct S1 **l_1205[6] = {&g_297,&g_297,&g_297,&g_297,&g_297,&g_297};
            int i, j, k;
            l_1206[0][0] = ((((((l_1187 , (((l_1189[2] = ((*l_1188) = p_7)) != (&g_39 != (void*)0)) <= p_6.f6)) & (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u(((l_1202 = (safe_sub_func_uint64_t_u_u(((l_19 == g_984.f3.f0) ^ g_448.f4.f5), l_1200))) , l_1203), 15)), 0)) ^ l_1187.f2), 7L)), g_448.f2.f0))) , l_1189[0]) <= 3UL) , l_1204) , &p_6);
            return (**g_314);
        }
        if ((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((*p_8), 7)), ((safe_mul_func_int8_t_s_s((l_1222[4] = (safe_lshift_func_uint8_t_u_u((l_19 & (((safe_mod_func_uint32_t_u_u(0xBD4F0A64L, (safe_add_func_uint32_t_u_u((l_1220 == (void*)0), l_1187.f3)))) != ((+((*p_8) && (*p_8))) == l_1204.f4.f5)) , l_1204.f4.f1)), l_1204.f4.f5))), 255UL)) , 0xC160L))))
        { 
            uint32_t *l_1241 = &l_1200;
            int32_t l_1247 = 0x8083524CL;
            int32_t l_1249[3][2] = {{0x1668EBEFL,0x1668EBEFL},{0x1668EBEFL,0x1668EBEFL},{0x1668EBEFL,0x1668EBEFL}};
            int8_t *l_1284 = &l_19;
            int32_t l_1292 = 0L;
            int i, j;
            for (g_984.f0 = (-17); (g_984.f0 != 15); g_984.f0 = safe_add_func_int64_t_s_s(g_984.f0, 1))
            { 
                const int16_t l_1242 = 1L;
                int32_t *l_1243 = &g_98;
                int32_t *l_1244 = (void*)0;
                int32_t *l_1245 = &g_98;
                int32_t *l_1246 = (void*)0;
                int32_t *l_1248[6];
                uint64_t l_1264 = 0x41CACBF9A180F463LL;
                union U4 *l_1269[5][2][5] = {{{&g_1124,&g_23,(void*)0,&g_886,&g_23},{&g_886,&g_23,&g_23,(void*)0,(void*)0}},{{&g_886,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_886,&l_1187,(void*)0}},{{&g_886,&g_23,(void*)0,&g_886,&g_886},{&g_1124,&g_23,(void*)0,&g_886,&g_23}},{{&g_886,&g_23,&g_23,(void*)0,(void*)0},{&g_886,&g_23,&g_23,&g_23,&g_23}},{{&g_23,&g_23,&g_886,&l_1187,(void*)0},{&g_886,&g_23,(void*)0,&g_886,&g_886}}};
                uint64_t *l_1289 = &g_410;
                uint64_t **l_1288 = &l_1289;
                uint64_t ***l_1287 = &l_1288;
                uint16_t l_1298[3];
                int i, j, k;
                for (i = 0; i < 6; i++)
                    l_1248[i] = &l_1247;
                for (i = 0; i < 3; i++)
                    l_1298[i] = 65532UL;
                for (g_147 = 0; (g_147 <= 4); g_147 += 1)
                { 
                    int32_t *l_1225 = &l_1222[4];
                    int i;
                    (*g_354) = (*g_354);
                    (*l_1225) = 0x27764307L;
                    (*g_165) = (*g_165);
                    (*l_1225) |= (safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int32_t_s(((safe_sub_func_uint32_t_u_u(((l_1231[1] != (g_1232 = &p_7)) & ((*p_8) < ((*g_806) || (safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(0x38L, ((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((0L ^ (l_1241 == g_306[2])), p_6.f1)), 0x37L)) <= g_1207.f3))), p_6.f2))))), 0x88350FEDL)) , l_1242))), p_7));
                }
                --l_1264;
                for (l_1253 = 18; (l_1253 < (-21)); l_1253 = safe_sub_func_int32_t_s_s(l_1253, 8))
                { 
                    uint64_t *l_1274 = &g_410;
                    int16_t *l_1281 = (void*)0;
                    int16_t *l_1282 = (void*)0;
                    int16_t *l_1283 = &g_448.f1;
                    (***g_353) = func_53(l_1269[0][1][1], ((((safe_div_func_int16_t_s_s((((*l_1283) = (safe_div_func_int64_t_s_s((((p_6.f6 || 0x849DL) < ((65535UL ^ (((*l_1274)--) != (safe_mod_func_int32_t_s_s(((*g_806) && (safe_mul_func_uint16_t_u_u(65530UL, 0xE37FL))), (-1L))))) >= l_1204.f3.f0)) , (**g_641)), 0xF1381D5B061562D7LL))) < g_984.f2.f0), 65534UL)) , 0x81D5FF71L) & l_1249[2][0]) , (void*)0), l_1284, l_1247, l_1249[2][1]);
                }
                for (p_6.f6 = 0; p_6.f6 < 1; p_6.f6 += 1)
                {
                    for (g_89 = 0; g_89 < 5; g_89 += 1)
                    {
                        l_1206[p_6.f6][g_89] = &g_158.f4;
                    }
                }
                for (l_1254 = 0; (l_1254 >= (-4)); --l_1254)
                { 
                    uint64_t ****l_1290 = &l_1287;
                    int32_t l_1291 = 0x10483E6EL;
                    int32_t l_1293 = 0L;
                    int32_t l_1294 = 9L;
                    int32_t l_1295 = 0L;
                    int32_t l_1296 = 0x469B035DL;
                    (*l_1290) = l_1287;
                    ++l_1298[1];
                    if (l_1293)
                        continue;
                    (*l_1243) &= (safe_sub_func_uint8_t_u_u(p_6.f7, (*g_316)));
                }
            }
            return (*g_315);
        }
        else
        { 
            int8_t l_1333[6][7][3] = {{{0xCDL,0x2AL,0x14L},{0x8CL,(-1L),0x8AL},{1L,0x72L,0x72L},{(-1L),0xA9L,0x72L},{0xB6L,(-1L),0xFFL},{0x14L,0xB6L,1L},{0x3BL,0x43L,0xA9L}},{{1L,0xB6L,1L},{0xCDL,(-1L),(-4L)},{0xA9L,0xA9L,0xB6L},{0xA9L,0x72L,1L},{0xCDL,0x8AL,0x8CL},{1L,1L,0xCDL},{0x3BL,0xCDL,0x8CL}},{{0x14L,0x2AL,1L},{0xB6L,0x2AL,0xB6L},{(-1L),0x2AL,(-4L)},{(-4L),0x2AL,1L},{0x2AL,0xCDL,0xA9L},{(-1L),1L,1L},{0x2AL,0x8AL,0xFFL}},{{(-4L),0x72L,0x72L},{(-1L),0xA9L,0x72L},{0xB6L,(-1L),0xFFL},{0x14L,0xB6L,1L},{0x3BL,0x43L,0xA9L},{1L,0xB6L,1L},{0xCDL,(-1L),(-4L)}},{{0xA9L,0xA9L,0xB6L},{0xA9L,0x72L,1L},{0xCDL,0x8AL,0x8CL},{1L,1L,0xCDL},{0x3BL,0xCDL,0x8CL},{0x14L,0x2AL,1L},{0xB6L,0x2AL,0xB6L}},{{(-1L),0x2AL,(-4L)},{(-4L),0x2AL,1L},{0x2AL,0xCDL,0xA9L},{(-1L),1L,1L},{0x2AL,0x8AL,0xFFL},{(-4L),0x72L,0x72L},{(-1L),0xA9L,0x72L}}};
            int i, j, k;
            for (g_886.f0 = (-1); (g_886.f0 == 23); g_886.f0++)
            { 
                uint16_t l_1305 = 65535UL;
                union U4 ***l_1316 = &g_695[2];
                union U4 ****l_1317 = &l_1316;
                int32_t *l_1319 = (void*)0;
                int32_t *l_1320 = &l_1254;
                uint32_t l_1332 = 6UL;
                (*l_1320) &= (l_1305 == ((safe_div_func_uint8_t_u_u((0x9B1AL <= (((safe_div_func_uint32_t_u_u(p_9, (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(l_1189[2], (safe_rshift_func_uint16_t_u_s(0xA8E6L, 12)))), 5)))) ^ (((((*l_1317) = l_1316) == &g_456[0]) & 7L) == l_1305)) || l_1187.f0)), (-1L))) >= g_1318[1]));
                for (l_1204.f5 = 0; (l_1204.f5 <= 14); ++l_1204.f5)
                { 
                    int16_t *l_1325[1][1][1];
                    union U3 l_1328 = {0L};
                    uint64_t *l_1334[7][6] = {{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147},{&g_147,(void*)0,&g_410,&g_147,(void*)0,&g_147},{&g_147,(void*)0,&g_147,&g_147,(void*)0,&g_410},{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147},{&g_147,(void*)0,&g_410,&g_147,(void*)0,&g_147},{&g_147,(void*)0,&g_147,&g_147,(void*)0,&g_410},{&g_147,&g_147,&g_147,&g_147,&g_147,&g_147}};
                    const int32_t l_1335 = 0x0516C9A1L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1325[i][j][k] = (void*)0;
                        }
                    }
                    (*l_1320) ^= (safe_sub_func_int64_t_s_s(((g_121 = g_448.f4.f4) | (g_158.f1 = (l_1222[2] = (((safe_add_func_int16_t_s_s(0x4578L, ((3L && p_6.f7) <= (l_1328 , (safe_mul_func_uint8_t_u_u((0xC7EA85CAC8FA028FLL || (((p_9 &= (((safe_unary_minus_func_int8_t_s((((l_1204 , l_1187.f3) && l_1332) > g_1124.f3))) || p_6.f1) == l_1333[1][3][0])) && 1L) | l_1333[1][3][2])), p_5)))))) > 0x97L) & l_1335)))), 18446744073709551615UL));
                    if (p_9)
                        break;
                }
                l_1250 ^= (0x99DAL || g_1207.f4);
            }
        }
        (*l_1336) |= l_1260[4];
    }
lbl_1393:
    l_1222[3] = ((safe_div_func_int64_t_s_s((l_1260[1] = (g_299[4][3][4] != g_448.f4.f3)), (*g_806))) & p_6.f7);
    for (g_98 = (-20); (g_98 >= 17); ++g_98)
    { 
        struct S1 *l_1341 = (void*)0;
        int8_t *l_1343 = &g_299[4][2][1];
        int32_t l_1345[2];
        union U4 **l_1351[7] = {&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3],&g_696[5][2][3]};
        struct S2 l_1388[5] = {{0UL,0x8450L,{7},{0},{3,4294967295UL,3,8,124,2329,3L,1},0x5223L},{0UL,0x8450L,{7},{0},{3,4294967295UL,3,8,124,2329,3L,1},0x5223L},{0UL,0x8450L,{7},{0},{3,4294967295UL,3,8,124,2329,3L,1},0x5223L},{0UL,0x8450L,{7},{0},{3,4294967295UL,3,8,124,2329,3L,1},0x5223L},{0UL,0x8450L,{7},{0},{3,4294967295UL,3,8,124,2329,3L,1},0x5223L}};
        int32_t l_1390 = (-1L);
        const union U3 l_1483 = {-1L};
        struct S1 l_1487 = {7,4294967295UL,9,32,58,2399,0xE4608318L,0};
        const struct S0 *l_1497 = &g_984.f2;
        const struct S0 **l_1496 = &l_1497;
        const struct S0 ***l_1495 = &l_1496;
        uint16_t l_1589 = 65529UL;
        int32_t *l_1610[6][3] = {{&l_1390,(void*)0,(void*)0},{&g_426,(void*)0,&l_1260[4]},{&g_1439[1],&l_1390,&g_73},{&g_426,&g_426,&g_73},{&l_1390,&g_1439[1],&l_1260[4]},{(void*)0,&g_426,(void*)0}};
        const int64_t l_1666 = (-1L);
        int i, j;
        for (i = 0; i < 2; i++)
            l_1345[i] = 0x882CD78FL;
        for (g_23.f3 = 0; (g_23.f3 <= 4); g_23.f3 += 1)
        { 
            uint8_t l_1347 = 0UL;
            union U4 **l_1353 = &g_696[5][2][3];
            int32_t *l_1356 = &g_426;
            uint32_t l_1375 = 0xB54CDB31L;
            l_1341 = &g_1207;
            for (p_6.f6 = 4; (p_6.f6 >= 0); p_6.f6 -= 1)
            { 
                int32_t *l_1342 = &g_39;
                int32_t **l_1355[1];
                uint16_t *l_1364[6] = {&g_274.f2,&g_274.f2,&g_274.f2,&g_274.f2,&g_274.f2,&g_274.f2};
                uint16_t * const ***l_1373 = &g_1371;
                int64_t *l_1374[7][4][4] = {{{&g_886.f0,&l_1297,(void*)0,&g_23.f0},{&l_1297,&l_1297,(void*)0,&l_1297},{&l_1297,&g_886.f3,&g_886.f0,&g_23.f0},{&g_1124.f0,(void*)0,&g_1124.f0,(void*)0}},{{&l_1297,&g_23.f0,&l_1297,&l_1297},{(void*)0,&g_886.f0,&g_23.f0,&g_23.f0},{(void*)0,&l_1297,&g_23.f0,&g_886.f3},{(void*)0,&l_1297,&l_1297,&g_558}},{{&l_1297,&g_1124.f0,&g_1124.f0,&l_1297},{&g_1124.f0,&l_1297,&g_886.f0,(void*)0},{&l_1297,(void*)0,(void*)0,&l_1297},{&l_1297,(void*)0,(void*)0,&l_1297}},{{&g_886.f0,(void*)0,&g_23.f0,(void*)0},{&g_23.f0,&l_1297,&g_1124.f0,&l_1297},{(void*)0,&g_1124.f0,(void*)0,&g_558},{&g_886.f3,&l_1297,&g_1124.f0,&g_886.f3}},{{&l_1297,&l_1297,(void*)0,&g_23.f0},{&l_1297,&g_886.f0,&g_1124.f0,&l_1297},{&g_886.f3,&g_23.f0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_1124.f0,&g_23.f0}},{{&g_23.f0,&g_886.f3,&g_23.f0,&l_1297},{&g_886.f0,&l_1297,(void*)0,&g_23.f0},{&l_1297,&l_1297,(void*)0,&l_1297},{&l_1297,&g_886.f3,&g_886.f0,&g_23.f0}},{{&g_1124.f0,(void*)0,&g_1124.f0,(void*)0},{&l_1297,&g_23.f0,&l_1297,&l_1297},{(void*)0,&g_886.f0,&g_23.f0,&g_23.f0},{(void*)0,&l_1297,&g_23.f0,&g_886.f3}}};
                uint8_t *l_1389[3][5] = {{&g_93,(void*)0,&g_143,&g_390,&g_390},{(void*)0,&g_93,(void*)0,&g_143,&g_390},{&g_390,&g_143,&g_390,&g_143,&g_390}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1355[i] = &g_306[3];
                g_306[2] = &g_426;
                if (((*l_1342) = (l_1222[p_6.f6] = 0xD23E3B9EL)))
                { 
                    return l_1343;
                }
                else
                { 
                    int32_t *l_1344 = &l_1222[p_6.f6];
                    int32_t *l_1346[4];
                    union U4 ***l_1352 = (void*)0;
                    union U4 ***l_1354 = &g_695[2];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1346[i] = &l_1222[p_6.f6];
                    l_1347++;
                    (*g_1181) = l_1350[2][1][1];
                    (*l_1354) = (l_1353 = l_1351[1]);
                    if (g_299[g_23.f3][g_23.f3][p_6.f6])
                        continue;
                }
                l_1356 = &l_1345[1];
                (**g_354) = ((l_1204.f4.f2 == ((0x7F0CL != (safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((~(--g_984.f5)), (safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(((((((l_1375 |= (((*l_1373) = g_1371) == (void*)0)) <= ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((((safe_div_func_int32_t_s_s((((*l_1356) > (safe_mod_func_uint8_t_u_u((l_1390 = (safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(l_1260[4], (l_1388[3] , l_1222[1]))), p_6.f4))), g_44))) ^ l_1388[3].f2.f0), p_6.f7)) && p_7) | 0x2C17L) == g_158.f0) != 1UL), 7)), g_158.f4.f1)) < l_1222[4])) != (*g_806)) != p_6.f4) < (*l_1356)) , p_6.f6), p_6.f1)), (*g_806))))) > (*p_8)), 1L))) > (*p_8))) , (***g_353));
            }
        }
        for (g_984.f1 = 0; (g_984.f1 != 14); ++g_984.f1)
        { 
            int32_t *l_1394 = &l_1345[1];
            union U4 * const l_1397 = &g_1124;
            union U3 * const *l_1467 = &l_1350[2][1][1];
            int32_t l_1502 = (-1L);
            int8_t l_1565 = 0x9CL;
            int32_t l_1590 = 5L;
            int32_t l_1591[3][6] = {{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L},{0L,0L,0L,0L,0L,0L}};
            uint32_t l_1593 = 18446744073709551615UL;
            int64_t l_1595 = 6L;
            int32_t l_1596 = 0xB031ABB4L;
            uint8_t *l_1614 = &l_1564[0][2][0];
            int32_t **l_1617[1][7][6] = {{{&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2]},{&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2]},{&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2]},{&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2]},{&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2]},{&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2],&g_306[2]},{&g_306[2],&g_306[2],&g_306[2],&g_306[4],&g_306[4],&g_306[2]}}};
            int i, j, k;
            if (p_9)
                goto lbl_1393;
        }
    }
    (*l_1763) |= ((((**g_641) = (*l_1551)) != p_5) && ((safe_add_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((((safe_div_func_int32_t_s_s(((l_1625 , (*l_1551)) <= (safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((!(((*g_1450) || ((*l_1762) = ((g_831 = 0L) || (*l_1551)))) != 0x22C91BC7L)), (*p_8))), (*l_1551)))), (*l_1551))) == 0x56L) ^ 0x673FA4CE00A4072CLL), (***g_314))), p_6.f4)) < (*l_1551)));
    return (**g_314);
}



static int32_t  func_25(int32_t  p_26, int8_t * p_27)
{ 
    uint64_t *l_891 = &g_410;
    int32_t l_898 = 0x73F76D8DL;
    int32_t *l_904 = &l_898;
    int32_t l_922[2][1][7] = {{{0xD3F0C073L,0xD3F0C073L,(-2L),0xD3F0C073L,0xD3F0C073L,(-2L),0xD3F0C073L}},{{0xD3F0C073L,0xF190FDAAL,0xF190FDAAL,0xD3F0C073L,0xF190FDAAL,0xF190FDAAL,0xD3F0C073L}}};
    struct S2 *l_981 = &g_448;
    union U4 l_991 = {0x8BF93AD641A8E4B9LL};
    const uint16_t ***l_1001 = (void*)0;
    struct S1 l_1009 = {6,0xCA407EC2L,15,63,13,536,-1L,1};
    union U3 l_1013 = {0xDC096AE6L};
    struct S0 *l_1026[5] = {&g_448.f3,&g_448.f3,&g_448.f3,&g_448.f3,&g_448.f3};
    int16_t l_1066[2];
    struct S0 l_1091[5] = {{3},{3},{3},{3},{3}};
    int16_t l_1116 = 0L;
    union U4 *l_1123 = &g_1124;
    uint32_t l_1155[2];
    int64_t ** const *l_1164 = &g_641;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1066[i] = 0L;
    for (i = 0; i < 2; i++)
        l_1155[i] = 0UL;
lbl_1028:
    if ((safe_sub_func_int16_t_s_s((((*g_642) || (l_891 != (void*)0)) || ((*g_157) , (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((l_898 && (l_898 > (p_26 >= g_158.f4.f5))), 0x197ABCFDL)), l_898)))), 0x9106L)))
    { 
        int32_t l_909[1][4][3] = {{{0xAC2FE810L,0xAC2FE810L,0xF2B427ECL},{0x00E0F9A6L,0xF2B427ECL,0xF2B427ECL},{0xF2B427ECL,0x6E5A1D7CL,0x9531C32EL},{0x00E0F9A6L,0x6E5A1D7CL,0x00E0F9A6L}}};
        int8_t *l_917 = &g_10;
        int16_t *l_918 = &g_158.f1;
        uint8_t l_919 = 0UL;
        int32_t *l_920 = (void*)0;
        int32_t *l_921[4][6][3] = {{{&g_426,(void*)0,(void*)0},{&g_426,&l_898,(void*)0},{&l_909[0][1][0],&g_274.f0,(void*)0},{&g_426,&g_426,(void*)0},{&l_909[0][1][2],&g_98,(void*)0},{&l_898,&g_426,(void*)0}},{{&g_426,(void*)0,(void*)0},{&g_426,&l_898,(void*)0},{&l_909[0][1][0],&g_274.f0,(void*)0},{&g_426,&g_426,(void*)0},{&l_909[0][1][2],&g_98,(void*)0},{&l_898,&g_426,(void*)0}},{{&g_426,(void*)0,(void*)0},{&g_426,&l_898,(void*)0},{&l_909[0][1][0],&g_274.f0,(void*)0},{&g_426,&g_426,(void*)0},{&l_909[0][1][2],&g_98,(void*)0},{&l_898,&g_426,(void*)0}},{{&g_426,(void*)0,(void*)0},{&g_426,&l_898,(void*)0},{&l_909[0][1][0],&g_274.f0,(void*)0},{&g_426,&g_426,(void*)0},{&l_909[0][1][2],&g_98,(void*)0},{&l_898,&g_426,(void*)0}}};
        uint32_t *l_933[4][4][2] = {{{&g_11.f1,&g_448.f4.f1},{&g_298.f1,&g_448.f4.f1},{&g_11.f1,&g_158.f4.f1},{&g_158.f4.f1,&g_11.f1}},{{&g_448.f4.f1,&g_298.f1},{&g_448.f4.f1,&g_11.f1},{&g_158.f4.f1,&g_158.f4.f1},{&g_11.f1,&g_448.f4.f1}},{{&g_298.f1,&g_448.f4.f1},{&g_11.f1,&g_158.f4.f1},{&g_158.f4.f1,&g_11.f1},{&g_448.f4.f1,&g_298.f1}},{{&g_448.f4.f1,&g_11.f1},{&g_158.f4.f1,&g_158.f4.f1},{&g_11.f1,&g_448.f4.f1},{&g_298.f1,&g_448.f4.f1}}};
        int i, j, k;
        l_898 = l_898;
        for (g_300 = 0; (g_300 <= 5); g_300 += 1)
        { 
            int16_t *l_901 = &g_831;
            int32_t *l_902 = &l_898;
            int i;
            if (((*l_902) = (safe_add_func_int64_t_s_s(((*g_642) &= (g_46[g_300] | ((*g_806) || ((*l_891) = (((*l_901) = g_45[5]) && p_26))))), (g_147 = 1UL)))))
            { 
                int32_t *l_903 = &g_274.f0;
                l_904 = ((*l_902) , l_903);
                for (g_89 = 0; (g_89 <= 5); g_89 += 1)
                { 
                    (*l_904) = (~p_26);
                }
                for (g_93 = 0; (g_93 <= 5); g_93 += 1)
                { 
                    uint32_t *l_906 = &g_89;
                    int i;
                    (*l_902) &= (((*l_906) = 0x46C7CE9FL) >= ((*l_903) = (safe_mod_func_uint16_t_u_u(g_534[g_93], g_534[g_300]))));
                    return g_45[g_93];
                }
                return l_909[0][1][0];
            }
            else
            { 
                struct S2 **l_912 = &g_157;
                (*l_904) = (safe_sub_func_uint32_t_u_u(l_909[0][1][0], (l_909[0][1][0] ^ g_448.f1)));
                (*l_912) = &g_448;
                return p_26;
            }
        }
        l_922[0][0][2] |= (((((p_26 || ((*l_918) = ((safe_add_func_int16_t_s_s(0xB6A1L, 65534UL)) , (((void*)0 == &g_448) == (p_27 == l_917))))) != (*l_904)) , g_143) | 0xD7L) , l_919);
        (*l_904) |= p_26;
        for (g_147 = 4; (g_147 >= 21); ++g_147)
        { 
            uint32_t *l_968[7][2][2] = {{{&g_158.f4.f1,(void*)0},{&g_298.f1,&g_158.f4.f1}},{{&g_158.f4.f1,&g_158.f4.f1},{&g_158.f4.f1,&g_158.f4.f1}},{{&g_298.f1,(void*)0},{&g_158.f4.f1,(void*)0}},{{&g_298.f1,&g_158.f4.f1},{&g_158.f4.f1,&g_158.f4.f1}},{{&g_158.f4.f1,&g_158.f4.f1},{&g_298.f1,(void*)0}},{{&g_158.f4.f1,(void*)0},{&g_298.f1,&g_158.f4.f1}},{{&g_158.f4.f1,&g_158.f4.f1},{&g_158.f4.f1,&g_158.f4.f1}}};
            int i, j, k;
            l_922[0][0][2] &= (safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((g_306[2] != g_306[0]), 1)) >= (*l_904)), (safe_add_func_int32_t_s_s(((l_920 == l_933[0][3][0]) > (*l_904)), (safe_lshift_func_int16_t_s_s(((safe_div_func_int64_t_s_s((safe_sub_func_uint16_t_u_u((&g_297 == (void*)0), (-8L))), p_26)) <= g_44), g_158.f4.f2)))))), (*l_904)));
            for (g_298.f1 = 5; (g_298.f1 == 1); g_298.f1 = safe_sub_func_uint16_t_u_u(g_298.f1, 9))
            { 
                uint8_t l_943 = 255UL;
                int32_t l_944 = 0x3E288B21L;
                uint8_t *l_965 = &g_143;
                uint32_t **l_969 = &l_933[2][2][1];
                (*l_904) |= (~l_943);
                l_944 ^= ((*l_904) = l_943);
                (*l_904) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0xA4F2L, ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((-1L), (safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_944 > (safe_sub_func_uint8_t_u_u((l_944 , ((*l_965) &= p_26)), ((safe_mod_func_uint32_t_u_u((l_968[1][1][1] == ((*l_969) = l_904)), 0x8975B76FL)) != (*l_904))))), 6)), p_26)), (*l_904))), l_944)), 1UL)))), p_26)) & (***g_314)))), (****g_313)));
            }
        }
    }
    else
    { 
        int16_t l_975[5] = {0x7ECBL,0x7ECBL,0x7ECBL,0x7ECBL,0x7ECBL};
        int32_t l_976 = (-1L);
        int32_t l_977[2];
        uint32_t l_978 = 1UL;
        int8_t l_1011 = 0xCBL;
        int i;
        for (i = 0; i < 2; i++)
            l_977[i] = (-1L);
        for (g_448.f4.f6 = 0; (g_448.f4.f6 > 24); ++g_448.f4.f6)
        { 
            return p_26;
        }
        for (g_298.f1 = 0; (g_298.f1 == 47); g_298.f1 = safe_add_func_int16_t_s_s(g_298.f1, 5))
        { 
            int32_t *l_974[3];
            struct S2 **l_982[1];
            const uint16_t ****l_1002 = &l_1001;
            uint16_t * const ***l_1003 = (void*)0;
            uint16_t * const l_1006 = (void*)0;
            uint16_t * const *l_1005 = &l_1006;
            uint16_t * const **l_1004 = &l_1005;
            int32_t *l_1010 = &g_11.f6;
            int i;
            for (i = 0; i < 3; i++)
                l_974[i] = &g_39;
            for (i = 0; i < 1; i++)
                l_982[i] = &g_157;
            l_978++;
            for (g_448.f4.f1 = 0; g_448.f4.f1 < 5; g_448.f4.f1 += 1)
            {
                g_306[g_448.f4.f1] = &g_426;
            }
            g_983 = l_981;
            if ((safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(((l_991 , ((*l_1010) = (safe_mod_func_int64_t_s_s((safe_div_func_uint32_t_u_u((((safe_mod_func_int64_t_s_s((((safe_unary_minus_func_uint32_t_u((((((safe_add_func_int64_t_s_s(((*g_806) | (*l_904)), (((*l_1002) = l_1001) != (l_1004 = (void*)0)))) == (safe_mul_func_uint16_t_u_u((g_125 | (0x382DL <= 0xC761L)), 0x7E88L))) | g_158.f4.f2) & p_26) <= g_886.f1))) , l_1009) , p_26), (**g_641))) | (-1L)) | (*l_904)), g_426)), (*g_806))))) , p_26), g_448.f4.f2)) & l_1011), 10)) != p_26) >= l_975[0]), g_158.f4.f0)))
            { 
                struct S0 *l_1012[5][7][2] = {{{(void*)0,&g_149},{(void*)0,&g_448.f2},{(void*)0,&g_149},{(void*)0,&g_158.f2},{&g_149,&g_448.f3},{&g_158.f3,(void*)0},{&g_158.f2,&g_158.f2}},{{&g_158.f2,&g_448.f3},{&g_158.f2,&g_158.f2},{(void*)0,(void*)0},{&g_448.f2,&g_158.f2},{&g_158.f3,&g_448.f2},{(void*)0,&g_158.f3},{(void*)0,&g_448.f2}},{{&g_158.f3,&g_158.f2},{&g_448.f2,(void*)0},{(void*)0,&g_158.f2},{&g_158.f2,&g_448.f3},{&g_448.f3,&g_448.f3},{&g_158.f2,&g_158.f2},{(void*)0,(void*)0}},{{&g_448.f2,&g_158.f2},{&g_158.f3,&g_448.f2},{(void*)0,&g_158.f3},{(void*)0,&g_448.f2},{&g_158.f3,&g_158.f2},{&g_448.f2,(void*)0},{(void*)0,&g_158.f2}},{{&g_158.f2,&g_448.f3},{&g_448.f3,&g_448.f3},{&g_158.f2,&g_158.f2},{(void*)0,(void*)0},{&g_448.f2,&g_158.f2},{&g_158.f3,&g_448.f2},{(void*)0,&g_158.f3}}};
                union U3 *l_1015 = &g_274;
                union U3 **l_1014 = &l_1015;
                int i, j, k;
                (*g_354) = l_1012[4][1][0];
                if (p_26)
                    break;
                if (l_977[0])
                    continue;
                (*l_1014) = (l_1013 , &l_1013);
            }
            else
            { 
                int64_t l_1016 = 0L;
                int32_t l_1017 = 0x95D56BEAL;
                uint16_t l_1018 = 1UL;
                ++l_1018;
            }
            ++g_1021;
        }
    }
    for (g_448.f5 = 0; (g_448.f5 > 50); g_448.f5 = safe_add_func_uint64_t_u_u(g_448.f5, 2))
    { 
        int32_t l_1027 = 0L;
        uint16_t **l_1033 = (void*)0;
        union U3 ** const l_1045 = (void*)0;
        int8_t l_1064 = 5L;
        int32_t l_1067 = 1L;
        int32_t l_1068[7];
        union U4 * const *l_1082 = &g_696[1][1][1];
        uint64_t l_1105[1];
        uint16_t l_1119 = 65530UL;
        uint32_t l_1138 = 0UL;
        int32_t l_1144 = 0x106ABB26L;
        struct S0 l_1179 = {7};
        int i;
        for (i = 0; i < 7; i++)
            l_1068[i] = (-4L);
        for (i = 0; i < 1; i++)
            l_1105[i] = 0x0AA222B347F6C770LL;
        (**g_353) = l_1026[0];
        if (l_1027)
            break;
        if (g_886.f1)
            goto lbl_1028;
        for (g_984.f1 = 0; (g_984.f1 >= (-28)); --g_984.f1)
        { 
            uint32_t *l_1037 = (void*)0;
            uint32_t *l_1038 = &l_1009.f1;
            union U4 l_1059 = {0x22FE0133FA49EEBALL};
            int32_t l_1063 = 0x9F1907EDL;
            int32_t *l_1065[7] = {&g_98,&g_98,&g_98,&g_98,&g_98,&g_98,&g_98};
            uint32_t l_1069[2];
            union U3 l_1078 = {5L};
            int8_t *l_1079 = (void*)0;
            union U4 **l_1080 = &g_696[5][2][3];
            union U4 ***l_1081 = &g_695[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1069[i] = 4UL;
            if ((l_1027 < ((safe_mul_func_uint8_t_u_u(g_158.f4.f0, (((l_1033 == g_1034) < l_1027) && (safe_mul_func_uint16_t_u_u(((p_26 == (++(*l_1038))) && ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((((((**g_641) | 0xCE959E88E2AE0EF1LL) , g_23.f3) , (void*)0) == l_1045), g_46[4])), 5)) | p_26)), (*l_904)))))) || p_26)))
            { 
                uint32_t l_1048 = 0UL;
                uint32_t l_1049 = 0x32224C8DL;
                uint16_t ***l_1051 = (void*)0;
                uint16_t ****l_1050 = &l_1051;
                uint16_t ***l_1053 = &g_1034;
                uint16_t ****l_1052 = &l_1053;
                int32_t l_1062[6] = {(-8L),0x3A95D342L,0x3A95D342L,(-8L),0x3A95D342L,0x3A95D342L};
                int i;
                l_1063 = (safe_div_func_int16_t_s_s(l_1048, (((((l_1049 && (((*l_1050) = &g_1034) == ((*l_1052) = &l_1033))) | ((+((safe_rshift_func_uint8_t_u_u(((((l_1062[5] = (((l_1027 || (--(*l_1038))) == ((l_1059 , (safe_lshift_func_int8_t_s_s(0xA2L, (*g_316)))) <= g_298.f0)) , p_26)) || p_26) ^ 0L) != l_1059.f1), p_26)) , l_1062[5])) == 250UL)) < 65532UL) == p_26) && 9L)));
            }
            else
            { 
                return p_26;
            }
            --l_1069[1];
            if (l_1009.f2)
                goto lbl_1028;
            if ((*l_904))
                break;
            (*l_904) = (((*l_1081) = l_1080) == l_1082);
        }
        for (g_448.f4.f6 = 0; (g_448.f4.f6 <= (-20)); --g_448.f4.f6)
        { 
            int64_t l_1106 = 0x2D7B60AD45CB7BB3LL;
            int32_t l_1111 = 0x9336D2BAL;
            int32_t l_1114 = 0x5B69D171L;
            int32_t l_1131 = 0x13242283L;
            int32_t l_1132 = 0xFE9C3EF7L;
            int32_t l_1133 = 0x55870851L;
            int32_t l_1134 = 0x40F975C3L;
            int32_t l_1135 = 0L;
            int32_t l_1136 = (-1L);
            int32_t l_1137 = 0L;
            uint32_t l_1146 = 0x27986139L;
            uint32_t l_1175 = 4294967287UL;
            for (g_886.f3 = 0; (g_886.f3 >= (-30)); --g_886.f3)
            { 
                (**g_354) = (***g_353);
            }
            for (l_991.f3 = 5; (l_991.f3 >= 0); l_991.f3 -= 1)
            { 
                int16_t *l_1098 = &g_158.f1;
                int64_t *l_1107 = (void*)0;
                int64_t *l_1108[7] = {&g_886.f0,&g_886.f0,&g_886.f0,&g_886.f0,&g_886.f0,&g_886.f0,&g_886.f0};
                int32_t l_1113 = 0xB338893DL;
                int32_t l_1115 = 0x35151EECL;
                int32_t l_1117 = 0xCF93BE68L;
                int32_t l_1118 = 0x3C4B50C8L;
                int32_t *l_1127 = &l_1068[0];
                int32_t *l_1128 = &l_1111;
                int32_t *l_1129 = &l_1115;
                int32_t *l_1130[7][5][6] = {{{(void*)0,&l_922[0][0][2],&l_1115,&g_39,(void*)0,(void*)0},{&l_1117,&l_922[1][0][5],&g_39,&l_1111,&l_1117,&l_1111},{&l_1068[4],&g_274.f0,&l_922[0][0][3],&l_1114,&l_922[0][0][2],&l_922[0][0][2]},{&g_73,&g_39,&l_1114,&l_1068[4],&l_1114,&l_1027},{(void*)0,(void*)0,&l_1067,&l_1118,&g_98,&l_1118}},{{(void*)0,&l_922[0][0][2],(void*)0,(void*)0,&g_39,&l_1068[4]},{(void*)0,&l_1111,(void*)0,&l_1013.f0,&l_922[0][0][2],&l_1117},{&g_73,&l_1114,&l_922[0][0][3],&l_1013.f0,&g_98,(void*)0},{(void*)0,&l_1068[4],(void*)0,(void*)0,&l_898,&l_898},{(void*)0,(void*)0,(void*)0,&l_1118,&g_426,&l_1111}},{{(void*)0,&l_922[0][0][2],&l_922[0][0][2],&l_1068[4],(void*)0,&l_1117},{&g_73,&l_1117,&l_1068[4],&l_1114,&l_922[0][0][2],&g_73},{&l_1068[4],(void*)0,&l_1027,&l_1111,&g_274.f0,(void*)0},{&l_1117,&l_1114,&g_73,&g_39,&g_426,&l_898},{(void*)0,(void*)0,&g_39,(void*)0,&g_426,&l_1114}},{{&g_274.f0,&g_274.f0,(void*)0,&l_1068[4],&l_1068[4],(void*)0},{&g_73,&g_73,(void*)0,&g_426,&l_1117,&l_1027},{&l_1114,&g_39,&l_1111,&l_1114,&g_98,(void*)0},{&l_898,&l_1114,&l_1111,(void*)0,&g_73,&l_1027},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_1013.f0}},{{(void*)0,(void*)0,&l_1013.f0,&l_1117,(void*)0,&l_1111},{&l_1067,&l_922[0][0][2],&l_1118,&g_39,&l_1068[4],&l_1068[4]},{&l_1068[4],&l_898,(void*)0,&l_922[0][0][2],&l_1027,&l_922[0][0][2]},{&l_1068[4],(void*)0,&g_98,&l_1114,&l_1114,(void*)0},{&l_1114,(void*)0,(void*)0,&l_922[0][0][3],(void*)0,&l_1114}},{{&l_1115,&l_922[1][0][5],&g_73,&l_1068[4],&l_1118,&l_1027},{&g_73,&l_1068[4],(void*)0,&g_98,(void*)0,&l_1068[4]},{(void*)0,&l_1114,&g_98,&l_922[0][0][2],&g_426,&l_1111},{(void*)0,&l_1118,(void*)0,(void*)0,&l_922[0][0][2],&g_73},{&l_1114,&l_1118,(void*)0,&l_1115,&g_426,&l_922[0][0][3]}},{{&g_426,&l_1114,&l_1114,(void*)0,(void*)0,&g_274.f0},{&l_1068[4],&l_1068[4],&l_1068[4],&g_39,&l_1118,&l_922[0][0][2]},{(void*)0,&l_922[1][0][5],&l_922[0][0][2],&g_274.f0,(void*)0,(void*)0},{&g_39,(void*)0,(void*)0,&l_1117,&l_1114,(void*)0},{&l_1111,(void*)0,&l_1118,&l_1111,&l_1027,&g_426}}};
                int8_t * const *l_1158 = (void*)0;
                int8_t * const **l_1157 = &l_1158;
                int8_t l_1176 = 0xC1L;
                int i, j, k;
                (*l_904) &= (((((((safe_mod_func_int8_t_s_s(((safe_add_func_int64_t_s_s(g_46[l_991.f3], (g_886.f3 = (l_1067 <= ((l_1091[3] , ((*l_891) |= (((**g_641) &= 0x144F809384C06F16LL) > (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_s(((*l_1098) = g_46[l_991.f3]), (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((g_46[l_991.f3] & (((safe_rshift_func_uint16_t_u_u(l_1105[0], 5)) >= g_45[0]) <= g_46[l_991.f3])), g_46[l_991.f3])) ^ p_26), 253UL)))) >= l_1106), g_93)), g_984.f4.f5))))) >= l_1106))))) , l_1027), g_73)) , g_46[l_991.f3]) >= 0x7BL) && 0x78L) & (-5L)) , g_390) && p_26);
                for (g_121 = 0; (g_121 <= 0); g_121 += 1)
                { 
                    int32_t *l_1109 = (void*)0;
                    int32_t *l_1110 = &l_1068[4];
                    int32_t *l_1112[3];
                    union U4 *l_1122[2];
                    int32_t **l_1125[1][1][7] = {{{&l_1112[0],(void*)0,&l_1112[0],&l_1112[0],(void*)0,&l_1112[0],&l_1112[0]}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1112[i] = &l_922[0][0][2];
                    for (i = 0; i < 2; i++)
                        l_1122[i] = &g_886;
                    --l_1119;
                    l_1123 = l_1122[1];
                    g_306[2] = &l_922[g_121][g_121][(g_121 + 4)];
                    (*l_904) |= (!p_26);
                }
                l_1138++;
                for (g_1124.f3 = 0; (g_1124.f3 <= 4); g_1124.f3 += 1)
                { 
                    int32_t l_1143 = 7L;
                    int32_t l_1145[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_1145[i] = 0x8A2DE6A8L;
                    (*l_1127) = (((p_26 && ((p_26 | (-1L)) < (-1L))) , (safe_sub_func_uint64_t_u_u(l_1137, 5UL))) >= ((*g_642) & l_1105[0]));
                    --l_1146;
                }
                if (l_1064)
                { 
                    union U3 *l_1150 = &l_1013;
                    union U3 **l_1149 = &l_1150;
                    int8_t * const ***l_1159 = &l_1157;
                    (*l_1149) = &g_274;
                    if (p_26)
                        continue;
                    (*l_1127) &= (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(l_1155[1], p_26)), 7));
                    (*l_1128) ^= (~(((*l_1159) = l_1157) == (((*l_904) = ((safe_mod_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((0xF1E0L >= (&g_641 == l_1164)) != 0x37F654BCL) ^ (safe_add_func_uint16_t_u_u(65535UL, (((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((safe_div_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_s((**g_315), l_1175)) , l_1132), 0x64985490D9BD6894LL)) < 1UL), l_1176)), 0xC5C2L)) > l_1132) | 0UL)))), 7)), g_158.f3.f0)) , (-7L))) , &l_1158)));
                }
                else
                { 
                    if (g_158.f4.f6)
                        goto lbl_1028;
                }
            }
            for (l_1106 = 0; (l_1106 <= (-22)); l_1106 = safe_sub_func_uint16_t_u_u(l_1106, 5))
            { 
                return p_26;
            }
            (*g_165) = l_1179;
        }
    }
    return p_26;
}



static int32_t  func_28(union U4 ** p_29, union U4 * p_30, int64_t  p_31)
{ 
    struct S0 l_887 = {0};
    (*g_165) = (l_887 , l_887);
    return p_31;
}



static union U4 ** func_32(uint32_t  p_33, int8_t * p_34, int8_t * p_35, int8_t * p_36)
{ 
    int32_t *l_38 = &g_39;
    int32_t *l_40 = &g_39;
    int32_t l_41[3][7] = {{0x70AACC70L,0x70AACC70L,(-4L),0x70AACC70L,0x70AACC70L,(-4L),0x70AACC70L},{0xD58E56A9L,0x76E9F81AL,0x76E9F81AL,0xD58E56A9L,0x76E9F81AL,0x76E9F81AL,0xD58E56A9L},{(-7L),0x70AACC70L,(-7L),(-7L),0x70AACC70L,(-7L),(-7L)}};
    int32_t *l_42 = &l_41[1][3];
    int32_t *l_43[3][1][7] = {{{&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3]}},{{&g_39,&g_39,&g_39,&g_39,&g_39,&g_39,&g_39}},{{&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3],&l_41[1][3]}}};
    uint32_t *l_662 = &g_11.f1;
    int8_t *** const *l_663[3];
    union U4 *l_692[6][5] = {{&g_23,(void*)0,&g_23,&g_23,&g_23},{&g_23,&g_23,&g_23,(void*)0,(void*)0},{&g_23,&g_23,(void*)0,(void*)0,&g_23},{(void*)0,&g_23,&g_23,&g_23,&g_23},{&g_23,&g_23,(void*)0,&g_23,(void*)0},{&g_23,&g_23,&g_23,&g_23,&g_23}};
    union U4 **l_691 = &l_692[5][3];
    uint16_t *l_703 = (void*)0;
    int8_t *****l_706 = (void*)0;
    struct S1 l_709[6] = {{17,0UL,7,21,175,1636,0xEF3B2973L,1},{17,0UL,7,21,175,1636,0xEF3B2973L,1},{17,0UL,7,21,175,1636,0xEF3B2973L,1},{17,0UL,7,21,175,1636,0xEF3B2973L,1},{17,0UL,7,21,175,1636,0xEF3B2973L,1},{17,0UL,7,21,175,1636,0xEF3B2973L,1}};
    int64_t ***l_768 = (void*)0;
    uint64_t *l_802 = &g_147;
    uint64_t l_817 = 1UL;
    uint16_t **l_823 = &l_703;
    uint16_t ***l_822 = &l_823;
    int32_t l_856 = (-1L);
    uint8_t l_858 = 248UL;
    int16_t l_872[1];
    int64_t l_873 = 0L;
    int32_t l_874 = 0L;
    uint32_t l_875[2];
    uint8_t *l_880 = &g_93;
    int32_t l_883 = 1L;
    union U4 **l_884 = (void*)0;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_663[i] = &g_294;
    for (i = 0; i < 1; i++)
        l_872[i] = 0xB7ABL;
    for (i = 0; i < 2; i++)
        l_875[i] = 0xC589A605L;
    ++g_46[3];
    for (g_23.f3 = 0; (g_23.f3 == 28); g_23.f3 = safe_add_func_int8_t_s_s(g_23.f3, 2))
    { 
        struct S1 l_179 = {10,4294967286UL,8,15,54,978,-1L,0};
        union U4 *l_651 = &g_23;
        int8_t ****l_715 = &g_294;
        struct S0 l_719 = {8};
        for (g_44 = 0; (g_44 > (-2)); --g_44)
        { 
            struct S0 l_178 = {5};
            int8_t *l_652[7];
            struct S2 **l_661 = &g_157;
            struct S2 ***l_660 = &l_661;
            union U4 **l_694[3];
            int32_t *l_713 = (void*)0;
            int8_t *l_714 = &g_299[1][2][0];
            int i;
            for (i = 0; i < 7; i++)
                l_652[i] = &g_10;
            for (i = 0; i < 3; i++)
                l_694[i] = &l_692[5][3];
        }
    }
    for (g_93 = 18; (g_93 > 1); g_93 = safe_sub_func_int16_t_s_s(g_93, 9))
    { 
        union U4 l_729 = {-7L};
        uint32_t l_733[5][4] = {{0xFA7BA4BAL,0x77AB8EE8L,0xFA7BA4BAL,0x77AB8EE8L},{0xFA7BA4BAL,0x77AB8EE8L,0xFA7BA4BAL,0x77AB8EE8L},{0xFA7BA4BAL,0x77AB8EE8L,0xFA7BA4BAL,0x77AB8EE8L},{0xFA7BA4BAL,0x77AB8EE8L,0xFA7BA4BAL,0x77AB8EE8L},{0xFA7BA4BAL,0x77AB8EE8L,0xFA7BA4BAL,0x77AB8EE8L}};
        int8_t *l_747[5][3] = {{&g_10,&g_299[4][0][3],&g_10},{(void*)0,&g_10,(void*)0},{(void*)0,&g_10,&g_10},{&g_10,(void*)0,(void*)0},{&g_10,(void*)0,&g_10}};
        union U4 **l_748 = (void*)0;
        struct S2 l_749 = {0x4646BBE1L,0x5E5CL,{8},{10},{2,0xE1D2F6C6L,12,16,141,1569,-7L,1},0x0E17L};
        struct S1 *l_750[7][6] = {{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11,&g_11,&g_11}};
        int8_t l_758 = 0xA9L;
        int32_t l_770 = (-1L);
        int32_t l_784 = 0xF5EC629AL;
        int32_t l_785 = 4L;
        int32_t l_786[5][1][6] = {{{(-1L),0x58EB1911L,(-1L),(-1L),0x58EB1911L,(-1L)}},{{0xDBEC23B2L,(-1L),(-1L),(-1L),0xDBEC23B2L,0xDBEC23B2L}},{{0L,(-1L),(-1L),0L,0x58EB1911L,0L}},{{0L,0x58EB1911L,0L,(-1L),(-1L),0L}},{{0xDBEC23B2L,0xDBEC23B2L,(-1L),(-1L),(-1L),0xDBEC23B2L}}};
        int16_t *l_797 = &g_158.f1;
        const uint64_t *l_804 = &g_805;
        const uint64_t **l_803[2][7][1] = {{{&l_804},{&l_804},{&l_804},{&l_804},{&l_804},{&l_804},{&l_804}},{{&l_804},{&l_804},{&l_804},{&l_804},{&l_804},{&l_804},{&l_804}}};
        int32_t **l_814 = &l_42;
        const struct S0 *l_828 = (void*)0;
        const struct S0 **l_827 = &l_828;
        const struct S0 ** const *l_826 = &l_827;
        const union U4 * const l_862 = &g_23;
        const union U4 * const *l_861 = &l_862;
        const union U4 * const * const *l_860 = &l_861;
        const union U4 * const * const **l_859 = &l_860;
        int8_t *** const *l_865 = &g_294;
        int i, j, k;
    }
    --l_875[1];
    l_883 |= (0xDFL ^ (0x4BL != ((*l_40) = (((*l_880) |= (*l_42)) | ((((***g_314) = ((*p_36) = ((&l_802 == ((safe_mod_func_int32_t_s_s(0L, 1L)) , &l_802)) ^ g_274.f1))) >= 0x90L) != 0x8BF9386A28975DD1LL)))));
    return l_884;
}



static struct S0  func_53(union U4 * p_54, int8_t * p_55, int8_t * p_56, uint8_t  p_57, const uint64_t  p_58)
{ 
    int64_t * const *l_653 = &g_642;
    int64_t ***l_654[4] = {&g_641,&g_641,&g_641,&g_641};
    int32_t *l_655 = &g_98;
    int32_t *l_656 = &g_39;
    struct S0 l_657 = {7};
    int i;
    (*l_656) = ((*l_655) = (g_274 , ((g_11.f6 , l_653) == (g_641 = &g_642))));
    return l_657;
}



static struct S0  func_59(int8_t * p_60, struct S0  p_61, struct S1  p_62)
{ 
    int8_t l_184 = 0xB1L;
    int8_t l_197 = 0x01L;
    int32_t * const l_231[3][2] = {{&g_39,&g_39},{&g_39,&g_39},{&g_39,&g_39}};
    int32_t *l_232[6] = {&g_73,&g_73,&g_73,&g_73,&g_73,&g_73};
    int8_t *l_243[3][1];
    int8_t **l_242 = &l_243[1][0];
    int8_t ***l_241 = &l_242;
    int8_t **** const l_240 = &l_241;
    struct S0 l_305 = {4};
    struct S0 l_329 = {3};
    uint32_t l_337 = 6UL;
    int32_t l_345 = 0L;
    struct S2 **l_367[7][1][7] = {{{(void*)0,&g_157,&g_157,&g_157,&g_157,(void*)0,&g_157}},{{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157,&g_157}},{{&g_157,&g_157,(void*)0,&g_157,(void*)0,&g_157,&g_157}},{{(void*)0,&g_157,&g_157,&g_157,(void*)0,(void*)0,&g_157}},{{&g_157,&g_157,&g_157,(void*)0,(void*)0,&g_157,&g_157}},{{&g_157,&g_157,&g_157,&g_157,&g_157,&g_157,&g_157}},{{&g_157,(void*)0,(void*)0,&g_157,&g_157,&g_157,(void*)0}}};
    struct S2 ***l_366[6][7][3] = {{{&l_367[1][0][6],&l_367[6][0][0],&l_367[2][0][2]},{&l_367[3][0][6],(void*)0,&l_367[6][0][3]},{(void*)0,&l_367[6][0][0],&l_367[6][0][3]},{&l_367[3][0][6],&l_367[3][0][6],&l_367[6][0][3]},{&l_367[1][0][6],&l_367[6][0][0],&l_367[2][0][2]},{&l_367[3][0][6],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0}},{{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0}},{{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]}},{{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0}},{{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0}},{{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0},{(void*)0,&l_367[4][0][6],(void*)0},{&l_367[4][0][3],&l_367[4][0][3],(void*)0},{&l_367[0][0][1],&l_367[4][0][6],&l_367[1][0][6]},{&l_367[4][0][3],(void*)0,(void*)0}}};
    const uint32_t l_442 = 0UL;
    uint8_t l_469 = 0x8EL;
    struct S1 * const *l_510 = (void*)0;
    int8_t l_513 = 0x71L;
    int32_t *l_553 = &g_73;
    union U3 l_554 = {1L};
    int64_t *l_555 = &g_23.f0;
    uint16_t *l_603 = (void*)0;
    union U4 * const **l_610[2][7][7] = {{{&g_456[0],&g_456[0],&g_456[1],&g_456[0],&g_456[0],&g_456[4],(void*)0},{&g_456[1],&g_456[4],&g_456[1],&g_456[0],&g_456[0],&g_456[3],&g_456[4]},{&g_456[0],(void*)0,&g_456[0],&g_456[3],&g_456[3],&g_456[0],(void*)0},{&g_456[1],&g_456[0],&g_456[4],(void*)0,&g_456[0],&g_456[0],&g_456[4]},{&g_456[0],&g_456[0],&g_456[0],&g_456[1],&g_456[2],&g_456[3],&g_456[2]},{(void*)0,&g_456[2],&g_456[2],(void*)0,&g_456[0],&g_456[4],&g_456[1]},{&g_456[4],&g_456[2],&g_456[0],&g_456[3],&g_456[1],&g_456[0],&g_456[0]}},{{&g_456[1],&g_456[0],&g_456[4],&g_456[0],&g_456[4],&g_456[0],&g_456[1]},{&g_456[0],&g_456[0],&g_456[0],&g_456[0],&g_456[4],(void*)0,&g_456[2]},{&g_456[4],(void*)0,&g_456[3],&g_456[4],&g_456[1],&g_456[1],&g_456[4]},{&g_456[0],&g_456[4],&g_456[0],&g_456[0],&g_456[0],&g_456[4],(void*)0},{&g_456[0],&g_456[0],&g_456[4],(void*)0,&g_456[0],(void*)0,&g_456[0]},{&g_456[0],&g_456[2],&g_456[0],&g_456[0],&g_456[2],&g_456[0],&g_456[1]},{&g_456[2],&g_456[1],&g_456[0],&g_456[0],&g_456[0],&g_456[0],&g_456[4]}}};
    uint64_t l_648 = 0UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_243[i][j] = (void*)0;
    }
lbl_570:
    g_98 = (safe_rshift_func_int8_t_s_u((0L >= (((((g_89 , ((-8L) & (safe_mod_func_uint32_t_u_u((l_184 || (((+((safe_add_func_int8_t_s_s((((safe_mod_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s((((safe_unary_minus_func_uint32_t_u(g_158.f4.f5)) , (p_62.f7 | ((((safe_mul_func_uint8_t_u_u(l_184, g_147)) || 255UL) > l_184) == p_62.f4))) || (*p_60)), l_197)) != l_184), l_197)), g_158.f4.f3)) , 0x95D8L) , 8L), 251UL)) < 0x64L)) , 6UL) & g_89)), g_11.f6)))) & l_197) | (*p_60)) <= p_61.f0) , g_11.f7)), 6));
    for (g_121 = 5; (g_121 >= 0); g_121 -= 1)
    { 
        int32_t l_216 = 8L;
        uint16_t l_225[7][5] = {{0xB682L,0xC512L,0xB682L,65535UL,65534UL},{0x76AFL,0x7876L,0xB682L,65534UL,65535UL},{0x76AFL,0xC512L,0x7F87L,65534UL,65534UL},{0xB682L,0xC512L,0xB682L,65535UL,65534UL},{0x76AFL,0x7876L,0xB682L,65534UL,65535UL},{0x76AFL,0xC512L,0x7F87L,65534UL,65534UL},{0xB682L,0xC512L,0xB682L,65535UL,65534UL}};
        int32_t l_226[2][4][4] = {{{0xF2AE6F9CL,1L,1L,0xF2AE6F9CL},{1L,0xF2AE6F9CL,1L,1L},{0xF2AE6F9CL,0xF2AE6F9CL,0xD9380DC6L,0xF2AE6F9CL},{0xF2AE6F9CL,1L,1L,0xF2AE6F9CL}},{{1L,0xF2AE6F9CL,1L,1L},{0xF2AE6F9CL,0xF2AE6F9CL,0xD9380DC6L,0xF2AE6F9CL},{0xF2AE6F9CL,1L,1L,0xF2AE6F9CL},{1L,0xF2AE6F9CL,1L,1L}}};
        const int8_t *l_238 = (void*)0;
        const int8_t **l_237 = &l_238;
        const int8_t ***l_236 = &l_237;
        const int8_t ****l_235 = &l_236;
        struct S0 l_397 = {6};
        union U4 l_416 = {-4L};
        int16_t *l_417[4] = {&g_158.f1,&g_158.f1,&g_158.f1,&g_158.f1};
        int32_t l_418[7] = {7L,0x22BD2941L,0x22BD2941L,7L,0x22BD2941L,0x22BD2941L,7L};
        struct S1 **l_419 = (void*)0;
        struct S1 **l_420 = &g_297;
        int32_t **l_421 = (void*)0;
        int32_t **l_422 = &g_306[2];
        struct S2 *l_446 = (void*)0;
        union U4 l_457[1][1] = {{{-1L}}};
        uint8_t l_485[4];
        uint16_t l_499 = 9UL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_485[i] = 0x72L;
        if ((safe_add_func_uint64_t_u_u(g_45[g_121], g_45[g_121])))
        { 
            int8_t l_228 = 0x7FL;
            int32_t l_229 = 0x4F0C07E3L;
            const int8_t *****l_239 = &l_235;
            struct S1 *l_244 = &g_158.f4;
            struct S1 **l_245 = (void*)0;
            struct S1 **l_246 = &l_244;
            for (g_93 = 0; (g_93 <= 5); g_93 += 1)
            { 
                int16_t *l_215[1];
                uint16_t *l_217 = (void*)0;
                uint16_t *l_218 = &g_158.f5;
                uint8_t l_227 = 8UL;
                int32_t *l_230 = &g_39;
                int i;
                for (i = 0; i < 1; i++)
                    l_215[i] = &g_158.f1;
                (*l_230) ^= (((safe_unary_minus_func_int16_t_s((l_228 = ((safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((g_23 , g_46[g_93]), 5)), (((safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((l_216 = g_46[g_121]), (--(*l_218)))) , g_11.f5), ((safe_lshift_func_uint8_t_u_u(((g_158.f1 = (((safe_mul_func_uint16_t_u_u(1UL, l_225[1][4])) , (l_226[0][3][1] = g_46[g_93])) , 0x7D5AL)) > g_45[g_121]), 1)) , g_23.f3))), p_61.f0)) <= g_158.f4.f5), 0x6F54L)) <= l_197) || p_62.f2))), 0xD9L)) & l_227)))) >= l_229) & g_46[g_93]);
                for (g_158.f0 = 0; (g_158.f0 <= 5); g_158.f0 += 1)
                { 
                    return p_61;
                }
                l_232[1] = l_231[2][0];
                if (l_226[0][3][1])
                    break;
                l_226[1][2][2] = 6L;
            }
            l_229 |= (g_73 = (safe_lshift_func_int16_t_s_u(p_62.f1, (((*l_239) = l_235) != l_240))));
            (*l_246) = l_244;
        }
        else
        { 
            uint32_t l_259[6][6][2];
            int32_t l_268 = 5L;
            uint16_t *l_269 = (void*)0;
            uint16_t *l_270[7][3] = {{&l_225[1][4],&l_225[1][4],&l_225[1][4]},{&l_225[1][2],&l_225[1][2],&l_225[1][2]},{&l_225[1][4],&l_225[1][4],&l_225[1][4]},{&l_225[1][2],&l_225[1][2],&l_225[1][2]},{&l_225[1][4],&l_225[1][4],&l_225[1][4]},{&l_225[1][2],&l_225[1][2],&l_225[1][2]},{&l_225[1][4],&l_225[1][4],&l_225[1][4]}};
            uint32_t l_277 = 1UL;
            union U4 l_288 = {0xC71F8D7BA377E9CDLL};
            int8_t *****l_296 = &g_293;
            int i, j, k;
            for (i = 0; i < 6; i++)
            {
                for (j = 0; j < 6; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_259[i][j][k] = 0UL;
                }
            }
            if (((*g_165) , ((l_226[0][3][1] = (p_62.f5 & (safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u(1UL, (((l_268 = (safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(g_23.f3, (safe_mul_func_int16_t_s_s(l_259[0][5][1], ((safe_mod_func_int32_t_s_s(((safe_div_func_uint8_t_u_u(((p_62.f0 || (0xEBL <= 0UL)) != g_46[3]), 1L)) ^ 0xA8F5FBB262B3BEA0LL), p_62.f5)) | 0xAF087EB8CE4A9CA1LL))))), 253UL)) != g_45[g_121]), (*p_60)))) || l_216) || l_259[1][0][0]))) < g_158.f2.f0), g_158.f2.f0)))) > p_62.f6)))
            { 
                union U3 l_273 = {0x56981C5EL};
                struct S2 **l_276 = &g_157;
                struct S2 ***l_275 = &l_276;
                g_73 &= 0x5984A7A5L;
                g_274.f0 = (((&g_157 == ((*l_275) = ((safe_mod_func_uint8_t_u_u((((l_273 , &g_23) == (void*)0) == ((g_274 , 3L) >= 1L)), l_226[1][2][3])) , (void*)0))) <= p_62.f7) || p_62.f5);
            }
            else
            { 
                uint32_t l_282 = 6UL;
                int64_t l_285 = 4L;
                int32_t l_289 = 0L;
                if ((g_98 ^= ((0xB853L & ((l_277 == (((safe_mod_func_uint64_t_u_u(g_45[g_121], 0xAD60E4599E6F73A5LL)) >= (safe_lshift_func_int8_t_s_u((l_282 < (l_285 <= ((((safe_mod_func_uint8_t_u_u((l_288 , p_62.f5), 0x65L)) >= l_225[1][4]) , &l_282) == &l_277))), 4))) == l_216)) | l_225[1][4])) || (-1L))))
                { 
                    if (p_62.f3)
                        break;
                    g_274.f0 |= g_11.f0;
                }
                else
                { 
                    if (g_158.f0)
                        break;
                    l_289 &= 7L;
                }
                if ((g_23 , (p_62.f5 >= (safe_lshift_func_int16_t_s_s(0xA54BL, 10)))))
                { 
                    int16_t l_303 = 0xF36FL;
                    int32_t **l_304 = &l_232[1];
                    l_216 = ((((l_296 = g_292) != (void*)0) , &g_147) != &g_147);
                    g_297 = (void*)0;
                    ++g_300;
                    l_303 = g_45[g_121];
                    (*l_304) = &g_98;
                }
                else
                { 
                    g_39 = 9L;
                    return l_305;
                }
            }
        }
        for (g_158.f5 = 0; (g_158.f5 <= 5); g_158.f5 += 1)
        { 
            int32_t l_307 = 0x666EC8D3L;
            uint16_t *l_344 = &g_158.f5;
            const struct S2 *l_347 = &g_158;
            struct S2 **l_365 = &g_157;
            struct S2 ***l_364[4][5][5] = {{{&l_365,&l_365,&l_365,(void*)0,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,(void*)0,&l_365,(void*)0,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,(void*)0,&l_365,&l_365}},{{(void*)0,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,(void*)0,&l_365},{&l_365,(void*)0,&l_365,&l_365,&l_365}},{{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,(void*)0},{&l_365,&l_365,&l_365,(void*)0,&l_365}},{{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,(void*)0},{&l_365,&l_365,(void*)0,&l_365,&l_365},{&l_365,&l_365,&l_365,&l_365,&l_365},{&l_365,&l_365,(void*)0,&l_365,&l_365}}};
            int8_t ** const ***l_369 = &g_313;
            struct S0 **l_399 = &g_165;
            int32_t l_407[4][5][2] = {{{(-1L),0x1A8A24A2L},{(-1L),0x1A8A24A2L},{(-1L),(-1L)},{0x1988FE78L,0x1988FE78L},{0x1988FE78L,(-1L)}},{{(-1L),0x1A8A24A2L},{(-1L),0x1A8A24A2L},{(-1L),(-1L)},{0x1988FE78L,0x1988FE78L},{0x1988FE78L,(-1L)}},{{(-1L),0x1A8A24A2L},{(-1L),0x1A8A24A2L},{(-1L),(-1L)},{0x1988FE78L,0x1988FE78L},{0x1988FE78L,(-1L)}},{{(-1L),0x1A8A24A2L},{(-1L),0x1A8A24A2L},{(-1L),(-1L)},{0x1988FE78L,0x1988FE78L},{0x1988FE78L,(-1L)}}};
            int32_t **l_413 = &g_306[4];
            int i, j, k;
            g_306[2] = &g_98;
            for (g_125 = 0; (g_125 <= 5); g_125 += 1)
            { 
                int8_t ** const ***l_308 = (void*)0;
                int8_t ** const l_312 = (void*)0;
                int8_t ** const *l_311 = &l_312;
                int8_t ** const **l_310 = &l_311;
                int8_t ** const ***l_309[6] = {&l_310,&l_310,&l_310,&l_310,&l_310,&l_310};
                const struct S2 l_327 = {0x699EA8D5L,7L,{2},{6},{20,4294967295UL,9,67,142,1270,0x234ABE8EL,0},0xB398L};
                uint64_t *l_328 = &g_147;
                int32_t l_338[6][5][4] = {{{0x5113CCDAL,0x9A0F8C37L,(-2L),0L},{5L,0x21AC7AB0L,0xFD858B08L,(-2L)},{0L,0xFD858B08L,9L,(-2L)},{0L,0x9ACDC3D9L,0xFD858B08L,0L},{5L,(-2L),(-2L),5L}},{{0x5113CCDAL,5L,5L,0x8C4036EFL},{9L,0L,8L,0L},{1L,(-2L),0x9A0F8C37L,0L},{5L,0L,0x3D05E369L,0x8C4036EFL},{0x9ACDC3D9L,5L,0x9ACDC3D9L,5L}},{{0x9A0F8C37L,(-2L),0L,0L},{0L,0x9ACDC3D9L,0x8C4036EFL,(-2L)},{0xD8917A14L,0xFD858B08L,0x8C4036EFL,(-2L)},{0L,0x21AC7AB0L,0L,0L},{0x9A0F8C37L,0x9A0F8C37L,0x9ACDC3D9L,0xD8917A14L}},{{0x9ACDC3D9L,0xD8917A14L,0x3D05E369L,5L},{5L,9L,0x9A0F8C37L,0x3D05E369L},{1L,9L,8L,5L},{9L,0xD8917A14L,5L,0xD8917A14L},{0x5113CCDAL,0x9A0F8C37L,(-2L),0L}},{{5L,0x21AC7AB0L,0xFD858B08L,(-2L)},{0L,0xFD858B08L,9L,(-2L)},{0L,0x9ACDC3D9L,0xFD858B08L,0L},{5L,(-2L),(-2L),5L},{0x5113CCDAL,5L,5L,0x8C4036EFL}},{{9L,0L,8L,0L},{1L,(-2L),0x9A0F8C37L,0L},{5L,0L,0x3D05E369L,0x8C4036EFL},{0x9ACDC3D9L,5L,0x9ACDC3D9L,5L},{0x9A0F8C37L,(-2L),5L,0x3D05E369L}}};
                uint8_t *l_341 = &g_143;
                uint8_t l_368 = 254UL;
                int i, j, k;
                l_307 = g_45[g_121];
                if (((g_313 = (void*)0) == (((safe_mod_func_uint64_t_u_u(l_216, ((0UL != (safe_mul_func_uint8_t_u_u(p_62.f6, g_300))) & l_225[1][4]))) ^ (safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((*l_328) = ((((safe_lshift_func_uint16_t_u_s((((l_327 , l_327.f4.f3) != g_158.f4.f1) || 1L), 15)) , p_62.f3) | (-1L)) != g_298.f4)), 0L)), p_62.f6))) , (*g_292))))
                { 
                    return l_329;
                }
                else
                { 
                    (*g_165) = (*g_165);
                }
                if ((((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((0xCCL <= ((**g_315) = ((safe_unary_minus_func_int16_t_s(p_62.f7)) > p_62.f5))), (safe_div_func_int16_t_s_s((l_338[0][1][1] = l_337), ((0UL && ((((l_216 = (safe_lshift_func_uint8_t_u_u(((*l_341)++), 7))) | g_23.f3) , l_344) != &g_46[3])) || l_307))))) >= g_158.f3.f0), 5)) > l_345) > 65535UL))
                { 
                    uint32_t l_346 = 1UL;
                    if (l_346)
                        break;
                }
                else
                { 
                    const struct S2 **l_348 = (void*)0;
                    const struct S2 **l_349 = &l_347;
                    struct S0 **l_351 = &g_165;
                    struct S0 ***l_350 = &l_351;
                    struct S0 ****l_352[5];
                    int32_t l_363 = (-5L);
                    int i;
                    for (i = 0; i < 5; i++)
                        l_352[i] = &l_350;
                    (*l_349) = l_347;
                    g_353 = l_350;
                    l_368 &= (((safe_sub_func_uint16_t_u_u(((7L ^ (safe_mul_func_int16_t_s_s(((l_327.f4.f2 != (safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((l_363 <= (l_327.f4.f2 || ((g_274 , (p_62.f3 | ((l_364[3][2][4] != l_366[4][1][1]) <= l_307))) || 0x0886L))), (*p_60))), 0x9A2DE6C3C61F99BELL))) | (-4L)), 0xB6C8L))) > l_363), l_327.f2.f0)) != l_307) > 0UL);
                    l_307 = p_62.f5;
                }
                l_226[1][0][0] = p_62.f0;
                if (p_62.f6)
                { 
                    return p_61;
                }
                else
                { 
                    return p_61;
                }
            }
            for (g_89 = 0; (g_89 <= 5); g_89 += 1)
            { 
                uint32_t *l_372 = &g_158.f0;
                int32_t l_389 = 0xBE48F8D6L;
                int32_t l_391 = 0xA64453E6L;
                uint64_t *l_398 = &g_147;
                int8_t ***l_405 = &g_295;
                uint8_t *l_406 = &g_93;
                int32_t l_408 = 1L;
                int32_t l_409 = 8L;
                if ((l_369 != (((*l_372) = (safe_rshift_func_uint8_t_u_s(p_62.f0, ((***g_314) = g_45[g_121])))) , (void*)0)))
                { 
                    struct S2 l_373[1][6][1] = {{{{0x1E371C99L,1L,{3},{8},{8,0x6C0247A3L,5,49,207,1468,-1L,1},0UL}},{{0x08DF7236L,0x70ADL,{8},{3},{31,9UL,9,10,64,2501,4L,1},0x33C2L}},{{0x08DF7236L,0x70ADL,{8},{3},{31,9UL,9,10,64,2501,4L,1},0x33C2L}},{{0x1E371C99L,1L,{3},{8},{8,0x6C0247A3L,5,49,207,1468,-1L,1},0UL}},{{0x08DF7236L,0x70ADL,{8},{3},{31,9UL,9,10,64,2501,4L,1},0x33C2L}},{{0x08DF7236L,0x70ADL,{8},{3},{31,9UL,9,10,64,2501,4L,1},0x33C2L}}}};
                    int16_t *l_384 = &g_158.f1;
                    int16_t *l_385 = &l_373[0][2][0].f1;
                    int i, j, k;
                    l_391 |= (l_373[0][2][0] , (g_274.f1 >= (l_226[1][3][3] | (safe_mul_func_int8_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_add_func_int8_t_s_s((-1L), ((safe_lshift_func_int16_t_s_s((((*l_385) = ((*l_384) = 0x471EL)) , (l_389 = (p_62.f1 > (~((safe_mod_func_int16_t_s_s((g_158.f3.f0 ^ l_389), g_299[4][0][3])) != g_390))))), g_11.f0)) < 0x01L))) < 0L), p_62.f5)), 0x32L)), p_61.f0)))));
                    if (p_62.f2)
                        continue;
                    if (p_62.f1)
                        break;
                }
                else
                { 
                    union U4 *l_393 = &g_23;
                    union U4 **l_392 = &l_393;
                    int32_t *l_394 = &g_39;
                    int32_t **l_395 = (void*)0;
                    int32_t **l_396 = &g_306[2];
                    (*l_392) = &g_23;
                    if (p_62.f6)
                        break;
                    (*l_396) = l_394;
                    if (l_226[0][3][1])
                        break;
                    (***g_353) = l_397;
                }
                (**l_399) = (((((*l_398) = 5UL) > p_62.f7) || (l_399 != ((+((((safe_mod_func_int32_t_s_s(((l_226[0][3][1] , (*p_60)) , ((safe_rshift_func_uint8_t_u_s(((*l_406) = ((((*l_240) = l_405) != (**g_292)) | 0x7682L)), 0)) >= 0xC7L)), (-6L))) >= 0x0D1F23B2L) , 0UL) <= g_45[5])) , (*g_353)))) , p_61);
                g_410--;
            }
            (*l_413) = &l_345;
        }
        (*l_420) = ((l_418[0] &= ((safe_div_func_uint32_t_u_u((l_416 , l_416.f0), g_274.f2)) && (((void*)0 != (*g_353)) >= (l_216 &= (l_226[1][2][3] = p_62.f4))))) , &g_298);
        (*l_422) = &g_98;
    }
    if ((safe_rshift_func_uint16_t_u_u(0xCE9FL, p_62.f2)))
    { 
        uint32_t l_548[3];
        int32_t l_551 = 0xBDB78435L;
        int64_t *l_557 = &g_558;
        int8_t *l_611[2];
        int64_t **l_643 = (void*)0;
        int i;
        for (i = 0; i < 3; i++)
            l_548[i] = 0xEFAFB1A6L;
        for (i = 0; i < 2; i++)
            l_611[i] = &g_10;
        l_548[1]++;
        l_551 = 0xC7E112AFL;
        if (l_548[1])
        { 
            int32_t **l_552[4] = {&g_306[2],&g_306[2],&g_306[2],&g_306[2]};
            int64_t **l_556[3];
            uint32_t *l_567 = &g_298.f1;
            int i;
            for (i = 0; i < 3; i++)
                l_556[i] = (void*)0;
            l_553 = (l_232[1] = &g_73);
            (*l_553) ^= (((g_558 = (l_554 , (g_93 != (l_555 == (l_557 = l_555))))) & (-1L)) <= ((safe_rshift_func_uint8_t_u_u((safe_div_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((((*l_567)++) > (g_298.f7 ^ 7UL)), g_158.f4.f1)), 6)), 18446744073709551615UL)), p_62.f6)) ^ 1UL));
        }
        else
        { 
            const uint8_t l_575 = 0x05L;
            union U4 l_578 = {0x9E899EDF349309A7LL};
            int32_t l_588 = 0x933B7913L;
            int32_t l_589 = 2L;
            struct S2 l_624 = {0UL,-10L,{2},{6},{17,1UL,6,40,217,1178,1L,1},2UL};
            union U4 ****l_631 = (void*)0;
            int16_t *l_638 = (void*)0;
            int32_t **l_639 = (void*)0;
            int32_t **l_640 = &g_306[2];
            if (g_11.f6)
                goto lbl_570;
            for (g_558 = 0; (g_558 == (-13)); --g_558)
            { 
                uint32_t *l_585 = (void*)0;
                int32_t l_586 = 1L;
                uint32_t *l_587 = &g_125;
                int32_t l_602 = 0x69073EDFL;
                uint16_t **l_604 = &l_603;
                l_589 = (l_588 = ((safe_add_func_int8_t_s_s((*p_60), ((((*l_587) = (l_575 == ((l_586 &= (p_62.f1 <= ((safe_sub_func_uint16_t_u_u(((((l_578 , (((~((*g_316) > (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((+((g_306[2] == l_585) >= p_62.f7)), l_548[1])) || (-1L)), 0xF0L)))) < p_61.f0) == l_578.f3)) ^ p_61.f0) , 0x76AD60C0L) || g_10), p_62.f0)) | 0x746597E8113D3151LL))) < p_62.f4))) , 0x4545L) > (-8L)))) || g_23.f1));
            }
            (*l_640) = (((((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((((l_588 = (g_630 != l_631)) , g_11.f2) && (safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(g_298.f0, (p_62.f1 <= (safe_add_func_uint8_t_u_u((l_548[1] & (l_638 != (void*)0)), g_298.f6))))), (*p_60)))) >= 0xB570181C25B79478LL), 0)), l_578.f1)) , g_534[3]) , 0xDEB6L) || g_45[5]) , &l_345);
            (**l_640) &= (g_448.f4.f5 <= 0xCC26L);
        }
        l_643 = g_641;
    }
    else
    { 
        int8_t l_644 = 0x06L;
        int32_t l_645 = (-1L);
        int32_t l_646 = 0x7C987934L;
        int32_t l_647 = 0x0A74FBB1L;
        --l_648;
        return p_61;
    }
    return (*g_165);
}



static int8_t * func_63(int16_t  p_64)
{ 
    int32_t *l_65 = &g_39;
    int8_t *l_67[6] = {&g_10,&g_10,&g_10,&g_10,&g_10,&g_10};
    int8_t **l_66 = &l_67[5];
    int8_t ***l_68 = (void*)0;
    int8_t ***l_69 = &l_66;
    int32_t l_120 = 0x7F862FE7L;
    int32_t l_123 = 0xB24AB748L;
    int32_t l_124 = (-10L);
    int16_t l_145[6][1] = {{(-3L)},{4L},{(-3L)},{4L},{(-3L)},{4L}};
    struct S0 l_161 = {4};
    int64_t l_170 = (-1L);
    int i, j;
    (*l_65) = g_11.f7;
    (*l_65) = (-6L);
    (*l_69) = l_66;
    return &g_10;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_11.f4, "g_11.f4", print_hash_value);
    transparent_crc(g_11.f5, "g_11.f5", print_hash_value);
    transparent_crc(g_11.f6, "g_11.f6", print_hash_value);
    transparent_crc(g_11.f7, "g_11.f7", print_hash_value);
    transparent_crc(g_23.f0, "g_23.f0", print_hash_value);
    transparent_crc(g_23.f1, "g_23.f1", print_hash_value);
    transparent_crc(g_23.f2, "g_23.f2", print_hash_value);
    transparent_crc(g_23.f3, "g_23.f3", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_45[i], "g_45[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_46[i], "g_46[i]", print_hash_value);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_143, "g_143", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_149.f0, "g_149.f0", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2.f0, "g_158.f2.f0", print_hash_value);
    transparent_crc(g_158.f3.f0, "g_158.f3.f0", print_hash_value);
    transparent_crc(g_158.f4.f0, "g_158.f4.f0", print_hash_value);
    transparent_crc(g_158.f4.f1, "g_158.f4.f1", print_hash_value);
    transparent_crc(g_158.f4.f2, "g_158.f4.f2", print_hash_value);
    transparent_crc(g_158.f4.f3, "g_158.f4.f3", print_hash_value);
    transparent_crc(g_158.f4.f4, "g_158.f4.f4", print_hash_value);
    transparent_crc(g_158.f4.f5, "g_158.f4.f5", print_hash_value);
    transparent_crc(g_158.f4.f6, "g_158.f4.f6", print_hash_value);
    transparent_crc(g_158.f4.f7, "g_158.f4.f7", print_hash_value);
    transparent_crc(g_158.f5, "g_158.f5", print_hash_value);
    transparent_crc(g_274.f0, "g_274.f0", print_hash_value);
    transparent_crc(g_274.f1, "g_274.f1", print_hash_value);
    transparent_crc(g_274.f2, "g_274.f2", print_hash_value);
    transparent_crc(g_274.f3, "g_274.f3", print_hash_value);
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_298.f1, "g_298.f1", print_hash_value);
    transparent_crc(g_298.f2, "g_298.f2", print_hash_value);
    transparent_crc(g_298.f3, "g_298.f3", print_hash_value);
    transparent_crc(g_298.f4, "g_298.f4", print_hash_value);
    transparent_crc(g_298.f5, "g_298.f5", print_hash_value);
    transparent_crc(g_298.f6, "g_298.f6", print_hash_value);
    transparent_crc(g_298.f7, "g_298.f7", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_299[i][j][k], "g_299[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_300, "g_300", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_448.f0, "g_448.f0", print_hash_value);
    transparent_crc(g_448.f1, "g_448.f1", print_hash_value);
    transparent_crc(g_448.f2.f0, "g_448.f2.f0", print_hash_value);
    transparent_crc(g_448.f3.f0, "g_448.f3.f0", print_hash_value);
    transparent_crc(g_448.f4.f0, "g_448.f4.f0", print_hash_value);
    transparent_crc(g_448.f4.f1, "g_448.f4.f1", print_hash_value);
    transparent_crc(g_448.f4.f2, "g_448.f4.f2", print_hash_value);
    transparent_crc(g_448.f4.f3, "g_448.f4.f3", print_hash_value);
    transparent_crc(g_448.f4.f4, "g_448.f4.f4", print_hash_value);
    transparent_crc(g_448.f4.f5, "g_448.f4.f5", print_hash_value);
    transparent_crc(g_448.f4.f6, "g_448.f4.f6", print_hash_value);
    transparent_crc(g_448.f4.f7, "g_448.f4.f7", print_hash_value);
    transparent_crc(g_448.f5, "g_448.f5", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_534[i], "g_534[i]", print_hash_value);

    }
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_807, "g_807", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_886.f0, "g_886.f0", print_hash_value);
    transparent_crc(g_886.f1, "g_886.f1", print_hash_value);
    transparent_crc(g_886.f2, "g_886.f2", print_hash_value);
    transparent_crc(g_886.f3, "g_886.f3", print_hash_value);
    transparent_crc(g_984.f0, "g_984.f0", print_hash_value);
    transparent_crc(g_984.f1, "g_984.f1", print_hash_value);
    transparent_crc(g_984.f2.f0, "g_984.f2.f0", print_hash_value);
    transparent_crc(g_984.f3.f0, "g_984.f3.f0", print_hash_value);
    transparent_crc(g_984.f4.f0, "g_984.f4.f0", print_hash_value);
    transparent_crc(g_984.f4.f1, "g_984.f4.f1", print_hash_value);
    transparent_crc(g_984.f4.f2, "g_984.f4.f2", print_hash_value);
    transparent_crc(g_984.f4.f3, "g_984.f4.f3", print_hash_value);
    transparent_crc(g_984.f4.f4, "g_984.f4.f4", print_hash_value);
    transparent_crc(g_984.f4.f5, "g_984.f4.f5", print_hash_value);
    transparent_crc(g_984.f4.f6, "g_984.f4.f6", print_hash_value);
    transparent_crc(g_984.f4.f7, "g_984.f4.f7", print_hash_value);
    transparent_crc(g_984.f5, "g_984.f5", print_hash_value);
    transparent_crc(g_1021, "g_1021", print_hash_value);
    transparent_crc(g_1124.f0, "g_1124.f0", print_hash_value);
    transparent_crc(g_1124.f1, "g_1124.f1", print_hash_value);
    transparent_crc(g_1124.f2, "g_1124.f2", print_hash_value);
    transparent_crc(g_1124.f3, "g_1124.f3", print_hash_value);
    transparent_crc(g_1207.f0, "g_1207.f0", print_hash_value);
    transparent_crc(g_1207.f1, "g_1207.f1", print_hash_value);
    transparent_crc(g_1207.f2, "g_1207.f2", print_hash_value);
    transparent_crc(g_1207.f3, "g_1207.f3", print_hash_value);
    transparent_crc(g_1207.f4, "g_1207.f4", print_hash_value);
    transparent_crc(g_1207.f5, "g_1207.f5", print_hash_value);
    transparent_crc(g_1207.f6, "g_1207.f6", print_hash_value);
    transparent_crc(g_1207.f7, "g_1207.f7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1318[i], "g_1318[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1439[i], "g_1439[i]", print_hash_value);

    }
    transparent_crc(g_1548, "g_1548", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1569[i], "g_1569[i]", print_hash_value);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1612[i], "g_1612[i]", print_hash_value);

    }
    transparent_crc(g_1832, "g_1832", print_hash_value);
    transparent_crc(g_1884, "g_1884", print_hash_value);
    transparent_crc(g_2076.f0, "g_2076.f0", print_hash_value);
    transparent_crc(g_2076.f1, "g_2076.f1", print_hash_value);
    transparent_crc(g_2076.f2, "g_2076.f2", print_hash_value);
    transparent_crc(g_2076.f3, "g_2076.f3", print_hash_value);
    transparent_crc(g_2123, "g_2123", print_hash_value);
    transparent_crc(g_2170, "g_2170", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_2182[i][j].f0, "g_2182[i][j].f0", print_hash_value);
            transparent_crc(g_2182[i][j].f1, "g_2182[i][j].f1", print_hash_value);
            transparent_crc(g_2182[i][j].f2, "g_2182[i][j].f2", print_hash_value);
            transparent_crc(g_2182[i][j].f3, "g_2182[i][j].f3", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_2243[i][j], "g_2243[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
