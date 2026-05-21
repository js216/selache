// SPDX-License-Identifier: MIT
// cctest_csmith_c76fae05.c --- cctest case csmith_c76fae05 (csmith seed 3345985029)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x5ff4de57 */

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

// Options:   -s 3345985029 -o /tmp/csmith_gen_wtnkz1qx/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const int32_t  f0;
   int16_t  f1;
};

union U1 {
   uint64_t  f0;
   struct S0  f1;
   struct S0  f2;
};


static int32_t g_2 = 0xF0B96CA2L;
static union U1 g_60 = {1UL};
static int64_t g_62 = 0x1799B58ECE9E6197LL;
static uint8_t g_64[4][3][4] = {{{0xC9L,0x49L,0UL,0xC9L},{0x9AL,0x49L,255UL,0x9AL},{0x9AL,0UL,0UL,0x9AL}},{{0xC9L,0x49L,0UL,0xC9L},{0x9AL,0x49L,255UL,0x9AL},{0x9AL,0UL,0UL,0x9AL}},{{0xC9L,0x49L,0UL,0xC9L},{0x9AL,0x49L,255UL,0x9AL},{0x9AL,0UL,0UL,0x9AL}},{{0xC9L,0x49L,0UL,0xC9L},{0x9AL,0x49L,255UL,0x9AL},{0x9AL,0UL,255UL,0xC9L}}};
static int8_t g_92 = 9L;
static uint32_t g_103 = 0xD19AA3B2L;
static uint32_t g_105 = 18446744073709551615UL;
static uint8_t g_116[3][3] = {{248UL,248UL,248UL},{248UL,248UL,248UL},{248UL,248UL,248UL}};
static uint32_t g_136 = 1UL;
static int32_t g_140 = (-7L);
static int32_t g_141[3][4][4] = {{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}},{{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}}};
static int32_t g_162 = 3L;
static uint16_t g_170[4] = {65535UL,65535UL,65535UL,65535UL};
static int64_t g_183 = 1L;
static uint32_t g_193 = 0xFBBAAEE7L;
static int64_t g_221 = 0x99A76E9993CBD2EELL;
static uint8_t g_222 = 1UL;
static struct S0 g_258 = {-9L,-4L};



static int16_t  func_1(void);
static union U1  func_5(uint64_t  p_6, uint8_t  p_7, int64_t  p_8, uint32_t  p_9, uint64_t  p_10);
static const uint8_t  func_13(uint8_t  p_14, int64_t  p_15, uint32_t  p_16);
static union U1  func_17(const uint16_t  p_18, int16_t  p_19);




static int16_t  func_1(void)
{ 
    uint16_t l_22 = 0x66C4L;
    int32_t l_276[4];
    int i;
    for (i = 0; i < 4; i++)
        l_276[i] = 3L;
    for (g_2 = 17; (g_2 >= (-25)); g_2--)
    { 
        const int16_t l_23 = 0x401DL;
        uint16_t l_137 = 65528UL;
        int32_t l_275 = 1L;
        l_276[1] = ((l_275 = (func_5(g_2, (safe_add_func_uint8_t_u_u(func_13((func_17((((((((safe_div_func_int16_t_s_s((0x1F145BA13B288586LL | g_2), (l_22 && 1L))) | g_2) <= g_2) | (-9L)) | 0xC0L) ^ l_23) & g_2), g_2) , g_64[3][2][2]), l_137, g_2), l_22)), l_22, g_2, l_22) , l_23)) , g_103);
        l_275 = (65528UL & (safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((!((0x808AF1C7L | ((safe_sub_func_int32_t_s_s(l_23, ((((safe_lshift_func_int8_t_s_u(g_170[2], g_62)) ^ g_62) <= g_170[2]) | l_23))) & 0UL)) | 0L)), g_170[0])), 4)));
    }
    return l_276[1];
}



static union U1  func_5(uint64_t  p_6, uint8_t  p_7, int64_t  p_8, uint32_t  p_9, uint64_t  p_10)
{ 
    int64_t l_273 = 2L;
    union U1 l_274 = {0xF37222D3A84F11E0LL};
    g_141[0][2][2] &= (safe_unary_minus_func_uint8_t_u(l_273));
    return l_274;
}



