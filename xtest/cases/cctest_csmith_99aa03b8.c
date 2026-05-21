// SPDX-License-Identifier: MIT
// cctest_csmith_99aa03b8.c --- cctest case csmith_99aa03b8 (csmith seed 2578056120)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9456dc74 */

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

// Options:   -s 2578056120 -o /tmp/csmith_gen_wnr3ifiw/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   const int8_t  f1;
   uint8_t  f2;
};

union U1 {
   struct S0  f0;
   int16_t  f1;
   uint64_t  f2;
};


static uint32_t g_4[4][1][2] = {{{0x3C39BA09L,0x3C39BA09L}},{{0x3C39BA09L,0x3C39BA09L}},{{0x3C39BA09L,0x3C39BA09L}},{{0x3C39BA09L,0x3C39BA09L}}};
static uint32_t g_31 = 18446744073709551609UL;
static int8_t g_40 = 0x74L;
static uint8_t g_41 = 1UL;
static int64_t g_57 = (-1L);
static int32_t g_58 = (-4L);
static uint16_t g_98 = 0x4181L;
static const union U1 g_101 = {{18446744073709551615UL,0xEBL,0x07L}};
static uint32_t g_123 = 0x8D033575L;
static uint16_t g_129[5][1][5] = {{{0xCBBFL,0xCBBFL,0xCBBFL,0xCBBFL,0xCBBFL}},{{0UL,0UL,0UL,0UL,0UL}},{{0xCBBFL,0xCBBFL,0xCBBFL,0xCBBFL,0xCBBFL}},{{0UL,0UL,0UL,0UL,0UL}},{{0xCBBFL,0xCBBFL,0xCBBFL,0xCBBFL,0xCBBFL}}};
static int8_t g_144[2] = {(-2L),(-2L)};
static uint32_t g_156[5] = {0x20B21173L,0x20B21173L,0x20B21173L,0x20B21173L,0x20B21173L};
static uint64_t g_167 = 0x4CE8BB6BBBDF8323LL;
static int8_t g_168 = (-6L);
static int32_t g_172 = 0L;
static int16_t g_182 = 0x892FL;
static int32_t g_184[1] = {0xD0D33459L};



static int32_t  func_1(void);
static int16_t  func_11(union U1  p_12, uint32_t  p_13, const int64_t  p_14);
static union U1  func_15(uint16_t  p_16, int32_t  p_17);
static const union U1  func_23(uint32_t  p_24, const struct S0  p_25, uint32_t  p_26, int64_t  p_27);




static int32_t  func_1(void)
{ 
    const int16_t l_2 = 0xED9AL;
    uint32_t l_5 = 0x0D461E3FL;
    uint32_t l_10 = 0x65C2DD78L;
    int32_t l_185 = (-7L);
    l_5 &= ((0xC62E08974B666A75LL ^ l_2) < (+g_4[2][0][0]));
    l_185 = (safe_rshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(((l_10 | func_11((l_10 , func_15(l_10, l_10)), g_101.f0.f2, l_2)) , 4UL), l_10)), l_10));
    return g_156[4];
}



static int16_t  func_11(union U1  p_12, uint32_t  p_13, const int64_t  p_14)
{ 
    uint32_t l_176 = 0x269582D8L;
    int32_t l_181[3][3] = {{0xFB6A07BBL,0xFB6A07BBL,0xFB6A07BBL},{0x70B56FAFL,0x70B56FAFL,0x70B56FAFL},{0xFB6A07BBL,0xFB6A07BBL,0xFB6A07BBL}};
    int i, j;
lbl_183:
    for (p_12.f2 = 0; (p_12.f2 == 3); p_12.f2 = safe_add_func_uint64_t_u_u(p_12.f2, 2))
    { 
        uint8_t l_171 = 6UL;
        g_172 = (0L | (l_171 , p_13));
        if (g_101.f0.f2)
            continue;
    }
    if ((g_182 |= ((!((((safe_mul_func_uint16_t_u_u((l_176 > (safe_lshift_func_uint16_t_u_s(((g_144[0] & l_176) , (safe_mul_func_uint8_t_u_u((((((l_181[2][2] ^= (g_31 | p_12.f1)) <= 4L) || 0x88L) != p_12.f1) ^ l_176), 0x53L))), g_98))), l_176)) > 0x3441F19B35F8E2DFLL) , 0xCBL) || l_176)) , 1L)))
    { 
        if (p_12.f1)
            goto lbl_183;
    }
    else
    { 
        g_184[0] = l_181[2][2];
    }
    return g_144[1];
}



