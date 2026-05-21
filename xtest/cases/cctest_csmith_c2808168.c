// SPDX-License-Identifier: MIT
// cctest_csmith_c2808168.c --- cctest case csmith_c2808168 (csmith seed 3263201640)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf1e2e62f */

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

// Options:   -s 3263201640 -o /tmp/csmith_gen_7rvpnydv/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint32_t  f0;
   int8_t  f1;
   int8_t  f2;
   int16_t  f3;
   const int32_t  f4;
};

struct S1 {
   uint32_t  f0;
   int32_t  f1;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   const struct S1  f0;
   struct S0  f1;
   int64_t  f2;
   struct S0  f3;
   struct S1  f4;
   int64_t  f5;
   int16_t  f6;
   const int64_t  f7;
};
#pragma pack(pop)

#pragma pack(push)
#pragma pack(1)
struct S3 {
   const uint64_t  f0;
};
#pragma pack(pop)

union U4 {
   const uint32_t  f0;
   uint64_t  f1;
};


static int32_t g_4[5][3] = {{0x4B2E809BL,0x963EC58FL,0x4B2E809BL},{0x4B2E809BL,0x963EC58FL,0x4B2E809BL},{0x4B2E809BL,0x963EC58FL,0x4B2E809BL},{0x4B2E809BL,0x963EC58FL,0x4B2E809BL},{0x4B2E809BL,0x963EC58FL,0x4B2E809BL}};
static int32_t g_10 = 0x1F0EF2F3L;
static const struct S2 g_40 = {{0x1D005767L,0x065BBD97L},{1UL,5L,0xC0L,2L,1L},-6L,{18446744073709551606UL,-5L,-1L,0x6EE4L,0x120B2523L},{0x7D3E67B3L,0xDF123EFBL},-1L,0x0942L,-2L};
static const struct S2 *g_39 = &g_40;
static int32_t g_48 = 0xFCE2E644L;
static uint32_t g_49 = 7UL;
static uint64_t g_52 = 0x23BA0E38899A8624LL;
static uint16_t g_60 = 0xA650L;
static int32_t g_61 = (-5L);
static int8_t g_68 = 7L;
static uint32_t g_88[3][2] = {{0xC2D95366L,0xC2D95366L},{0xC2D95366L,0xC2D95366L},{0xC2D95366L,0xC2D95366L}};
static struct S2 g_99 = {{4UL,-1L},{0x49298730L,0L,0xD2L,1L,0xC9F35A7BL},-1L,{0x1ECA9F70L,-1L,0x53L,0x83ADL,0x1AC0D59BL},{1UL,0x8F1AF8A6L},0x327D2F113D487E53LL,0x2A51L,4L};
static int32_t *g_117 = &g_48;
static int64_t g_147 = 0xB09B283B4B798DF4LL;
static uint16_t g_148 = 9UL;
static int32_t g_157 = 0x2CC52EBEL;
static int32_t g_204 = 0xBD2D9BE9L;
static int64_t g_205 = 0x5D199DA16F4BA2F3LL;
static int32_t g_206 = 0xEA3EBE08L;
static int16_t g_207[3] = {(-9L),(-9L),(-9L)};
static int16_t g_209 = 0x26A5L;
static int32_t g_211 = (-1L);
static uint32_t g_213 = 0xD499C858L;
static union U4 g_231[1] = {{8UL}};
static struct S3 g_246 = {0x6293FC5627ABC631LL};
static uint32_t g_261 = 0xA55DB8D7L;
static int8_t g_279 = 0L;
static uint32_t g_281[6][3] = {{3UL,3UL,9UL},{0x22EA5CE5L,0x22EA5CE5L,18446744073709551612UL},{3UL,3UL,9UL},{0x22EA5CE5L,0x22EA5CE5L,18446744073709551612UL},{3UL,3UL,9UL},{0x22EA5CE5L,0x22EA5CE5L,18446744073709551612UL}};
static struct S3 g_298 = {3UL};
static struct S3 *g_297 = &g_298;
static uint32_t g_308 = 0xFB7BE2BCL;
static int16_t *g_314 = &g_209;
static int16_t **g_313 = &g_314;
static uint32_t g_333 = 0x81658460L;
static struct S2 g_341 = {{0x3AF1AFB8L,0x2D5834FCL},{0xD1835A0EL,-6L,1L,0x5BBBL,0xBCBC0E3DL},0x29574716CAD316F0LL,{18446744073709551615UL,0x32L,0xD9L,-4L,0L},{0UL,0x2F08A162L},-1L,0L,1L};
static struct S0 *g_352 = (void*)0;
static uint8_t g_368 = 247UL;
static int64_t g_408 = 0xDD40C54AD161C220LL;
static int32_t g_409[3][6][5] = {{{0x67C49E4FL,0x24401B90L,0x49A9A718L,(-1L),(-8L)},{(-3L),(-1L),1L,0x28F16A89L,0x9ABBF9C2L},{0x4B5A7793L,(-1L),1L,(-8L),0x28F16A89L},{(-9L),1L,1L,0x9ABBF9C2L,0x9ABBF9C2L},{(-3L),1L,(-3L),0x28F16A89L,(-8L)},{(-1L),(-1L),0L,0x9ABBF9C2L,0x28F16A89L}},{{(-1L),(-1L),1L,(-8L),(-1L)},{(-3L),0x516EE59FL,0L,0x28F16A89L,(-1L)},{(-9L),(-1L),(-3L),(-1L),0x28F16A89L},{0x4B5A7793L,0x516EE59FL,1L,(-1L),(-8L)},{(-3L),(-1L),1L,0x28F16A89L,0x9ABBF9C2L},{0x4B5A7793L,(-1L),1L,(-8L),0x28F16A89L}},{{(-9L),1L,1L,0x9ABBF9C2L,0x9ABBF9C2L},{(-3L),1L,(-3L),0x28F16A89L,(-8L)},{(-1L),(-1L),0L,0x9ABBF9C2L,0x28F16A89L},{(-1L),(-1L),1L,(-8L),(-1L)},{(-3L),0x516EE59FL,0L,0x28F16A89L,(-1L)},{(-9L),(-1L),(-3L),(-1L),0x28F16A89L}}};
static int8_t g_546 = (-10L);
static int32_t **g_616[6][4] = {{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117}};
static int32_t ***g_615 = &g_616[1][0];
static uint32_t *g_637 = (void*)0;
static uint16_t g_687 = 0xEFF5L;
static int32_t *g_689 = &g_48;
static int8_t g_698 = 1L;
static uint32_t g_739 = 4294967289UL;
static uint8_t g_741 = 0xD1L;
static union U4 g_749 = {0xF09DE650L};
static uint16_t g_765[1][3] = {{0x5984L,0x5984L,0x5984L}};
static struct S2 *g_784 = &g_341;
static struct S2 **g_783 = &g_784;
static struct S1 *g_813 = &g_99.f4;
static struct S1 ** const g_812 = &g_813;
static const uint64_t *g_849 = &g_52;
static const uint64_t **g_848 = &g_849;
static struct S0 **g_874 = &g_352;
static struct S0 ** const *g_873 = &g_874;
static const struct S3 g_884 = {18446744073709551613UL};
static int32_t g_942 = (-1L);
static int16_t g_992 = (-1L);
static int8_t g_1062 = 0xE6L;
static int16_t ****g_1068 = (void*)0;
static uint64_t g_1087[7] = {0UL,0UL,0xA6BA7094B572BB20LL,0UL,0UL,0xA6BA7094B572BB20LL,0UL};
static uint64_t *g_1113[7] = {&g_1087[6],(void*)0,(void*)0,&g_1087[6],(void*)0,(void*)0,&g_1087[6]};
static uint64_t g_1160 = 0x93CE317001877F29LL;
static int32_t g_1175 = 0x0F3F8824L;
static int64_t g_1207 = (-1L);
static int64_t *g_1221 = &g_99.f2;
static int64_t **g_1220 = &g_1221;
static int32_t g_1228 = 0xC3953229L;
static const int16_t **g_1234 = (void*)0;
static const int16_t ***g_1233 = &g_1234;
static uint32_t ** const g_1294 = (void*)0;
static uint8_t g_1319 = 0xEAL;
static int64_t g_1367[3][6][2] = {{{1L,0xF8D9061482025DC8LL},{0x1C596AE43C353E0DLL,0x47986EE935879D5FLL},{0x47986EE935879D5FLL,0x1C596AE43C353E0DLL},{0xF8D9061482025DC8LL,1L},{0xF8D9061482025DC8LL,0x1C596AE43C353E0DLL},{0x47986EE935879D5FLL,0x47986EE935879D5FLL}},{{0x1C596AE43C353E0DLL,0xF8D9061482025DC8LL},{1L,0xF8D9061482025DC8LL},{0x1C596AE43C353E0DLL,0x47986EE935879D5FLL},{0x47986EE935879D5FLL,0x1C596AE43C353E0DLL},{0xF8D9061482025DC8LL,1L},{0xF8D9061482025DC8LL,0x1C596AE43C353E0DLL}},{{0x47986EE935879D5FLL,0x47986EE935879D5FLL},{0x1C596AE43C353E0DLL,0xF8D9061482025DC8LL},{1L,0xF8D9061482025DC8LL},{0x1C596AE43C353E0DLL,0x47986EE935879D5FLL},{0x47986EE935879D5FLL,0x1C596AE43C353E0DLL},{0xF8D9061482025DC8LL,1L}}};
static int8_t g_1368 = 1L;
static struct S1 **g_1428 = &g_813;
static struct S1 ***g_1427 = &g_1428;
static struct S1 ****g_1426 = &g_1427;
static int16_t *****g_1465 = &g_1068;
static int64_t g_1573 = 0xA58CA27548279077LL;
static int32_t g_1577 = 0xE50303D2L;
static int8_t *g_1623 = &g_279;
static int8_t ** const g_1622 = &g_1623;
static struct S2 ***g_1688 = (void*)0;
static union U4 g_1808 = {4UL};
static union U4 *g_1807[4][7][3] = {{{&g_749,&g_231[0],(void*)0},{&g_1808,(void*)0,&g_231[0]},{&g_749,(void*)0,&g_749},{&g_1808,&g_231[0],&g_749},{&g_749,(void*)0,&g_1808},{&g_1808,&g_749,&g_1808},{&g_749,&g_231[0],(void*)0}},{{&g_1808,(void*)0,&g_231[0]},{&g_749,(void*)0,&g_749},{&g_1808,&g_231[0],&g_1808},{&g_1808,&g_1808,&g_231[0]},{&g_1808,&g_749,&g_1808},{&g_1808,&g_749,&g_749},{&g_1808,&g_1808,&g_231[0]}},{{&g_1808,(void*)0,&g_1808},{&g_1808,&g_231[0],&g_1808},{&g_1808,&g_1808,&g_231[0]},{&g_1808,&g_749,&g_1808},{&g_1808,&g_749,&g_749},{&g_1808,&g_1808,&g_231[0]},{&g_1808,(void*)0,&g_1808}},{{&g_1808,&g_231[0],&g_1808},{&g_1808,&g_1808,&g_231[0]},{&g_1808,&g_749,&g_1808},{&g_1808,&g_749,&g_749},{&g_1808,&g_1808,&g_231[0]},{&g_1808,(void*)0,&g_1808},{&g_1808,&g_231[0],&g_1808}}};
static struct S2 g_1851 = {{2UL,-9L},{0x082A0CE6L,1L,8L,0xC5A7L,0xC650224EL},6L,{0x004AB698L,1L,-1L,0xF897L,0x02EA4C7DL},{0x6AC64ABAL,0x81BE430AL},0xF30C297C70B9C754LL,7L,-3L};
static struct S2 *g_1850 = &g_1851;
static int32_t g_1852 = 0L;



static struct S2  func_1(void);
static uint8_t  func_6(uint32_t  p_7, uint8_t  p_8);
static struct S2 * func_11(const int16_t  p_12, struct S0  p_13, union U4  p_14);
static struct S0  func_15(union U4  p_16, struct S2  p_17, struct S3  p_18, int64_t  p_19, struct S2 * p_20);
static union U4  func_21(struct S2 * p_22, union U4  p_23);
static struct S2 * func_24(int32_t * p_25, int32_t  p_26, uint64_t  p_27);
static uint8_t  func_33(int16_t  p_34, const struct S3  p_35);
static const struct S3  func_37(const struct S2 * p_38);