static const uint8_t  func_13(uint8_t  p_14, int64_t  p_15, uint32_t  p_16)
{ 
    int64_t l_142[5][5] = {{0L,0L,0L,0L,0L},{3L,3L,3L,3L,3L},{0L,0L,0L,0L,0L},{3L,3L,3L,3L,3L},{0L,0L,0L,0L,0L}};
    int32_t l_143 = 0x9851B6DCL;
    uint16_t l_144 = 1UL;
    struct S0 l_161 = {0x61D1B06CL,0x583AL};
    union U1 l_165 = {0xF16FFCA76E874D08LL};
    int32_t l_229 = 0x71523963L;
    int32_t l_232[3][1][2] = {{{0xA4907F26L,0xA4907F26L}},{{0xA4907F26L,0xA4907F26L}},{{0xA4907F26L,0xA4907F26L}}};
    int i, j, k;
    for (g_60.f2.f1 = 0; (g_60.f2.f1 >= 18); g_60.f2.f1 = safe_add_func_uint32_t_u_u(g_60.f2.f1, 6))
    { 
        int8_t l_151 = 0x5EL;
        int32_t l_166 = 0xFFE129BBL;
        union U1 l_181[1][3] = {{{0xD94F1BE2ED989C8FLL},{0xD94F1BE2ED989C8FLL},{0xD94F1BE2ED989C8FLL}}};
        int32_t l_201 = (-4L);
        int32_t l_202 = 2L;
        int32_t l_233 = 0x7F255F03L;
        int32_t l_234 = 0x85051AD0L;
        int32_t l_244 = 0x820AD96DL;
        int i, j;
        ++l_144;
        for (g_136 = 0; (g_136 == 8); ++g_136)
        { 
            int32_t l_149 = (-1L);
            const int32_t l_150[3][5][3] = {{{0x95A61D41L,0xAC18B040L,0x95A61D41L},{(-2L),1L,3L},{0x6ACB5B97L,0x6ACB5B97L,(-9L)},{(-1L),1L,1L},{(-9L),0xAC18B040L,0x0277B54EL}},{{(-1L),0xBA6927BAL,(-1L)},{0x6ACB5B97L,(-9L),0x0277B54EL},{(-2L),(-2L),1L},{0x95A61D41L,(-9L),(-9L)},{1L,0xBA6927BAL,3L}},{{0x95A61D41L,0xAC18B040L,0x95A61D41L},{(-2L),1L,3L},{0x6ACB5B97L,0x6ACB5B97L,(-9L)},{(-1L),1L,1L},{(-9L),0xAC18B040L,0x0277B54EL}}};
            int i, j, k;
            if (g_136)
            { 
                l_149 = l_142[0][3];
                return l_150[1][3][1];
            }
            else
            { 
                int64_t l_152 = 0xD4CACFD22C8C0895LL;
                l_152 |= (l_151 || g_116[0][0]);
                if (l_152)
                    break;
            }
            if (l_142[2][2])
                continue;
        }
        if ((l_143 = (l_142[2][2] | ((safe_lshift_func_uint16_t_u_u(0xA47EL, (safe_mod_func_int64_t_s_s(g_141[0][2][2], (safe_sub_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u(((g_60 , l_161) , g_116[1][1]), g_141[0][2][2])) > l_143) , 0L), g_64[3][2][2])))))) || l_151))))
        { 
            uint16_t l_173 = 0x6208L;
            struct S0 l_174 = {0x27E61D7DL,-7L};
            int32_t l_184 = 0x768EFDD0L;
            int32_t l_230 = (-1L);
            int32_t l_231 = 0x4A18077AL;
            if (((g_162 = g_141[2][3][2]) ^ (safe_rshift_func_uint16_t_u_s((((((((l_165 , (l_166 = p_15)) & p_15) < 1UL) && p_14) >= g_116[1][1]) ^ g_103) <= p_15), l_165.f0))))
            { 
                int16_t l_169 = 0L;
                l_173 &= (safe_mod_func_uint16_t_u_u((g_170[2]--), p_15));
                if (l_169)
                    break;
            }
            else
            { 
                uint32_t l_182[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
                int i;
                l_184 = ((((((g_183 = ((l_174 , (0xB907L > ((safe_mul_func_uint8_t_u_u((--p_14), ((safe_div_func_uint8_t_u_u(((l_181[0][0] , 1L) != l_173), p_16)) != l_182[0]))) | 18446744073709551610UL))) < g_62)) >= 0L) & 0xFF94C2ECL) | l_182[4]) || 0x76L) , 0xDE4F0E31L);
            }
            if (((safe_rshift_func_uint16_t_u_u(l_166, (safe_lshift_func_int16_t_s_u((safe_add_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(l_174.f0, 5)) , g_116[1][1]), (((g_193++) | ((l_202 = ((safe_sub_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((l_201 = (!(l_184 > l_166))), 2)) || 9L), p_14)) < l_161.f1)) , g_141[2][3][0])) , p_16))), g_141[1][3][0])))) , l_151))
            { 
                uint8_t l_235[2][3] = {{7UL,7UL,7UL},{0x9EL,0x9EL,0x9EL}};
                int i, j;
                g_222 ^= (g_140 = (safe_div_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_rshift_func_int8_t_s_s(((safe_div_func_uint32_t_u_u(l_202, (g_141[2][3][1] ^ ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((g_221 &= ((safe_div_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(p_14, 0x8BAC569388203293LL)) | l_184), 0xDE25L)) & g_116[0][1])), p_14)), g_141[1][3][1])), g_2)) > 18446744073709551609UL)))) != 0x11C80456L), 3)) <= 0xE03DL) && 0x0B14L), g_183)) | 0x079DBC9DL), g_92)));
                l_201 = (l_229 ^= (l_143 = ((((safe_lshift_func_uint16_t_u_u(g_141[0][1][2], g_170[2])) < p_16) == ((((safe_add_func_uint64_t_u_u(((safe_add_func_int32_t_s_s(0x1BF880E9L, 0xA7C047C5L)) != p_14), g_2)) ^ (-10L)) == 8UL) | 0x49ECE0AAL)) , 0xDD45D5CCL)));
                l_235[1][0]--;
            }
            else
            { 
                return g_116[1][1];
            }
        }
        else
        { 
            int16_t l_245 = 0x454EL;
            int32_t l_248 = 0xE18173DEL;
            int32_t l_249[3];
            uint8_t l_271 = 0xD5L;
            int i;
            for (i = 0; i < 3; i++)
                l_249[i] = 4L;
            if ((l_201 &= (safe_div_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((8UL ^ ((((safe_mod_func_uint16_t_u_u(((l_244 < (p_16 ^ 1L)) ^ l_245), p_14)) && l_245) == 4UL) && g_141[2][3][3])), l_245)) && p_14), 6UL))))
            { 
                int32_t l_246 = 0xD25A9A46L;
                int32_t l_247 = 0x19A83302L;
                int32_t l_250 = 0x94F2F5FBL;
                int32_t l_251 = 1L;
                uint8_t l_252 = 0x19L;
                ++l_252;
                return g_64[3][2][2];
            }
            else
            { 
                uint16_t l_255 = 65535UL;
                g_141[1][0][2] ^= (l_255 = g_162);
            }
            for (l_151 = 0; (l_151 >= (-24)); l_151 = safe_sub_func_uint64_t_u_u(l_151, 1))
            { 
                l_234 = (l_143 = ((g_258 , (safe_lshift_func_int16_t_s_u((l_232[2][0][1] |= (safe_mod_func_uint64_t_u_u((safe_sub_func_int32_t_s_s(p_16, (safe_rshift_func_uint8_t_u_u((g_140 != g_103), p_15)))), 1UL))), l_161.f0))) && l_244));
                l_202 = ((g_222 , ((~(p_15 , (safe_mod_func_int32_t_s_s(p_16, (~4294967288UL))))) > l_271)) != p_15);
            }
        }
    }
    l_232[2][0][0] = (0x06L || (9UL || (l_143 = (18446744073709551610UL & (((l_165 , p_14) == 0UL) , 5L)))));
    l_232[2][0][0] |= (g_222 || 0x3896L);
    return p_14;
}



