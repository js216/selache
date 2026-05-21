// SPDX-License-Identifier: MIT
// cctest_csmith_d88e5ecb.c --- cctest case csmith_d88e5ecb (csmith seed 3633209035)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x2b8aa7d2 */

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

// Options:   -s 3633209035 -o /tmp/csmith_gen_izkwvhd3/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   const uint8_t  f0;
};

union U1 {
   int32_t  f0;
   int8_t  f1;
   struct S0  f2;
};

union U2 {
   int64_t  f0;
   int64_t  f1;
};


static uint32_t g_17[3] = {0x0DA0BDBDL,0x0DA0BDBDL,0x0DA0BDBDL};
static union U1 g_27 = {-3L};
static uint64_t g_65[3] = {0x7F484382FD97811DLL,0x7F484382FD97811DLL,0x7F484382FD97811DLL};
static int32_t g_78[4] = {0xC16B7C5EL,0xC16B7C5EL,0xC16B7C5EL,0xC16B7C5EL};
static struct S0 g_111 = {0xB0L};
static uint16_t g_151 = 0x29AEL;
static const union U2 g_165[2][5] = {{{8L},{-1L},{0xB420D7A79527C193LL},{0xB420D7A79527C193LL},{-1L}},{{8L},{-1L},{0xB420D7A79527C193LL},{0xB420D7A79527C193LL},{-1L}}};
static int32_t g_170 = 0xF92E9319L;
static int64_t g_172 = (-4L);
static int16_t g_174 = 0x1035L;
static uint16_t g_175 = 8UL;
static int32_t g_178 = 0L;
static int16_t g_179[1] = {(-1L)};
static int32_t g_180 = 0x56953674L;
static int16_t g_181 = 0xD193L;
static uint32_t g_187 = 0x0796892AL;



static uint32_t  func_1(void);
static int32_t  func_2(union U2  p_3);
static int32_t  func_5(uint64_t  p_6, uint16_t  p_7, uint32_t  p_8);
static int32_t  func_11(uint8_t  p_12, int8_t  p_13, uint64_t  p_14, int8_t  p_15, int16_t  p_16);




static uint32_t  func_1(void)
{ 
    union U2 l_4 = {6L};
    int32_t l_302[5][1];
    int64_t l_330 = 0L;
    int16_t l_331 = 0xA451L;
    uint32_t l_332 = 0x1AB92CD8L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_302[i][j] = 0x84D9010AL;
    }
    l_302[0][0] = (func_2(l_4) <= g_165[1][0].f0);
    for (g_178 = (-14); (g_178 >= 28); g_178 = safe_add_func_int32_t_s_s(g_178, 1))
    { 
        int8_t l_306 = 1L;
        union U1 l_329 = {0x36AB41BAL};
        g_78[1] = ((safe_unary_minus_func_uint8_t_u((l_306 , (g_17[2] && 1L)))) <= (safe_unary_minus_func_uint16_t_u((safe_mod_func_int64_t_s_s((safe_mod_func_int64_t_s_s(0x72CE9E399F47FE89LL, g_27.f1)), 0x0BFEAB7B9C365363LL)))));
        g_78[2] = (safe_mod_func_int32_t_s_s(((safe_add_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(l_4.f1, (g_165[1][0].f0 & (safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((safe_sub_func_uint64_t_u_u((l_306 == (safe_sub_func_int32_t_s_s((l_329 , 2L), 0x43504BE0L))), 9L)) == 4294967295UL) >= l_330), l_4.f1)) | 0xFB33CC21D2773083LL), 255UL))))))) > l_4.f0) , l_331), l_332)) ^ l_330), l_4.f1)) , g_17[2]), 0x7BDF2396L));
    }
    return l_331;
}