static union U1  func_15(uint16_t  p_16, int32_t  p_17)
{ 
    int32_t l_18 = 0xB101EB64L;
    const struct S0 l_28 = {0x69C1477A14A9C79ELL,5L,9UL};
    const struct S0 l_126 = {0x10D2121A4FECFE75LL,-3L,0UL};
    uint8_t l_127 = 0xDFL;
    if ((((((l_18 = ((l_18 , (((safe_add_func_uint8_t_u_u(g_4[0][0][1], ((g_123 &= (safe_rshift_func_int16_t_s_s(l_18, ((func_23(l_18, l_28, p_16, p_17) , 255UL) & (-1L))))) | l_28.f2))) > 0x099EBF9289730A75LL) , (-4L))) == g_101.f0.f2)) <= p_17) != g_101.f0.f1) & p_17) | 0x0D8C1B616B54986CLL))
    { 
        const int64_t l_128 = 9L;
        if ((((safe_div_func_uint32_t_u_u((((func_23(g_40, l_126, p_17, l_127) , p_16) , l_126.f2) < 1UL), 1L)) && l_128) && p_17))
        { 
            return g_101;
        }
        else
        { 
            g_129[1][0][3] = g_41;
        }
    }
    else
    { 
        uint32_t l_130[3][1];
        int32_t l_139 = 0x1B04C5D8L;
        int32_t l_155 = (-5L);
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_130[i][j] = 0x370918AEL;
        }
        l_139 = (0x9C72L > (g_129[1][0][3] = (l_130[2][0] | ((l_28.f0 != (((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((g_40 = (((safe_div_func_int16_t_s_s((((l_18 = (((safe_sub_func_int64_t_s_s((((g_57 >= l_130[2][0]) , g_98) > g_40), 0x5208590E4044F880LL)) != p_17) , l_130[2][0])) >= g_101.f0.f0) ^ (-2L)), p_16)) <= 0x635D9A7C64346866LL) , 0L)), 2)), l_130[2][0])) , 0x447CL) , p_16)) < p_16))));
        for (p_17 = 11; (p_17 > 11); ++p_17)
        { 
            uint64_t l_154 = 0x9C4B2C92A46F7BBELL;
            if ((l_28.f0 != (g_144[0] = (safe_lshift_func_uint8_t_u_s(0xBFL, 2)))))
            { 
                int16_t l_145 = (-1L);
                if (g_129[3][0][4])
                    break;
                g_156[4] = ((((l_130[2][0] , ((((((l_139 |= (((((((g_4[2][0][0] != (l_145 < (safe_rshift_func_int16_t_s_s(((safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((p_17 == g_40), 0xA8BFL)) | l_154), 8)) > g_123), l_155)) <= 0x2619L), g_4[1][0][0])))) ^ g_57) != g_129[1][0][3]) <= 18446744073709551612UL) ^ 0x94L) == 0x2AL) <= 0xDAC8820DL)) > 4UL) != (-1L)) || l_154) , p_16) > g_123)) , l_154) & l_28.f2) | 1UL);
            }
            else
            { 
                uint64_t l_164 = 1UL;
                l_164 = (((((p_17 ^ (g_101.f0.f1 && (((safe_rshift_func_uint8_t_u_u(((p_16 == (safe_sub_func_int8_t_s_s((~(g_144[1] = ((safe_mod_func_int32_t_s_s((((0L || 65535UL) <= p_17) <= (-5L)), g_129[1][0][3])) || l_130[2][0]))), l_155))) >= l_154), l_154)) ^ l_154) & l_28.f2))) , p_16) >= p_16) & 0x77DB30F1L) > g_58);
            }
            for (g_57 = (-6); (g_57 < (-27)); g_57 = safe_sub_func_uint32_t_u_u(g_57, 3))
            { 
                g_167 = 6L;
            }
        }
        g_168 = g_101.f0.f2;
    }
    l_18 = l_28.f1;
    return g_101;
}



