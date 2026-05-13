// SPDX-License-Identifier: MIT
// cctest_csmith_ed03bb46.c --- cctest case csmith_ed03bb46 (csmith seed 3976444742)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc468baad */

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

// Options:   -s 3976444742 -o /tmp/csmith_gen_ax5ei3a2/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint64_t  f1;
};

struct S1 {
   uint32_t  f0;
   int32_t  f1;
};

union U2 {
   int32_t  f0;
   uint32_t  f1;
};


static const uint64_t g_9 = 0x733E34B64B5C6F8BLL;
static uint16_t g_21[3] = {0xDCEFL,0xDCEFL,0xDCEFL};
static int8_t g_24 = 8L;
static uint32_t g_31 = 18446744073709551612UL;
static struct S0 g_34 = {0UL,0x7E011B55E97312B9LL};
static uint64_t g_49 = 0x4F2D89188B9ABC19LL;
static uint64_t g_58 = 18446744073709551615UL;
static uint32_t g_63 = 0x9FA00A4EL;
static struct S0 g_65 = {0UL,18446744073709551610UL};
static uint32_t g_95 = 0xACE7FEFAL;
static int32_t g_96 = (-4L);
static uint16_t g_102 = 1UL;
static struct S1 g_108 = {0x223CDC64L,-8L};
static uint16_t g_121[5][4] = {{0x435EL,1UL,0x7865L,0xA432L},{0x8CB8L,1UL,1UL,0x8CB8L},{1UL,0x8CB8L,0x435EL,0xCAC6L},{1UL,0x435EL,1UL,0x7865L},{0x8CB8L,0xCAC6L,0x7865L,0x7865L}};
static int64_t g_150 = 0x9ADAB8F038425995LL;
static uint8_t g_152[1] = {1UL};



static uint64_t  func_1(void);
static int16_t  func_2(union U2  p_3, struct S0  p_4, union U2  p_5);
static struct S0  func_7(const int32_t  p_8);
static int16_t  func_29(uint64_t  p_30);




static uint64_t  func_1(void)
{ 
    union U2 l_6[4] = {{-6L},{-6L},{-6L},{-6L}};
    union U2 l_66 = {-6L};
    int32_t l_172 = (-9L);
    int i;
    l_172 |= ((func_2((l_6[1] = l_6[1]), (g_65 = func_7(g_9)), l_66) >= 0x061BL) , l_6[1].f0);
    return g_65.f1;
}



