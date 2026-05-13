// SPDX-License-Identifier: MIT
// cctest_csmith_f72c77b7.c --- cctest case csmith_f72c77b7 (csmith seed 4146886583)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x767a70cd */

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

// Options:   -s 4146886583 -o /tmp/csmith_gen_nnm851_v/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   int32_t  f1;
   int32_t  f2;
   int8_t  f3;
   uint64_t  f4;
};

union U1 {
   struct S0  f0;
   int8_t  f1;
   int16_t  f2;
   uint16_t  f3;
};


static int16_t g_12 = 0xB445L;
static struct S0 g_14[1][3] = {{{0x648BD921B0AE28DELL,0x37C5B151L,0xAFBD13D8L,0x53L,0x8470ED99EA7EB8E1LL},{0x648BD921B0AE28DELL,0x37C5B151L,0xAFBD13D8L,0x53L,0x8470ED99EA7EB8E1LL},{0x648BD921B0AE28DELL,0x37C5B151L,0xAFBD13D8L,0x53L,0x8470ED99EA7EB8E1LL}}};
static int32_t g_69[5] = {0x5828949FL,0x5828949FL,0x5828949FL,0x5828949FL,0x5828949FL};



static uint16_t  func_1(void);
static int8_t  func_7(uint16_t  p_8, uint32_t  p_9, int32_t  p_10, struct S0  p_11);
static const struct S0  func_15(int32_t  p_16);
static int32_t  func_17(uint64_t  p_18, uint8_t  p_19);




static uint16_t  func_1(void)
{ 
    uint32_t l_4 = 0x3E9323D1L;
    uint16_t l_13[2][3] = {{0xACEDL,0xACEDL,0xACEDL},{65535UL,65535UL,65535UL}};
    int i, j;
    g_69[0] = (safe_add_func_int16_t_s_s(0xE5F3L, (l_4 | ((l_4 == (safe_sub_func_int8_t_s_s(func_7(g_12, l_4, l_13[0][1], g_14[0][2]), l_13[1][1]))) , g_69[0]))));
    return l_13[0][1];
}



static int8_t  func_7(uint16_t  p_8, uint32_t  p_9, int32_t  p_10, struct S0  p_11)
{ 
    int16_t l_20 = 0xB831L;
    struct S0 l_120[3][3][4] = {{{{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL}},{{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL},{0x59923F436BBB4AFCLL,-1L,0xC6F009EEL,0xF6L,18446744073709551614UL},{-1L,5L,0L,0xA4L,1UL}},{{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x59923F436BBB4AFCLL,-1L,0xC6F009EEL,0xF6L,18446744073709551614UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x35B977FD1FBCF3A2LL,4L,0x47B88340L,0x5FL,18446744073709551614UL}}},{{{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL},{-1L,5L,0L,0xA4L,1UL},{0x35B977FD1FBCF3A2LL,4L,0x47B88340L,0x5FL,18446744073709551614UL},{0x35B977FD1FBCF3A2LL,4L,0x47B88340L,0x5FL,18446744073709551614UL}},{{0x59923F436BBB4AFCLL,-1L,0xC6F009EEL,0xF6L,18446744073709551614UL},{0x59923F436BBB4AFCLL,-1L,0xC6F009EEL,0xF6L,18446744073709551614UL},{0xD13B53BB8E87DE45LL,-1L,0x2AFC0BA8L,0x2FL,0x85F0ADDF9D14FDFCLL},{-1L,5L,0L,0xA4L,1UL}},{{-1L,5L,0L,0xA4L,1UL},{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL},{0xD13B53BB8E87DE45LL,-1L,0x2AFC0BA8L,0x2FL,0x85F0ADDF9D14FDFCLL},{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL}}},{{{0x59923F436BBB4AFCLL,-1L,0xC6F009EEL,0xF6L,18446744073709551614UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x35B977FD1FBCF3A2LL,4L,0x47B88340L,0x5FL,18446744073709551614UL},{0xD13B53BB8E87DE45LL,-1L,0x2AFC0BA8L,0x2FL,0x85F0ADDF9D14FDFCLL}},{{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x92A32DB51A9E36F5LL,0L,-6L,-1L,18446744073709551615UL}},{{-1L,5L,0L,0xA4L,1UL},{0xDAC23FC587C1246BLL,-7L,0L,-10L,18446744073709551615UL},{0x074C2865F0A685D5LL,0L,0xFFE05942L,0xFEL,18446744073709551610UL},{0x35B977FD1FBCF3A2LL,4L,0x47B88340L,0x5FL,18446744073709551614UL}}}};
    uint16_t l_123[5][4][3] = {{{3UL,8UL,65535UL},{4UL,0UL,0x908CL},{3UL,65535UL,65535UL},{0xE18EL,0UL,0xDDCFL}},{{3UL,8UL,65535UL},{4UL,0UL,0x908CL},{3UL,65535UL,65535UL},{0xE18EL,0UL,0xDDCFL}},{{3UL,8UL,65535UL},{4UL,0UL,0x908CL},{3UL,65535UL,65535UL},{0xE18EL,0UL,0xDDCFL}},{{3UL,8UL,65535UL},{4UL,0UL,0x908CL},{3UL,65535UL,65535UL},{0xE18EL,0UL,0xDDCFL}},{{3UL,8UL,65535UL},{4UL,0UL,0x908CL},{3UL,65535UL,65535UL},{0xE18EL,0UL,0xDDCFL}}};
    int i, j, k;
    g_14[0][0] = func_15(func_17(l_20, p_8));
    p_10 = (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(p_11.f0, 7)), 1)) == (((safe_mul_func_int8_t_s_s(p_9, (((l_120[1][1][0] , ((safe_rshift_func_int8_t_s_u((-1L), l_120[1][1][0].f4)) || 0x621335F78ABD9249LL)) <= g_14[0][2].f0) < (-4L)))) == l_123[3][0][0]) ^ l_123[3][0][0])), l_120[1][1][0].f2));
    return g_14[0][2].f1;
}



