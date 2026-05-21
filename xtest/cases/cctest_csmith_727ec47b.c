// SPDX-License-Identifier: MIT
// cctest_csmith_727ec47b.c --- cctest case csmith_727ec47b (csmith seed 1920910459)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6721d055 */

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

// Options:   -s 1920910459 -o /tmp/csmith_gen_dot2yl5b/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int32_t  f0;
   uint16_t  f1;
   uint16_t  f2;
};

union U1 {
   const int8_t  f0;
   struct S0  f1;
};


static uint32_t g_20 = 18446744073709551615UL;
static uint8_t g_24 = 0UL;
static int32_t g_32 = 0x6FA4BC44L;
static int32_t g_35 = (-1L);
static int16_t g_37[3] = {1L,1L,1L};
static int16_t g_38 = 0L;
static uint16_t g_39 = 1UL;
static int32_t g_68 = 0L;
static uint16_t g_69 = 1UL;
static uint8_t g_85 = 249UL;
static uint8_t *g_84[4] = {&g_85,&g_85,&g_85,&g_85};
static int32_t g_87 = 0x6F1A7E1FL;
static int32_t g_89[7][6] = {{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL},{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL},{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL},{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL},{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL},{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL},{0x8F49E03BL,0x8F49E03BL,0x1B3ADA1DL,0L,0L,0x8F49E03BL}};
static int32_t g_90 = 0x44A59A1FL;
static int64_t g_91[5][2] = {{0x1AE354A5A8626FBELL,0x1E04183CEC1DFBCBLL},{0x1AE354A5A8626FBELL,0x1E04183CEC1DFBCBLL},{0x1AE354A5A8626FBELL,0x1E04183CEC1DFBCBLL},{0x1AE354A5A8626FBELL,0x1E04183CEC1DFBCBLL},{0x1AE354A5A8626FBELL,0x1E04183CEC1DFBCBLL}};
static uint64_t g_92 = 0x32BFDB46CE14E34DLL;
static int8_t g_103 = (-1L);
static uint8_t g_106 = 255UL;
static uint16_t g_112 = 8UL;
static int16_t g_134 = (-9L);
static uint32_t g_138 = 0xAADFC78EL;
static uint8_t **g_163 = &g_84[0];
static uint8_t *** const g_162 = &g_163;
static uint64_t g_170[2] = {0x1DCCA4C161D2AD6ALL,0x1DCCA4C161D2AD6ALL};
static int32_t g_177 = 0xC0AFFF8CL;
static uint8_t g_179 = 0xB5L;
static int64_t g_185 = 0xC777C127BBD1554CLL;
static int32_t g_186 = (-1L);
static int8_t *g_191 = (void*)0;
static int8_t **g_190[5][3][1] = {{{&g_191},{&g_191},{&g_191}},{{&g_191},{&g_191},{&g_191}},{{&g_191},{&g_191},{&g_191}},{{&g_191},{&g_191},{&g_191}},{{&g_191},{&g_191},{&g_191}}};
static union U1 g_234 = {0L};
static uint16_t g_249 = 1UL;
static int16_t g_314 = 0x3681L;
static int16_t g_317 = 0x966EL;
static uint16_t g_318[3] = {0xEB88L,0xEB88L,0xEB88L};
static uint32_t g_334 = 0xDB420EFCL;
static struct S0 g_350 = {0x46AA6A8AL,0x727EL,1UL};
static uint64_t g_356 = 0xF9FC92B834B38AC9LL;
static uint8_t g_384 = 3UL;
static uint16_t g_426 = 0UL;
static int32_t * const g_465[1][2] = {{&g_87,&g_87}};
static int32_t * const *g_464 = &g_465[0][0];
static const int32_t *g_547 = (void*)0;
static int8_t g_570 = 0xC7L;
static uint32_t g_574 = 18446744073709551608UL;
static uint32_t g_643[2] = {0x0B642F47L,0x0B642F47L};
static uint64_t **g_652 = (void*)0;
static struct S0 *g_705 = (void*)0;
static struct S0 **g_704 = &g_705;
static const int32_t *g_751 = (void*)0;
static int8_t g_763 = 1L;
static uint64_t ***g_776[7][1][3] = {{{&g_652,&g_652,&g_652}},{{(void*)0,(void*)0,&g_652}},{{(void*)0,&g_652,(void*)0}},{{(void*)0,&g_652,&g_652}},{{&g_652,&g_652,&g_652}},{{(void*)0,(void*)0,&g_652}},{{(void*)0,&g_652,(void*)0}}};
static uint64_t ****g_775 = &g_776[6][0][1];
static uint8_t g_831 = 0x96L;
static uint8_t **g_850 = (void*)0;
static int32_t *g_892 = &g_87;
static int32_t ****g_948 = (void*)0;
static uint64_t * const *g_1085 = (void*)0;
static int8_t g_1108 = 0x61L;
static uint16_t **g_1137[3] = {(void*)0,(void*)0,(void*)0};
static uint16_t g_1253 = 0x32ADL;
static union U1 *g_1311 = &g_234;
static union U1 **g_1310 = &g_1311;
static const uint16_t ***g_1471 = (void*)0;
static const uint16_t ****g_1470[6][4] = {{(void*)0,(void*)0,(void*)0,&g_1471},{&g_1471,&g_1471,(void*)0,&g_1471},{(void*)0,&g_1471,&g_1471,(void*)0},{&g_1471,&g_1471,&g_1471,&g_1471},{&g_1471,&g_1471,(void*)0,&g_1471},{&g_1471,(void*)0,&g_1471,&g_1471}};
static const uint16_t *****g_1469 = &g_1470[1][3];
static const int64_t g_1478 = 0xEEFD16CD7F4D9F07LL;
static uint16_t *g_1526 = &g_318[1];
static uint8_t ***g_1630 = &g_163;
static uint8_t **** const g_1629 = &g_1630;
static uint8_t **** const * const g_1628 = &g_1629;
static uint8_t *****g_1631 = (void*)0;
static struct S0 *g_1743 = &g_234.f1;



static uint16_t  func_1(void);
static uint16_t  func_4(uint32_t  p_5, uint16_t  p_6);
static uint32_t  func_10(union U1  p_11, uint32_t  p_12, uint64_t  p_13);
static union U1  func_14(int8_t  p_15, uint32_t  p_16, uint32_t  p_17);
static uint16_t  func_53(uint16_t  p_54, uint8_t * p_55);
static int16_t  func_72(uint32_t  p_73, const uint32_t  p_74, uint8_t  p_75);
static uint32_t  func_76(uint8_t  p_77, uint8_t * p_78, int32_t * p_79, uint32_t  p_80, int16_t  p_81);
static uint8_t * func_82(uint8_t * p_83);




static uint16_t  func_1(void)
{ 
    uint32_t l_9 = 0x35E4B783L;
    struct S0 l_21 = {-1L,0UL,3UL};
    int32_t l_22 = 0x0CA70051L;
    uint8_t *l_23 = &g_24;
    int32_t *l_1750 = &g_186;
    int32_t *l_1751 = &g_87;
    int32_t *l_1752 = &l_22;
    int32_t *l_1753[4] = {&g_32,&g_32,&g_32,&g_32};
    int64_t l_1754 = 0xA89710F54421C6FALL;
    int16_t l_1755 = 0L;
    int8_t l_1756[5][1][7] = {{{(-1L),1L,(-1L),0x21L,1L,0x27L,0x27L}},{{1L,0x7AL,0x11L,0x7AL,1L,0x11L,0xB0L}},{{0xB0L,0x27L,0x21L,0xB0L,0x21L,0x27L,0xB0L}},{{(-1L),0xB0L,0x27L,0x21L,0xB0L,0x21L,0x27L}},{{0xB0L,0xB0L,0x11L,1L,0x7AL,0x11L,0x7AL}}};
    uint32_t l_1757 = 4294967286UL;
    uint8_t l_1760 = 0x5CL;
    int32_t l_1761[7] = {8L,8L,8L,8L,8L,8L,8L};
    int i, j, k;
    l_21 = ((safe_div_func_int32_t_s_s(((func_4((safe_mod_func_uint32_t_u_u(l_9, func_10(func_14((((safe_mul_func_uint8_t_u_u(g_20, (l_21 , (g_20 , ((*l_23) = (l_22 = g_20)))))) && l_22) == g_20), g_20, g_20), g_38, l_9))), l_21.f0) || g_37[0]) , 0xEC0EDE97L), l_21.f2)) , l_21);
    (**g_464) ^= (g_1108 ^ 0x8E0FL);
    l_1757++;
    (*l_1751) = l_1760;
    return l_1761[2];
}