static int16_t  func_2(union U2  p_3, struct S0  p_4, union U2  p_5)
{ 
    uint64_t l_69 = 18446744073709551615UL;
    int64_t l_70 = 0x737360B9F0A6C5FALL;
    int32_t l_71 = 0xDF381B91L;
    struct S1 l_76 = {0xEBC95BC5L,0x3697EF05L};
    int8_t l_104 = 0xE2L;
    uint32_t l_112 = 0x48970CE4L;
    if (((((g_65 , 0x8E81D84CL) , ((p_5.f1 > (p_3.f1 = (safe_lshift_func_uint8_t_u_u((l_69 & 4L), l_70)))) != l_69)) , l_71) && p_3.f0))
    { 
        p_5.f0 |= 0x8348F9E4L;
    }
    else
    { 
        uint32_t l_94 = 0x0CFE8E9AL;
        int32_t l_99 = 7L;
        uint32_t l_103[4] = {1UL,1UL,1UL,1UL};
        struct S1 l_107 = {4294967287UL,-1L};
        int i;
        if ((g_9 <= (safe_div_func_int16_t_s_s(g_31, (safe_add_func_uint16_t_u_u((g_24 && ((p_3.f0 & g_34.f0) != p_4.f1)), 0x64E3L))))))
        { 
            union U2 l_82 = {0L};
            uint16_t l_93 = 0UL;
            for (p_5.f0 = 2; (p_5.f0 >= 0); p_5.f0 -= 1)
            { 
                struct S1 l_77 = {0x7E04BE07L,0L};
                int i;
                l_77 = l_76;
                g_95 ^= (safe_add_func_uint64_t_u_u((safe_mod_func_int64_t_s_s(((l_76.f1 = ((l_82 , ((((safe_add_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_s(g_21[p_5.f0], ((safe_rshift_func_uint8_t_u_u((((l_71 = ((safe_rshift_func_int8_t_s_s(((!g_21[p_5.f0]) | g_24), p_5.f0)) >= 0xBCL)) > l_93) || p_4.f1), 2)) > l_94))))) > p_5.f1), g_24)) & 0x39L) <= g_24) == g_31)) || p_3.f1)) >= p_5.f0), 0x1D28FF5528475ADBLL)), g_24));
                g_96 &= (l_71 |= 0xE6313C76L);
            }
            l_71 |= (((safe_mod_func_uint32_t_u_u(l_76.f1, l_94)) , (-10L)) >= p_5.f1);
        }
        else
        { 
            l_99 = p_5.f1;
            l_104 = ((safe_mod_func_int16_t_s_s((g_102 &= ((((l_99 = 0x19L) & p_3.f1) == g_21[2]) ^ l_76.f1)), l_103[1])) & g_31);
            for (p_5.f1 = (-29); (p_5.f1 <= 10); p_5.f1++)
            { 
                g_108 = l_107;
                l_99 = g_34.f0;
                if (g_63)
                    break;
            }
        }
        return l_104;
    }
    if (((((((safe_rshift_func_uint8_t_u_u((!((l_112 , (((safe_unary_minus_func_int64_t_s((safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_s((g_34 , l_104), 6)) <= (g_24 < 18446744073709551615UL)) & g_31) , g_21[0]), 7UL)))) || g_31) & p_3.f1)) == p_4.f1)), p_5.f1)) && g_49) && g_34.f0) , p_4.f0) , p_3.f0) , 0xE1B1DC04L))
    { 
        int32_t l_151[5][5][4] = {{{0x7E5A13A2L,(-2L),1L,(-1L)},{0x7E5A13A2L,1L,0x7E5A13A2L,0L},{(-2L),(-1L),0L,0L},{1L,1L,1L,0L},{0L,0x7E5A13A2L,1L,0x7E5A13A2L}},{{(-2L),(-1L),0x1F52E6A1L,1L},{0x7E5A13A2L,(-1L),(-1L),0x7E5A13A2L},{(-1L),0x7E5A13A2L,(-2L),0L},{(-1L),(-2L),(-1L),0x1F52E6A1L},{0x7E5A13A2L,0L,0x1F52E6A1L,0x1F52E6A1L}},{{(-2L),(-2L),1L,0L},{0L,0x7E5A13A2L,1L,0x7E5A13A2L},{(-2L),(-1L),0x1F52E6A1L,1L},{0x7E5A13A2L,(-1L),(-1L),0x7E5A13A2L},{(-1L),0x7E5A13A2L,(-2L),0L}},{{(-1L),(-2L),(-1L),0x1F52E6A1L},{0x7E5A13A2L,0L,0x1F52E6A1L,0x1F52E6A1L},{(-2L),(-2L),1L,0L},{0L,0x7E5A13A2L,1L,0x7E5A13A2L},{(-2L),(-1L),0x1F52E6A1L,1L}},{{0x7E5A13A2L,(-1L),(-1L),0x7E5A13A2L},{(-1L),0x7E5A13A2L,(-2L),0L},{(-1L),(-2L),(-1L),0x1F52E6A1L},{0x7E5A13A2L,0L,0x1F52E6A1L,0x1F52E6A1L},{(-2L),(-2L),1L,0L}}};
        uint16_t l_153 = 0x149EL;
        int32_t l_154 = 0xEDFE9C0AL;
        int i, j, k;
        for (g_63 = 0; (g_63 != 16); g_63 = safe_add_func_int32_t_s_s(g_63, 8))
        { 
            int16_t l_120[4][3] = {{0L,0x69A9L,0L},{0L,(-2L),0L},{0L,0x69A9L,0L},{0L,(-2L),0L}};
            int32_t l_122 = 0x605C96C5L;
            struct S1 l_123 = {3UL,0x8AFB31ACL};
            uint64_t l_128 = 1UL;
            struct S0 l_129[5][5][1] = {{{{1UL,0x2EF1F56C1A719620LL}},{{65534UL,1UL}},{{1UL,0x0BD77F32F3F1EC4ALL}},{{0xC049L,1UL}},{{1UL,0x0BD77F32F3F1EC4ALL}}},{{{65534UL,1UL}},{{1UL,0x2EF1F56C1A719620LL}},{{65534UL,1UL}},{{1UL,0x0BD77F32F3F1EC4ALL}},{{0xC049L,1UL}}},{{{1UL,0x0BD77F32F3F1EC4ALL}},{{65534UL,1UL}},{{1UL,0x2EF1F56C1A719620LL}},{{65534UL,1UL}},{{1UL,0x0BD77F32F3F1EC4ALL}}},{{{0xC049L,1UL}},{{1UL,0x0BD77F32F3F1EC4ALL}},{{65534UL,1UL}},{{1UL,0x2EF1F56C1A719620LL}},{{65534UL,1UL}}},{{{1UL,0x0BD77F32F3F1EC4ALL}},{{0xC049L,1UL}},{{1UL,0x0BD77F32F3F1EC4ALL}},{{65534UL,1UL}},{{1UL,0x2EF1F56C1A719620LL}}}};
            int i, j, k;
            if (g_21[2])
            { 
                g_96 = l_120[0][1];
                p_3.f0 = g_121[4][3];
                g_108.f1 = g_34.f0;
            }
            else
            { 
                g_108.f1 = 0x38A8CD10L;
            }
            if ((l_122 ^= 0xF12A9C28L))
            { 
                return l_120[0][1];
            }
            else
            { 
                g_108 = l_123;
                l_128 = (safe_lshift_func_int16_t_s_s(g_9, (safe_mul_func_int8_t_s_s(p_3.f0, g_95))));
                if (g_65.f1)
                    goto lbl_155;
            }
            l_129[2][3][0] = g_65;
        }
lbl_155:
        l_154 = (safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u(((g_152[0] ^= (l_151[0][1][3] = (safe_sub_func_int16_t_s_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((safe_mul_func_int8_t_s_s((l_76.f1 = (l_71 ^= 0L)), ((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((0xD89AL >= g_95) || (p_3.f1 && 1UL)), g_102)), 11)) && 18446744073709551615UL), (-2L))), p_5.f0)) , 0xD2L))) == g_150) != p_3.f0), p_3.f0)), g_21[2])) <= (-2L)), p_3.f1)))) | g_121[4][3]), g_65.f1)), l_153));
        for (p_5.f0 = 0; (p_5.f0 <= 3); p_5.f0 += 1)
        { 
            uint16_t l_169 = 1UL;
            int32_t l_171 = 0xBB4F55ACL;
            l_154 &= (safe_lshift_func_uint16_t_u_s((++g_65.f0), 12));
            if (g_121[4][3])
                break;
            for (g_95 = 0; (g_95 <= 3); g_95 += 1)
            { 
                uint32_t l_160 = 18446744073709551606UL;
                int32_t l_170 = 0x99AC2BE0L;
                l_171 = ((--l_160) | (safe_add_func_uint32_t_u_u((p_5.f0 < p_3.f1), (((((((g_150 <= (((l_170 ^= (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(l_169, g_34.f0)) > g_121[4][3]) & g_150), p_4.f1))) & 0xF85C49E2CEABE429LL) != g_49)) <= g_34.f0) <= l_71) || 0x6F187A65D3118DE8LL) || 0xAD92B7DB265E26C2LL) <= p_4.f0) | 65535UL))));
            }
        }
    }
    else
    { 
        g_34 = p_4;
    }
    return l_76.f0;
}