static struct S2  func_1(void)
{ 
    const int8_t l_5 = 5L;
    struct S1 l_1418 = {4294967289UL,0xCE6188D6L};
    int64_t l_1419 = 0x7F1E2DBA10F9170ALL;
    uint8_t *l_1422 = &g_741;
    int32_t * const l_1432 = (void*)0;
    uint16_t l_1468 = 0UL;
    int16_t *** const l_1471[6][5] = {{&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313},{&g_313,&g_313,&g_313,&g_313,&g_313}};
    int16_t *** const *l_1470 = &l_1471[5][0];
    int16_t *** const **l_1469 = &l_1470;
    const uint16_t l_1472 = 0xFC5EL;
    union U4 l_1498[6] = {{4294967286UL},{4294967295UL},{4294967286UL},{4294967286UL},{4294967295UL},{4294967286UL}};
    struct S2 l_1517 = {{0x7E48DCDCL,0xDF3281BFL},{7UL,0xDBL,0xBBL,0xF409L,0L},0x1E958C24E31F4D4CLL,{0x2452BF01L,-2L,-4L,0L,-1L},{0xE0821B03L,0x191C292BL},1L,0L,-1L};
    uint8_t l_1543 = 0x67L;
    int32_t l_1566[1];
    int8_t l_1574 = 0xF8L;
    uint32_t *l_1707[6] = {&g_261,&g_281[4][0],&g_261,&g_261,&g_281[4][0],&g_261};
    int32_t *l_1727[1];
    struct S2 l_1728 = {{1UL,1L},{0x45FDC298L,0x4CL,0x0AL,-7L,0x5DF3433AL},1L,{0x6417DC40L,0x1DL,0xF2L,0L,0x1E139651L},{4294967295UL,0xA6BE65BBL},0x3F5FC6F93F9506BFLL,0xED41L,-5L};
    struct S0 **l_1795 = &g_352;
    int8_t l_1821 = 5L;
    const int32_t l_1853 = 0xF597DE3CL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1566[i] = 0xA79923EBL;
    for (i = 0; i < 1; i++)
        l_1727[i] = &g_10;
    if ((((*g_117) |= ((safe_add_func_uint8_t_u_u((g_4[4][2] > l_5), func_6(l_5, g_4[4][2]))) == 65527UL)) && (l_1419 &= ((+((l_1418 = (*g_813)) , 2L)) | 0xAEL))))
    { 
        uint64_t l_1420 = 0x286A7119A827C9DFLL;
        int8_t *l_1421 = &g_341.f3.f2;
        struct S1 ****l_1430 = &g_1427;
        struct S2 l_1431 = {{0x818BFA57L,0L},{0xB89406FFL,0x18L,0xE4L,4L,0x1A3A3B1EL},0x1621B87D2A73AB26LL,{0UL,0xDCL,0x5FL,7L,0x5FEABED8L},{1UL,0x3AF513FCL},0L,0xC41EL,0x1991004DF80D228ELL};
        int32_t *l_1457[3][3];
        int8_t ***l_1514 = (void*)0;
        uint32_t l_1595 = 0x1B33E9DCL;
        int64_t l_1597[7] = {0x434EAD4E73CBC7EALL,0x310B3745DE259E9ALL,0x434EAD4E73CBC7EALL,0x434EAD4E73CBC7EALL,0x310B3745DE259E9ALL,0x434EAD4E73CBC7EALL,0x434EAD4E73CBC7EALL};
        uint8_t l_1598 = 249UL;
        union U4 l_1612[1][1] = {{{0x37842E2DL}}};
        uint32_t l_1627 = 0x9409844AL;
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
                l_1457[i][j] = (void*)0;
        }
        (*g_689) ^= ((((l_1420 && ((*l_1421) = g_40.f0.f0)) , l_1422) == (l_1420 , &g_368)) || 0xCF72L);
        if ((*g_117))
        { 
            int32_t ****l_1423 = &g_615;
            int32_t **l_1433 = &g_117;
            const int8_t ***l_1487 = (void*)0;
            struct S0 ***l_1509 = (void*)0;
            int8_t **l_1516 = &l_1421;
            int8_t ***l_1515 = &l_1516;
            uint8_t l_1559 = 0xD2L;
            int32_t l_1567 = 1L;
            int32_t l_1569 = (-1L);
            int32_t l_1570[6][3] = {{0x57B9BBEFL,0x8DEFD75AL,0x8DEFD75AL},{0x57B9BBEFL,0x8DEFD75AL,0x8DEFD75AL},{0x57B9BBEFL,0x8DEFD75AL,0x8DEFD75AL},{0x57B9BBEFL,0x8DEFD75AL,0x8DEFD75AL},{0x57B9BBEFL,0x8DEFD75AL,0x8DEFD75AL},{0x57B9BBEFL,0x8DEFD75AL,0x8DEFD75AL}};
            int8_t l_1575 = 0xABL;
            int8_t l_1579 = 7L;
            struct S1 l_1596 = {1UL,0L};
            int i, j;
            (*l_1423) = &g_616[1][0];
lbl_1452:
            for (g_147 = 0; (g_147 <= (-1)); g_147 = safe_sub_func_int16_t_s_s(g_147, 6))
            { 
                struct S1 *****l_1429[5] = {&g_1426,&g_1426,&g_1426,&g_1426,&g_1426};
                int i;
                l_1430 = g_1426;
                return l_1431;
            }
            (*l_1433) = l_1432;
            for (l_1431.f2 = 0; (l_1431.f2 == (-19)); l_1431.f2 = safe_sub_func_int16_t_s_s(l_1431.f2, 3))
            { 
                uint16_t *l_1436[7] = {&g_148,&g_148,&g_148,&g_148,&g_148,&g_148,&g_148};
                int32_t l_1437 = 0xEBFACFB2L;
                int32_t l_1438 = 0x11D53543L;
                struct S2 l_1451 = {{0x4407BFBBL,0x8E6F8890L},{18446744073709551613UL,1L,-1L,-4L,3L},0L,{0x55EDE179L,-1L,0xDEL,3L,0L},{4294967286UL,0xA726E194L},2L,0x7309L,0L};
                struct S2 l_1453[3][3] = {{{{0UL,0x64C66285L},{0x2D3AD1E7L,1L,-1L,0xCCF0L,5L},-2L,{0x834D654DL,4L,1L,3L,0xECE357C3L},{0UL,0xC2FE26C1L},0xC3B4431753D32581LL,0x7558L,0xACCDB07C5ED44FCELL},{{0UL,0x64C66285L},{0x2D3AD1E7L,1L,-1L,0xCCF0L,5L},-2L,{0x834D654DL,4L,1L,3L,0xECE357C3L},{0UL,0xC2FE26C1L},0xC3B4431753D32581LL,0x7558L,0xACCDB07C5ED44FCELL},{{0UL,0x64C66285L},{0x2D3AD1E7L,1L,-1L,0xCCF0L,5L},-2L,{0x834D654DL,4L,1L,3L,0xECE357C3L},{0UL,0xC2FE26C1L},0xC3B4431753D32581LL,0x7558L,0xACCDB07C5ED44FCELL}},{{{4294967287UL,0L},{0x78E4D7FFL,0x6CL,0L,0x6916L,0xFD3F4CC3L},0xD5131EF64FCE7045LL,{0x4C1B6B56L,0x67L,0x86L,1L,0x01F02F3AL},{0x36EF690CL,0L},0x7D67A8419F42C593LL,0x1B60L,0xE7784E63C1395770LL},{{4294967287UL,0L},{0x78E4D7FFL,0x6CL,0L,0x6916L,0xFD3F4CC3L},0xD5131EF64FCE7045LL,{0x4C1B6B56L,0x67L,0x86L,1L,0x01F02F3AL},{0x36EF690CL,0L},0x7D67A8419F42C593LL,0x1B60L,0xE7784E63C1395770LL},{{4294967287UL,0L},{0x78E4D7FFL,0x6CL,0L,0x6916L,0xFD3F4CC3L},0xD5131EF64FCE7045LL,{0x4C1B6B56L,0x67L,0x86L,1L,0x01F02F3AL},{0x36EF690CL,0L},0x7D67A8419F42C593LL,0x1B60L,0xE7784E63C1395770LL}},{{{0UL,0x64C66285L},{0x2D3AD1E7L,1L,-1L,0xCCF0L,5L},-2L,{0x834D654DL,4L,1L,3L,0xECE357C3L},{0UL,0xC2FE26C1L},0xC3B4431753D32581LL,0x7558L,0xACCDB07C5ED44FCELL},{{0UL,0x64C66285L},{0x2D3AD1E7L,1L,-1L,0xCCF0L,5L},-2L,{0x834D654DL,4L,1L,3L,0xECE357C3L},{0UL,0xC2FE26C1L},0xC3B4431753D32581LL,0x7558L,0xACCDB07C5ED44FCELL},{{0UL,0x64C66285L},{0x2D3AD1E7L,1L,-1L,0xCCF0L,5L},-2L,{0x834D654DL,4L,1L,3L,0xECE357C3L},{0UL,0xC2FE26C1L},0xC3B4431753D32581LL,0x7558L,0xACCDB07C5ED44FCELL}}};
                int32_t l_1473 = 1L;
                uint32_t l_1474 = 8UL;
                int i, j;
                if (((--g_60) == ((safe_mul_func_int16_t_s_s((g_1319 != (safe_sub_func_int32_t_s_s(l_1431.f1.f4, (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((&g_281[4][2] == (void*)0) , g_61), 5)) <= ((*l_1422) = (safe_lshift_func_uint8_t_u_s((l_1437 >= (((*g_1221) = (((*l_1421) &= ((l_1451 , l_1451.f1.f1) ^ l_1431.f3.f1)) ^ 0xD2L)) && 0x354021091D8C150BLL)), 4)))), 0))))), l_1451.f0.f0)) <= l_1451.f6)))
                { 
                    if (l_1431.f1.f1)
                        goto lbl_1452;
                    (*g_689) |= (-7L);
                    return l_1453[2][2];
                }
                else
                { 
                    uint32_t l_1454 = 4294967295UL;
                    (*g_689) = 0x5AD71B9EL;
                    if ((*g_689))
                        continue;
                    if ((*g_689))
                        continue;
                    l_1454++;
                    (***l_1423) = l_1457[0][2];
                }
                if ((safe_mod_func_int64_t_s_s((((safe_sub_func_uint32_t_u_u(g_1087[0], (l_1453[2][2].f1.f3 & g_88[1][1]))) >= ((0UL || (safe_mod_func_int32_t_s_s(((~((g_1465 = &g_1068) != ((safe_add_func_int16_t_s_s((l_1468 , (0xDEL == g_99.f3.f0)), g_99.f3.f4)) , l_1469))) >= l_1472), 0xF7DE9D55L))) > l_1473)) | 0xFBDC2BAFL), 0x596996E4F9A7E4E7LL)))
                { 
                    (*g_689) &= 0xE84BDFB2L;
                    if (l_1474)
                        break;
                }
                else
                { 
                    uint32_t *l_1483[3][7] = {{&g_213,&l_1451.f4.f0,&g_213,&l_1451.f4.f0,&g_213,&l_1451.f4.f0,&g_213},{&g_333,&g_333,&g_333,&g_333,&g_333,&g_333,&g_333},{&g_213,&l_1451.f4.f0,&g_213,&l_1451.f4.f0,&g_213,&l_1451.f4.f0,&g_213}};
                    int32_t l_1484 = 0L;
                    int i, j;
                    (***g_1427) = (****g_1426);
                    l_1418.f1 &= (safe_rshift_func_int16_t_s_u(((((void*)0 == &g_1368) && (safe_rshift_func_int16_t_s_u(((safe_div_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(g_4[3][1], g_368)), (((*g_689) , (((0xA1F6D784L & (++g_341.f4.f0)) , l_1487) != (void*)0)) | l_1453[2][2].f7))) & g_698), g_40.f4.f1))) , 0xB6C2L), 6));
                }
                return l_1451;
            }
            for (g_157 = 0; (g_157 <= 2); g_157 += 1)
            { 
                uint64_t l_1501 = 1UL;
                int8_t **l_1512[2];
                int8_t ***l_1511 = &l_1512[1];
                int32_t l_1557 = 0x4FE32E6FL;
                int32_t l_1558 = 9L;
                int32_t l_1576 = 0xE51B64A8L;
                int32_t l_1580 = (-1L);
                int32_t l_1581 = 0xEA3600F3L;
                uint32_t l_1582 = 5UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_1512[i] = &l_1421;
                for (l_1468 = 0; (l_1468 <= 2); l_1468 += 1)
                { 
                    int32_t l_1510 = 0x1DC9803DL;
                    int8_t ****l_1513[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_1513[i] = (void*)0;
                    l_1515 = (l_1514 = (((g_4[l_1468][g_157] < (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(((g_308 = (((((safe_mul_func_uint16_t_u_u((l_1498[1] , (g_148 = (((safe_sub_func_int8_t_s_s(l_1501, (-1L))) == (safe_mul_func_int16_t_s_s((-1L), (l_1510 |= (0xD40BL && ((safe_mul_func_uint8_t_u_u(((~((l_1509 == (void*)0) > l_1501)) && (*g_1221)), 0x7CL)) < (*g_314))))))) , g_157))), (*g_314))) && g_204) , 1UL) || (-2L)) , 1UL)) , g_40.f1.f3), (-10L))) , 0x99L), 0x26L)) != (-10L)), 5)), l_1501))) , (*g_314)) , l_1511));
                    if ((*g_689))
                        break;
                    return l_1517;
                }
                (*g_689) |= (safe_mul_func_uint8_t_u_u(0xF1L, 1L));
                (***l_1423) = l_1457[0][2];
            }
        }
        else
        { 
            struct S3 l_1613 = {3UL};
            union U4 l_1617 = {0x7885A2F7L};
            int32_t l_1626 = (-7L);
            (*g_689) = ((****l_1430) , (*g_689));
            for (g_341.f4.f0 = 2; (g_341.f4.f0 > 29); g_341.f4.f0 = safe_add_func_int8_t_s_s(g_341.f4.f0, 2))
            { 
                int16_t l_1603 = 0x0A65L;
                union U4 l_1609 = {0x752860E2L};
                struct S1 **l_1616 = &g_813;
                struct S1 **l_1618 = (void*)0;
                const int8_t l_1619 = 1L;
                if ((((l_1603 > (safe_rshift_func_int16_t_s_s((~(safe_add_func_uint32_t_u_u((l_1609 , (safe_mul_func_uint8_t_u_u(((*g_297) , (l_1612[0][0] , ((l_1613 , (**g_812)) , ((*g_849) || (*g_1221))))), l_1613.f0))), (*g_117)))), l_1613.f0))) != l_1613.f0) || g_279))
                { 
                    if (l_1603)
                        break;
                    (**g_615) = (**g_615);
                }
                else
                { 
                    uint32_t **l_1621 = &g_637;
                    uint32_t ***l_1620 = &l_1621;
                    int8_t **l_1625 = &l_1421;
                    int8_t ***l_1624 = &l_1625;
                    (*g_689) = ((l_1616 == (l_1617 , l_1618)) == (((l_1619 & (&g_637 == ((*l_1620) = (void*)0))) <= (*g_314)) != (-4L)));
                    (*l_1624) = g_1622;
                }
            }
            --l_1627;
        }
    }
    else
    { 
        uint16_t l_1660 = 0UL;
        int32_t *l_1729[4];
        uint32_t **l_1754 = &l_1707[0];
        int32_t l_1759 = (-5L);
        uint32_t l_1765 = 4294967287UL;
        int32_t l_1766[7];
        const int32_t * const l_1782[2][2] = {{&g_206,&g_206},{&g_206,&g_206}};
        int16_t ***l_1799 = &g_313;
        int8_t l_1801[4][7] = {{0x2BL,0x61L,1L,1L,0x61L,0x2BL,0x56L},{1L,1L,1L,0x56L,1L,1L,0x56L},{(-8L),(-5L),(-8L),0xE2L,0x56L,0x2BL,(-8L)},{(-5L),0xC2L,0x2BL,1L,0x2BL,0xC2L,(-5L)}};
        int32_t ****l_1805 = &g_615;
        int32_t *****l_1804 = &l_1805;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1729[i] = &l_1566[0];
        for (i = 0; i < 7; i++)
            l_1766[i] = 0xEED13A56L;
        for (l_1517.f3.f3 = 23; (l_1517.f3.f3 > 27); l_1517.f3.f3 = safe_add_func_uint32_t_u_u(l_1517.f3.f3, 2))
        { 
            struct S3 l_1653[1] = {{0xAA4CB6A97FAB348FLL}};
            int32_t l_1669 = 1L;
            uint32_t *l_1670 = &g_333;
            int16_t l_1671 = 0x1F72L;
            const struct S2 **l_1674[3][3][2] = {{{&g_39,&g_39},{&g_39,(void*)0},{(void*)0,&g_39}},{{(void*)0,&g_39},{(void*)0,&g_39},{(void*)0,(void*)0}},{{&g_39,&g_39},{&g_39,&g_39},{(void*)0,&g_39}}};
            const struct S2 ***l_1673 = &l_1674[0][0][0];
            const struct S2 ****l_1672 = &l_1673;
            uint32_t l_1726 = 4294967290UL;
            int64_t l_1732 = 8L;
            struct S0 l_1747[4][5][3] = {{{{0xD9FF741EL,0xE8L,0x70L,0x7823L,0x49015175L},{18446744073709551609UL,0x41L,-1L,0xD3CAL,1L},{0UL,0x94L,0L,1L,0xC5810BE7L}},{{0xCF375065L,0xB0L,4L,0x1278L,6L},{9UL,0xD2L,0x8BL,1L,0xA7892DDBL},{0UL,0xB3L,-1L,0xD82CL,0x2947E1B1L}},{{0x56F9B42BL,0L,-1L,0x0BA4L,0L},{18446744073709551609UL,0x41L,-1L,0xD3CAL,1L},{0UL,-10L,4L,0xC978L,-9L}},{{0UL,0x94L,0L,1L,0xC5810BE7L},{0xDE13910AL,-7L,-1L,0xC0FCL,0xCDD40ECFL},{0xCF375065L,0xB0L,4L,0x1278L,6L}},{{0xE0113734L,5L,6L,0xC764L,0x59119E90L},{18446744073709551615UL,1L,-3L,0x60D5L,0x81DD0E30L},{0xF31844EEL,0x16L,0xD0L,-2L,0xEA7FEB6BL}}},{{{0xF31844EEL,0x16L,0xD0L,-2L,0xEA7FEB6BL},{0x56F9B42BL,0L,-1L,0x0BA4L,0L},{0xF31844EEL,0x16L,0xD0L,-2L,0xEA7FEB6BL}},{{18446744073709551614UL,0xB1L,7L,0x2A99L,0x7958B493L},{0xD9FF741EL,0xE8L,0x70L,0x7823L,0x49015175L},{0xCF375065L,0xB0L,4L,0x1278L,6L}},{{0x7FAE2638L,0L,-1L,0xA15CL,7L},{0x874512F4L,0x26L,1L,0x8051L,0xDA84BB8CL},{0UL,-10L,4L,0xC978L,-9L}},{{0x1E0C94C1L,0x9BL,8L,3L,0xE78A4003L},{0UL,0x94L,0L,1L,0xC5810BE7L},{0UL,0xB3L,-1L,0xD82CL,0x2947E1B1L}},{{0x874512F4L,0x26L,1L,0x8051L,0xDA84BB8CL},{0UL,0xB3L,-1L,0xD82CL,0x2947E1B1L},{0UL,0x94L,0L,1L,0xC5810BE7L}}},{{{0x1E0C94C1L,0x9BL,8L,3L,0xE78A4003L},{0UL,-10L,4L,0xC978L,-9L},{0x874512F4L,0x26L,1L,0x8051L,0xDA84BB8CL}},{{0x7FAE2638L,0L,-1L,0xA15CL,7L},{0xCF375065L,0xB0L,4L,0x1278L,6L},{0xD9FF741EL,0xE8L,0x70L,0x7823L,0x49015175L}},{{18446744073709551614UL,0xB1L,7L,0x2A99L,0x7958B493L},{0xF31844EEL,0x16L,0xD0L,-2L,0xEA7FEB6BL},{0x56F9B42BL,0L,-1L,0x0BA4L,0L}},{{0xF31844EEL,0x16L,0xD0L,-2L,0xEA7FEB6BL},{0xF31844EEL,0x16L,0xD0L,-2L,0xEA7FEB6BL},{18446744073709551615UL,1L,-3L,0x60D5L,0x81DD0E30L}},{{0xE0113734L,5L,6L,0xC764L,0x59119E90L},{0xCF375065L,0xB0L,4L,0x1278L,6L},{0xDE13910AL,-7L,-1L,0xC0FCL,0xCDD40ECFL}}},{{{0UL,0x94L,0L,1L,0xC5810BE7L},{0UL,-10L,4L,0xC978L,-9L},{18446744073709551609UL,0x41L,-1L,0xD3CAL,1L}},{{0x56F9B42BL,0L,-1L,0x0BA4L,0L},{0UL,0xB3L,-1L,0xD82CL,0x2947E1B1L},{9UL,0xD2L,0x8BL,1L,0xA7892DDBL}},{{0xCF375065L,0xB0L,4L,0x1278L,6L},{0UL,0x94L,0L,1L,0xC5810BE7L},{18446744073709551609UL,0x41L,-1L,0xD3CAL,1L}},{{0xD9FF741EL,0xE8L,0x70L,0x7823L,0x49015175L},{0x874512F4L,0x26L,1L,0x8051L,0xDA84BB8CL},{0xDE13910AL,-7L,-1L,0xC0FCL,0xCDD40ECFL}},{{1UL,0x8AL,0x1EL,-3L,0xA324A9D6L},{0xD9FF741EL,0xE8L,0x70L,0x7823L,0x49015175L},{18446744073709551615UL,1L,-3L,0x60D5L,0x81DD0E30L}}}};
            int32_t l_1778[7][2][5] = {{{1L,(-1L),0xD02766DDL,1L,0xC7CEA68DL},{(-1L),1L,(-2L),1L,(-1L)}},{{0xD02766DDL,3L,(-1L),0xC7CEA68DL,3L},{(-1L),(-1L),(-1L),(-1L),0xC7CEA68DL}},{{1L,(-1L),(-2L),3L,3L},{0xD02766DDL,(-1L),0xD02766DDL,0xC7CEA68DL,(-1L)}},{{3L,(-1L),0xC7CEA68DL,3L,0xC7CEA68DL},{3L,3L,(-2L),(-1L),1L}},{{0xD02766DDL,1L,0xC7CEA68DL,0xC7CEA68DL,1L},{1L,(-1L),0xD02766DDL,1L,0xC7CEA68DL}},{{(-1L),1L,(-2L),1L,(-1L)},{0xD02766DDL,3L,(-1L),0xC7CEA68DL,3L}},{{(-1L),(-1L),(-1L),(-1L),0xC7CEA68DL},{1L,(-1L),(-2L),3L,3L}}};
            uint16_t l_1779[2];
            struct S1 * const *l_1820 = &g_813;
            struct S1 * const **l_1819 = &l_1820;
            struct S1 * const ***l_1818[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1779[i] = 0x6547L;
            for (i = 0; i < 2; i++)
                l_1818[i] = &l_1819;
            if ((~(safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(((((*g_849) == (safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((*l_1670) |= ((((safe_mul_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((l_1653[0] , (((safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(l_1660, 12)), 7)) & (l_1653[0].f0 & ((0xB4E5F4173A20F11ALL < ((*g_849) && (safe_sub_func_uint16_t_u_u(((l_1669 = (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_1660, 65534UL)), l_1653[0].f0)), 0x359FL))) <= l_1660), g_409[1][5][0])))) != l_1660))), 0x07L)) ^ (*g_849)) | l_1517.f6)), l_1653[0].f0)), 0x7AB29DF1L)) ^ l_1660) == l_1543), 1L)) != (*g_689)) == l_1660) & (**g_848))), l_1660)), 1UL)) > l_1660), l_1671)), 0x1B5EA9DDL)), (**g_313)))) != g_261) != l_1660), (*g_1623))), g_1228))))
            { 
                const struct S2 *****l_1675 = &l_1672;
                int32_t l_1685 = (-1L);
                int32_t *l_1687 = &l_1418.f1;
                (*l_1675) = l_1672;
                for (g_992 = 0; (g_992 <= 25); g_992++)
                { 
                    uint8_t l_1680 = 5UL;
                    struct S2 ***l_1682[5][2] = {{&g_783,&g_783},{&g_783,&g_783},{&g_783,&g_783},{&g_783,&g_783},{&g_783,&g_783}};
                    struct S2 ****l_1681 = &l_1682[0][0];
                    int i, j;
                }
                (*l_1687) &= (safe_add_func_uint32_t_u_u(l_1685, (((((*l_1670) ^= (((**g_1622) , 1UL) <= (~(*g_117)))) != (((*g_1220) == (void*)0) , (g_40.f1.f4 <= l_1653[0].f0))) <= (*g_117)) < l_1685)));
                if ((*g_689))
                { 
                    return (*g_784);
                }
                else
                { 
                    uint16_t l_1693 = 65531UL;
                    uint16_t *l_1694 = &g_60;
                    g_1688 = &g_783;
                    (**g_615) = &l_1566[0];
                    (*g_117) |= (((**g_1622) = (safe_mul_func_int16_t_s_s(l_1660, (((safe_add_func_uint64_t_u_u(l_1693, (((*l_1694) ^= 0x73E8L) <= g_341.f1.f3))) | ((safe_rshift_func_int8_t_s_u((&l_1693 != &g_765[0][2]), 7)) != (safe_lshift_func_int16_t_s_s((g_1294 != g_1294), (*g_314))))) == (*g_1623))))) | (-1L));
                }
            }
            else
            { 
                return (*g_784);
            }
            (*g_689) = (safe_add_func_uint64_t_u_u((0xC2D8D79C930FAE4FLL == ((safe_mod_func_int32_t_s_s((safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((l_1707[4] == l_1707[4]) >= ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((+(safe_sub_func_int8_t_s_s(l_1660, (*g_1623)))), (safe_add_func_uint64_t_u_u(((~(safe_mul_func_uint8_t_u_u(((((****g_1426) = (****g_1426)) , ((***g_615) = (0x3BL > g_341.f1.f4))) >= 0x656EDFD0L), l_1660))) , (*g_849)), (-6L))))), l_1660)), l_1660)), g_341.f0.f0)) & (-1L)), g_99.f3.f2)) != (*g_314))), g_1175)) <= l_1660), (*g_1623))), l_1726)) || l_1574)), (**g_1220)));
            for (l_1517.f1.f3 = 2; (l_1517.f1.f3 >= 0); l_1517.f1.f3 -= 1)
            { 
                if (l_1669)
                { 
                    int i;
                    l_1727[0] = l_1707[(l_1517.f1.f3 + 3)];
                    return l_1728;
                }
                else
                { 
                    (**g_615) = l_1729[1];
                }
                for (l_1517.f3.f0 = 0; (l_1517.f3.f0 <= 2); l_1517.f3.f0 += 1)
                { 
                    int i, j, k;
                    if (g_409[l_1517.f3.f0][(l_1517.f1.f3 + 1)][(l_1517.f3.f0 + 2)])
                        break;
                    if (g_409[l_1517.f3.f0][(l_1517.f1.f3 + 1)][(l_1517.f3.f0 + 2)])
                        continue;
                    g_409[l_1517.f3.f0][(l_1517.f1.f3 + 1)][(l_1517.f3.f0 + 2)] = (safe_lshift_func_uint8_t_u_s(255UL, 4));
                }
            }
            (**g_1428) = (**g_812);
            if (l_1732)
            { 
                uint32_t l_1735 = 0UL;
                int16_t l_1753 = 0x2B4EL;
                for (g_749.f1 = (-11); (g_749.f1 != 38); g_749.f1 = safe_add_func_int32_t_s_s(g_749.f1, 1))
                { 
                    struct S1 ** const *l_1745 = &g_1428;
                    int32_t l_1746 = 0xF79AF635L;
                    union U4 l_1748 = {7UL};
                    uint16_t *l_1758[3][3][7] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660,&l_1660},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    uint64_t *l_1764 = &l_1498[1].f1;
                    int i, j, k;
                    l_1735++;
                    (*g_783) = func_11(((((***g_615) ^= (((*g_1623) = ((safe_add_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(l_1735, 2)) == ((g_40.f1.f0 == ((*g_689) > l_1735)) && (~((safe_sub_func_int32_t_s_s((l_1735 == ((l_1745 != (void*)0) ^ l_1746)), 0x612123ACL)) <= 0x52CCL)))), l_1746)) & l_1735)) ^ l_1746)) && l_1735) > 0x3B0EL), l_1747[3][3][2], l_1748);
                    l_1746 = ((((g_148 ^= ((((safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((((*l_1764) = (l_1753 | (l_1754 != (((safe_lshift_func_int16_t_s_u((!(((((-1L) == ((l_1759 |= 0xC8A7L) >= ((g_749.f1 , ((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(0x3573L, (l_1753 , 0x67E6L))) > g_1087[6]), (**g_1220))) == 8UL)) ^ l_1653[0].f0))) || (**g_1622)) == (**g_313)) , 0xBBD90106L)), 11)) > l_1753) , (void*)0)))) >= (*g_849)), (***g_615))), l_1765)) , 2L) , l_1748.f0) > l_1747[3][3][2].f0)) , (void*)0) != &g_874) & 0x8A35D3E1991F57F6LL);
                    l_1766[1] &= (*g_117);
                    if ((*g_117))
                        continue;
                }
                return (*g_784);
            }
            else
            { 
                uint16_t *l_1772[7][7][4] = {{{(void*)0,(void*)0,&g_765[0][1],&g_60},{&l_1660,&l_1468,(void*)0,&l_1468},{&g_60,(void*)0,(void*)0,&l_1660},{(void*)0,&g_60,&g_148,&g_687},{&g_148,(void*)0,&g_60,&g_765[0][2]},{&g_148,&l_1468,&g_148,(void*)0},{(void*)0,&g_765[0][2],(void*)0,&g_148}},{{&g_60,&l_1660,(void*)0,&l_1660},{&l_1660,&g_765[0][2],&g_765[0][1],&g_687},{(void*)0,&g_687,&g_687,(void*)0},{&l_1660,&l_1660,&l_1660,(void*)0},{(void*)0,&g_765[0][1],(void*)0,&g_765[0][1]},{&g_60,&l_1660,&l_1468,&g_148},{&g_687,&g_765[0][0],(void*)0,(void*)0}},{{(void*)0,&g_687,&g_687,(void*)0},{&g_765[0][1],&g_765[0][1],&g_148,&l_1660},{(void*)0,&g_148,&l_1468,&l_1468},{&g_148,&g_148,&g_60,&l_1468},{&g_765[0][1],&l_1660,&l_1468,&l_1660},{&g_765[0][2],&g_765[0][1],&g_148,&l_1468},{&l_1660,&g_765[0][1],&g_687,&l_1660}},{{&g_765[0][1],&l_1660,&g_765[0][1],&l_1468},{&l_1660,&g_148,&g_60,&l_1468},{(void*)0,&g_148,&g_765[0][1],&l_1660},{&g_148,&g_765[0][1],&g_60,(void*)0},{&g_60,&g_687,&l_1660,(void*)0},{(void*)0,&g_765[0][0],(void*)0,&g_148},{(void*)0,&l_1660,(void*)0,&g_765[0][1]}},{{&l_1468,&g_765[0][1],&g_765[0][1],(void*)0},{&g_765[0][1],&l_1660,&g_765[0][1],(void*)0},{&g_148,&g_687,&g_765[0][2],&g_687},{&l_1468,&g_765[0][2],&l_1660,&l_1660},{(void*)0,&l_1660,(void*)0,&g_148},{&g_60,&g_765[0][2],(void*)0,(void*)0},{&g_687,&l_1468,(void*)0,&g_765[0][2]}},{{&g_765[0][1],(void*)0,(void*)0,&g_687},{&g_687,&g_60,(void*)0,&l_1660},{&g_60,(void*)0,(void*)0,&l_1468},{&g_765[0][0],&l_1468,&g_765[0][1],&g_765[0][1]},{&g_687,&g_765[0][2],&l_1660,&l_1468},{&g_687,&g_60,&g_60,&g_687},{&l_1468,&g_765[0][1],&g_687,&g_765[0][2]}},{{&g_765[0][1],&l_1468,(void*)0,&g_687},{&l_1468,&g_687,&g_148,&g_687},{(void*)0,&l_1468,&g_148,&l_1468},{&g_765[0][1],(void*)0,&g_60,&l_1468},{&g_765[0][1],&g_60,(void*)0,&g_765[0][1]},{&g_687,(void*)0,(void*)0,&g_687},{&l_1660,&g_148,(void*)0,(void*)0}}};
                int32_t l_1775 = 9L;
                struct S0 **l_1796 = &g_352;
                uint64_t l_1797 = 1UL;
                struct S2 l_1798[4][2] = {{{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL},{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL}},{{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL},{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL}},{{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL},{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL}},{{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL},{{4294967290UL,0L},{1UL,-1L,0x7CL,0xB1FAL,0x2131F089L},0x8102E51398BEDEA6LL,{0xE1DC1759L,-1L,0x04L,0x96A9L,1L},{1UL,-1L},0xB9BD411F0E9668C6LL,-1L,0xAB39A57A61A4640ELL}}};
                struct S1 ****l_1817 = &g_1427;
                int16_t l_1827 = 0xEA1EL;
                union U4 *l_1829 = (void*)0;
                uint64_t *l_1830 = &g_1087[6];
                struct S2 **l_1849[4];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1849[i] = (void*)0;
                if (((*g_117) = (0xAEL <= (g_368 = (((*l_1670) = (safe_sub_func_uint8_t_u_u(g_739, (safe_rshift_func_int16_t_s_s(((+(--g_148)) & 0xD982L), ((**g_313) &= (0x7EL < (0x3463L | ((l_1775 && ((*g_1221) = (((*l_1422) = (safe_lshift_func_int8_t_s_u(l_1732, 7))) != 0xECL))) | 0x7FL))))))))) >= 1UL)))))
                { 
                    l_1779[1]++;
                }
                else
                { 
                    const int32_t *l_1784 = &g_211;
                    const int32_t **l_1783 = &l_1784;
                    (*l_1783) = l_1782[0][1];
                    l_1669 ^= (((safe_add_func_uint32_t_u_u((++(*l_1670)), ((**g_783) , (((((void*)0 != g_1294) | ((*g_1221) = (safe_mul_func_uint8_t_u_u(((*g_117) & (((safe_div_func_int32_t_s_s((g_48 == ((safe_div_func_int64_t_s_s((l_1795 != l_1796), (*g_1221))) ^ l_1747[3][3][2].f3)), g_942)) || g_341.f5) ^ (**g_848))), (**g_1622))))) <= l_1775) < (**g_313))))) | l_1775) , (-10L));
                    (*g_689) ^= ((((*g_1623) , g_749.f0) && g_341.f3.f0) || (0x9B25L != l_1775));
                }
                l_1797 &= l_1779[1];
                if (l_1778[4][0][4])
                { 
                    uint64_t *l_1802 = &g_52;
                    uint32_t l_1803 = 0xE7FED019L;
                    struct S3 **l_1806[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1806[i] = &g_297;
                    l_1804 = (((((l_1798[2][0] , g_231[0]) , &g_1234) != l_1799) >= (0x1FL == (((*l_1802) = ((((safe_unary_minus_func_int16_t_s(0x8F26L)) != 0xC67C7A44EF425351LL) & 1UL) && l_1801[0][0])) & l_1803))) , (void*)0);
                    g_297 = &g_298;
                    if ((***g_615))
                        break;
                }
                else
                { 
                    uint32_t l_1826 = 0x4474B59CL;
                    union U4 **l_1828[7][4];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1828[i][j] = &g_1807[3][0][2];
                    }
                    g_1807[3][4][0] = &g_231[0];
                    (***g_615) = 0L;
                    (****l_1805) |= (safe_div_func_uint8_t_u_u(((*l_1422) = (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((g_368 && ((((9L ^ ((**g_1220) &= (safe_add_func_int16_t_s_s((l_1817 != l_1818[1]), l_1821)))) , (safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((g_1160 <= (*g_1623)), 1)), g_281[4][1]))) < 0x95C4A806B0B978A1LL) || l_1826)), (*g_1623))), 0x9A6DBD07L))), l_1827));
                    l_1829 = &l_1498[2];
                    if (l_1671)
                        continue;
                }
                (*g_689) = ((((++(*l_1830)) , (**g_313)) > (safe_rshift_func_int8_t_s_u((safe_mod_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((1L > (0x16D1L | ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((**g_1622), (((l_1798[2][0].f1.f4 && (((((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((*g_783) == (g_1850 = (void*)0)), (**g_1220))), 3UL)) >= g_1852) , (void*)0) != (void*)0) && 0xCCFF457F85DA7692LL)) , g_749.f0) , g_213))) < (*g_1221)), g_157)) && 0x7BBFL))), (**g_313))), g_1851.f3.f2)) && l_1775) , (****l_1805)), l_1853)), g_60))) >= (*g_314));
            }
        }
        (*g_689) = 0xA349E2A9L;
    }
    (**g_615) = (void*)0;
    return (*g_39);
}