static int32_t  func_2(union U2  p_3)
{ 
    uint8_t l_20[2];
    int32_t l_263[5];
    int32_t l_291[1][3][3];
    int16_t l_301[5];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_20[i] = 255UL;
    for (i = 0; i < 5; i++)
        l_263[i] = 1L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
                l_291[i][j][k] = 0xCF85E0D7L;
        }
    }
    for (i = 0; i < 5; i++)
        l_301[i] = (-1L);
    if (func_5((safe_sub_func_uint64_t_u_u((func_11(g_17[2], (safe_add_func_uint8_t_u_u((p_3.f1 & (p_3.f1 ^ (((0xACE4L > 0L) && (-1L)) & p_3.f0))), p_3.f1)), l_20[0], p_3.f0, g_17[2]) > p_3.f1), (-9L))), l_20[1], g_17[2]))
    { 
        int32_t l_222 = 0xAD57F617L;
        int32_t l_234 = 0x1FE8F313L;
        int32_t l_270 = 0L;
        int32_t l_272 = 0x3F6E0987L;
        for (g_170 = 0; (g_170 != (-4)); --g_170)
        { 
            int8_t l_221 = (-3L);
            int32_t l_223 = (-1L);
            int32_t l_271 = 1L;
            uint32_t l_273 = 0x3AEC1A99L;
            l_222 |= l_221;
            if ((l_223 = l_222))
            { 
                int64_t l_262 = 0x09C0B3F9B22F94FBLL;
                l_234 = (safe_mod_func_uint32_t_u_u((safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(((g_181 &= g_17[1]) == ((safe_add_func_int64_t_s_s((g_170 , ((((safe_add_func_int8_t_s_s(((g_65[2] <= l_222) <= g_172), l_222)) >= l_222) ^ p_3.f0) != p_3.f1)), 1L)) ^ 1L)), g_65[2])) | l_221), 0x0433F7C1L)), 0x831DD9F6L));
                l_263[0] = (g_178 = (!(((safe_rshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_s(((((safe_sub_func_int32_t_s_s(0xC96A0899L, ((safe_rshift_func_uint16_t_u_s((((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((g_78[1] >= (safe_add_func_int16_t_s_s(((((p_3.f0 , ((safe_mul_func_uint16_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((p_3.f1 ^ 0x72L), g_165[1][0].f1)), l_262)), 2L)), 10)) ^ 0x4DB03F721CDB4FA6LL) > 3L), (-5L))) & l_221)) && p_3.f1) != p_3.f0) != 0x8700D4B8L), (-8L)))), p_3.f0)), p_3.f0)), 3L)) != (-1L)) ^ 0x48L), g_65[0])) , g_174))) > l_20[0]) == 0xF3L) , g_174), l_222)), g_151)) & (-2L)) , l_20[1])));
            }
            else
            { 
                l_234 = (safe_rshift_func_int16_t_s_u(((safe_sub_func_int64_t_s_s(l_222, (g_17[0] <= ((((((l_263[0] , ((safe_mod_func_uint16_t_u_u((p_3.f1 != l_221), 1UL)) ^ 0x9DB7ED4FL)) | 0x01L) == g_170) == g_170) , l_20[1]) != 2L)))) != 0x373CEC42L), g_65[0]));
                g_78[3] ^= l_270;
            }
            ++l_273;
        }
    }
    else
    { 
        int32_t l_290 = 0xBBA7F952L;
        int32_t l_298[3];
        int i;
        for (i = 0; i < 3; i++)
            l_298[i] = 0xCA2B82A3L;
        g_180 = ((safe_mod_func_uint8_t_u_u((l_291[0][1][0] = (safe_div_func_int64_t_s_s(((((l_263[0] ^= ((~((safe_add_func_uint64_t_u_u(((++g_65[2]) > ((safe_rshift_func_int16_t_s_s((p_3 , (-1L)), 8)) && (((g_178 = ((safe_unary_minus_func_uint64_t_u(((((safe_lshift_func_int16_t_s_u(g_175, (0x996BL == g_179[0]))) || 0x6DA9385EL) != l_290) == 4294967295UL))) && g_27.f0)) , 0UL) < 0x1DL))), 0x59F2A3873CE92AE7LL)) , p_3.f1)) < p_3.f1)) <= 0UL) > g_180) && l_290), p_3.f0))), l_20[0])) == 0xDA32A215L);
        l_298[1] = (((((safe_rshift_func_int8_t_s_s((g_27.f1 = ((safe_mod_func_uint32_t_u_u(p_3.f1, (((l_290 = (((((safe_add_func_int64_t_s_s((l_263[0] |= (g_187 >= g_180)), l_20[0])) >= (-9L)) & l_291[0][0][0]) > 18446744073709551615UL) | g_175)) >= g_17[2]) , p_3.f1))) >= l_291[0][1][0])), p_3.f1)) || 0x0522L) > l_291[0][1][0]) ^ g_65[0]) >= g_179[0]);
        l_298[0] = (g_179[0] < (l_290 &= ((0UL ^ (((p_3.f1 >= (l_301[4] == l_298[1])) != 0UL) & (-5L))) >= (-1L))));
    }
    return l_291[0][1][0];
}