static struct S0  func_7(const int32_t  p_8)
{ 
    int16_t l_10 = 1L;
    int32_t l_11 = 0x75A592C6L;
    struct S0 l_64[4] = {{0UL,5UL},{0UL,5UL},{0UL,5UL},{0UL,5UL}};
    int i;
    l_10 = g_9;
    if (g_9)
        goto lbl_12;
lbl_12:
    l_11 = 1L;
    g_63 |= ((safe_mul_func_int8_t_s_s((safe_div_func_int32_t_s_s(p_8, (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((g_24 = (g_21[2]--)), p_8)) ^ (safe_lshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((func_29(((g_31 = g_9) && 0xBFE73744L)) >= l_11), g_9)), 6))), g_9)))), 0xF6L)) == l_11);
    return l_64[2];
}



static int16_t  func_29(uint64_t  p_30)
{ 
    struct S0 l_62 = {0x92AFL,1UL};
    for (p_30 = 0; (p_30 <= 31); ++p_30)
    { 
        struct S0 l_35 = {65530UL,0x62B5009892657CF7LL};
        int32_t l_50 = (-1L);
        int32_t l_51 = 1L;
        l_35 = g_34;
        for (l_35.f1 = 0; (l_35.f1 < 32); ++l_35.f1)
        { 
            int64_t l_48 = 0x962600BF09457720LL;
            int32_t l_52[2][2] = {{(-8L),(-8L)},{(-8L),(-8L)}};
            int i, j;
            if ((((l_52[1][0] = (safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((+((safe_unary_minus_func_uint8_t_u(((g_9 & (l_51 &= ((l_50 = (p_30 ^ (g_49 &= (safe_add_func_int32_t_s_s(p_30, l_48))))) <= l_35.f1))) , l_35.f1))) <= (-1L))), l_48)), 0x76A5D0C9AD537E8FLL))) <= g_31) > 0UL))
            { 
                uint8_t l_53 = 1UL;
                int32_t l_56 = 0x40E81688L;
                int32_t l_57 = 0L;
                --l_53;
                --g_58;
            }
            else
            { 
                struct S0 l_61[2][4][4] = {{{{1UL,4UL},{0xB5F2L,18446744073709551609UL},{0xB5F2L,18446744073709551609UL},{1UL,4UL}},{{1UL,0xBC07E7F6F8F643D9LL},{0xB5F2L,18446744073709551609UL},{0x44BFL,0xE16D714E288A3D85LL},{0xB5F2L,18446744073709551609UL}},{{0xB5F2L,18446744073709551609UL},{0x2D3FL,18446744073709551615UL},{0x44BFL,0xE16D714E288A3D85LL},{0x44BFL,0xE16D714E288A3D85LL}},{{1UL,0xBC07E7F6F8F643D9LL},{1UL,0xBC07E7F6F8F643D9LL},{0xB5F2L,18446744073709551609UL},{0x44BFL,0xE16D714E288A3D85LL}}},{{{1UL,4UL},{0x2D3FL,18446744073709551615UL},{1UL,4UL},{0xB5F2L,18446744073709551609UL}},{{1UL,4UL},{0xB5F2L,18446744073709551609UL},{0xB5F2L,18446744073709551609UL},{1UL,4UL}},{{1UL,0xBC07E7F6F8F643D9LL},{0xB5F2L,18446744073709551609UL},{0x44BFL,0xE16D714E288A3D85LL},{0xB5F2L,18446744073709551609UL}},{{0xB5F2L,18446744073709551609UL},{0x2D3FL,18446744073709551615UL},{0x44BFL,0xE16D714E288A3D85LL},{0x44BFL,0xE16D714E288A3D85LL}}}};
                int i, j, k;
                if (p_30)
                    break;
                g_34 = l_61[1][3][3];
            }
            l_62 = l_35;
            l_50 = 0x22C3E505L;
        }
    }
    return p_30;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_21[i], "g_21[i]", print_hash_value);

    }
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65.f0, "g_65.f0", print_hash_value);
    transparent_crc(g_65.f1, "g_65.f1", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_108.f1, "g_108.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_121[i][j], "g_121[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_152[i], "g_152[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