static const struct S0  func_15(int32_t  p_16)
{ 
    union U1 l_73[4] = {{{0L,0x9292B137L,0x9941B8E2L,0x66L,6UL}},{{0L,0x9292B137L,0x9941B8E2L,0x66L,6UL}},{{0L,0x9292B137L,0x9941B8E2L,0x66L,6UL}},{{0L,0x9292B137L,0x9941B8E2L,0x66L,6UL}}};
    struct S0 l_90 = {6L,5L,0x6802A6C3L,1L,0xBB29333D576224DBLL};
    int i;
    if ((((l_73[0] , ((((g_14[0][2].f0 = p_16) , ((safe_add_func_int64_t_s_s(((safe_sub_func_uint32_t_u_u(((g_14[0][1] , (safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(l_73[0].f0.f0, p_16)), l_73[0].f0.f0))) ^ g_69[0]), l_73[0].f0.f2)) && l_73[0].f0.f1), 0x87E89A4CE3ABF990LL)) | l_73[0].f0.f1)) , l_73[0].f0.f0) >= p_16)) | 0UL) != 0UL))
    { 
        for (p_16 = (-8); (p_16 < 20); p_16++)
        { 
            int32_t l_88 = 1L;
            if (g_14[0][2].f2)
            { 
                l_73[0].f0.f1 = (9UL && ((g_69[4] ^ (safe_mod_func_uint8_t_u_u(0xA2L, ((safe_div_func_int64_t_s_s(g_69[0], l_88)) , g_14[0][2].f4)))) && p_16));
            }
            else
            { 
                struct S0 l_89 = {0xD26C8B9CA4895AF6LL,0x329EC220L,0xB94DD076L,0L,0x8FD6C632212A48E7LL};
                l_73[0].f0 = l_89;
            }
        }
    }
    else
    { 
        int64_t l_93 = (-2L);
        int32_t l_110 = 0x1B76A28CL;
lbl_111:
        l_90 = l_73[0].f0;
        g_14[0][2].f2 &= (safe_rshift_func_uint8_t_u_u((l_93 = g_12), 5));
        for (g_12 = 18; (g_12 == 22); g_12 = safe_add_func_int64_t_s_s(g_12, 6))
        { 
            int64_t l_109[5][5] = {{0xF17765441C1EEBA0LL,0xF17765441C1EEBA0LL,0xD8D7B0DA77971598LL,0xD8D7B0DA77971598LL,0xF17765441C1EEBA0LL},{2L,0xB9DE4BE9B3F527E6LL,2L,0xB9DE4BE9B3F527E6LL,2L},{0xF17765441C1EEBA0LL,0xD8D7B0DA77971598LL,0xD8D7B0DA77971598LL,0xF17765441C1EEBA0LL,0xF17765441C1EEBA0LL},{0x31BD4A44B56EB578LL,0xB9DE4BE9B3F527E6LL,0x31BD4A44B56EB578LL,0xB9DE4BE9B3F527E6LL,0x31BD4A44B56EB578LL},{0xF17765441C1EEBA0LL,0xF17765441C1EEBA0LL,0xD8D7B0DA77971598LL,0xD8D7B0DA77971598LL,0xF17765441C1EEBA0LL}};
            int i, j;
            for (l_90.f2 = 0; (l_90.f2 <= (-23)); l_90.f2--)
            { 
                g_69[0] ^= 0x4D7B1BA9L;
                l_73[0].f0.f2 = ((~((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((((safe_lshift_func_int8_t_s_s(((((safe_div_func_uint64_t_u_u(((l_73[0].f0.f0 >= (g_69[0] != 65530UL)) && ((g_12 ^ p_16) ^ 0x0CC2D3683BAF00BCLL)), p_16)) ^ p_16) == g_12) > (-7L)), 2)) > 1L) | p_16) >= l_90.f1), g_69[0])), l_93)), p_16)) , g_14[0][2].f3)) >= l_90.f1);
            }
            l_110 = ((1UL <= (((l_93 , p_16) < ((g_69[0] , 9UL) ^ p_16)) ^ l_109[4][4])) && 0L);
            if (l_90.f2)
                goto lbl_111;
        }
    }
    return l_73[0].f0;
}