static uint16_t  func_4(uint32_t  p_5, uint16_t  p_6)
{ 
    uint16_t ***l_1183 = &g_1137[1];
    uint16_t ****l_1184 = (void*)0;
    uint16_t ****l_1185 = (void*)0;
    uint16_t ****l_1186 = &l_1183;
    int32_t l_1191 = (-7L);
    struct S0 * const *l_1199 = (void*)0;
    struct S0 * const **l_1198[3][3] = {{&l_1199,&l_1199,&l_1199},{(void*)0,(void*)0,(void*)0},{&l_1199,&l_1199,&l_1199}};
    uint32_t l_1200 = 0xB36B7EA0L;
    int8_t *l_1215[1];
    int64_t *l_1258 = &g_185;
    int64_t *l_1260 = &g_91[4][0];
    int32_t l_1269 = (-1L);
    int32_t l_1270 = 2L;
    int32_t l_1271 = 0xFEE4E891L;
    int32_t l_1272 = 1L;
    int32_t l_1275[2];
    int32_t *l_1299 = (void*)0;
    union U1 *l_1309[2][1][7] = {{{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234}},{{&g_234,&g_234,&g_234,&g_234,&g_234,&g_234,&g_234}}};
    union U1 **l_1308 = &l_1309[0][0][2];
    uint64_t ****l_1312 = (void*)0;
    uint32_t l_1445 = 0xF0F66EBAL;
    int32_t * const l_1459 = &l_1270;
    const uint16_t *l_1468 = (void*)0;
    const uint16_t **l_1467 = &l_1468;
    const uint16_t ***l_1466 = &l_1467;
    const uint16_t ****l_1465 = &l_1466;
    const uint16_t *****l_1464[6];
    uint8_t l_1486 = 253UL;
    int32_t ***l_1496 = (void*)0;
    int32_t ****l_1495 = &l_1496;
    const uint8_t **l_1603 = (void*)0;
    const uint8_t ***l_1602 = &l_1603;
    const uint8_t ****l_1601 = &l_1602;
    const uint8_t ***** const l_1600 = &l_1601;
    uint8_t l_1614 = 0UL;
    uint8_t ****l_1633 = &g_1630;
    uint8_t *****l_1632[2][2][1];
    uint8_t *****l_1634 = &l_1633;
    int16_t l_1641 = 0x0B23L;
    int32_t l_1643 = 0x704CF250L;
    uint64_t ***l_1686 = (void*)0;
    uint8_t l_1719 = 0UL;
    int8_t l_1729 = 0x22L;
    int16_t l_1734 = 0x7964L;
    const uint16_t l_1744[7] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1215[i] = &g_1108;
    for (i = 0; i < 2; i++)
        l_1275[i] = 0x6E9ADB02L;
    for (i = 0; i < 6; i++)
        l_1464[i] = &l_1465;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_1632[i][j][k] = &l_1633;
        }
    }
    if ((0x9AL & (((safe_add_func_uint32_t_u_u((((*l_1186) = l_1183) == ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((l_1191 & ((safe_rshift_func_uint8_t_u_s((***g_162), (((safe_div_func_uint64_t_u_u((((safe_div_func_uint16_t_u_u((((g_643[0] = ((void*)0 == l_1198[2][2])) ^ p_5) <= l_1191), p_6)) <= 0xD7123F28L) >= 0x304DL), g_68)) || 65530UL) , l_1191))) > (***g_162))) , l_1191), l_1200)), 15)) , &g_1137[0])), 0xEE4AD925L)) , 0x55L) & l_1200)))
    { 
        uint8_t l_1221 = 250UL;
        int32_t l_1225 = 0x3ADED513L;
        int32_t l_1226 = (-2L);
        int32_t l_1268 = 0x719D5D83L;
        int32_t l_1276 = (-3L);
        int32_t l_1277 = 0x0B1ECE1AL;
        int32_t l_1279 = (-9L);
        int32_t l_1280 = 0x454547B4L;
        int32_t l_1282 = 1L;
        int32_t l_1285 = 0x846C8AE0L;
        int32_t l_1289 = 0xFA51B6E9L;
        int32_t l_1290 = 0xE5979C04L;
        int32_t l_1293 = 0x70CC70C4L;
        int32_t l_1295 = (-10L);
        uint16_t ****l_1321 = &l_1183;
        struct S0 l_1365 = {0L,0x551EL,0x6D24L};
        int8_t l_1376 = 0xD9L;
        uint16_t l_1387 = 0xDD27L;
        int32_t l_1456 = (-1L);
        int32_t * const **l_1473 = (void*)0;
        int16_t l_1566[4];
        uint32_t l_1610 = 0xD3BE34BEL;
        int32_t l_1644[7] = {0xF6236FC9L,0xF6236FC9L,0xF6236FC9L,0xF6236FC9L,0xF6236FC9L,0xF6236FC9L,0xF6236FC9L};
        uint8_t l_1645 = 255UL;
        int i;
        for (i = 0; i < 4; i++)
            l_1566[i] = 0L;
        for (g_350.f0 = 1; (g_350.f0 > (-27)); g_350.f0--)
        { 
            int8_t *l_1214[2];
            const int32_t l_1224 = (-1L);
            struct S0 l_1228 = {6L,0xF7BFL,0x9E68L};
            int32_t l_1273[7];
            int16_t l_1291[4];
            union U1 *l_1301 = &g_234;
            union U1 **l_1300 = &l_1301;
            uint16_t ****l_1324 = (void*)0;
            uint32_t l_1346 = 0xB46F532EL;
            int32_t l_1353 = 0xBB9F8E59L;
            int32_t **l_1361 = (void*)0;
            int i;
            for (i = 0; i < 2; i++)
                l_1214[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_1273[i] = 0x2612646DL;
            for (i = 0; i < 4; i++)
                l_1291[i] = 0x6914L;
            if ((safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((l_1226 = (safe_div_func_int16_t_s_s((!(safe_mul_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_1191, 7)) > ((l_1215[0] = l_1214[1]) != (void*)0)), (l_1225 = (((**g_464) = (((safe_add_func_int16_t_s_s(5L, (safe_mod_func_int16_t_s_s(0x5431L, (safe_unary_minus_func_uint32_t_u((l_1221 && (safe_rshift_func_uint16_t_u_u(0x2C51L, 11))))))))) < l_1224) != 0xEDL)) , p_5))))), g_1108))), p_5)), p_6)))
            { 
                const int32_t **l_1227 = &g_751;
                (*l_1227) = (void*)0;
                l_1228 = l_1228;
            }
            else
            { 
                int32_t *l_1231 = &l_1225;
                const int64_t l_1254 = 0x96A4F84ECA5BC82ELL;
                int32_t l_1255 = 0x50FF5A99L;
                int32_t l_1278 = 0x97289DAAL;
                int32_t l_1281 = 0x5AD5EA03L;
                int32_t l_1283 = 7L;
                int32_t l_1284 = 0L;
                int32_t l_1286 = 0x97671E3EL;
                int32_t l_1287 = 0xA1E868ABL;
                int32_t l_1288[3];
                int32_t l_1292 = 0xED926D8EL;
                int8_t l_1294 = (-8L);
                uint8_t l_1296 = 0x32L;
                uint64_t *****l_1313 = &g_775;
                int32_t **l_1349 = (void*)0;
                int32_t **l_1350 = &l_1299;
                int i;
                for (i = 0; i < 3; i++)
                    l_1288[i] = 1L;
                for (g_106 = 0; (g_106 <= 24); g_106 = safe_add_func_int64_t_s_s(g_106, 6))
                { 
                    int32_t **l_1232 = (void*)0;
                    int32_t *l_1233 = &l_1225;
                    int16_t *l_1252 = &g_314;
                    l_1233 = l_1231;
                    (*l_1233) &= (65528UL & p_6);
                    l_1255 = ((safe_mod_func_uint32_t_u_u(g_69, (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(p_5, (l_1191 = ((((safe_lshift_func_int16_t_s_u(((((safe_mod_func_uint32_t_u_u(((((*l_1231) = p_6) >= ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s(((l_1231 == (void*)0) && ((*l_1252) = ((safe_mul_func_uint16_t_u_u(l_1228.f2, p_6)) < (**g_464)))), 15)), 0xD2L)) >= 4294967287UL)) || (-1L)), 0x80E0C643L)) <= g_1253) || p_5) && (*l_1231)), l_1221)) <= 246UL) == l_1228.f2) || l_1254)))), 5)), 0x220E497AL)))) , (-8L));
                }
                for (g_350.f1 = 0; (g_350.f1 <= 2); g_350.f1 += 1)
                { 
                    int64_t **l_1259 = &l_1258;
                    int64_t **l_1261 = &l_1260;
                    int32_t *l_1262 = &g_32;
                    int32_t *l_1263 = &g_32;
                    int32_t *l_1264 = (void*)0;
                    int32_t *l_1265 = (void*)0;
                    int32_t *l_1266 = &g_87;
                    int32_t *l_1267[6];
                    int64_t l_1274 = 0x8B2CBF082C04B34CLL;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1267[i] = (void*)0;
                    (*g_892) |= (safe_mul_func_uint16_t_u_u((((*l_1259) = l_1258) != ((*l_1261) = l_1260)), (*l_1231)));
                    (**g_464) = (g_350.f1 > p_5);
                    if ((*g_892))
                        break;
                    ++l_1296;
                    l_1299 = &l_1270;
                }
                if ((l_1300 != (((safe_mod_func_int8_t_s_s(p_6, (safe_rshift_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u(0xC4L, 4UL)) == (((l_1225 = (l_1308 != g_1310)) , ((*l_1313) = l_1312)) != &g_776[3][0][1])) > p_6), 10)))) | p_6) , &g_1311)))
                { 
                    int32_t * const *l_1316 = &g_892;
                    uint16_t *****l_1322 = (void*)0;
                    uint16_t *****l_1323 = &l_1186;
                    (**l_1316) ^= ((safe_div_func_uint32_t_u_u(((void*)0 != l_1316), (safe_mod_func_uint16_t_u_u(l_1280, ((safe_rshift_func_uint16_t_u_s((0UL == ((1UL & (((*l_1323) = l_1321) != l_1324)) , p_5)), p_6)) , 0xC95EL))))) && p_5);
                }
                else
                { 
                    int32_t *l_1325 = (void*)0;
                    int32_t *l_1326 = &l_1269;
                    int32_t *l_1327 = (void*)0;
                    int32_t *l_1328 = &l_1295;
                    int32_t *l_1329 = (void*)0;
                    int32_t *l_1330 = &l_1225;
                    int32_t *l_1331 = &l_1288[1];
                    int32_t *l_1332 = &l_1225;
                    int32_t *l_1333 = (void*)0;
                    int32_t *l_1334 = &l_1255;
                    int32_t *l_1335 = &l_1191;
                    int32_t *l_1336 = &l_1279;
                    int32_t *l_1337 = (void*)0;
                    int32_t l_1338 = (-7L);
                    int32_t *l_1339 = &l_1280;
                    int32_t *l_1340 = &l_1285;
                    int32_t *l_1341 = (void*)0;
                    int32_t *l_1342 = &l_1225;
                    int32_t *l_1343 = &l_1295;
                    int32_t *l_1344 = &l_1338;
                    int32_t *l_1345[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1345[i] = &l_1295;
                    ++l_1346;
                    (*l_1335) |= (**g_464);
                }
                (*l_1350) = &l_1287;
            }
            for (g_426 = 0; (g_426 <= 20); ++g_426)
            { 
                uint64_t l_1354 = 18446744073709551615UL;
                int32_t l_1355 = 0x8822A06CL;
                int32_t *l_1356 = &l_1269;
                int32_t *l_1357[5][1];
                uint32_t l_1358 = 4294967295UL;
                int32_t **l_1362 = &l_1356;
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1357[i][j] = &l_1277;
                }
                l_1355 ^= (l_1353 != l_1354);
                --l_1358;
                l_1362 = l_1361;
            }
            return l_1279;
        }
        if (((**g_464) = ((0x5CAAB192E7F962ACLL == (safe_mul_func_int16_t_s_s(((((0x2B76FE9E8ED0D276LL == 0xCC46FBCA6021DC83LL) , l_1365) , &g_191) == &l_1215[0]), ((safe_div_func_int32_t_s_s(((l_1226 , p_5) >= p_6), p_5)) & g_20)))) <= p_6)))
        { 
            int8_t l_1386 = (-1L);
            uint32_t *l_1388 = &g_643[0];
            int32_t * const l_1389[2] = {&l_1275[1],&l_1275[1]};
            int i;
            if ((((((0xE072F72E81C74D1ALL < (safe_div_func_uint32_t_u_u((g_334 = (safe_mod_func_int8_t_s_s((((*l_1388) = (p_6 > (l_1225 <= (safe_div_func_int8_t_s_s(l_1376, ((safe_sub_func_int32_t_s_s((*g_892), (+(safe_div_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u((**g_163), ((((**g_464) > g_39) , l_1386) == l_1387))), (*g_892))), 0xC34AL))))) || p_5)))))) || (-2L)), p_6))), 0x9E4A05EDL))) >= 4294967288UL) , l_1386) >= g_89[5][3]) >= l_1282))
            { 
                int32_t **l_1390 = &l_1299;
                (**g_464) &= (g_356 < p_5);
                (*l_1390) = l_1389[1];
                return p_6;
            }
            else
            { 
                int32_t l_1395 = 3L;
                uint16_t l_1406 = 0xF75FL;
                union U1 **l_1407 = &l_1309[0][0][2];
                int32_t l_1408[5][2];
                int32_t l_1409[4][1][5] = {{{0x15AE50BAL,0x9719BC29L,0x15AE50BAL,0x15AE50BAL,0x9719BC29L}},{{0x9719BC29L,0x15AE50BAL,0x15AE50BAL,0x9719BC29L,0x15AE50BAL}},{{0x9719BC29L,0x9719BC29L,(-10L),0x9719BC29L,0x9719BC29L}},{{0x15AE50BAL,0x9719BC29L,0x15AE50BAL,0x15AE50BAL,0x9719BC29L}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_1408[i][j] = 1L;
                }
                (**g_464) |= (safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_1395 == 0xA640L), ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((l_1409[1][0][2] = (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((l_1406 , l_1407) == (void*)0), ((l_1408[2][0] , (l_1408[2][0] = l_1406)) <= 248UL))), p_6))), l_1279)) || g_37[1]) <= l_1406), l_1285)), l_1387)) , g_643[0]))), l_1276));
            }
        }
        else
        { 
            return p_6;
        }
        for (l_1268 = 0; (l_1268 == 13); l_1268 = safe_add_func_uint8_t_u_u(l_1268, 3))
        { 
            uint32_t l_1420[3];
            int32_t l_1425 = (-1L);
            int32_t l_1435 = 0xDE7D00FCL;
            int32_t l_1436[4] = {(-10L),(-10L),(-10L),(-10L)};
            const uint16_t ***l_1463 = (void*)0;
            const uint16_t ****l_1462 = &l_1463;
            const uint16_t *****l_1461 = &l_1462;
            struct S0 *l_1472 = (void*)0;
            int16_t *l_1502[4][7];
            int32_t *l_1510 = &l_1365.f0;
            uint64_t l_1515 = 0x8F3766ECAE584167LL;
            struct S0 l_1527 = {0L,0UL,0x4F01L};
            uint32_t *l_1635[5][1];
            int64_t l_1636[5][7][4] = {{{0x9F2084E763B940F4LL,0x6A75C21D3507E012LL,0xDC9201A70EDF76D1LL,0x880AE61EA033072FLL},{9L,0x4DD6A6C4AF22FAFALL,(-1L),0xC4FBA142E5226894LL},{4L,0x067F59E39A765A8ALL,0xD2FC7D602E1D5465LL,(-1L)},{0x3E75497F08ADBEFELL,0x13AF970CDB550C23LL,0x13AF970CDB550C23LL,0x3E75497F08ADBEFELL},{0x1204FB45EF12E37FLL,0xFA713DF41D6E87ECLL,0x2EA60F6A1643F578LL,(-6L)},{0x13AF970CDB550C23LL,0x6A75C21D3507E012LL,9L,0x519991AE1AC891DDLL},{0x4DD6A6C4AF22FAFALL,9L,7L,0x519991AE1AC891DDLL}},{{4L,0x6A75C21D3507E012LL,(-1L),(-6L)},{0x49E0A34FF789EE12LL,0xFA713DF41D6E87ECLL,(-1L),0x3E75497F08ADBEFELL},{2L,0x13AF970CDB550C23LL,0x519991AE1AC891DDLL,(-1L)},{0xFA713DF41D6E87ECLL,0x067F59E39A765A8ALL,9L,0xC4FBA142E5226894LL},{0x1204FB45EF12E37FLL,0x4DD6A6C4AF22FAFALL,0x9F2084E763B940F4LL,0x880AE61EA033072FLL},{0L,0x6A75C21D3507E012LL,0L,7L},{0x3E75497F08ADBEFELL,(-6L),7L,0xD2FC7D602E1D5465LL}},{{2L,0x9F2084E763B940F4LL,0xDC9201A70EDF76D1LL,(-6L)},{(-6L),0x3D948AEEB98CE028LL,0xDC9201A70EDF76D1LL,0xC4FBA142E5226894LL},{2L,0x1204FB45EF12E37FLL,7L,0xDC9201A70EDF76D1LL},{0x3E75497F08ADBEFELL,0x067F59E39A765A8ALL,0L,0xFA713DF41D6E87ECLL},{0L,0xFA713DF41D6E87ECLL,0x9F2084E763B940F4LL,0x49E0A34FF789EE12LL},{0x1204FB45EF12E37FLL,0x9F2084E763B940F4LL,9L,7L},{0xFA713DF41D6E87ECLL,0L,0x519991AE1AC891DDLL,0x519991AE1AC891DDLL}},{{2L,2L,(-1L),0x880AE61EA033072FLL},{0x49E0A34FF789EE12LL,0x3D948AEEB98CE028LL,(-1L),0xFA713DF41D6E87ECLL},{4L,0x13AF970CDB550C23LL,7L,(-1L)},{0x4DD6A6C4AF22FAFALL,0x13AF970CDB550C23LL,9L,0xFA713DF41D6E87ECLL},{0x13AF970CDB550C23LL,0x3D948AEEB98CE028LL,0x2EA60F6A1643F578LL,0x880AE61EA033072FLL},{0x1204FB45EF12E37FLL,2L,0x13AF970CDB550C23LL,0x519991AE1AC891DDLL},{0x3E75497F08ADBEFELL,0L,0xD2FC7D602E1D5465LL,7L}},{{4L,0x9F2084E763B940F4LL,(-1L),0x49E0A34FF789EE12LL},{9L,0xFA713DF41D6E87ECLL,0xDC9201A70EDF76D1LL,0xFA713DF41D6E87ECLL},{0x9F2084E763B940F4LL,0x067F59E39A765A8ALL,0x519991AE1AC891DDLL,0xDC9201A70EDF76D1LL},{0x4DD6A6C4AF22FAFALL,0x1204FB45EF12E37FLL,0x13AF970CDB550C23LL,0xC4FBA142E5226894LL},{0L,0x3D948AEEB98CE028LL,4L,(-6L)},{0L,0x9F2084E763B940F4LL,0x13AF970CDB550C23LL,0xD2FC7D602E1D5465LL},{0x4DD6A6C4AF22FAFALL,(-6L),0x519991AE1AC891DDLL,7L}}};
            int32_t *l_1637 = &l_1275[1];
            int32_t *l_1638 = &l_1282;
            int32_t *l_1639 = &l_1435;
            int32_t *l_1640[2][6] = {{&l_1456,&l_1191,&l_1290,&l_1290,&l_1191,&l_1456},{(void*)0,&l_1456,&l_1290,&l_1456,(void*)0,(void*)0}};
            int16_t l_1642 = 3L;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1420[i] = 4294967295UL;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1502[i][j] = &g_37[2];
            }
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1635[i][j] = &g_334;
            }
            if (p_5)
            { 
                int16_t l_1416[6][1][7] = {{{0x9884L,0x64CDL,0x64CDL,0x9884L,0x64CDL,0x64CDL,0x9884L}},{{0x64CDL,0x9884L,0x64CDL,0x64CDL,0x9884L,0x64CDL,0x64CDL}},{{0x9884L,0x9884L,0xBF97L,0x9884L,0x9884L,0xBF97L,0x9884L}},{{0x9884L,0x64CDL,0x64CDL,0x9884L,0x64CDL,0x64CDL,0x9884L}},{{0x64CDL,0x9884L,0x64CDL,0x64CDL,0x9884L,0x64CDL,0x64CDL}},{{0x64CDL,0x64CDL,0x9884L,0x64CDL,0x64CDL,0x9884L,0x64CDL}}};
                int16_t *l_1417 = &g_38;
                int32_t l_1421 = (-7L);
                int32_t *l_1422 = &l_1269;
                struct S0 l_1423 = {0x285ACCFDL,65528UL,65531UL};
                int32_t *l_1424 = &l_1270;
                int32_t *l_1426 = &l_1271;
                int32_t *l_1427 = &l_1276;
                int32_t *l_1428 = &l_1290;
                int32_t *l_1429 = &l_1225;
                int32_t *l_1430 = (void*)0;
                int32_t *l_1431 = &l_1285;
                int32_t *l_1432 = &l_1269;
                int32_t *l_1433 = &l_1270;
                int32_t *l_1434[5][4][3];
                uint8_t l_1437 = 255UL;
                uint16_t ***l_1452 = &g_1137[1];
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_1434[i][j][k] = &l_1270;
                    }
                }
                (*l_1422) |= ((-8L) < ((*g_892) = (safe_mul_func_int8_t_s_s((l_1421 ^= (((((safe_sub_func_int8_t_s_s(p_6, l_1416[5][0][0])) >= ((((*l_1417) = g_170[1]) >= (safe_lshift_func_int8_t_s_u(l_1280, 0))) , (p_5 && l_1420[2]))) >= 1L) ^ g_68) & g_89[6][3])), p_5))));
                g_234.f1 = l_1423;
                --l_1437;
                for (g_103 = (-18); (g_103 >= (-23)); g_103--)
                { 
                    int64_t l_1442 = 0x976FA96B7D6BD0E1LL;
                    int32_t l_1443 = 0x2C6A34A8L;
                    int32_t l_1444[1][5][4] = {{{0xFEE7EF9FL,0xD67723EBL,0xD67723EBL,0xFEE7EF9FL},{0xD67723EBL,0xFEE7EF9FL,0xC3325AA4L,0x7D3A8CBDL},{0xD67723EBL,0xC3325AA4L,0xD67723EBL,0x67CC5EADL},{0xFEE7EF9FL,0x7D3A8CBDL,0x67CC5EADL,0x67CC5EADL},{0xC3325AA4L,0xC3325AA4L,0L,0x7D3A8CBDL}}};
                    uint16_t ***l_1454 = &g_1137[0];
                    uint16_t ****l_1453 = &l_1454;
                    int32_t **l_1460 = &l_1430;
                    int i, j, k;
                    --l_1445;
                    (*l_1426) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((*l_1186) != ((*l_1453) = (l_1452 = (*l_1321)))), 15)), p_5)) , ((l_1456 = ((*l_1424) = (~(**g_464)))) && ((safe_sub_func_int32_t_s_s(p_5, 1L)) == (l_1436[2] < 0x5C37L))));
                    (*l_1460) = l_1459;
                    g_1469 = (l_1464[3] = l_1461);
                }
            }
            else
            { 
                const int64_t *l_1477[2];
                const int64_t **l_1476 = &l_1477[0];
                int32_t l_1485 = (-1L);
                int16_t *l_1497[2];
                int32_t l_1498 = 0x477346F8L;
                uint32_t *l_1499 = &l_1420[0];
                const struct S0 l_1501 = {0xAFCEC210L,4UL,0xB585L};
                int i;
                for (i = 0; i < 2; i++)
                    l_1477[i] = &g_1478;
                for (i = 0; i < 2; i++)
                    l_1497[i] = (void*)0;
                g_350 = l_1365;
                (*g_704) = l_1472;
                (**g_464) = ((void*)0 != l_1473);
                (*l_1459) = (safe_add_func_int16_t_s_s(((((*l_1476) = &g_91[4][0]) != l_1260) , ((safe_mul_func_uint8_t_u_u((safe_div_func_uint32_t_u_u(((*l_1499) |= ((safe_rshift_func_uint8_t_u_s((l_1486 = l_1485), (safe_mod_func_uint32_t_u_u(((l_1498 = ((safe_sub_func_int8_t_s_s(p_5, (((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(4L, (l_1495 == (g_68 , (void*)0)))), 0x28L)) || 0xCD9EC59AL) != l_1485))) >= p_5)) != p_6), 0xBFF20166L)))) , g_763)), g_384)), (-1L))) >= 1UL)), l_1485));
                (*l_1459) = (((~((l_1501 , l_1502[3][2]) != ((safe_unary_minus_func_uint8_t_u((**g_163))) , (void*)0))) , (*l_1495)) == (void*)0);
            }
            if (((p_6 ^ p_5) & ((-1L) || ((((*l_1510) |= (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u((3L & (safe_add_func_int16_t_s_s(g_38, (l_1436[2] = (g_134 |= (l_1425 &= ((l_1436[3] , (4L < g_179)) || 0x18L))))))), p_5)), (*l_1459)))) , l_1435) | 2UL))))
            { 
                int32_t * const l_1530 = &l_1289;
                int32_t *l_1531 = &l_1295;
                int32_t **l_1542 = &l_1531;
                for (l_1365.f1 = 18; (l_1365.f1 < 6); l_1365.f1 = safe_sub_func_int8_t_s_s(l_1365.f1, 6))
                { 
                    uint32_t l_1537 = 1UL;
                    uint32_t *l_1540 = &l_1445;
                    uint64_t *l_1541[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1541[i] = &g_356;
                    l_1527 = ((((safe_lshift_func_uint16_t_u_s((p_5 | ((l_1515 = p_5) >= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((safe_add_func_uint16_t_u_u((g_249 && (safe_add_func_uint64_t_u_u(0x13A1C46B16376A57LL, (((0x22DA9886L && (func_14((safe_mul_func_int8_t_s_s(((***l_1465) == g_1526), p_6)), g_112, p_5) , 1UL)) , (-1L)) != 0xAFC81395DF7BA2C1LL)))), l_1436[2])) | p_6), p_6)), p_5)))), 1)) , l_1365) , l_1515) , l_1365);
                    if (l_1527.f2)
                        continue;
                    (*l_1459) = (safe_sub_func_int32_t_s_s(((*l_1531) = ((p_5 , l_1530) != (g_892 = l_1531))), ((safe_rshift_func_uint8_t_u_u((((((safe_unary_minus_func_uint16_t_u(((l_1435 |= (safe_sub_func_int32_t_s_s(((*l_1530) = ((**g_464) ^= (((*l_1540) = (((*l_1260) ^= (-9L)) < ((l_1537 | (safe_rshift_func_int8_t_s_u(p_6, 2))) , ((*l_1258) &= p_6)))) <= g_90))), (-1L)))) != g_317))) , l_1527.f2) != p_6) , p_5) , (***g_162)), p_6)) , 0x14443E14L)));
                    (*l_1531) = p_6;
                }
                (*l_1542) = (*g_464);
                (*l_1530) ^= 0xF0FA6F0AL;
                if ((*g_892))
                    break;
            }
            else
            { 
                int64_t l_1567 = 0L;
                int32_t l_1568 = 0x04D7F610L;
                int32_t *l_1605 = (void*)0;
                int32_t *l_1606 = &l_1279;
                int32_t *l_1607 = &l_1271;
                int32_t *l_1608[2];
                int8_t l_1609 = 0x69L;
                int64_t l_1613 = 1L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1608[i] = (void*)0;
                if ((*g_892))
                    break;
                if ((p_6 >= 0xBF9553CC923BE23DLL))
                { 
                    int32_t l_1559 = (-5L);
                    (*l_1459) |= (((l_1568 = (safe_sub_func_int64_t_s_s((((safe_mul_func_uint16_t_u_u((((**g_464) = (0L | (l_1567 ^= ((-1L) ^ (safe_lshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s((p_5 , (safe_mod_func_uint64_t_u_u((safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((*g_1526) &= l_1559) & p_6), 0x2AF7L)), (((*l_1260) = ((*l_1258) = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_add_func_int32_t_s_s((0xF4F09C48B3465407LL == p_5), p_5)), g_170[0])), l_1559)))) & 0x4419E0DEC7B06FACLL))), p_5))), 9UL)), l_1566[2])), 12)))))) | p_5), g_37[1])) ^ l_1568) >= g_356), g_20))) , 1UL) | l_1559);
                    (*l_1459) |= (**g_464);
                    (*l_1459) ^= (safe_sub_func_int16_t_s_s(((((func_14(((**l_1308) , (safe_mod_func_int64_t_s_s(p_6, 0xF30AE39AC71BC571LL))), (((safe_mul_func_int8_t_s_s((+l_1559), p_5)) ^ (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((g_643[0] < (((+(l_1258 == (void*)0)) && 0x9D92CBD6L) < g_314)) || p_5), 1UL)), 4))) | 0x8BL), p_6) , p_6) | p_6) , &g_138) != g_751), g_186));
                }
                else
                { 
                    uint8_t l_1598 = 1UL;
                    int8_t l_1604 = 0x2BL;
                    (**g_464) = (safe_sub_func_int16_t_s_s((((((**g_163) == (safe_div_func_uint32_t_u_u((!(safe_mul_func_int8_t_s_s((safe_sub_func_uint64_t_u_u((((((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((0x5593C842L || (safe_rshift_func_int16_t_s_u((l_1598 ^ ((*l_1459) = (((((+((void*)0 != l_1600)) >= p_5) >= ((l_1568 = ((*l_1459) && 0x7DB2L)) && p_5)) == l_1567) >= l_1598))), 10))) == l_1567), p_6)), 65530UL)) >= l_1598) & p_6) || 0x99B395E3C899663FLL) == 0x9DL), p_5)), p_5))), (-7L)))) & p_6) == l_1604) > 0xF010L), p_6));
                    if (l_1527.f2)
                        continue;
                }
                l_1610++;
                --l_1614;
            }
            (*l_1459) = ((**g_464) = (safe_div_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((-1L) < ((3L && (((safe_add_func_int32_t_s_s((!l_1527.f2), (g_643[0] = (l_1435 = (((safe_mul_func_int16_t_s_s(p_5, 0x9A69L)) , g_1628) != (l_1634 = (l_1632[1][0][0] = g_1631))))))) >= g_384) ^ (**g_163))) && g_89[2][4])), p_6)), l_1636[0][0][0])) <= p_6), 0x4DL)));
            l_1645++;
        }
    }
    else
    { 
        uint64_t l_1660[2][4] = {{0x6D866733E00D27B7LL,0x6D866733E00D27B7LL,0x6D866733E00D27B7LL,0x6D866733E00D27B7LL},{0x6D866733E00D27B7LL,0x6D866733E00D27B7LL,0x6D866733E00D27B7LL,0x6D866733E00D27B7LL}};
        int32_t l_1661 = 0x4BD80CEFL;
        uint16_t l_1665 = 0x2C47L;
        int32_t l_1708 = (-9L);
        const uint64_t l_1723 = 9UL;
        const uint8_t *****l_1735[6] = {(void*)0,&l_1601,(void*)0,(void*)0,&l_1601,(void*)0};
        uint8_t *****l_1736 = &l_1633;
        uint8_t *****l_1737 = &l_1633;
        struct S0 *l_1742 = &g_350;
        int32_t *l_1745 = &l_1275[1];
        int i, j;
        for (g_20 = 0; (g_20 <= 53); g_20++)
        { 
            uint8_t * const *l_1674[4][4][2] = {{{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]}},{{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]}},{{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]}},{{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]},{&g_84[0],&g_84[0]}}};
            int32_t l_1675 = 0x116F0848L;
            struct S0 l_1701[6] = {{0x5F490B70L,0UL,0xA4D0L},{0x5F490B70L,0UL,0xA4D0L},{0x5F490B70L,0UL,0xA4D0L},{0x5F490B70L,0UL,0xA4D0L},{0x5F490B70L,0UL,0xA4D0L},{0x5F490B70L,0UL,0xA4D0L}};
            int32_t l_1709 = (-1L);
            int i, j, k;
            if (((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((p_5 > ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((*l_1459), (l_1660[1][3] |= ((*g_1526)++)))), l_1661)) == (~((0UL == ((**g_464) , (safe_mod_func_int64_t_s_s((((l_1665 > ((safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_add_func_int8_t_s_s(((-1L) && l_1661), p_6)) <= l_1665), l_1665)) != 1L) < l_1665), (-4L))), (*****g_1628))) && l_1661)) , l_1674[1][2][1]) == (*g_162)), g_89[6][3])))) >= l_1675)))), l_1665)), l_1675)) > p_6))
            { 
                int32_t *l_1676 = &l_1272;
                int32_t **l_1677 = &l_1676;
                (*l_1677) = l_1676;
                for (g_69 = 22; (g_69 >= 15); g_69 = safe_sub_func_uint32_t_u_u(g_69, 6))
                { 
                    union U1 l_1689 = {0x98L};
                    int16_t *l_1690 = &g_37[0];
                    (*g_892) = ((safe_mod_func_int64_t_s_s(((((p_6 > (safe_rshift_func_uint16_t_u_u((l_1675 && ((*g_1526) >= ((*l_1690) = (((*l_1260) = ((safe_mod_func_int32_t_s_s(p_6, ((((((l_1686 != ((safe_mul_func_uint8_t_u_u((*l_1459), 0x73L)) , (void*)0)) < 0x32L) | l_1675) , l_1689) , l_1675) ^ l_1675))) , p_6)) && 3L)))), 5))) != 0x39099986L) ^ l_1675) && l_1661), l_1675)) && 5L);
                }
            }
            else
            { 
                (**g_464) |= p_5;
                for (g_384 = 2; (g_384 == 58); g_384 = safe_add_func_int32_t_s_s(g_384, 7))
                { 
                    (*g_892) ^= p_5;
                    (**g_464) |= 0x298506B9L;
                }
                for (p_5 = 24; (p_5 <= 6); p_5 = safe_sub_func_uint64_t_u_u(p_5, 9))
                { 
                    int32_t **l_1695 = &l_1299;
                    (*l_1695) = (*g_464);
                    l_1299 = &l_1675;
                    if ((*g_892))
                        continue;
                    (*l_1459) ^= (safe_rshift_func_uint8_t_u_s(((***g_1630) = l_1661), 2));
                }
            }
            for (l_1272 = 0; (l_1272 >= 0); l_1272 -= 1)
            { 
                uint16_t l_1699 = 9UL;
                int32_t l_1707[6] = {(-10L),0x08CFE473L,0x08CFE473L,(-10L),0x08CFE473L,0x08CFE473L};
                int i;
                if (p_5)
                { 
                    int32_t **l_1698 = &l_1299;
                    struct S0 l_1700 = {0x03D60AB9L,1UL,1UL};
                    (*l_1698) = &l_1675;
                    if (l_1699)
                        continue;
                    l_1701[4] = l_1700;
                }
                else
                { 
                    int32_t *l_1702 = &g_87;
                    int32_t *l_1703 = &l_1191;
                    int32_t *l_1704 = &l_1675;
                    int32_t *l_1705 = &l_1269;
                    int32_t *l_1706[6] = {&l_1275[1],&l_1275[1],&l_1275[1],&l_1275[1],&l_1275[1],&l_1275[1]};
                    uint64_t l_1710 = 0UL;
                    int i;
                    l_1710--;
                }
                for (g_384 = 0; (g_384 <= 0); g_384 += 1)
                { 
                    return p_6;
                }
            }
            (*g_892) = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(p_5, ((safe_lshift_func_uint16_t_u_u((p_6 |= 4UL), l_1719)) , ((safe_mod_func_int8_t_s_s((l_1675 &= p_5), (+l_1723))) > (!((*l_1260) |= ((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_1709, p_5)), (-9L))) <= p_6))))))), 6));
        }
        (*g_892) ^= (l_1729 , ((*l_1459) , (safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((l_1734 & 0L), p_5)), ((l_1735[3] == (l_1737 = (l_1736 = g_1631))) == 0x13EF7C3DL)))));
        (*l_1745) |= (((***g_1630) = (safe_mod_func_int8_t_s_s(((((*****g_1628) <= (p_5 < (safe_mod_func_uint8_t_u_u((g_1253 != ((*g_1311) , ((**g_464) <= ((((((g_1743 = ((*g_704) = l_1742)) == l_1742) , (*l_1459)) <= p_6) || g_643[0]) < g_643[0])))), l_1744[1])))) , p_5) > 0xA5410A7D4E03B2FFLL), 0xCAL))) && p_6);
    }
    (**g_464) = (safe_rshift_func_int8_t_s_s((p_5 ^ ((*g_1526)--)), 3));
    return p_6;
}