static uint8_t  func_6(uint32_t  p_7, uint8_t  p_8)
{ 
    int32_t *l_9[2];
    int32_t l_36 = 0xB2A8F302L;
    uint8_t l_539 = 0UL;
    struct S2 *l_540 = &g_99;
    int8_t *l_541 = &g_279;
    uint16_t *l_542 = (void*)0;
    uint16_t *l_543 = &g_60;
    union U4 l_744 = {1UL};
    struct S3 l_745 = {0xB78721F9AC020EB8LL};
    struct S1 *l_1408[4][1][7];
    uint32_t l_1414[5];
    uint32_t **l_1415 = &g_637;
    const int32_t l_1416 = (-1L);
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_9[i] = &g_10;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
                l_1408[i][j][k] = &g_99.f4;
        }
    }
    for (i = 0; i < 5; i++)
        l_1414[i] = 1UL;
    g_10 |= g_4[4][2];
    return p_7;
}



static struct S2 * func_11(const int16_t  p_12, struct S0  p_13, union U4  p_14)
{ 
    int32_t **l_750 = &g_689;
    int32_t ***l_751 = &l_750;
    int32_t l_753 = (-1L);
    int32_t l_754 = 5L;
    int32_t l_761 = 0xFA374737L;
    int32_t l_762 = 0x7E1A2190L;
    int32_t l_763 = 1L;
    int32_t l_764 = (-8L);
    struct S3 *l_778 = (void*)0;
    const struct S2 **l_789 = (void*)0;
    int16_t l_805 = 0xB4E1L;
    uint16_t l_808 = 0xFAA2L;
    const struct S1 *l_861 = &g_341.f4;
    struct S2 *l_886[2];
    const struct S1 **l_898[6] = {&l_861,&l_861,&l_861,&l_861,&l_861,&l_861};
    uint32_t *l_952[7][5] = {{(void*)0,&g_281[4][2],&g_281[4][2],(void*)0,&g_281[2][1]},{&g_99.f3.f0,&g_308,&g_99.f3.f0,&g_261,&g_99.f3.f0},{(void*)0,(void*)0,&g_308,&g_281[4][2],&g_281[2][1]},{&g_308,&g_261,(void*)0,&g_261,&g_308},{&g_281[2][1],&g_281[4][2],&g_308,(void*)0,(void*)0},{&g_99.f3.f0,&g_261,&g_99.f3.f0,&g_308,&g_99.f3.f0},{&g_281[2][1],(void*)0,&g_281[4][2],&g_281[4][2],(void*)0}};
    int8_t l_1031 = (-9L);
    int8_t *l_1120 = (void*)0;
    union U4 l_1129 = {0x79D46C75L};
    uint8_t l_1130 = 0x79L;
    int32_t l_1133[5][2][3] = {{{7L,0x8AF44EA4L,7L},{1L,0x7D2BD7A5L,0xE77B36D8L}},{{0x96E87ACFL,0x96E87ACFL,(-7L)},{(-1L),0x7D2BD7A5L,0x7D2BD7A5L}},{{(-7L),0x8AF44EA4L,(-5L)},{(-1L),0x0415F6BDL,(-1L)}},{{0x96E87ACFL,(-7L),(-5L)},{1L,1L,0x7D2BD7A5L}},{{7L,(-7L),(-7L)},{0x7D2BD7A5L,0x0415F6BDL,0xE77B36D8L}}};
    int32_t l_1152 = 0xA66D6976L;
    int32_t l_1155 = 1L;
    int16_t *****l_1186 = &g_1068;
    int32_t l_1200[5];
    uint16_t l_1208 = 0xCBECL;
    int64_t l_1238[5][3][6] = {{{0L,0xF2DAD1A27881F20FLL,0xF90094541216A104LL,9L,0x73E5BD4FF1EB5897LL,0x1D827F618511E866LL},{9L,0x73E5BD4FF1EB5897LL,0x1D827F618511E866LL,9L,0x14DF6D421B9AAE6ELL,1L},{0L,(-1L),0x09C055F0B814E2BBLL,1L,0x73CFAFD73CA7A0EALL,0x227F945088FD80E7LL}},{{0x0621FEF877A3CF28LL,0x14DF6D421B9AAE6ELL,0xFFAB950FA30F078ALL,0xF90094541216A104LL,0x73CFAFD73CA7A0EALL,(-1L)},{0x227F945088FD80E7LL,(-1L),0x6D0AC196C8145AC5LL,(-6L),0x14DF6D421B9AAE6ELL,0x09C055F0B814E2BBLL},{0x09C055F0B814E2BBLL,0x73E5BD4FF1EB5897LL,(-8L),(-8L),0x73E5BD4FF1EB5897LL,0x09C055F0B814E2BBLL}},{{(-6L),0xF2DAD1A27881F20FLL,0x6D0AC196C8145AC5LL,0x0621FEF877A3CF28LL,0x67BBB423B865B2D5LL,(-1L)},{0x1D827F618511E866LL,7L,0xFFAB950FA30F078ALL,0x09C055F0B814E2BBLL,0L,0x227F945088FD80E7LL},{0x1D827F618511E866LL,0L,0x09C055F0B814E2BBLL,0x0621FEF877A3CF28LL,(-7L),1L}},{{(-6L),0x67BBB423B865B2D5LL,0x1D827F618511E866LL,(-8L),(-1L),0x1D827F618511E866LL},{0x09C055F0B814E2BBLL,0x67BBB423B865B2D5LL,0xF90094541216A104LL,(-6L),(-7L),(-8L)},{0x227F945088FD80E7LL,0x6D0AC196C8145AC5LL,0x299C0C00CCE7C5DELL,0xD9FEFDC2BD4B3E03LL,0L,0xD9FEFDC2BD4B3E03LL}},{{0x299C0C00CCE7C5DELL,(-6L),0x299C0C00CCE7C5DELL,0x7554CFEBA4B81E0ELL,0xF90094541216A104LL,0L},{0x3A5DCD5A1E44B8D7LL,(-1L),0xD9FEFDC2BD4B3E03LL,(-1L),9L,0x0B948DD3DFBA6379LL},{(-1L),9L,0x0B948DD3DFBA6379LL,(-1L),0x227F945088FD80E7LL,0x7554CFEBA4B81E0ELL}}};
    uint16_t l_1240 = 65530UL;
    int64_t **l_1263 = (void*)0;
    int32_t l_1276 = 0L;
    int64_t l_1283 = 0xB546924CD0EC139CLL;
    uint64_t **l_1284 = &g_1113[3];
    uint64_t l_1286 = 0x74684460D5E387BBLL;
    uint64_t l_1295[3][5] = {{18446744073709551615UL,7UL,18446744073709551615UL,7UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,7UL,18446744073709551615UL,7UL,18446744073709551615UL}};
    union U4 *l_1306 = (void*)0;
    uint16_t l_1369 = 65535UL;
    int64_t *** const *l_1372 = (void*)0;
    const int64_t l_1383 = 0xB3A86D0710030FBBLL;
    struct S1 *l_1385 = &g_341.f4;
    int16_t ***l_1388 = &g_313;
    int32_t *l_1391 = (void*)0;
    int32_t *l_1392 = &g_206;
    int32_t *l_1393 = &l_762;
    uint16_t l_1400 = 0x8DC6L;
    uint8_t *l_1401 = &g_368;
    int8_t l_1402 = 0xD3L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_886[i] = &g_99;
    for (i = 0; i < 5; i++)
        l_1200[i] = 0x705974F9L;
    if ((((*l_751) = l_750) == &g_689))
    { 
        int32_t *l_752 = &g_206;
        int32_t l_755 = 0x4347D0FEL;
        int32_t *l_756 = &g_99.f4.f1;
        int32_t *l_757 = &g_206;
        int32_t *l_758 = &g_157;
        int32_t *l_759 = (void*)0;
        int32_t *l_760[6] = {&g_99.f4.f1,&g_206,&g_99.f4.f1,&g_99.f4.f1,&g_206,&g_99.f4.f1};
        uint8_t *l_774 = &g_368;
        struct S3 *l_776[3];
        struct S1 l_860 = {0xF35A2976L,-8L};
        int32_t l_885 = 0x1B812497L;
        const struct S1 **l_891 = (void*)0;
        struct S2 *l_918 = (void*)0;
        struct S1 *l_919 = &g_99.f4;
        int16_t l_940 = (-1L);
        uint16_t l_947 = 0UL;
        uint8_t l_968[7];
        struct S0 **l_983 = &g_352;
        int16_t **l_1024 = &g_314;
        uint16_t *l_1032[3];
        int8_t *l_1036 = (void*)0;
        int8_t **l_1035 = &l_1036;
        int8_t ***l_1034 = &l_1035;
        struct S1 ****l_1074[5][6];
        uint64_t * const l_1114 = &g_1087[0];
        int32_t l_1132 = 0L;
        int64_t l_1154 = 0x9D178E0C91D41C07LL;
        const int32_t *l_1182 = (void*)0;
        uint32_t l_1204 = 0xCACFA98DL;
        uint32_t l_1285[7][7][5] = {{{5UL,1UL,0xE9B512FEL,0x2D569CD1L,0x56DB474CL},{0x85BFDD0BL,4294967295UL,1UL,3UL,1UL},{1UL,1UL,4294967286UL,0xD7554739L,0x56DB474CL},{4294967295UL,0x85BFDD0BL,1UL,0UL,4294967286UL},{1UL,5UL,0xE9B512FEL,0xD7554739L,0xE9B512FEL},{0x85BFDD0BL,0x85BFDD0BL,0UL,3UL,4294967286UL},{5UL,1UL,0xE9B512FEL,0x2D569CD1L,0x56DB474CL}},{{0x85BFDD0BL,4294967295UL,1UL,3UL,1UL},{1UL,1UL,4294967286UL,0xD7554739L,0x56DB474CL},{4294967295UL,0x85BFDD0BL,1UL,0UL,4294967286UL},{1UL,5UL,0xE9B512FEL,0xD7554739L,0xE9B512FEL},{0x85BFDD0BL,0x85BFDD0BL,0UL,3UL,4294967286UL},{5UL,1UL,0xE9B512FEL,0x2D569CD1L,0x56DB474CL},{0x85BFDD0BL,4294967295UL,1UL,3UL,1UL}},{{1UL,1UL,4294967286UL,0xD7554739L,0x56DB474CL},{4294967295UL,0x85BFDD0BL,1UL,0UL,4294967286UL},{1UL,5UL,0xE9B512FEL,0xD7554739L,0xE9B512FEL},{0x85BFDD0BL,0x85BFDD0BL,0UL,3UL,4294967286UL},{5UL,1UL,0xE9B512FEL,0x2D569CD1L,0x56DB474CL},{0x85BFDD0BL,4294967295UL,1UL,3UL,1UL},{1UL,1UL,4294967286UL,0xD7554739L,0x56DB474CL}},{{4294967295UL,0x85BFDD0BL,1UL,0UL,4294967286UL},{1UL,5UL,0xE9B512FEL,0xD7554739L,0xE9B512FEL},{0x85BFDD0BL,0x85BFDD0BL,0UL,3UL,4294967286UL},{5UL,1UL,0xE9B512FEL,0x2D569CD1L,0x56DB474CL},{0x85BFDD0BL,4294967295UL,1UL,3UL,1UL},{1UL,1UL,4294967286UL,0xD7554739L,0x56DB474CL},{4294967295UL,0x85BFDD0BL,1UL,0UL,4294967286UL}},{{1UL,5UL,0xE9B512FEL,0xD7554739L,0xE9B512FEL},{0x85BFDD0BL,1UL,0xC1C4F436L,0x8A333331L,1UL},{4294967286UL,0xE9B512FEL,0UL,6UL,0xA72520A4L},{1UL,0UL,2UL,0x8A333331L,2UL},{0xE9B512FEL,0xE9B512FEL,0x13DD58FBL,0xF14C84A8L,0xA72520A4L},{0UL,1UL,2UL,4294967290UL,1UL},{0xE9B512FEL,4294967286UL,0UL,0xF14C84A8L,0UL}},{{1UL,1UL,0xC1C4F436L,0x8A333331L,1UL},{4294967286UL,0xE9B512FEL,0UL,6UL,0xA72520A4L},{1UL,0UL,2UL,0x8A333331L,2UL},{0xE9B512FEL,0xE9B512FEL,0x13DD58FBL,0xF14C84A8L,0xA72520A4L},{0UL,1UL,2UL,4294967290UL,1UL},{0xE9B512FEL,4294967286UL,0UL,0xF14C84A8L,0UL},{1UL,1UL,0xC1C4F436L,0x8A333331L,1UL}},{{4294967286UL,0xE9B512FEL,0UL,6UL,0xA72520A4L},{1UL,0UL,2UL,0x8A333331L,2UL},{0xE9B512FEL,0xE9B512FEL,0x13DD58FBL,0xF14C84A8L,0xA72520A4L},{0UL,1UL,2UL,4294967290UL,1UL},{0xE9B512FEL,4294967286UL,0UL,0xF14C84A8L,0UL},{1UL,1UL,0xC1C4F436L,0x8A333331L,1UL},{4294967286UL,0xE9B512FEL,0UL,6UL,0xA72520A4L}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_776[i] = &g_298;
        for (i = 0; i < 7; i++)
            l_968[i] = 0xCFL;
        for (i = 0; i < 3; i++)
            l_1032[i] = (void*)0;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 6; j++)
                l_1074[i][j] = (void*)0;
        }
        --g_765[0][1];
    }
    else
    { 
        int64_t *** const **l_1373[4];
        int32_t l_1374 = 0x16313F78L;
        uint64_t *l_1375 = &g_749.f1;
        uint64_t *l_1376 = &g_1160;
        int32_t l_1384 = 7L;
        int i;
        for (i = 0; i < 4; i++)
            l_1373[i] = &l_1372;
        (*l_750) = (**l_751);
        l_1372 = l_1372;
        l_1384 |= (((((**l_750) && p_13.f2) | p_13.f1) , ((l_1374 = ((((l_1374 || ((*l_1376)++)) >= ((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((l_1374 | l_1383), ((9UL < 3L) && p_13.f4))), 4)) < 8UL)) < l_1374) || 1UL)) != p_13.f0)) & 8UL);
        (*l_750) = (*l_750);
    }
    (*l_1385) = ((*g_813) = (((***l_751) = 18446744073709551613UL) , (*l_861)));
    l_764 ^= ((*l_1393) = ((*l_1392) = (((safe_sub_func_uint32_t_u_u((l_1388 == (void*)0), ((*g_784) , ((**l_750) = ((g_1319 = ((((**l_750) <= ((safe_mul_func_int8_t_s_s(((***l_751) , (**l_750)), ((**l_750) >= 0x61A9L))) && (**l_750))) > p_13.f4) <= (***l_751))) == (***l_751)))))) && 0xA3146236L) & 250UL)));
    (***l_751) = (safe_add_func_uint16_t_u_u(((*l_1393) <= (safe_div_func_int8_t_s_s(((*l_1393) == (-1L)), ((l_1402 |= (6L < (0xD3742AD68DAA6EAELL || ((((safe_lshift_func_uint8_t_u_u(((*l_1401) |= l_1400), 6)) | p_13.f0) & p_12) < g_739)))) && (**l_750))))), g_1160));
    return (*g_783);
}