static int32_t  func_17(uint64_t  p_18, uint8_t  p_19)
{ 
    int64_t l_53 = 0x20AF47DFB07D6E19LL;
    int32_t l_54 = (-7L);
    int32_t l_58 = 0xDC7FB053L;
    int32_t l_59 = 0xD0B67C40L;
    int32_t l_60 = 0x947D9BA7L;
    int32_t l_61 = (-5L);
    int32_t l_63 = 0xA6296EF6L;
    int32_t l_65 = (-1L);
    for (p_18 = 0; (p_18 >= 58); p_18 = safe_add_func_int64_t_s_s(p_18, 5))
    { 
        uint64_t l_25 = 5UL;
        int32_t l_28 = 0x85FFFF32L;
        int32_t l_52 = 0L;
        int32_t l_62 = 0x7C19DE87L;
        int32_t l_64[5][5] = {{0xA1548EB8L,0xA1548EB8L,1L,(-1L),1L},{0L,0L,1L,0xF4B2487FL,1L},{0xA1548EB8L,0xA1548EB8L,1L,(-1L),1L},{0L,0L,1L,0xF4B2487FL,1L},{0xA1548EB8L,0xA1548EB8L,1L,(-1L),1L}};
        int i, j;
        l_25 = (safe_div_func_uint32_t_u_u(g_14[0][2].f3, (g_14[0][2].f1 ^= 0xD1FE9056L)));
        if (((safe_mul_func_uint8_t_u_u((0L & ((((l_28 = 3L) , (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((l_28 = (((safe_mod_func_int32_t_s_s(((safe_sub_func_int64_t_s_s(((l_54 = ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((safe_add_func_int32_t_s_s(g_14[0][2].f1, (safe_mul_func_int16_t_s_s((((l_52 &= ((safe_sub_func_uint8_t_u_u((+l_28), g_14[0][2].f3)) , g_14[0][2].f2)) | 0UL) ^ g_12), g_14[0][2].f2)))) && g_14[0][2].f3) >= g_14[0][2].f4), p_18)) || g_12), l_53)) == p_18), p_18)), l_53)) >= 4294967295UL)) ^ g_12), 1L)) <= l_53), p_18)) , g_14[0][2].f3) , p_19)), 11)), l_53))) != 0xAA2EEDF21916DC91LL) && g_14[0][2].f3)), 0x22L)) , p_18))
        { 
            uint32_t l_57[1][1][5];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_57[i][j][k] = 0xC4EE0C60L;
                }
            }
            if (((((((l_28 = (g_14[0][2].f3 = (g_14[0][2].f2 <= 0x74084DAEA480D8AALL))) < g_14[0][2].f0) ^ ((safe_rshift_func_int16_t_s_s((g_12 |= g_14[0][2].f1), p_18)) ^ p_18)) & l_54) , g_14[0][2].f4) && p_19))
            { 
                return l_57[0][0][3];
            }
            else
            { 
                return l_52;
            }
        }
        else
        { 
            uint32_t l_66[4];
            int i;
            for (i = 0; i < 4; i++)
                l_66[i] = 4UL;
            l_66[1]--;
        }
        g_14[0][2].f2 = ((g_69[0] = (0x203F87D51EEA2DBBLL < g_14[0][2].f2)) , (0xA2D56AB65697B4E6LL ^ (l_64[3][3] = (((!(safe_rshift_func_int8_t_s_s(0xE6L, 6))) & 0xB07D9F9AL) < p_19))));
    }
    return p_19;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_14[i][j].f0, "g_14[i][j].f0", print_hash_value);
            transparent_crc(g_14[i][j].f1, "g_14[i][j].f1", print_hash_value);
            transparent_crc(g_14[i][j].f2, "g_14[i][j].f2", print_hash_value);
            transparent_crc(g_14[i][j].f3, "g_14[i][j].f3", print_hash_value);
            transparent_crc(g_14[i][j].f4, "g_14[i][j].f4", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_69[i], "g_69[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