static uint32_t  func_10(union U1  p_11, uint32_t  p_12, uint64_t  p_13)
{ 
    uint64_t *l_654 = &g_356;
    uint64_t **l_653 = &l_654;
    struct S0 *l_662 = (void*)0;
    int32_t l_665 = 0x8918C8F8L;
    uint8_t **l_716 = &g_84[0];
    int32_t l_739 = 6L;
    int32_t l_740 = (-1L);
    int32_t l_741 = 2L;
    int32_t l_742 = 0x4B1AA5B2L;
    int32_t l_743 = 0xB139AC28L;
    int32_t *l_781 = &l_742;
    int8_t *l_792 = &g_763;
    int8_t **l_793 = (void*)0;
    int8_t **l_794 = &g_191;
    int8_t *l_796 = &g_103;
    int8_t **l_795 = &l_796;
    uint32_t l_800 = 0xEFDB6472L;
    int32_t l_829 = 0x3D124215L;
    int32_t *l_849 = &g_87;
    uint32_t l_870 = 0xE9366BE0L;
    const uint16_t *l_875 = &g_39;
    int32_t l_937 = 0x723633D8L;
    uint64_t ** const **l_944 = (void*)0;
    uint64_t ** const ***l_943 = &l_944;
    int32_t ****l_947 = (void*)0;
    struct S0 ** const *l_1022 = &g_704;
    const int32_t *l_1134[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    const int32_t *l_1136 = (void*)0;
    uint16_t **l_1141[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int32_t l_1143 = 0x537965EFL;
    struct S0 **l_1147 = &l_662;
    int i;
    return p_12;
}



static union U1  func_14(int8_t  p_15, uint32_t  p_16, uint32_t  p_17)
{ 
    uint8_t *l_30 = &g_24;
    int32_t l_34 = 0x7212908CL;
    int32_t l_36 = (-1L);
    const struct S0 *l_553 = (void*)0;
    int32_t l_572 = 0xFC48EE5FL;
    int32_t l_573[6][2] = {{0x61F404C8L,0x0FD44119L},{0x61F404C8L,0x61F404C8L},{0x0FD44119L,0x61F404C8L},{0x61F404C8L,0x0FD44119L},{0x61F404C8L,0x61F404C8L},{0x0FD44119L,0x61F404C8L}};
    uint16_t l_598 = 0xB00AL;
    union U1 l_627 = {4L};
    struct S0 l_648 = {-1L,4UL,0xB9D0L};
    int i, j;
    for (g_24 = 1; (g_24 > 5); g_24++)
    { 
        uint8_t l_29[4] = {2UL,2UL,2UL,2UL};
        int32_t *l_33[4][1];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_33[i][j] = &g_32;
        }
        for (g_20 = 16; (g_20 != 35); g_20++)
        { 
            for (p_15 = 3; (p_15 >= 0); p_15 -= 1)
            { 
                int32_t *l_31 = &g_32;
                if (p_17)
                    break;
                (*l_31) = ((void*)0 == l_30);
            }
        }
        g_39--;
    }
    for (p_17 = 0; (p_17 > 13); p_17++)
    { 
        int16_t l_44 = 0L;
        int32_t l_552 = 0x073F3A4EL;
        int32_t l_566 = 0x1180D5B5L;
        int64_t l_567 = 0xE2F32C489D7E116CLL;
        int32_t l_571[3];
        struct S0 l_577 = {-1L,0x15E1L,0UL};
        union U1 *l_579 = &g_234;
        uint16_t *l_629 = &g_350.f1;
        uint16_t *l_630 = &g_318[1];
        int i;
        for (i = 0; i < 3; i++)
            l_571[i] = 0x6EDDD47FL;
        if (l_44)
            break;
        for (g_39 = (-18); (g_39 <= 50); g_39 = safe_add_func_uint16_t_u_u(g_39, 3))
        { 
            struct S0 *l_555 = &g_350;
            struct S0 **l_554 = &l_555;
            struct S0 *l_557 = &g_350;
            struct S0 **l_556 = &l_557;
            int32_t l_565 = 0x86E9D7E6L;
            int32_t l_568 = (-1L);
            int32_t l_569[1][5];
            int32_t *l_620 = (void*)0;
            int32_t **l_619 = &l_620;
            int32_t ** const *l_618 = &l_619;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_569[i][j] = 5L;
            }
            l_552 ^= (safe_mod_func_int16_t_s_s(g_37[0], (safe_sub_func_int32_t_s_s(g_20, (p_15 , ((safe_div_func_uint16_t_u_u(func_53(l_34, l_30), 1L)) | 0xE574L))))));
            for (g_350.f2 = 0; (g_350.f2 <= 5); g_350.f2 += 1)
            { 
                int i, j;
                if (g_89[g_350.f2][g_350.f2])
                    break;
            }
            if ((l_553 == ((*l_556) = ((*l_554) = &g_350))))
            { 
                int32_t *l_558 = &g_87;
                int32_t *l_559 = &l_34;
                int32_t *l_560 = &g_186;
                int32_t *l_561 = &l_552;
                int32_t *l_562 = (void*)0;
                int32_t *l_563 = (void*)0;
                int32_t *l_564[6];
                struct S0 l_578 = {-10L,0UL,0x85D8L};
                union U1 **l_580 = &l_579;
                union U1 *l_582 = &g_234;
                union U1 **l_581 = &l_582;
                int16_t l_595 = 0xED89L;
                int i;
                for (i = 0; i < 6; i++)
                    l_564[i] = &g_87;
                ++g_574;
                l_578 = l_577;
                (*l_581) = ((*l_580) = l_579);
                for (g_234.f1.f2 = 0; (g_234.f1.f2 == 17); g_234.f1.f2++)
                { 
                    uint16_t *l_585[1][3];
                    int32_t l_592 = 0L;
                    int32_t **l_596 = &l_558;
                    int32_t **l_597 = &l_563;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_585[i][j] = &l_578.f2;
                    }
                    (**g_464) = ((--g_249) || ((safe_lshift_func_uint16_t_u_s(l_569[0][0], (safe_mul_func_uint16_t_u_u(l_592, ((safe_div_func_int16_t_s_s((l_577 , l_573[1][1]), l_595)) , (((*l_597) = ((*l_596) = l_562)) != &l_571[1])))))) <= 18446744073709551615UL));
                    if (p_17)
                        continue;
                    l_598 |= ((*l_561) &= (((void*)0 != &g_170[0]) != (l_571[1] <= p_15)));
                }
            }
            else
            { 
                struct S0 *l_612 = &l_577;
                int32_t l_621 = 0x75A34E50L;
                for (g_334 = 13; (g_334 > 5); g_334 = safe_sub_func_uint32_t_u_u(g_334, 6))
                { 
                    int16_t l_602 = 0x76AEL;
                    int8_t *l_603 = (void*)0;
                    int8_t *l_604[5][6][6] = {{{&g_570,&g_570,&g_103,&g_103,&g_103,&g_103},{&g_570,&g_103,(void*)0,(void*)0,&g_103,&g_103},{&g_570,&g_570,(void*)0,&g_103,&g_570,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_570,&g_103,&g_103,&g_103}},{{&g_103,&g_103,&g_103,&g_103,&g_570,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_570,(void*)0},{&g_570,&g_103,&g_570,(void*)0,&g_570,&g_103},{&g_570,&g_103,&g_103,&g_103,&g_570,(void*)0},{&g_570,&g_103,(void*)0,&g_103,&g_103,&g_570},{(void*)0,&g_103,&g_570,&g_103,&g_103,&g_570}},{{&g_570,&g_103,&g_103,&g_103,&g_103,&g_570},{&g_103,&g_103,&g_103,(void*)0,&g_570,&g_103},{&g_103,&g_103,&g_570,&g_570,(void*)0,&g_103},{&g_103,&g_103,&g_570,(void*)0,&g_570,&g_103},{&g_103,&g_570,&g_570,&g_103,&g_103,&g_103},{&g_570,&g_103,(void*)0,&g_570,&g_570,&g_570}},{{&g_103,&g_103,(void*)0,&g_103,&g_103,(void*)0},{&g_570,&g_570,&g_103,&g_103,&g_570,&g_103},{&g_103,&g_103,&g_103,&g_570,(void*)0,&g_103},{&g_570,&g_103,&g_103,&g_103,&g_570,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_103,(void*)0},{&g_103,&g_103,(void*)0,(void*)0,&g_103,&g_570}},{{&g_103,(void*)0,(void*)0,(void*)0,&g_103,&g_103},{&g_103,&g_570,&g_570,&g_103,&g_103,&g_103},{&g_103,&g_103,&g_570,&g_103,(void*)0,&g_103},{&g_570,(void*)0,&g_570,&g_570,(void*)0,&g_103},{&g_103,&g_103,&g_103,&g_103,&g_103,&g_570},{&g_570,&g_570,&g_103,&g_103,&g_103,&g_570}}};
                    int32_t *** const l_617 = (void*)0;
                    int64_t l_622 = 9L;
                    int i, j, k;
                    (**g_464) &= (+((p_15 &= l_602) != (+(l_621 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s(((safe_mod_func_uint8_t_u_u(((**g_163) = (&g_350 == l_612)), l_571[2])) >= p_16), ((safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u((l_617 != l_618), l_44)), p_17)) < 0xE8L))), g_37[1])) , 0x13E66090480F26E6LL)))));
                    if (l_622)
                        continue;
                    l_566 |= p_15;
                    if (p_17)
                        break;
                    (*l_619) = &l_36;
                }
            }
        }
        if (((**g_464) ^= ((0L != (safe_lshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((((l_627 , 1UL) == g_384) > (l_44 & (safe_unary_minus_func_int16_t_s(1L)))), ((*l_630) = ((*l_629) = 2UL)))), l_571[0]))) | g_356)))
        { 
            struct S0 l_631 = {0xE1131A02L,0x25F4L,6UL};
            struct S0 *l_633 = &g_234.f1;
            for (g_334 = 0; (g_334 <= 1); g_334 += 1)
            { 
                struct S0 l_632 = {0L,0UL,0xC4D4L};
                l_632 = (l_631 = l_577);
            }
            (*l_633) = g_350;
        }
        else
        { 
            struct S0 l_634[7][3] = {{{0x17A1FBF4L,0x02C6L,6UL},{0L,0x962EL,0x54F3L},{0x8DF77E55L,0x42F5L,0xB4E1L}},{{0x17A1FBF4L,0x02C6L,6UL},{0x17A1FBF4L,0x02C6L,6UL},{0L,0x962EL,0x54F3L}},{{0x2A4DB88CL,0xD0D5L,6UL},{0L,0x962EL,0x54F3L},{0L,0x962EL,0x54F3L}},{{0L,0x962EL,0x54F3L},{-4L,0xF51AL,0x8026L},{0x8DF77E55L,0x42F5L,0xB4E1L}},{{0x2A4DB88CL,0xD0D5L,6UL},{-4L,0xF51AL,0x8026L},{0x2A4DB88CL,0xD0D5L,6UL}},{{0x17A1FBF4L,0x02C6L,6UL},{0L,0x962EL,0x54F3L},{0x8DF77E55L,0x42F5L,0xB4E1L}},{{0x17A1FBF4L,0x02C6L,6UL},{0x17A1FBF4L,0x02C6L,6UL},{0L,0x962EL,0x54F3L}}};
            struct S0 *l_635 = &l_577;
            int i, j;
            (*l_635) = l_634[4][2];
        }
        for (p_15 = 0; (p_15 == 11); ++p_15)
        { 
            int32_t l_638 = 4L;
            int32_t l_639[1][6][4] = {{{0x1B4F0561L,1L,0x1C3E5922L,0x1C3E5922L},{0x1653066CL,0x1653066CL,0x41227AC8L,1L},{1L,0x1B4F0561L,0x41227AC8L,0x1B4F0561L},{0x1653066CL,0xCC7B7399L,0x1C3E5922L,0x41227AC8L},{0x1B4F0561L,0xCC7B7399L,0xCC7B7399L,0x1B4F0561L},{0xCC7B7399L,0x1B4F0561L,0x1653066CL,1L}}};
            int32_t *l_640 = &l_566;
            int32_t *l_641 = &l_639[0][2][0];
            int32_t *l_642[4][1];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_642[i][j] = &l_571[0];
            }
            g_643[0]--;
        }
    }
    for (g_138 = 21; (g_138 <= 7); g_138--)
    { 
        struct S0 *l_649[2][4] = {{&g_350,&g_350,&g_350,&g_350},{&g_350,&g_350,(void*)0,&g_350}};
        int32_t *l_651 = (void*)0;
        int32_t **l_650 = &l_651;
        int i, j;
        l_627.f1 = l_648;
        (*l_650) = (*g_464);
    }
    return g_234;
}