static struct S0  func_15(union U4  p_16, struct S2  p_17, struct S3  p_18, int64_t  p_19, struct S2 * p_20)
{ 
    int32_t *l_746[3][6] = {{&g_157,(void*)0,&g_157,&g_211,&g_10,&g_10},{(void*)0,&g_157,&g_157,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_10,(void*)0,(void*)0,&g_211}};
    int32_t **l_747 = &l_746[0][4];
    struct S0 l_748 = {0UL,0x65L,1L,0x2D43L,1L};
    int i, j;
    (*l_747) = l_746[2][3];
    return l_748;
}



static union U4  func_21(struct S2 * p_22, union U4  p_23)
{ 
    (*g_689) &= 1L;
    return p_23;
}



static struct S2 * func_24(int32_t * p_25, int32_t  p_26, uint64_t  p_27)
{ 
    struct S1 l_558 = {4294967295UL,0x7B7DF2C2L};
    struct S2 *l_572 = &g_99;
    int32_t l_594 = 0x28ACA288L;
    int32_t l_596 = 1L;
    uint8_t l_606 = 0xF0L;
    int16_t ***l_609 = &g_313;
    int32_t **l_614 = &g_117;
    int32_t ***l_613[6] = {&l_614,&l_614,&l_614,&l_614,&l_614,&l_614};
    uint32_t *l_634 = (void*)0;
    uint16_t *l_640 = &g_148;
    uint16_t l_670[5] = {0x5B38L,0x5B38L,0x5B38L,0x5B38L,0x5B38L};
    int32_t l_708 = (-7L);
    uint8_t l_715 = 0x3AL;
    struct S3 l_733[6][3][1] = {{{{1UL}},{{18446744073709551610UL}},{{1UL}}},{{{18446744073709551610UL}},{{1UL}},{{18446744073709551610UL}}},{{{1UL}},{{18446744073709551610UL}},{{1UL}}},{{{18446744073709551610UL}},{{1UL}},{{18446744073709551610UL}}},{{{1UL}},{{18446744073709551610UL}},{{1UL}}},{{{18446744073709551610UL}},{{1UL}},{{18446744073709551610UL}}}};
    int i, j, k;
lbl_690:
    for (g_148 = 2; (g_148 <= 34); g_148 = safe_add_func_int16_t_s_s(g_148, 1))
    { 
        for (g_99.f1.f2 = 2; (g_99.f1.f2 >= 0); g_99.f1.f2 -= 1)
        { 
            int i;
            g_546 = g_207[g_99.f1.f2];
        }
    }
    for (g_99.f2 = 0; (g_99.f2 != 8); g_99.f2++)
    { 
        int32_t l_575[4];
        int32_t l_586 = 0x8B55888DL;
        int32_t l_590[5][2][4] = {{{1L,0L,(-4L),0L},{0xD7E8A45DL,0x21EDFF91L,0xBEB0E5B5L,(-4L)}},{{0L,0x21EDFF91L,0x21EDFF91L,0L},{0x21EDFF91L,0L,0xD7E8A45DL,1L}},{{0x21EDFF91L,0xD7E8A45DL,0x21EDFF91L,0xBEB0E5B5L},{0L,1L,0xBEB0E5B5L,0xBEB0E5B5L}},{{0xD7E8A45DL,0xD7E8A45DL,(-4L),1L},{1L,0L,(-4L),0L}},{{0xD7E8A45DL,0x21EDFF91L,0xBEB0E5B5L,(-4L)},{0L,0x21EDFF91L,0x21EDFF91L,0L}}};
        struct S2 *l_617 = (void*)0;
        int32_t *l_705 = &l_594;
        int32_t l_706 = (-1L);
        uint64_t *l_736 = &g_52;
        uint64_t **l_735 = &l_736;
        int16_t l_740 = 0x48CAL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_575[i] = 0xAB8DE30CL;
        for (g_99.f4.f0 = (-6); (g_99.f4.f0 >= 18); g_99.f4.f0 = safe_add_func_uint16_t_u_u(g_99.f4.f0, 2))
        { 
            int16_t l_576 = 0xDCEDL;
            int32_t l_582 = (-1L);
            int32_t l_584 = 0x5326A3AAL;
            int32_t l_587 = 0xD76E7416L;
            int32_t l_589 = (-1L);
            int32_t l_591 = 0x808C5267L;
            int32_t l_592 = 0xBBD2CC59L;
            int32_t l_595 = 0L;
            int32_t l_597 = 0x7747FF96L;
            int32_t l_598 = (-1L);
            uint32_t *l_636[4][4] = {{&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0},{&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0},{&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0},{&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0,&g_341.f4.f0}};
            int8_t l_655 = 0x64L;
            uint32_t l_663 = 6UL;
            struct S1 **l_668 = (void*)0;
            int32_t l_709 = (-4L);
            int32_t l_710 = (-1L);
            int32_t l_711 = 0xACF4AC08L;
            int32_t l_713 = 0L;
            int32_t l_714[7];
            struct S0 l_734 = {0x9DC9D3CCL,0x44L,0x14L,0x359EL,0x66E25473L};
            int64_t *l_737 = &g_408;
            int64_t *l_738 = &g_205;
            int i, j;
            for (i = 0; i < 7; i++)
                l_714[i] = 0xBA69F2D6L;
            for (g_205 = 0; (g_205 >= 0); g_205--)
            { 
                for (g_341.f1.f1 = 5; (g_341.f1.f1 != (-6)); g_341.f1.f1--)
                { 
                    struct S0 **l_555 = &g_352;
                    (*l_555) = (void*)0;
                    return &g_99;
                }
            }
            for (g_341.f1.f1 = 1; (g_341.f1.f1 < (-15)); g_341.f1.f1 = safe_sub_func_uint32_t_u_u(g_341.f1.f1, 3))
            { 
                struct S1 *l_559 = &l_558;
                struct S1 *l_560 = &g_341.f4;
                uint32_t l_567 = 0x394EC478L;
                int64_t *l_577 = &g_147;
                int32_t l_581 = 3L;
                int32_t l_583 = 0xC7ACE9CAL;
                int32_t l_585 = 0L;
                int32_t l_588 = 0x070690EFL;
                int32_t l_593[4][4] = {{0x2AA7C79FL,0L,0x2AA7C79FL,0x2AA7C79FL},{0L,0L,0xD04C37E2L,0L},{0L,0x2AA7C79FL,0x2AA7C79FL,0L},{0x2AA7C79FL,0L,0x2AA7C79FL,0x2AA7C79FL}};
                uint8_t l_599 = 0x51L;
                int32_t **l_611 = &g_117;
                int32_t ***l_610 = &l_611;
                int16_t l_624 = (-1L);
                int i, j;
                (*l_560) = ((*l_559) = l_558);
                if ((((*l_577) = ((0x12653692L || ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s(l_567, (safe_sub_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((0UL | (l_572 == l_572)), (safe_add_func_int32_t_s_s(((g_281[4][2] &= p_26) , 0xD5AF64DBL), l_575[2])))), 0x5B92E3AF42B1A88BLL)))) && g_147), l_576)), p_26)) ^ l_567)) ^ 0x2370L)) ^ g_231[0].f0))
                { 
                    int32_t *l_578 = (void*)0;
                    int32_t *l_579 = &g_211;
                    int32_t *l_580[7][6][6] = {{{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1},{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_211,&g_206,&g_409[0][4][1],&g_99.f4.f1},{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1}},{{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_211,&g_206,&g_409[0][4][1],&g_99.f4.f1},{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1},{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_211,&g_206,&g_409[0][4][1],&g_99.f4.f1}},{{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1},{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_211,&g_206,&g_409[0][4][1],&g_99.f4.f1},{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1}},{{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_211,&g_206,&g_409[0][4][1],&g_99.f4.f1},{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1},{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_211,&g_206,&g_409[0][4][1],&g_99.f4.f1}},{{(void*)0,&g_206,&g_157,&g_409[0][4][1],&g_409[0][4][1],&g_157},{&g_409[0][4][1],&g_409[0][4][1],&g_157,&g_206,(void*)0,&g_99.f4.f1},{&g_409[0][4][1],&g_206,&g_211,&g_409[0][4][1],(void*)0,&g_157},{(void*)0,&g_409[0][4][1],&g_206,&g_99.f4.f1,(void*)0,(void*)0},{&g_409[0][0][2],&g_99.f4.f1,&g_409[0][3][0],(void*)0,(void*)0,&g_409[0][3][0]},{(void*)0,(void*)0,&g_409[0][3][0],&g_99.f4.f1,&g_409[0][0][2],(void*)0}},{{(void*)0,&g_99.f4.f1,&g_206,(void*)0,&g_409[0][0][2],&g_409[0][3][0]},{&g_409[0][0][2],(void*)0,&g_206,&g_99.f4.f1,(void*)0,(void*)0},{&g_409[0][0][2],&g_99.f4.f1,&g_409[0][3][0],(void*)0,(void*)0,&g_409[0][3][0]},{(void*)0,(void*)0,&g_409[0][3][0],&g_99.f4.f1,&g_409[0][0][2],(void*)0},{(void*)0,&g_99.f4.f1,&g_206,(void*)0,&g_409[0][0][2],&g_409[0][3][0]},{&g_409[0][0][2],(void*)0,&g_206,&g_99.f4.f1,(void*)0,(void*)0}},{{&g_409[0][0][2],&g_99.f4.f1,&g_409[0][3][0],(void*)0,(void*)0,&g_409[0][3][0]},{(void*)0,(void*)0,&g_409[0][3][0],&g_99.f4.f1,&g_409[0][0][2],(void*)0},{(void*)0,&g_99.f4.f1,&g_206,(void*)0,&g_409[0][0][2],&g_409[0][3][0]},{&g_409[0][0][2],(void*)0,&g_206,&g_99.f4.f1,(void*)0,(void*)0},{&g_409[0][0][2],&g_99.f4.f1,&g_409[0][3][0],(void*)0,(void*)0,&g_409[0][3][0]},{(void*)0,(void*)0,&g_409[0][3][0],&g_99.f4.f1,&g_409[0][0][2],(void*)0}}};
                    int i, j, k;
                    --l_599;
                }
                else
                { 
                    int32_t *l_602 = &g_48;
                    int32_t *l_603 = &l_583;
                    int32_t *l_604 = &l_589;
                    int32_t *l_605[3][3] = {{&l_598,&l_598,&l_598},{&l_588,&l_588,&l_588},{&l_598,&l_598,&l_598}};
                    int i, j;
                    ++l_606;
                }
                for (g_68 = 2; (g_68 >= 0); g_68 -= 1)
                { 
                    int32_t ****l_612[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_612[i] = &l_610;
                    l_586 &= (-1L);
                    l_609 = &g_313;
                    g_615 = (g_281[(g_68 + 1)][g_68] , (l_613[1] = l_610));
                    return l_617;
                }
                if (l_586)
                { 
                    p_26 = (1L >= ((safe_sub_func_int16_t_s_s((*g_314), ((safe_rshift_func_uint16_t_u_s(((void*)0 == &l_599), ((safe_sub_func_uint64_t_u_u((l_624 || (0x0FL ^ (((6UL == l_590[3][1][3]) & l_576) >= 1L))), 3L)) != 0UL))) & g_40.f0.f0))) == (-10L)));
                    p_26 = (p_27 | 0xAC8410E40178FADBLL);
                }
                else
                { 
                    if (l_586)
                        break;
                }
                for (g_341.f1.f3 = 26; (g_341.f1.f3 != (-16)); g_341.f1.f3 = safe_sub_func_int16_t_s_s(g_341.f1.f3, 7))
                { 
                    uint32_t *l_627 = &g_88[1][1];
                    uint32_t **l_635[4][1] = {{&l_627},{&l_634},{&l_627},{&l_634}};
                    uint16_t *l_641 = (void*)0;
                    int16_t l_645 = 0x931CL;
                    uint64_t *l_646 = &g_231[0].f1;
                    int i, j;
                    p_26 = (l_590[4][0][1] = (((*l_627)++) >= ((safe_mul_func_int16_t_s_s((l_591 = ((l_583 ^= (*p_25)) >= (((safe_lshift_func_int8_t_s_u(((((l_636[2][3] = l_634) != (g_637 = &g_213)) & (((*g_314) &= (safe_div_func_int32_t_s_s((l_640 == l_641), (safe_sub_func_uint64_t_u_u((~p_26), ((*l_646) = l_645)))))) <= p_26)) , l_645), g_99.f3.f0)) <= l_645) && 254UL))), 0xC182L)) || p_27)));
                    return l_617;
                }
            }
            for (g_368 = 0; (g_368 == 40); g_368 = safe_add_func_uint32_t_u_u(g_368, 4))
            { 
                uint64_t *l_651 = &g_231[0].f1;
                uint64_t *l_652 = &g_52;
                int8_t *l_660 = &g_99.f3.f2;
                int32_t l_669 = 0L;
                int32_t l_692 = 1L;
                int32_t l_694 = 0L;
                int32_t l_695 = (-2L);
                int32_t l_696[4][5][6] = {{{(-9L),0xF8B7F176L,0xD8A49BFDL,(-1L),(-4L),1L},{0xC0A67F37L,2L,0xD8A49BFDL,0xE88929F2L,(-1L),2L},{0x71703D37L,2L,1L,0xDCD4A417L,0x702B4D48L,1L},{0xDCD4A417L,0x702B4D48L,1L,1L,0L,0L},{0xF669F1C8L,1L,2L,1L,(-1L),(-1L)}},{{0xDCD4A417L,0xBA8A709DL,0xBA8A709DL,0xDCD4A417L,2L,0xF8B7F176L},{0x71703D37L,0xE088EFD4L,0L,0xE88929F2L,2L,0xD8A49BFDL},{0xC0A67F37L,(-4L),(-1L),(-1L),2L,0x702B4D48L},{(-9L),0xE088EFD4L,(-1L),0xF669F1C8L,2L,2L},{0x679DBFFCL,0xBA8A709DL,0L,5L,(-1L),(-9L)}},{{1L,1L,2L,0xDF459FE7L,0L,(-9L)},{(-1L),0x702B4D48L,0L,1L,0x702B4D48L,2L},{0x6CA6AFC0L,2L,(-1L),(-1L),(-1L),0x702B4D48L},{0xE88929F2L,2L,(-1L),(-4L),(-4L),0xD8A49BFDL},{0xE88929F2L,0xF8B7F176L,0L,(-1L),0L,0x5ADCAF45L}},{{0xF8B7F176L,5L,0x0F3BD11AL,(-1L),0x5ADCAF45L,0xF8F93481L},{2L,0L,1L,(-1L),(-1L),0x8D81086BL},{(-1L),0L,(-1L),0L,0x5ADCAF45L,(-1L)},{(-9L),5L,0L,0xBA8A709DL,0x8D81086BL,0x68931031L},{0xE088EFD4L,0x5ADCAF45L,0x3F49CC4FL,2L,0x9D2D553DL,0L}}};
                int16_t l_707 = (-1L);
                int16_t l_712[1][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_712[i][j] = (-5L);
                }
                if ((((((*g_297) , (((p_26 = 0x07C83BC1L) | ((l_595 = (safe_div_func_int8_t_s_s(g_205, ((l_655 = ((*l_651) = ((*l_652)++))) ^ (safe_sub_func_uint16_t_u_u((safe_div_func_uint8_t_u_u(((void*)0 == l_660), (safe_add_func_int64_t_s_s((l_663 = 0xAA6CB6B8D71E01D5LL), ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(((((((l_668 != l_668) || 0x010CL) ^ p_27) < l_669) ^ 0xF1CF34E9B5B0A51ALL) , 0UL), l_590[3][1][3])) >= l_670[3]) != l_575[0]), 7)) < 0x9596L))))), 0xEE15L)))))) && g_281[4][2])) <= 0xEF850D789472DC9ALL)) == g_99.f1.f1) && l_586) & l_590[0][1][1]))
                { 
                    int16_t l_686 = 0x2DD9L;
                    int16_t l_688[3][2][7] = {{{(-1L),1L,0x1E4CL,1L,0x1FD4L,0x1FD4L,1L},{0x1E4CL,(-10L),0x1E4CL,3L,1L,0x1FD4L,3L}},{{(-1L),(-10L),0x8300L,1L,1L,(-1L),1L},{(-1L),1L,0x1E4CL,1L,0x1FD4L,0x1FD4L,1L}},{{0x1E4CL,(-10L),0x1E4CL,3L,1L,0x1FD4L,3L},{(-1L),(-10L),0x8300L,1L,1L,(-1L),1L}}};
                    int i, j, k;
                    p_26 |= 0xE33F77F9L;
                    l_686 |= (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s((+((*p_25) | p_26)), (safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u(l_669, ((l_584 = (safe_div_func_uint16_t_u_u(0UL, (safe_rshift_func_uint16_t_u_s((p_27 | (safe_add_func_uint32_t_u_u(9UL, ((g_341.f3.f2 , p_26) >= g_147)))), l_655))))) >= (*p_25)))), 0x1F87L)))), g_88[1][1]));
                    l_688[0][0][5] = g_687;
                    (**g_615) = g_689;
                    if (p_27)
                        goto lbl_690;
                }
                else
                { 
                    int32_t l_691 = 2L;
                    int32_t l_693 = 0x7D6A1814L;
                    int32_t l_697 = 0L;
                    int32_t l_699 = 0x21BF6022L;
                    int32_t l_700 = 1L;
                    int32_t l_701 = (-9L);
                    uint32_t l_702[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_702[i] = 0x08822C5BL;
                    l_558 = l_558;
                    if (l_691)
                        continue;
                    ++l_702[0];
                    return &g_99;
                }
                p_25 = (**g_615);
                (**g_615) = l_705;
                l_715++;
            }
            (*g_689) |= (safe_sub_func_int8_t_s_s(g_341.f2, g_99.f3.f0));
            (*g_689) = (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(((safe_div_func_int16_t_s_s((((*l_640) ^= g_341.f1.f4) | ((((safe_mul_func_uint16_t_u_u(((((safe_div_func_int64_t_s_s(0L, (~l_592))) , (((l_733[2][1][0] , (((l_734 , l_735) != (((*l_738) = ((*l_737) = (((l_709 & 9L) , g_99.f1.f0) , p_26))) , &l_736)) ^ g_4[0][0])) | p_26) > p_26)) || g_739) || g_99.f6), p_26)) , 1L) >= g_341.f3.f3) > 0xF4B6237540C5B54ALL)), l_734.f3)) <= g_231[0].f0), 7)) & p_27), 0x4797CEE1L));
        }
        ++g_741;
    }
    return &g_99;
}