static const union U1  func_23(uint32_t  p_24, const struct S0  p_25, uint32_t  p_26, int64_t  p_27)
{ 
    int32_t l_48 = (-1L);
    int32_t l_55 = (-8L);
    int32_t l_79[2];
    int8_t l_121 = 0x96L;
    int i;
    for (i = 0; i < 2; i++)
        l_79[i] = 0x1DAE56B7L;
    for (p_27 = 0; (p_27 <= (-5)); --p_27)
    { 
        uint16_t l_56 = 0UL;
        g_31++;
        for (g_31 = 0; (g_31 == 14); g_31++)
        { 
            uint16_t l_39 = 0x997EL;
            int32_t l_71 = 0x2ACF1929L;
            int32_t l_72[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_72[i][j] = 1L;
            }
            if ((((-8L) ^ (~(safe_lshift_func_int8_t_s_u(l_39, (p_25.f0 & l_39))))) , p_27))
            { 
                g_58 = ((((g_57 = ((g_41++) < ((safe_mul_func_uint8_t_u_u((g_4[2][0][0] , (safe_lshift_func_int16_t_s_s(l_48, ((safe_mod_func_int64_t_s_s(p_25.f2, (safe_add_func_int8_t_s_s((((safe_mod_func_uint32_t_u_u((0xB7DD1456014EFC71LL <= g_4[2][0][0]), 1L)) | l_55) <= p_25.f2), g_4[2][0][0])))) & g_4[2][0][0])))), l_56)) != 255UL))) & g_4[2][0][0]) >= p_24) > 0xF036206CL);
            }
            else
            { 
                if (g_57)
                    break;
            }
            l_72[0][0] = (safe_mul_func_uint8_t_u_u(((safe_add_func_uint8_t_u_u((g_4[2][0][0] | ((safe_mod_func_uint32_t_u_u((((l_48 = (((safe_add_func_uint8_t_u_u(l_48, (safe_mul_func_int8_t_s_s((l_71 = (g_40 |= (safe_mod_func_uint64_t_u_u((((l_56 | p_27) && l_39) ^ 0x979D795BL), 3UL)))), 1UL)))) ^ p_25.f0) > l_39)) < 0x4C7B934CEB039226LL) < g_41), p_25.f0)) < 0xF04BL)), p_25.f1)) && g_4[0][0][1]), p_27));
            l_48 = ((((((((p_26 , (0x70ADFF40L <= (safe_lshift_func_int16_t_s_s(p_27, 9)))) || (safe_sub_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((p_25.f0 || 65535UL), 5UL)), l_56))) >= l_55) , p_27) < 0UL) | 8UL) < l_72[0][0]) | 0xECA80087L);
        }
        if (l_56)
            break;
    }
    for (g_58 = 0; (g_58 <= 1); g_58 += 1)
    { 
        uint16_t l_96 = 65535UL;
        int32_t l_104 = 0x741E9346L;
        uint32_t l_120 = 0UL;
        for (l_48 = 0; (l_48 <= 1); l_48 += 1)
        { 
            int i;
            if ((safe_sub_func_uint8_t_u_u(((g_57 = (safe_mod_func_int8_t_s_s((((((0xA0115B503A71B0FALL | (+((((safe_lshift_func_int8_t_s_s(l_79[l_48], 1)) < (l_96 ^= (safe_mul_func_uint16_t_u_u(((~(((safe_rshift_func_int16_t_s_s(l_79[1], 4)) ^ ((safe_mul_func_uint8_t_u_u((255UL >= g_41), p_26)) != 0x83L)) < 0xD856L)) , l_79[l_48]), g_4[3][0][1])))) | 9L) , p_24))) , g_40) <= 0x71L) ^ 7L) , 0x76L), 1UL))) != 2UL), 255UL)))
            { 
                int64_t l_99 = (-3L);
                int32_t l_100 = 0xE4F1A1E6L;
                l_79[0] = (0x5B5757325A1CDA01LL < ((0x50B7L < p_25.f2) , (!p_25.f2)));
                g_98 |= p_24;
                l_100 = l_99;
            }
            else
            { 
                return g_101;
            }
            for (g_41 = 0; (g_41 <= 30); g_41 = safe_add_func_uint8_t_u_u(g_41, 2))
            { 
                l_104 = (l_48 != 0x40L);
                if (g_4[3][0][1])
                    continue;
            }
        }
        l_121 = (((g_57 = (p_25.f2 , (safe_add_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u(g_101.f0.f2, (safe_mod_func_uint8_t_u_u(((((((((safe_mod_func_uint32_t_u_u((p_26 = (safe_lshift_func_uint16_t_u_u((((((safe_div_func_int16_t_s_s((p_25 , (l_96 >= 0xA7086DEEL)), g_41)) , l_48) & 0x77FDL) | 6L) <= g_41), 9))), g_40)) , l_104) && 0x2FD2206DCC1A10FBLL) | g_41) == p_25.f2) > 0x2964217F86792DBFLL) || l_55) > g_41), l_104)))), 5)) | p_25.f2))), p_25.f2)))) < 7UL) < l_120);
    }
    l_79[0] = ((((l_48 = (p_25.f1 && (+0xEC77404BL))) , l_121) == l_121) <= (-9L));
    return g_101;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_4[i][j][k], "g_4[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101.f0.f0, "g_101.f0.f0", print_hash_value);
    transparent_crc(g_101.f0.f1, "g_101.f0.f1", print_hash_value);
    transparent_crc(g_101.f0.f2, "g_101.f0.f2", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_129[i][j][k], "g_129[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_144[i], "g_144[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_156[i], "g_156[i]", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_182, "g_182", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_184[i], "g_184[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