static uint16_t  func_53(uint16_t  p_54, uint8_t * p_55)
{ 
    int32_t l_56 = 0xC35C241EL;
    int32_t *l_57 = &g_32;
    int32_t *l_58 = (void*)0;
    int32_t *l_59 = &g_32;
    int32_t *l_60 = (void*)0;
    int32_t *l_61 = &g_32;
    int32_t l_62 = 3L;
    int32_t *l_63 = &g_32;
    int32_t *l_64 = &g_32;
    int32_t *l_65 = (void*)0;
    int32_t *l_66 = &g_32;
    int32_t *l_67[5];
    int64_t l_549[1];
    int i;
    for (i = 0; i < 5; i++)
        l_67[i] = &l_62;
    for (i = 0; i < 1; i++)
        l_549[i] = 1L;
    g_69++;
    l_549[0] ^= (((*l_57) && 0xA077L) != (func_72(func_76((g_24 = 255UL), func_82(g_84[0]), &l_62, ((((safe_lshift_func_uint16_t_u_s(((4UL != 7UL) && p_54), p_54)) , &l_62) != &l_62) >= 0x86L), g_69), p_54, p_54) ^ (*l_61)));
    (*l_59) = (safe_lshift_func_int16_t_s_u(0x3CE3L, p_54));
    return g_87;
}