static uint8_t  func_33(int16_t  p_34, const struct S3  p_35)
{ 
    struct S1 l_430 = {0x83AC8FB8L,0x5AE73850L};
    int32_t l_439[2];
    uint32_t l_440[6][2] = {{0UL,18446744073709551607UL},{1UL,0UL},{2UL,2UL},{2UL,0UL},{1UL,18446744073709551607UL},{0UL,18446744073709551607UL}};
    union U4 l_482[5] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
    struct S0 l_512 = {0x57513BF5L,-9L,9L,1L,1L};
    uint16_t l_515 = 0x1060L;
    int8_t *l_517[3][7][7] = {{{&g_99.f3.f2,(void*)0,&g_99.f1.f2,&g_341.f1.f1,&g_99.f1.f1,&g_99.f1.f1,&g_341.f1.f1},{&g_99.f3.f2,(void*)0,&g_99.f3.f2,&g_341.f3.f1,&g_99.f1.f2,&g_99.f1.f2,&g_99.f3.f1},{(void*)0,&g_99.f3.f1,&g_68,&g_99.f1.f1,(void*)0,&g_279,&g_341.f1.f1},{(void*)0,&g_99.f3.f2,&g_279,&g_279,&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2},{&g_99.f1.f2,&g_341.f3.f2,&l_512.f2,&g_341.f3.f1,&g_99.f3.f2,&g_99.f1.f1,&l_512.f2},{&g_99.f1.f1,&g_99.f1.f1,&g_341.f3.f1,&g_341.f3.f1,&g_99.f1.f1,&g_99.f1.f1,&g_99.f3.f2},{&g_341.f1.f1,&g_99.f1.f1,(void*)0,&g_279,&g_99.f1.f2,&l_512.f2,&g_99.f1.f2}},{{&g_279,&g_279,(void*)0,&g_99.f1.f1,&g_341.f3.f2,&g_99.f3.f2,&g_341.f3.f1},{&g_99.f1.f2,&g_99.f1.f1,&g_341.f1.f1,&g_341.f3.f1,&l_512.f2,&g_279,&g_279},{(void*)0,&g_99.f1.f1,&g_279,&g_341.f1.f1,&g_68,&g_341.f1.f1,&g_279},{&g_341.f3.f2,&g_341.f3.f2,&g_279,&l_512.f2,&g_279,&g_99.f3.f1,&g_341.f3.f1},{&l_512.f1,&g_99.f3.f2,&g_99.f3.f2,&g_99.f1.f1,&g_99.f1.f2,&g_341.f1.f1,&g_99.f1.f2},{&l_512.f2,&g_99.f3.f1,&g_99.f1.f1,&g_341.f3.f2,&g_279,&g_99.f1.f2,&g_99.f3.f2},{&g_99.f1.f1,(void*)0,&g_341.f1.f1,&g_279,&g_68,&l_512.f2,&l_512.f2}},{{&l_512.f2,(void*)0,&g_341.f1.f1,&g_99.f1.f1,&g_99.f3.f1,&l_512.f1,&g_99.f3.f2},{(void*)0,&g_68,&g_99.f1.f2,&g_99.f1.f2,&g_99.f1.f1,&g_279,&g_279},{&g_341.f3.f1,(void*)0,&g_68,&g_341.f3.f2,&g_341.f1.f1,&g_68,&g_341.f1.f1},{(void*)0,&g_99.f1.f2,&g_341.f3.f2,&l_512.f2,&g_341.f3.f1,&g_99.f3.f2,&g_99.f1.f1},{&g_99.f3.f1,(void*)0,&g_99.f3.f2,&g_68,&g_68,&g_99.f3.f2,(void*)0},{&g_99.f1.f2,&g_99.f1.f2,&g_99.f1.f1,&g_279,(void*)0,&g_68,&g_68},{&g_99.f1.f2,&g_279,&l_512.f2,&g_99.f1.f2,&g_99.f1.f1,&g_279,&g_99.f3.f1}}};
    int64_t *l_536 = (void*)0;
    int32_t *l_537 = (void*)0;
    int32_t *l_538 = &g_157;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_439[i] = 0xA0A6571AL;
    l_430 = l_430;
    if (p_35.f0)
    { 
        int32_t **l_431 = &g_117;
        int32_t l_437 = (-3L);
        int32_t l_438[5][4] = {{0x83F90FF4L,0x83F90FF4L,0x068B44D2L,2L},{0x83F90FF4L,9L,1L,0x83F90FF4L},{0x9953DAB9L,2L,0x9953DAB9L,1L},{(-6L),2L,0x068B44D2L,0x83F90FF4L},{2L,9L,9L,2L}};
        int i, j;
        (*l_431) = &g_10;
        for (g_99.f1.f2 = 0; (g_99.f1.f2 == (-22)); g_99.f1.f2 = safe_sub_func_int16_t_s_s(g_99.f1.f2, 6))
        { 
            int32_t *l_434 = &g_341.f4.f1;
            int32_t *l_435 = &g_48;
            int32_t *l_436[6][6] = {{(void*)0,&g_409[1][1][4],(void*)0,&g_48,&g_409[0][4][2],&g_48},{(void*)0,&g_409[1][1][4],(void*)0,&g_48,&g_409[0][4][2],&g_48},{(void*)0,&g_409[1][1][4],(void*)0,&g_48,&g_409[0][4][2],&g_48},{(void*)0,&g_409[1][1][4],(void*)0,&g_48,&g_409[0][4][2],&g_48},{(void*)0,&g_409[1][1][4],(void*)0,&g_48,&g_409[0][4][2],&g_48},{(void*)0,&g_409[1][1][4],(void*)0,&g_48,&g_409[0][4][2],&g_48}};
            int i, j;
            --l_440[0][1];
            if (p_34)
                break;
        }
    }
    else
    { 
        struct S3 *l_449 = &g_246;
        struct S1 l_468 = {0xB7B92988L,-1L};
        int32_t *l_503 = &g_157;
        int16_t **l_516 = &g_314;
        int32_t **l_518 = &g_117;
        int32_t ***l_519 = &l_518;
        for (g_99.f1.f3 = 0; (g_99.f1.f3 != (-29)); g_99.f1.f3--)
        { 
            int32_t l_481 = 0L;
            int32_t l_502 = 1L;
            (*g_117) = p_34;
            for (g_99.f5 = 4; (g_99.f5 >= (-23)); g_99.f5 = safe_sub_func_int8_t_s_s(g_99.f5, 6))
            { 
                int8_t l_450 = 0xE1L;
                int32_t *l_451 = &g_48;
                const struct S0 *l_461[7][1];
                uint64_t l_465 = 18446744073709551609UL;
                int i, j;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_461[i][j] = (void*)0;
                }
                (*g_117) |= 0x63A252C6L;
                for (g_205 = 0; (g_205 <= 26); g_205 = safe_add_func_uint16_t_u_u(g_205, 3))
                { 
                    int32_t **l_452 = &g_117;
                    g_297 = l_449;
                    (*g_117) ^= 1L;
                    if (l_450)
                        break;
                    l_439[1] = l_450;
                    (*l_452) = l_451;
                }
                if ((*l_451))
                    break;
                if (((*l_451) = ((safe_rshift_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(((0x9147L > ((void*)0 == l_461[4][0])) != p_34), ((0L | 0x7321L) ^ (9L == 0x1231F74DL)))) , 4294967295UL) , (-1L)), p_34)), g_40.f1.f2)) >= 0xB429L) , 0xFAL), g_99.f0.f0)) && 0x7637BE341A81CB0FLL)))
                { 
                    int32_t *l_464 = (void*)0;
                    uint32_t *l_469 = &g_261;
                    uint16_t *l_480 = (void*)0;
                    int8_t *l_483 = &g_341.f1.f2;
                    int32_t *l_494 = (void*)0;
                    int32_t *l_495 = &l_430.f1;
                    l_465--;
                    (*l_451) = (((l_468 , ((*l_469)--)) , ((((*l_483) = ((0xC7AC6466L < (((safe_sub_func_uint64_t_u_u((~(safe_unary_minus_func_uint16_t_u(0xB384L))), (safe_sub_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((*g_314), 0)) != 65535UL) && 0x44C207FA35A01C0CLL), ((((l_430.f1 = l_430.f0) | l_481) , 255UL) == p_35.f0))))) , l_482[1]) , g_10)) & l_468.f1)) <= p_34) != g_10)) , p_35.f0);
                    (*l_495) |= (((((((safe_rshift_func_int8_t_s_s(g_99.f4.f1, 6)) != 0UL) , ((((safe_div_func_int8_t_s_s((0x24L >= ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(((void*)0 != &g_117), (safe_add_func_int16_t_s_s((l_439[0] ^= ((g_341.f1.f4 != (*l_451)) , 0xACC9L)), g_99.f6)))), p_35.f0)) | l_468.f1)), 0x5BL)) && p_34) > 0UL) , p_35.f0)) >= 1L) >= g_281[4][2]) > l_440[0][1]) , p_34);
                }
                else
                { 
                    struct S1 *l_496 = &g_99.f4;
                    const int32_t l_501 = 0L;
                    (*l_496) = l_468;
                    l_502 = ((((l_482[1].f0 , (p_35.f0 || (safe_sub_func_uint64_t_u_u(p_34, l_468.f1)))) , (p_34 ^ (((((safe_lshift_func_uint8_t_u_u(g_281[2][2], 3)) > g_231[0].f0) < p_35.f0) > p_34) , l_501))) , 1UL) & p_35.f0);
                    g_117 = &g_409[0][5][1];
                    (*l_496) = (*l_496);
                }
            }
        }
        (*l_503) ^= ((*g_117) = 0xB36FAE6DL);
        (*l_518) = ((((*g_117) | ((safe_lshift_func_int16_t_s_u((*l_503), (safe_rshift_func_uint16_t_u_u(((((((((((safe_sub_func_uint16_t_u_u((*l_503), (safe_lshift_func_uint16_t_u_s((l_512 , (p_35.f0 <= (l_515 && ((void*)0 == l_516)))), 4)))) && p_35.f0) | l_512.f2) >= 3L) , l_517[0][6][3]) == &g_68) <= p_34) , &g_60) != &g_148) == (*l_503)), p_34)))) & p_34)) < p_34) , (void*)0);
        l_519 = &l_518;
    }
    (*l_538) |= (l_430.f1 = ((((safe_mod_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_u((p_35.f0 >= ((safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u((+(safe_lshift_func_uint16_t_u_s(p_34, 4))))) , 9UL), (l_439[1] = (((safe_sub_func_int32_t_s_s(((safe_mod_func_uint8_t_u_u(g_246.f0, 0xC3L)) & g_409[2][4][4]), l_512.f3)) && p_34) || 1L)))), g_246.f0)) & g_341.f1.f3)), p_34)) || 0x19L), 0x2D48D925L)) < l_512.f3) ^ l_512.f3) && l_439[1]));
    return p_34;
}