static union U1  func_17(const uint16_t  p_18, int16_t  p_19)
{ 
    int8_t l_34 = (-1L);
    int32_t l_35 = (-1L);
    int32_t l_40 = (-2L);
    uint64_t l_41 = 0UL;
    int32_t l_42[1];
    union U1 l_75 = {18446744073709551613UL};
    int8_t l_97[3][5];
    int32_t l_135 = 4L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_42[i] = 0xAE69ED99L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_97[i][j] = (-1L);
    }
    if ((((safe_mul_func_int8_t_s_s(((l_42[0] ^= (((((safe_sub_func_uint32_t_u_u((safe_div_func_int32_t_s_s((l_40 = (safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((l_35 = l_34) >= (l_34 > (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((p_19 , p_18), l_34)), 0x4F8DL)))), 6)), (-3L)))), l_41)), p_19)) >= 0xAA43L) >= 8UL) || l_41) || p_18)) , 0xB1L), p_19)) & g_2) , g_2))
    { 
        int32_t l_59 = 0x7655505FL;
        for (l_34 = (-21); (l_34 >= 8); l_34 = safe_add_func_int32_t_s_s(l_34, 5))
        { 
            uint8_t l_51 = 2UL;
            int32_t l_61 = 0xC503401FL;
            int32_t l_63[3][2][5] = {{{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xE2060481L,0xE2060481L,0xE2060481L,0xE2060481L,0xE2060481L}},{{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xE2060481L,0xE2060481L,0xE2060481L,0xE2060481L,0xE2060481L}},{{(-3L),(-3L),(-3L),(-3L),(-3L)},{0xE2060481L,0xE2060481L,0xE2060481L,0xE2060481L,0xE2060481L}}};
            int i, j, k;
            if ((safe_lshift_func_uint16_t_u_s(p_19, ((safe_rshift_func_int8_t_s_u((((l_42[0] , ((safe_lshift_func_uint16_t_u_u((l_51 <= (((((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((l_40 = ((((+(safe_add_func_int8_t_s_s(p_19, l_59))) , l_42[0]) < g_2) > (-1L))), p_18)), 2)) > 0x54A43772679F1A7DLL) , g_2) , g_2) ^ (-7L))), l_41)) & 0x9E48L)) ^ 4L) != l_42[0]), 3)) == l_42[0]))))
            { 
                return g_60;
            }
            else
            { 
                ++g_64[3][2][2];
            }
        }
        return g_60;
    }
    else
    { 
        int16_t l_85[5][2] = {{0xAC69L,0xAC69L},{0x6BAEL,0xAC69L},{0xAC69L,0x6BAEL},{0xAC69L,0xAC69L},{0x52A3L,0x6BAEL}};
        int32_t l_113 = 0xB7285802L;
        int32_t l_114 = 0xD4C26E52L;
        int32_t l_115 = 0xF03FA11DL;
        int i, j;
        for (l_41 = (-19); (l_41 >= 49); ++l_41)
        { 
            const int16_t l_84 = (-1L);
            uint32_t l_86 = 0x1CF5FC6DL;
            int32_t l_87 = 0xE175A398L;
            int32_t l_104[1];
            int i;
            for (i = 0; i < 1; i++)
                l_104[i] = 0L;
            l_42[0] = (safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((((l_75 , g_64[3][2][2]) & 0UL) , ((!(((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((((p_19 |= (l_85[2][1] = ((~(l_84 ^ 255UL)) >= 0x7F9ABEFAL))) && 0x770BL) ^ 0UL), g_64[3][2][2])), g_60.f0)), 1)) || 0x4A3D9B22F2C889DDLL) >= p_18)) && l_75.f0)), 7)), 0xEEL));
            l_87 |= ((g_60.f1.f1 = l_86) > 0xFD42L);
            if ((l_42[0] = ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((g_60 , (g_92 = g_60.f0)), (l_84 , l_40))) == 0x0850L), 0xF9L)) , g_2)))
            { 
                g_103 = (0xB519BE197FD74DCCLL & (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(l_97[0][0], (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(p_18)), (((safe_div_func_uint64_t_u_u((g_60.f0 = g_64[3][2][2]), g_62)) , p_19) , 0x0893L))))), l_87)));
            }
            else
            { 
                union U1 l_108[3][5] = {{{1UL},{1UL},{1UL},{1UL},{1UL}},{{0UL},{0UL},{0UL},{0UL},{0UL}},{{1UL},{1UL},{1UL},{1UL},{1UL}}};
                int i, j;
                --g_105;
                return l_108[2][0];
            }
        }
        g_116[1][1] = ((safe_rshift_func_int8_t_s_s((((safe_div_func_int8_t_s_s(p_18, (l_114 = (l_40 = (l_113 &= 0x4CL))))) >= (p_19 < (l_115 = l_97[0][0]))) > g_105), 2)) ^ g_103);
    }
    l_40 = (safe_sub_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(0xB250L, g_64[3][2][2])), 3)) || (safe_sub_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_mod_func_int8_t_s_s(p_19, ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((g_60.f0 <= 0L) || g_64[3][2][2]) <= g_116[1][2]), g_60.f0)), l_135)) <= p_19) , l_97[0][0]), 1L)) ^ p_19))) , g_103), g_2)), g_116[0][1]))) <= 18446744073709551615UL), 0x2BC1C087C3A5C4F2LL));
    g_136 = g_92;
    return l_75;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_60.f0, "g_60.f0", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_64[i][j][k], "g_64[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_116[i][j], "g_116[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_141[i][j][k], "g_141[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_162, "g_162", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_170[i], "g_170[i]", print_hash_value);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