static int16_t  func_72(uint32_t  p_73, const uint32_t  p_74, uint8_t  p_75)
{ 
    uint16_t l_548 = 0xAB68L;
    for (g_106 = 1; (g_106 <= 5); g_106 += 1)
    { 
        return p_75;
    }
    for (g_24 = 5; (g_24 > 3); g_24 = safe_sub_func_int8_t_s_s(g_24, 9))
    { 
        g_547 = (void*)0;
        (**g_464) ^= 0L;
    }
    return l_548;
}



static uint32_t  func_76(uint8_t  p_77, uint8_t * p_78, int32_t * p_79, uint32_t  p_80, int16_t  p_81)
{ 
    const uint8_t *l_116 = (void*)0;
    const uint8_t **l_115[1][2][7] = {{{&l_116,&l_116,&l_116,&l_116,&l_116,&l_116,&l_116},{&l_116,&l_116,&l_116,&l_116,&l_116,&l_116,&l_116}}};
    int32_t l_121 = (-1L);
    union U1 l_131[2][5][2] = {{{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}}},{{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}},{{0xDDL},{0xDDL}}}};
    int32_t l_176 = 0xB2769216L;
    int8_t ** const l_202 = &g_191;
    uint8_t **l_345 = (void*)0;
    int32_t l_383 = 0x05FD4D0DL;
    int32_t l_537[3][5][1] = {{{0x74A60157L},{0L},{0x74A60157L},{0L},{0x74A60157L}},{{0L},{0x74A60157L},{0L},{0x74A60157L},{0L}},{{0x74A60157L},{0L},{0x74A60157L},{0L},{0x74A60157L}}};
    int i, j, k;
    for (p_77 = 15; (p_77 < 23); ++p_77)
    { 
        uint32_t *l_102[5];
        int8_t *l_104 = (void*)0;
        int8_t *l_105 = (void*)0;
        int32_t l_133[4] = {0x5F034421L,0x5F034421L,0x5F034421L,0x5F034421L};
        uint32_t l_141 = 0x92AD619FL;
        uint8_t l_187 = 0xA6L;
        int16_t l_207 = 0L;
        uint8_t ***l_347 = &l_345;
        uint8_t ****l_346 = &l_347;
        uint64_t *l_366 = (void*)0;
        uint64_t *l_367 = (void*)0;
        uint64_t *l_368 = &g_92;
        uint32_t l_373 = 0x5792ACDFL;
        uint32_t *l_374 = &g_334;
        uint32_t *l_375 = &g_138;
        uint32_t l_415 = 4294967291UL;
        uint8_t l_421[6] = {2UL,2UL,2UL,2UL,2UL,2UL};
        int32_t l_460 = 0x04146DC4L;
        uint16_t *l_469[3][1];
        struct S0 l_486 = {0xC7E76069L,0x732AL,0xAE61L};
        int64_t l_520 = 0xB666D1C910E2130ELL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_102[i] = (void*)0;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_469[i][j] = &g_69;
        }
    }
    return p_77;
}