static const struct S3  func_37(const struct S2 * p_38)
{ 
    int32_t *l_45[2];
    const struct S2 *l_46 = (void*)0;
    const struct S2 **l_47[2][7] = {{&l_46,(void*)0,(void*)0,(void*)0,(void*)0,&l_46,(void*)0},{&l_46,&l_46,&l_46,&l_46,(void*)0,&l_46,&l_46}};
    const struct S3 l_70 = {1UL};
    struct S2 *l_73 = (void*)0;
    int8_t *l_107[6][3] = {{&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2},{&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2},{&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2},{&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2},{&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2},{&g_99.f1.f1,&g_99.f1.f2,&g_99.f1.f2}};
    struct S0 l_134 = {18446744073709551614UL,0x64L,0xB2L,0x0E44L,1L};
    struct S1 l_164 = {4294967289UL,0x720A13F4L};
    uint16_t *l_323 = &g_148;
    uint64_t l_384 = 0x532996BEDF1BFF00LL;
    int32_t l_406 = 0x172E1B9EL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_45[i] = &g_10;
    if ((g_49 = (g_48 &= (((safe_div_func_int8_t_s_s(0L, (safe_lshift_func_uint8_t_u_u((l_45[1] != &g_10), g_40.f6)))) && ((g_39 = l_46) != p_38)) || (0x9E2CD2A1986173B0LL & 0x2784030276420880LL)))))
    { 
        int32_t l_50 = 1L;
        int32_t l_51 = 8L;
        --g_52;
    }
    else
    { 
        int16_t l_59 = 1L;
        int8_t *l_67 = &g_68;
        int32_t l_69 = 0x099BCB13L;
        uint8_t l_100 = 0x73L;
        const union U4 l_125 = {4294967286UL};
        struct S2 *l_127 = (void*)0;
        int32_t **l_144 = (void*)0;
        uint8_t l_153 = 6UL;
        int32_t *l_155 = &l_69;
        uint64_t *l_180 = &g_52;
        struct S1 l_192[7] = {{0x3E919F61L,0xCAE8D20AL},{0x3E919F61L,0xCAE8D20AL},{0x3E919F61L,0xCAE8D20AL},{0x3E919F61L,0xCAE8D20AL},{0x3E919F61L,0xCAE8D20AL},{0x3E919F61L,0xCAE8D20AL},{0x3E919F61L,0xCAE8D20AL}};
        struct S3 * const l_245 = &g_246;
        int32_t l_257 = 0xA8F9CB82L;
        int32_t l_259[6][4][2] = {{{0x90CCB52AL,0L},{0xE9995B76L,0L},{0x90CCB52AL,0xA75B066DL},{0xFE241AC8L,1L}},{{0xBF432456L,0xD7F1537BL},{(-1L),(-1L)},{0x016306CEL,0x18002E72L},{0xA75B066DL,0xE9995B76L}},{{(-10L),0x78E65868L},{0x18002E72L,(-10L)},{0x1858627FL,0xF5DE442CL},{0x1858627FL,(-10L)}},{{0x18002E72L,0x78E65868L},{(-10L),0xE9995B76L},{0xA75B066DL,0x18002E72L},{0x016306CEL,(-1L)}},{{(-1L),0xD7F1537BL},{0xBF432456L,1L},{0xFE241AC8L,0xA75B066DL},{0x90CCB52AL,0L}},{{0xE9995B76L,0L},{0x90CCB52AL,0xA75B066DL},{0xFE241AC8L,1L},{0xBF432456L,0xD7F1537BL}}};
        uint32_t l_294 = 9UL;
        struct S0 *l_300 = &l_134;
        int i, j, k;
        if ((l_69 = (g_48 = (g_40.f1 , ((safe_add_func_uint8_t_u_u((((*l_67) &= (safe_add_func_uint8_t_u_u((l_59 >= l_59), ((g_61 = g_60) == (safe_sub_func_uint64_t_u_u(0xBDFE816D3FBECF30LL, (((+(safe_mul_func_int16_t_s_s(((&g_39 == (void*)0) | l_59), 0xFDFBL))) | g_40.f3.f2) ^ g_40.f1.f2))))))) || g_40.f4.f0), 0x2BL)) , g_40.f1.f3)))))
        { 
            return l_70;
        }
        else
        { 
            struct S2 **l_74 = &l_73;
            int32_t l_75 = 0xA30E3E67L;
            struct S2 *l_98[1];
            struct S2 **l_97 = &l_98[0];
            int8_t *l_108[5];
            int32_t **l_114 = (void*)0;
            int32_t *l_116 = (void*)0;
            int32_t **l_115[6][7][5] = {{{&l_45[1],&l_45[0],&l_45[1],&l_45[1],&l_116},{&l_116,(void*)0,&l_45[1],&l_116,&l_116},{&l_116,&l_45[1],&l_116,&l_45[0],(void*)0},{&l_45[1],&l_45[1],&l_45[1],&l_45[1],&l_45[0]},{&l_116,&l_116,&l_45[1],&l_45[1],&l_45[1]},{&l_45[1],&l_45[1],(void*)0,&l_45[0],&l_45[1]},{&l_45[1],&l_45[0],&l_45[1],&l_45[0],(void*)0}},{{(void*)0,&l_45[1],&l_45[1],&l_45[1],&l_45[0]},{&l_45[1],(void*)0,&l_45[1],&l_45[1],(void*)0},{&l_116,&l_116,(void*)0,&l_45[0],&l_45[1]},{&l_45[1],&l_45[1],&l_116,&l_116,&l_45[0]},{&l_116,&l_45[1],&l_45[0],&l_45[1],&l_45[0]},{&l_45[1],(void*)0,(void*)0,&l_45[1],&l_45[1]},{&l_116,(void*)0,&l_116,&l_116,(void*)0}},{{&l_45[1],&l_45[1],&l_45[1],&l_116,&l_116},{(void*)0,(void*)0,&l_45[0],(void*)0,&l_45[1]},{&l_45[1],&l_45[1],&l_45[0],&l_45[0],&l_45[1]},{&l_45[1],&l_116,&l_45[1],&l_116,(void*)0},{&l_116,(void*)0,&l_116,(void*)0,&l_116},{&l_45[1],&l_45[0],(void*)0,&l_116,&l_45[1]},{&l_116,&l_45[1],&l_45[0],(void*)0,(void*)0}},{{&l_116,&l_45[1],&l_116,&l_45[0],&l_45[1]},{&l_45[0],(void*)0,(void*)0,&l_45[1],&l_116},{&l_45[1],&l_45[1],&l_45[1],&l_45[0],(void*)0},{&l_45[1],&l_116,&l_45[1],&l_45[0],&l_45[1]},{&l_116,&l_45[1],&l_45[1],(void*)0,&l_45[1]},{&l_45[1],&l_45[1],(void*)0,&l_45[1],&l_116},{&l_45[1],&l_116,&l_45[1],&l_116,(void*)0}},{{&l_45[1],&l_45[1],&l_45[1],&l_45[1],&l_45[1]},{&l_45[1],(void*)0,&l_116,&l_45[1],&l_45[0]},{&l_45[0],&l_45[1],&l_45[1],&l_45[0],&l_45[0]},{&l_116,&l_45[1],&l_45[1],&l_45[1],&l_45[1]},{&l_116,&l_45[0],(void*)0,&l_45[1],(void*)0},{&l_45[1],(void*)0,(void*)0,&l_116,&l_45[0]},{(void*)0,&l_116,(void*)0,&l_45[1],(void*)0}},{{(void*)0,&l_45[1],&l_45[1],(void*)0,&l_45[1]},{(void*)0,(void*)0,&l_45[1],&l_45[0],&l_45[1]},{(void*)0,&l_45[1],&l_116,&l_45[0],&l_45[0]},{&l_45[1],(void*)0,&l_116,(void*)0,&l_45[1]},{(void*)0,&l_45[1],&l_45[1],&l_45[1],&l_45[1]},{&l_45[0],&l_45[1],&l_116,&l_116,&l_45[1]},{&l_116,(void*)0,&l_45[1],&l_45[1],(void*)0}}};
            uint8_t *l_124 = &l_100;
            uint64_t *l_126[1][6] = {{&g_52,&g_52,&g_52,&g_52,&g_52,&g_52}};
            uint16_t l_143 = 65535UL;
            struct S3 l_183 = {6UL};
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_98[i] = &g_99;
            for (i = 0; i < 5; i++)
                l_108[i] = &g_99.f3.f1;
            l_69 = (safe_add_func_uint32_t_u_u(g_48, (&g_40 != ((*l_74) = l_73))));
            if (l_70.f0)
                goto lbl_109;
            if ((l_75 , ((((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(65531UL, 3)), (((safe_div_func_uint8_t_u_u((g_40.f1.f3 >= g_88[1][1]), (safe_add_func_uint8_t_u_u(((((safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((l_75 & 0x630802EBDDE1E780LL), ((safe_mul_func_uint16_t_u_u((((*l_97) = ((*l_74) = (void*)0)) == (void*)0), l_75)) && 18446744073709551608UL))) & g_88[2][0]), l_59)) && l_69) != l_69) ^ g_40.f1.f1), l_75)))) > 0UL) & 0L))), l_100)), 0x04891CAF8AA5B394LL)) & g_40.f0.f1) && 1UL) < g_88[1][0])))
            { 
lbl_109:
                for (g_99.f1.f1 = 0; (g_99.f1.f1 <= 0); g_99.f1.f1 = safe_add_func_uint32_t_u_u(g_99.f1.f1, 2))
                { 
                    l_69 = g_40.f3.f4;
                    g_99.f4.f1 &= ((0xEDF114FAL >= (safe_rshift_func_uint16_t_u_u(l_69, (g_99.f3.f4 & (0xFF72C97804E31C67LL >= (((((6L != ((safe_mul_func_uint16_t_u_u((l_107[5][1] == (g_48 , l_108[2])), g_49)) < g_99.f0.f1)) > g_99.f3.f1) | 4294967295UL) != g_40.f0.f0) ^ 0xECA506553B8602F1LL)))))) != g_88[1][1]);
                }
                if ((((void*)0 == l_45[1]) >= (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((g_117 = &g_48) != &l_69), (safe_add_func_int16_t_s_s((((*l_74) = ((g_52 = ((safe_mul_func_uint16_t_u_u(((((safe_mul_func_uint8_t_u_u(((*l_124) = g_40.f3.f3), (&g_40 != (l_125 , p_38)))) ^ 2UL) > 4294967293UL) >= 0xF93AE58DL), g_99.f4.f0)) <= g_40.f1.f0)) , l_127)) == &g_99), 0UL)))), l_59))))
                { 
                    uint32_t *l_132 = (void*)0;
                    uint32_t *l_133 = &g_88[1][1];
                    int64_t *l_137 = &g_99.f5;
                    const int32_t l_142 = (-1L);
                    const int32_t *l_146 = (void*)0;
                    const int32_t **l_145 = &l_146;
                    (*g_117) ^= 1L;
                    (*g_117) = ((((l_143 &= (((safe_lshift_func_uint16_t_u_s((safe_div_func_uint32_t_u_u(((*l_133) = l_59), ((l_134 , 0xDD7FL) ^ (+(+(g_40.f1 , (((*l_137) = 5L) | 0x2BBAD3B4E33999F7LL))))))), 13)) <= (((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((l_69 && g_68) & l_125.f0), g_99.f1.f0)), 0x2BB1L)) ^ l_142) <= l_69)) < (-8L))) | l_125.f0) && (*g_117)) <= 4L);
                    (*g_117) |= (l_144 != l_145);
                }
                else
                { 
                    if (g_40.f1.f1)
                        goto lbl_109;
                }
                ++g_148;
            }
            else
            { 
                int64_t l_156 = 1L;
                uint32_t l_159 = 0x10BACB65L;
                struct S1 *l_165 = &g_99.f4;
                if (((*g_117) = (248UL & (++(*l_124)))))
                { 
                    (*g_117) |= l_153;
                }
                else
                { 
                    int64_t l_154 = (-5L);
                    int32_t l_158 = 0L;
                    g_117 = &g_48;
                    l_154 ^= (*g_117);
                    l_155 = &g_48;
                    l_159++;
                }
                (*l_155) = (1L || (((*l_165) = l_164) , ((g_40.f4.f0 & l_156) != 0x9DL)));
            }
            for (g_49 = 0; (g_49 == 8); g_49 = safe_add_func_int32_t_s_s(g_49, 3))
            { 
                if ((*g_117))
                    break;
            }
            for (g_99.f3.f3 = 27; (g_99.f3.f3 != 27); g_99.f3.f3 = safe_add_func_int8_t_s_s(g_99.f3.f3, 2))
            { 
                uint64_t **l_181 = &l_126[0][1];
                uint64_t **l_182 = &l_180;
                uint64_t *l_185 = (void*)0;
                uint64_t **l_184 = &l_185;
                int32_t l_190 = 0xF9E0A5FCL;
                int32_t l_191 = 0x2E520C17L;
                int32_t l_212 = 0x2EF52723L;
                struct S3 *l_248 = &l_183;
                struct S3 **l_247 = &l_248;
                uint16_t *l_251[6] = {&g_148,(void*)0,&g_148,&g_148,(void*)0,&g_148};
                int i;
                if (((safe_mul_func_int8_t_s_s(((l_191 |= (safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint64_t_u_u(((safe_add_func_int32_t_s_s((((*l_182) = ((*l_181) = l_180)) == ((*l_184) = (l_183 , &g_52))), (*g_117))) < (g_4[4][2] > ((((((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((((&g_157 != (l_45[1] = l_45[1])) != l_190) , 0xE358L), g_40.f1.f4)), l_190)) >= (-1L)) < g_157) , 3L) > g_99.f3.f3) != g_4[4][2]))), l_190)), g_40.f3.f0)) & l_134.f3), g_40.f6))) , g_148), l_134.f0)) || g_40.f3.f1))
                { 
                    (*l_155) = (*g_117);
                }
                else
                { 
                    uint16_t l_193 = 0xB70EL;
                    int32_t l_208 = 0x78B05629L;
                    int32_t l_210[1][6];
                    int16_t *l_218 = &l_59;
                    uint16_t *l_219 = &l_193;
                    uint16_t *l_224 = &g_60;
                    uint16_t *l_225 = &l_143;
                    int64_t *l_226 = &g_147;
                    int32_t l_227[5][2][3] = {{{0x57F31CA4L,0x57F31CA4L,0x827C696DL},{0xDFEEED56L,0x827C696DL,0x827C696DL}},{{0x827C696DL,7L,0xCF1519C0L},{0xDFEEED56L,7L,0xDFEEED56L}},{{0x57F31CA4L,0x827C696DL,0xCF1519C0L},{0x57F31CA4L,0x57F31CA4L,0x827C696DL}},{{0xDFEEED56L,0x827C696DL,0x827C696DL},{0x827C696DL,7L,0xCF1519C0L}},{{0xDFEEED56L,7L,0xDFEEED56L},{0x57F31CA4L,0x827C696DL,0xCF1519C0L}}};
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_210[i][j] = 0x0F248867L;
                    }
                    l_192[6] = g_99.f0;
                    l_193++;
                    l_227[0][0][1] |= (safe_mod_func_int16_t_s_s(((((*l_226) = (((l_208 = (safe_add_func_uint64_t_u_u(((**l_182)--), (((safe_mul_func_uint8_t_u_u((65531UL >= ((l_210[0][4] = (g_213++)) ^ (l_191 >= g_40.f0.f1))), 0xB2L)) , ((safe_lshift_func_int8_t_s_s((((*l_218) ^= l_191) & 0xB0A5L), ((*l_67) &= (((*l_225) = ((*l_224) = ((--(*l_219)) ^ (safe_lshift_func_int8_t_s_s(l_208, (*l_155)))))) <= (*l_155))))) < 1L)) < g_148)))) && l_210[0][0]) > 0xDFL)) || l_193) > 0xCDL), g_99.f5));
                    return l_70;
                }
                (*l_247) = ((safe_lshift_func_uint16_t_u_u((((!((g_231[0] , ((safe_rshift_func_uint16_t_u_u((safe_div_func_int64_t_s_s(g_99.f6, (safe_add_func_int32_t_s_s((g_211 |= (l_212 &= ((~((safe_mul_func_uint8_t_u_u(l_191, (((*g_117) |= 7L) && (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u((&l_59 == (void*)0), 5)), ((*l_155) & l_190)))))) <= l_190)) < (-10L)))), 0x32D4BDB7L)))), g_99.f6)) != 7L)) , 0xFFL)) || g_147) ^ g_40.f3.f0), g_40.f6)) , l_245);
                (*g_117) ^= (safe_rshift_func_uint8_t_u_u(l_212, ((void*)0 != l_251[3])));
                for (g_205 = 0; (g_205 <= 0); g_205 += 1)
                { 
                    uint16_t l_252 = 0x1DA3L;
                    l_190 ^= (l_252 = (l_185 == &g_205));
                    if (l_212)
                        continue;
                }
            }
        }
        for (g_147 = 0; (g_147 != (-11)); g_147--)
        { 
            int32_t l_255 = 0x08EF99ECL;
            int32_t l_256 = (-2L);
            int32_t l_258 = 0xEDF9DBF9L;
            int32_t l_260[7][3];
            int16_t *l_271 = &g_207[0];
            uint8_t *l_280[5][3][5] = {{{&l_100,(void*)0,&l_153,&l_100,&l_100},{&l_100,(void*)0,&l_153,&l_153,&l_100},{(void*)0,&l_100,(void*)0,&l_153,&l_100}},{{&l_100,&l_100,&l_153,&l_153,&l_153},{&l_100,&l_153,&l_153,&l_153,&l_153},{&l_153,&l_153,(void*)0,(void*)0,&l_100}},{{(void*)0,&l_100,&l_153,&l_153,&l_153},{&l_153,&l_153,&l_153,&l_100,&l_153},{(void*)0,&l_153,&l_153,&l_153,&l_153}},{{&l_153,&l_153,&l_153,(void*)0,&l_100},{&l_100,&l_153,&l_153,(void*)0,&l_153},{&l_100,&l_100,&l_100,&l_153,(void*)0}},{{(void*)0,(void*)0,&l_153,&l_100,&l_153},{&l_100,(void*)0,&l_100,&l_153,&l_100},{&l_100,(void*)0,&l_153,(void*)0,(void*)0}}};
            uint16_t *l_284 = (void*)0;
            uint16_t *l_285 = &g_60;
            int i, j, k;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 3; j++)
                    l_260[i][j] = 0xDFA2EC37L;
            }
            ++g_261;
            for (g_99.f1.f2 = (-17); (g_99.f1.f2 <= (-21)); --g_99.f1.f2)
            { 
                struct S1 *l_266 = (void*)0;
                if (l_260[6][1])
                    break;
                l_192[1] = l_164;
            }
            if ((((safe_lshift_func_uint8_t_u_u(g_261, ((safe_rshift_func_int8_t_s_u((((*l_271) = g_40.f3.f4) < l_255), 3)) == ((safe_rshift_func_int8_t_s_s(((g_148 = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((+((g_281[4][2]--) ^ (0x5C0FL != (++(*l_285))))), 2)), 10)) < ((safe_add_func_int32_t_s_s(((*l_155) & 0x560E697DL), (safe_add_func_uint16_t_u_u((((((safe_rshift_func_int8_t_s_s((-1L), g_204)) , g_99.f3.f1) > 65530UL) >= g_99.f3.f3) & 0x08549FEF6FF9AEA8LL), g_99.f3.f4)))) != l_260[6][1]))) <= g_261), l_256)) & l_258)))) || l_294) == 0x0737BC0BL))
            { 
                return l_70;
            }
            else
            { 
                uint32_t l_295 = 4294967295UL;
                if (l_295)
                { 
                    const struct S3 l_296[3][3] = {{{0UL},{18446744073709551607UL},{0UL}},{{0UL},{18446744073709551607UL},{0UL}},{{0UL},{18446744073709551607UL},{0UL}}};
                    int i, j;
                    return l_296[2][1];
                }
                else
                { 
                    struct S1 *l_299[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_164,&l_164},{&g_99.f4,(void*)0,&l_192[2],(void*)0,&g_99.f4,&l_192[2],(void*)0},{(void*)0,(void*)0,&l_164,(void*)0,&g_99.f4,(void*)0,&g_99.f4},{&g_99.f4,&l_164,&l_164,&g_99.f4,(void*)0,(void*)0,(void*)0}};
                    int i, j;
                    g_297 = &g_246;
                    if ((*g_117))
                        break;
                    g_99.f4 = l_164;
                }
            }
        }
        for (g_99.f3.f3 = 2; (g_99.f3.f3 >= 0); g_99.f3.f3 -= 1)
        { 
            struct S0 **l_301 = &l_300;
            int i;
            if (g_207[g_99.f3.f3])
                break;
            (*l_301) = l_300;
            return l_70;
        }
        for (g_99.f4.f0 = 0; (g_99.f4.f0 <= 6); g_99.f4.f0 += 1)
        { 
            uint16_t l_302 = 0UL;
            int32_t l_305 = 2L;
            int8_t l_306 = 0x28L;
            int32_t l_307 = 0xA4F2D4D6L;
            --l_302;
            --g_308;
            return (*l_245);
        }
    }
    for (g_60 = 0; (g_60 <= 57); g_60 = safe_add_func_int8_t_s_s(g_60, 1))
    { 
        g_313 = (void*)0;
    }
    if ((((safe_rshift_func_uint8_t_u_s(g_99.f1.f1, 7)) && ((*g_314) ^= ((((((4UL < g_40.f6) == g_99.f4.f1) != (g_99.f1.f2 = (g_99.f3.f2 = (((safe_add_func_uint64_t_u_u((((*l_323) = (safe_lshift_func_int8_t_s_u(g_281[2][2], (8L | ((safe_lshift_func_uint16_t_u_u(0xD7F0L, g_88[1][1])) == g_99.f1.f3))))) != 0xF9C7L), g_213)) != 1UL) < 6L)))) , g_148) || 0xE7F4204E5148E350LL) | g_281[4][2]))) , 0xCEDE38DBL))
    { 
        int64_t l_327 = 0xD1B6FB1F02209DB0LL;
        struct S2 *l_339 = (void*)0;
        int32_t l_405 = 0x168778ADL;
        int32_t l_411 = 6L;
        int32_t l_415 = 0L;
        int32_t l_416 = (-1L);
        int32_t l_419 = 2L;
        for (g_99.f1.f0 = 0; (g_99.f1.f0 != 57); g_99.f1.f0++)
        { 
            const struct S3 l_326 = {0x11DBAA1B3EB4133ELL};
            int32_t l_328 = (-7L);
            int32_t l_330 = 0x53DDF38AL;
            int32_t l_332 = 0x297AA096L;
            struct S2 *l_353 = &g_341;
            struct S1 *l_403[3];
            int32_t l_407 = 0x470DC0C2L;
            int64_t l_412 = 0xCBE227F4EFB914C6LL;
            int32_t l_424 = (-1L);
            int i;
            for (i = 0; i < 3; i++)
                l_403[i] = &g_341.f4;
            for (g_60 = 0; (g_60 <= 1); g_60 += 1)
            { 
                int32_t l_329 = 0xFA8646D6L;
                int32_t l_331 = 0x9EF4DCC8L;
                const struct S2 *l_340 = &g_341;
                int i, j;
                for (g_99.f3.f2 = 2; (g_99.f3.f2 >= 0); g_99.f3.f2 -= 1)
                { 
                    return l_326;
                }
                for (g_99.f6 = 0; (g_99.f6 <= 2); g_99.f6 += 1)
                { 
                    int32_t **l_336 = &g_117;
                    int32_t **l_337 = (void*)0;
                    int32_t **l_338 = &l_45[1];
                    int i, j;
                    l_327 |= g_281[g_99.f6][(g_60 + 1)];
                    g_333++;
                    (*l_338) = ((*l_336) = &g_206);
                }
                if (((g_231[0] , g_88[(g_60 + 1)][g_60]) && ((void*)0 != l_339)))
                { 
                    int i, j;
                    l_340 = p_38;
                    (*g_117) = g_88[g_60][g_60];
                    (*g_117) |= (((*g_297) , (safe_lshift_func_int8_t_s_s(((*g_297) , l_332), 4))) >= 0x720C5B31C882E834LL);
                }
                else
                { 
                    return l_326;
                }
                (*g_117) &= (safe_rshift_func_int8_t_s_u(((void*)0 != &g_68), 3));
            }
            for (g_99.f1.f3 = 0; (g_99.f1.f3 <= 2); g_99.f1.f3 += 1)
            { 
                uint16_t l_351 = 0UL;
                struct S3 l_354 = {0x0FE30266327F81C1LL};
                int32_t **l_381 = (void*)0;
                struct S1 l_383 = {0x24344784L,0xC2A00333L};
                struct S0 **l_387 = &g_352;
                struct S0 ***l_386 = &l_387;
                if ((*g_117))
                    break;
                for (g_99.f1.f2 = 0; (g_99.f1.f2 <= 2); g_99.f1.f2 += 1)
                { 
                    struct S2 *l_347[4][5][6] = {{{&g_99,&g_99,&g_99,&g_99,&g_99,&g_99},{&g_341,&g_99,&g_99,&g_341,&g_341,(void*)0},{&g_341,&g_341,(void*)0,&g_99,&g_99,&g_341},{&g_99,&g_99,(void*)0,&g_341,&g_341,&g_99},{&g_341,&g_99,&g_341,&g_341,&g_99,&g_341}},{{&g_99,(void*)0,&g_341,&g_341,&g_99,&g_99},{&g_341,&g_341,(void*)0,&g_99,&g_99,&g_341},{&g_341,(void*)0,&g_99,&g_341,&g_341,&g_99},{&g_99,&g_99,(void*)0,&g_341,&g_341,&g_99},{&g_341,(void*)0,&g_341,&g_341,&g_99,(void*)0}},{{&g_99,&g_341,&g_341,(void*)0,&g_99,&g_99},{&g_341,(void*)0,(void*)0,&g_341,&g_99,&g_99},{&g_341,&g_99,&g_99,(void*)0,&g_341,&g_341},{&g_99,&g_99,(void*)0,&g_341,&g_341,&g_99},{&g_341,&g_99,&g_341,&g_341,&g_99,&g_341}},{{&g_99,(void*)0,&g_341,&g_341,&g_99,&g_99},{&g_341,&g_341,(void*)0,&g_99,&g_99,&g_341},{&g_341,(void*)0,&g_99,&g_341,&g_341,&g_99},{&g_99,&g_99,(void*)0,&g_341,&g_341,&g_99},{&g_341,(void*)0,&g_341,&g_341,&g_99,(void*)0}}};
                    int32_t l_350 = (-1L);
                    uint8_t *l_367 = &g_368;
                    int32_t **l_382 = &g_117;
                    int i, j, k;
                    (*g_117) &= (l_134 , ((+l_327) & ((l_339 == l_347[0][4][2]) > (0x301228ECA0DB158ALL || ((((((safe_rshift_func_int16_t_s_s(((*p_38) , (l_350 | l_351)), l_351)) , g_352) == g_352) != g_99.f1.f0) , &g_341) != l_353)))));
                    (*g_117) ^= (l_354 , (~(safe_add_func_int64_t_s_s(((safe_mod_func_uint64_t_u_u(0UL, (safe_div_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_rshift_func_int16_t_s_s((l_350 == (safe_lshift_func_uint8_t_u_s((--(*l_367)), 0))), ((((((((safe_add_func_int16_t_s_s(0xADB6L, l_328)) ^ (safe_unary_minus_func_int16_t_s(((~(((((safe_mod_func_uint16_t_u_u((((*l_323)++) <= (((safe_add_func_int8_t_s_s(((((l_382 = l_381) == &g_117) & 0x49L) & l_327), 0L)) , l_328) > g_99.f6)), (-1L))) , l_383) , g_10) < l_326.f0) || 0x93L)) || g_99.f3.f2)))) & l_332) , l_350) >= l_327) == g_40.f1.f4) | l_350) >= 0x928BL))))), g_333)))) < (*g_314)), l_328))));
                    (*g_117) = (l_326.f0 , (*g_117));
                    if (l_384)
                        break;
                    (*g_117) = (+(l_327 <= (((*p_38) , g_308) ^ g_341.f4.f1)));
                }
                (*l_386) = &g_352;
            }
            if ((*g_117))
                continue;
            for (g_341.f1.f0 = 0; (g_341.f1.f0 <= 1); g_341.f1.f0 += 1)
            { 
                int64_t l_390 = 0xB68C037808A29CE0LL;
                int32_t *l_396[4];
                int32_t l_397 = 1L;
                struct S0 **l_399 = &g_352;
                struct S0 ***l_398 = &l_399;
                struct S1 *l_400[3];
                int32_t l_410 = 0x972C690CL;
                int32_t l_413 = 0x884396A7L;
                int32_t l_414 = 0x5446FAC3L;
                int32_t l_417 = (-5L);
                int32_t l_418 = 0x2FD1BB63L;
                int32_t l_420 = 6L;
                int32_t l_422 = 0L;
                int32_t l_423 = 0x3BE74048L;
                uint16_t l_425[6][1] = {{65530UL},{65530UL},{1UL},{65530UL},{65530UL},{1UL}};
                const struct S3 l_429 = {1UL};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_396[i] = &g_61;
                for (i = 0; i < 3; i++)
                    l_400[i] = &l_164;
                for (g_206 = 1; (g_206 >= 0); g_206 -= 1)
                { 
                    uint64_t l_388[3][4][2] = {{{0x99AFB89E422E2595LL,0x99AFB89E422E2595LL},{0x4D44978F3150E266LL,0x99AFB89E422E2595LL},{0x99AFB89E422E2595LL,0x4D44978F3150E266LL},{0x99AFB89E422E2595LL,0x99AFB89E422E2595LL}},{{0x4D44978F3150E266LL,0x99AFB89E422E2595LL},{0x99AFB89E422E2595LL,0x4D44978F3150E266LL},{0x99AFB89E422E2595LL,0x99AFB89E422E2595LL},{0x4D44978F3150E266LL,0x99AFB89E422E2595LL}},{{0x99AFB89E422E2595LL,0x4D44978F3150E266LL},{0x99AFB89E422E2595LL,0x99AFB89E422E2595LL},{0x4D44978F3150E266LL,0x99AFB89E422E2595LL},{0x99AFB89E422E2595LL,0x4D44978F3150E266LL}}};
                    int i, j, k;
                    l_388[2][3][0] |= ((void*)0 == &g_68);
                    if ((*g_117))
                        continue;
                }
                (*g_117) = (+(l_390 > l_390));
                (*g_117) &= ((safe_mod_func_uint16_t_u_u(((~l_390) | ((safe_mul_func_int16_t_s_s((((l_397 = ((l_390 , (*p_38)) , 7L)) , (g_99.f1.f2 , (l_332 || l_397))) > g_68), (*g_314))) & g_60)), 0x3FF3L)) < l_332);
                if ((*g_117))
                { 
                    struct S1 **l_401 = (void*)0;
                    struct S1 *l_402 = &g_341.f4;
                    int32_t l_404[3];
                    int32_t l_421 = 0x3B6660DCL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_404[i] = 0x6DBF31B7L;
                    (*g_117) = ((void*)0 == l_398);
                    l_403[2] = (l_402 = (l_400[2] = &l_164));
                    l_425[3][0]++;
                }
                else
                { 
                    int32_t **l_428 = &g_117;
                    (*l_428) = &g_211;
                    return l_429;
                }
            }
        }
    }
    else
    { 
        return l_70;
    }
    return l_70;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_4[i][j], "g_4[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_40.f0.f0, "g_40.f0.f0", print_hash_value);
    transparent_crc(g_40.f0.f1, "g_40.f0.f1", print_hash_value);
    transparent_crc(g_40.f1.f0, "g_40.f1.f0", print_hash_value);
    transparent_crc(g_40.f1.f1, "g_40.f1.f1", print_hash_value);
    transparent_crc(g_40.f1.f2, "g_40.f1.f2", print_hash_value);
    transparent_crc(g_40.f1.f3, "g_40.f1.f3", print_hash_value);
    transparent_crc(g_40.f1.f4, "g_40.f1.f4", print_hash_value);
    transparent_crc(g_40.f2, "g_40.f2", print_hash_value);
    transparent_crc(g_40.f3.f0, "g_40.f3.f0", print_hash_value);
    transparent_crc(g_40.f3.f1, "g_40.f3.f1", print_hash_value);
    transparent_crc(g_40.f3.f2, "g_40.f3.f2", print_hash_value);
    transparent_crc(g_40.f3.f3, "g_40.f3.f3", print_hash_value);
    transparent_crc(g_40.f3.f4, "g_40.f3.f4", print_hash_value);
    transparent_crc(g_40.f4.f0, "g_40.f4.f0", print_hash_value);
    transparent_crc(g_40.f4.f1, "g_40.f4.f1", print_hash_value);
    transparent_crc(g_40.f5, "g_40.f5", print_hash_value);
    transparent_crc(g_40.f6, "g_40.f6", print_hash_value);
    transparent_crc(g_40.f7, "g_40.f7", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_88[i][j], "g_88[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_99.f0.f0, "g_99.f0.f0", print_hash_value);
    transparent_crc(g_99.f0.f1, "g_99.f0.f1", print_hash_value);
    transparent_crc(g_99.f1.f0, "g_99.f1.f0", print_hash_value);
    transparent_crc(g_99.f1.f1, "g_99.f1.f1", print_hash_value);
    transparent_crc(g_99.f1.f2, "g_99.f1.f2", print_hash_value);
    transparent_crc(g_99.f1.f3, "g_99.f1.f3", print_hash_value);
    transparent_crc(g_99.f1.f4, "g_99.f1.f4", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3.f0, "g_99.f3.f0", print_hash_value);
    transparent_crc(g_99.f3.f1, "g_99.f3.f1", print_hash_value);
    transparent_crc(g_99.f3.f2, "g_99.f3.f2", print_hash_value);
    transparent_crc(g_99.f3.f3, "g_99.f3.f3", print_hash_value);
    transparent_crc(g_99.f3.f4, "g_99.f3.f4", print_hash_value);
    transparent_crc(g_99.f4.f0, "g_99.f4.f0", print_hash_value);
    transparent_crc(g_99.f4.f1, "g_99.f4.f1", print_hash_value);
    transparent_crc(g_99.f5, "g_99.f5", print_hash_value);
    transparent_crc(g_99.f6, "g_99.f6", print_hash_value);
    transparent_crc(g_99.f7, "g_99.f7", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_207[i], "g_207[i]", print_hash_value);

    }
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_213, "g_213", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_231[i].f0, "g_231[i].f0", print_hash_value);

    }
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_281[i][j], "g_281[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_298.f0, "g_298.f0", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_341.f0.f0, "g_341.f0.f0", print_hash_value);
    transparent_crc(g_341.f0.f1, "g_341.f0.f1", print_hash_value);
    transparent_crc(g_341.f1.f0, "g_341.f1.f0", print_hash_value);
    transparent_crc(g_341.f1.f1, "g_341.f1.f1", print_hash_value);
    transparent_crc(g_341.f1.f2, "g_341.f1.f2", print_hash_value);
    transparent_crc(g_341.f1.f3, "g_341.f1.f3", print_hash_value);
    transparent_crc(g_341.f1.f4, "g_341.f1.f4", print_hash_value);
    transparent_crc(g_341.f2, "g_341.f2", print_hash_value);
    transparent_crc(g_341.f3.f0, "g_341.f3.f0", print_hash_value);
    transparent_crc(g_341.f3.f1, "g_341.f3.f1", print_hash_value);
    transparent_crc(g_341.f3.f2, "g_341.f3.f2", print_hash_value);
    transparent_crc(g_341.f3.f3, "g_341.f3.f3", print_hash_value);
    transparent_crc(g_341.f3.f4, "g_341.f3.f4", print_hash_value);
    transparent_crc(g_341.f4.f0, "g_341.f4.f0", print_hash_value);
    transparent_crc(g_341.f4.f1, "g_341.f4.f1", print_hash_value);
    transparent_crc(g_341.f5, "g_341.f5", print_hash_value);
    transparent_crc(g_341.f6, "g_341.f6", print_hash_value);
    transparent_crc(g_341.f7, "g_341.f7", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_409[i][j][k], "g_409[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_741, "g_741", print_hash_value);
    transparent_crc(g_749.f0, "g_749.f0", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_765[i][j], "g_765[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_884.f0, "g_884.f0", print_hash_value);
    transparent_crc(g_942, "g_942", print_hash_value);
    transparent_crc(g_992, "g_992", print_hash_value);
    transparent_crc(g_1062, "g_1062", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1087[i], "g_1087[i]", print_hash_value);

    }
    transparent_crc(g_1160, "g_1160", print_hash_value);
    transparent_crc(g_1175, "g_1175", print_hash_value);
    transparent_crc(g_1207, "g_1207", print_hash_value);
    transparent_crc(g_1228, "g_1228", print_hash_value);
    transparent_crc(g_1319, "g_1319", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1367[i][j][k], "g_1367[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1368, "g_1368", print_hash_value);
    transparent_crc(g_1573, "g_1573", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1808.f0, "g_1808.f0", print_hash_value);
    transparent_crc(g_1851.f0.f0, "g_1851.f0.f0", print_hash_value);
    transparent_crc(g_1851.f0.f1, "g_1851.f0.f1", print_hash_value);
    transparent_crc(g_1851.f1.f0, "g_1851.f1.f0", print_hash_value);
    transparent_crc(g_1851.f1.f1, "g_1851.f1.f1", print_hash_value);
    transparent_crc(g_1851.f1.f2, "g_1851.f1.f2", print_hash_value);
    transparent_crc(g_1851.f1.f3, "g_1851.f1.f3", print_hash_value);
    transparent_crc(g_1851.f1.f4, "g_1851.f1.f4", print_hash_value);
    transparent_crc(g_1851.f2, "g_1851.f2", print_hash_value);
    transparent_crc(g_1851.f3.f0, "g_1851.f3.f0", print_hash_value);
    transparent_crc(g_1851.f3.f1, "g_1851.f3.f1", print_hash_value);
    transparent_crc(g_1851.f3.f2, "g_1851.f3.f2", print_hash_value);
    transparent_crc(g_1851.f3.f3, "g_1851.f3.f3", print_hash_value);
    transparent_crc(g_1851.f3.f4, "g_1851.f3.f4", print_hash_value);
    transparent_crc(g_1851.f4.f0, "g_1851.f4.f0", print_hash_value);
    transparent_crc(g_1851.f4.f1, "g_1851.f4.f1", print_hash_value);
    transparent_crc(g_1851.f5, "g_1851.f5", print_hash_value);
    transparent_crc(g_1851.f6, "g_1851.f6", print_hash_value);
    transparent_crc(g_1851.f7, "g_1851.f7", print_hash_value);
    transparent_crc(g_1852, "g_1852", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