static int32_t  func_5(uint64_t  p_6, uint16_t  p_7, uint32_t  p_8)
{ 
    union U1 l_38 = {0x468E576DL};
    uint32_t l_54 = 1UL;
    struct S0 l_77 = {1UL};
    uint32_t l_124 = 0xE5FF039CL;
    int32_t l_131 = 8L;
    int32_t l_173 = (-5L);
    int32_t l_182 = 1L;
    int32_t l_183 = 0xEB794862L;
    int32_t l_184 = 0x7714F3CEL;
    int32_t l_185 = 1L;
    int32_t l_186[3];
    uint16_t l_214 = 0xF78CL;
    int i;
    for (i = 0; i < 3; i++)
        l_186[i] = (-1L);
    if (((l_38 , 0x8D46C64E719BA7C3LL) | (0x2B89L == (safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(((~(0xF0D229656D2926A0LL <= l_38.f1)) | 0x0AB59A67E99E855CLL), 0x83L)), 0UL)), l_54)), 0x88L)), g_27.f0)), 15)) ^ p_8), 1UL)))))
    { 
        uint16_t l_67 = 0UL;
        int32_t l_79 = (-10L);
        int32_t l_92[4];
        const uint32_t l_93 = 0x3C324F1CL;
        int i;
        for (i = 0; i < 4; i++)
            l_92[i] = 9L;
        for (p_6 = (-26); (p_6 < 53); p_6 = safe_add_func_int32_t_s_s(p_6, 1))
        { 
            uint64_t l_90 = 0x93B2529581CA5788LL;
            uint8_t l_91 = 9UL;
            int32_t l_110 = 0x313D8634L;
        }
    }
    else
    { 
        int8_t l_143 = 0L;
        int32_t l_162[5];
        int32_t l_163 = 0x110B79F6L;
        int32_t l_164 = (-8L);
        int8_t l_171 = (-6L);
        struct S0 l_192 = {1UL};
        uint32_t l_215 = 0x0543B037L;
        int i;
        for (i = 0; i < 5; i++)
            l_162[i] = 0xF04045D3L;
        for (g_27.f0 = 0; (g_27.f0 != 28); g_27.f0 = safe_add_func_uint16_t_u_u(g_27.f0, 2))
        { 
            uint32_t l_134 = 4294967293UL;
            l_134++;
        }
        l_164 &= ((safe_mul_func_uint16_t_u_u((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((l_163 = (l_143 ^ (safe_add_func_uint8_t_u_u((!((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((g_151--), 12)) && (l_162[0] = (g_78[0] = (safe_lshift_func_int8_t_s_u((l_38.f0 = 0x3FL), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((g_78[1] | ((7UL ^ p_6) >= g_78[0])), g_78[1])) <= 0x4F060B1AE64750ADLL), l_54)), 0x67L))))))), p_7)) <= 0x18D710777038A069LL)), 0xE2L)))), p_6)), 0xC1L)), l_143)) <= g_27.f1);
        if ((g_165[1][0] , (((safe_sub_func_uint16_t_u_u((+p_7), (l_164 = (!(((g_175++) > (++g_187)) , (p_7 || (safe_rshift_func_int8_t_s_s(((l_192 , p_7) & l_143), 0)))))))) & g_78[1]) , g_178)))
        { 
            for (g_181 = 0; g_181 < 3; g_181 += 1)
            {
                l_186[g_181] = 0x199FB15EL;
            }
            for (g_170 = 0; (g_170 > 6); ++g_170)
            { 
                uint16_t l_195 = 1UL;
                g_180 = ((g_65[2] >= (--l_195)) , p_6);
            }
        }
        else
        { 
            uint8_t l_202 = 2UL;
            l_202 = (((((-1L) <= l_171) ^ (safe_div_func_uint64_t_u_u((++p_6), (g_172 = p_8)))) < g_178) , g_17[2]);
            l_184 = (0x92482777L != (g_17[2] | ((((safe_mul_func_uint8_t_u_u(((g_179[0] = (safe_add_func_uint32_t_u_u((((safe_unary_minus_func_uint32_t_u((!((safe_mod_func_int16_t_s_s(0x4B2EL, ((((safe_div_func_uint16_t_u_u((~((4L || 0x77AA029BL) >= g_27.f1)), p_6)) != l_192.f0) > g_174) | l_143))) , g_17[2])))) , l_214) || 0x3EFAFE79L), g_172))) | p_8), g_181)) < g_172) ^ l_215) | p_8)));
            for (l_38.f0 = 0; (l_38.f0 == 15); l_38.f0 = safe_add_func_uint16_t_u_u(l_38.f0, 1))
            { 
                l_184 = (g_27.f0 = (!(l_162[0] &= g_165[1][0].f1)));
            }
        }
    }
    return l_54;
}



static int32_t  func_11(uint8_t  p_12, int8_t  p_13, uint64_t  p_14, int8_t  p_15, int16_t  p_16)
{ 
    uint8_t l_24 = 249UL;
    int32_t l_37 = 0x41536C74L;
    if ((+(safe_add_func_int32_t_s_s(g_17[2], 0L))))
    { 
        l_24--;
    }
    else
    { 
        uint32_t l_36[3][5] = {{0xBA70A1EEL,0x308FAA83L,0xBA70A1EEL,0xBA70A1EEL,0x308FAA83L},{9UL,0x790F9584L,0x790F9584L,9UL,0x790F9584L},{0x308FAA83L,0x308FAA83L,0xEABFD090L,0x308FAA83L,0x308FAA83L}};
        int i, j;
        g_27.f0 = (g_27 , ((3L == (safe_div_func_uint8_t_u_u(((g_27.f0 <= (safe_mod_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(g_17[2], 0x370CC321L)) > 0x783518F4C6F44469LL), 0xCAE8EF3352FB29D9LL))) >= l_36[2][2]), p_12))) || 0UL));
    }
    l_37 = 0x4BE18A16L;
    return g_17[2];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_17[i], "g_17[i]", print_hash_value);

    }
    transparent_crc(g_27.f1, "g_27.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_65[i], "g_65[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_165[i][j].f0, "g_165[i][j].f0", print_hash_value);
            transparent_crc(g_165[i][j].f1, "g_165[i][j].f1", print_hash_value);

        }
    }
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);

    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