static uint8_t * func_82(uint8_t * p_83)
{ 
    int32_t *l_86 = &g_87;
    int32_t *l_88[4][4][6] = {{{(void*)0,(void*)0,&g_87,&g_32,&g_87,&g_32},{&g_87,&g_32,&g_32,&g_32,(void*)0,&g_32},{&g_32,&g_32,&g_32,&g_32,&g_32,&g_32},{(void*)0,(void*)0,&g_32,&g_32,&g_87,&g_87}},{{&g_32,&g_32,&g_32,&g_87,&g_32,&g_87},{&g_32,&g_32,&g_87,&g_32,&g_32,&g_32},{(void*)0,&g_87,&g_87,&g_32,&g_87,(void*)0},{&g_32,&g_87,&g_87,&g_32,&g_87,&g_32}},{{&g_87,&g_87,(void*)0,&g_32,&g_32,&g_32},{(void*)0,&g_32,&g_32,&g_32,(void*)0,&g_87},{&g_32,(void*)0,&g_87,&g_32,&g_32,&g_32},{&g_32,&g_32,(void*)0,(void*)0,&g_87,&g_32}},{{(void*)0,&g_87,&g_87,&g_32,&g_32,&g_87},{&g_87,&g_87,&g_32,&g_32,&g_87,&g_32},{&g_87,&g_32,(void*)0,&g_32,&g_32,&g_32},{&g_32,(void*)0,&g_87,&g_87,(void*)0,(void*)0}}};
    uint8_t *l_95 = &g_85;
    int i, j, k;
    g_92--;
    return l_95;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);

    }
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_89[i][j], "g_89[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_91[i][j], "g_91[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);

    }
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_185, "g_185", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_317, "g_317", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_318[i], "g_318[i]", print_hash_value);

    }
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_350.f0, "g_350.f0", print_hash_value);
    transparent_crc(g_350.f1, "g_350.f1", print_hash_value);
    transparent_crc(g_350.f2, "g_350.f2", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_643[i], "g_643[i]", print_hash_value);

    }
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_831, "g_831", print_hash_value);
    transparent_crc(g_1108, "g_1108", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    transparent_crc(g_1478, "g_1478", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
