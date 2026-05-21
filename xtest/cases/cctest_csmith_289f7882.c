// SPDX-License-Identifier: MIT
// cctest_csmith_289f7882.c --- cctest case csmith_289f7882 (csmith seed 681539714)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x66f9970f */

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

// Options:   -s 681539714 -o /tmp/csmith_gen_63en6_pc/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int8_t  f1;
   int16_t  f2;
   uint16_t  f3;
   int32_t  f4;
   uint16_t  f5;
};

struct S1 {
   uint32_t  f0;
   const int8_t  f1;
   uint16_t  f2;
   const struct S0  f3;
};

union U2 {
   uint16_t  f0;
};


static int32_t g_2 = 0xB3152C58L;
static int32_t g_20 = 0x044653FFL;
static int16_t g_29 = (-1L);
static int32_t g_30 = 0x10CBEDFAL;
static int32_t g_32 = 0x6EF6F0C3L;
static int8_t g_33 = 0xE8L;
static uint16_t g_35 = 0x8A88L;
static uint16_t g_53 = 0UL;
static int32_t g_60[3] = {0x8A21DEC7L,0x8A21DEC7L,0x8A21DEC7L};
static int64_t g_63 = 0xEDC29BFBD42F9032LL;
static int32_t g_65 = 0L;
static uint64_t g_66 = 0x456A9E5FAF1BECDELL;
static uint64_t g_81 = 0xF0833481FF7B51EFLL;
static int32_t g_82[2][3][5] = {{{1L,1L,1L,1L,1L},{0L,0L,0L,0L,0L},{1L,1L,1L,1L,1L}},{{0L,0L,0L,0L,0L},{1L,1L,1L,1L,1L},{0L,0L,0L,0L,0L}}};
static union U2 g_98 = {65533UL};
static uint32_t g_168 = 0xD964FF40L;
static uint16_t g_199[4][4] = {{0x77FFL,0x77FFL,0x77FFL,0x77FFL},{0x77FFL,0x77FFL,0x77FFL,0x77FFL},{0x77FFL,0x77FFL,0x77FFL,0x77FFL},{0x77FFL,0x77FFL,0x77FFL,0x77FFL}};
static struct S1 g_212[5] = {{0UL,0x76L,0x7899L,{-4L,0x96L,0xF810L,1UL,4L,0x20A0L}},{0UL,0x76L,0x7899L,{-4L,0x96L,0xF810L,1UL,4L,0x20A0L}},{0UL,0x76L,0x7899L,{-4L,0x96L,0xF810L,1UL,4L,0x20A0L}},{0UL,0x76L,0x7899L,{-4L,0x96L,0xF810L,1UL,4L,0x20A0L}},{0UL,0x76L,0x7899L,{-4L,0x96L,0xF810L,1UL,4L,0x20A0L}}};
static uint64_t g_236 = 0x1C6D6D2730DB2345LL;
static uint8_t g_303 = 0x7FL;
static const struct S1 g_309[3][4] = {{{0xACD712F5L,0x23L,0x0DB3L,{1L,3L,0L,65535UL,1L,0xDB07L}},{0xDFBFE16FL,0x77L,0UL,{0x047BB794L,0xE2L,0x7A6FL,0x4FC0L,0L,0xF32CL}},{0xACD712F5L,0x23L,0x0DB3L,{1L,3L,0L,65535UL,1L,0xDB07L}},{0xACD712F5L,0x23L,0x0DB3L,{1L,3L,0L,65535UL,1L,0xDB07L}}},{{0xDFBFE16FL,0x77L,0UL,{0x047BB794L,0xE2L,0x7A6FL,0x4FC0L,0L,0xF32CL}},{0xDFBFE16FL,0x77L,0UL,{0x047BB794L,0xE2L,0x7A6FL,0x4FC0L,0L,0xF32CL}},{0x70B57E43L,0xB8L,0x48DEL,{1L,-1L,0L,0x4D6BL,0xEC55EA48L,1UL}},{0xDFBFE16FL,0x77L,0UL,{0x047BB794L,0xE2L,0x7A6FL,0x4FC0L,0L,0xF32CL}}},{{0xDFBFE16FL,0x77L,0UL,{0x047BB794L,0xE2L,0x7A6FL,0x4FC0L,0L,0xF32CL}},{0xACD712F5L,0x23L,0x0DB3L,{1L,3L,0L,65535UL,1L,0xDB07L}},{0xACD712F5L,0x23L,0x0DB3L,{1L,3L,0L,65535UL,1L,0xDB07L}},{0xDFBFE16FL,0x77L,0UL,{0x047BB794L,0xE2L,0x7A6FL,0x4FC0L,0L,0xF32CL}}}};
static const int16_t g_362 = (-7L);
static int32_t g_406[2] = {6L,6L};
static struct S0 g_435[3] = {{0xF61CB9C3L,0x96L,0xA7D3L,0x0CBAL,0L,0xFE8FL},{0xF61CB9C3L,0x96L,0xA7D3L,0x0CBAL,0L,0xFE8FL},{0xF61CB9C3L,0x96L,0xA7D3L,0x0CBAL,0L,0xFE8FL}};
static int64_t g_436 = 0x42185ECD898C2D4BLL;



static uint32_t  func_1(void);
static uint16_t  func_6(int8_t  p_7, uint16_t  p_8, int32_t  p_9, const struct S1  p_10);
static int8_t  func_11(uint32_t  p_12, uint32_t  p_13, uint32_t  p_14, int16_t  p_15);
static int16_t  func_39(union U2  p_40, int16_t  p_41);




static uint32_t  func_1(void)
{ 
    int8_t l_18[2][5];
    int32_t l_19 = 0xDA3C3D21L;
    int32_t l_22 = (-1L);
    int32_t l_23 = 0L;
    int32_t l_31 = (-1L);
    int32_t l_34[2][3][4] = {{{0xF1A0197CL,(-2L),(-2L),0xF1A0197CL},{(-2L),0xF1A0197CL,(-2L),(-2L)},{0xF1A0197CL,0xF1A0197CL,1L,0xF1A0197CL}},{{0xF1A0197CL,(-2L),(-2L),0xF1A0197CL},{(-2L),0xF1A0197CL,(-2L),(-2L)},{0xF1A0197CL,0xF1A0197CL,1L,0xF1A0197CL}}};
    union U2 l_42 = {9UL};
    int64_t l_387[5];
    uint16_t l_388 = 0x8597L;
    int16_t l_459 = (-7L);
    int8_t l_460 = (-1L);
    uint8_t l_461[5] = {0xCAL,0xCAL,0xCAL,0xCAL,0xCAL};
    struct S0 l_464[4][3][4] = {{{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}}},{{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}}},{{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}}},{{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}},{{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{0xBB6623FFL,0x13L,1L,0x2E19L,7L,0x223AL},{-9L,0x21L,1L,0xBD0EL,7L,0x6D2FL}}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
            l_18[i][j] = 0L;
    }
    for (i = 0; i < 5; i++)
        l_387[i] = 0L;
    for (g_2 = 13; (g_2 <= 29); g_2 = safe_add_func_uint8_t_u_u(g_2, 2))
    { 
        int32_t l_5 = 0L;
        int32_t l_17 = 0x64D64EA3L;
        int8_t l_21 = 0x8DL;
        int64_t l_24 = 0xEE1D4595A2E712C5LL;
        int32_t l_25 = 0x60D743CCL;
        int32_t l_26 = 0x3334ADC6L;
        int32_t l_27 = 9L;
        int32_t l_28 = 8L;
        int64_t l_38 = 1L;
        if (l_5)
            break;
        g_82[1][1][4] = ((g_29 = (func_6(func_11(l_5, ((safe_unary_minus_func_uint32_t_u(0xC279A20BL)) & (g_35--)), l_38, func_39(l_42, g_2)), g_199[1][1], g_60[2], g_309[2][3]) & l_34[1][2][0])) <= g_362);
    }
    for (g_32 = 0; (g_32 <= (-15)); g_32 = safe_sub_func_int16_t_s_s(g_32, 6))
    { 
        uint64_t l_370 = 1UL;
        struct S1 l_373 = {1UL,0L,0x8F4CL,{-1L,7L,2L,1UL,4L,0x4295L}};
        int32_t l_374 = 0xA91F54A6L;
        int32_t l_408 = 1L;
        int32_t l_409 = 0xBE153D72L;
        int32_t l_411[4][1] = {{(-1L)},{0x89DB1F58L},{(-1L)},{0x89DB1F58L}};
        int i, j;
        l_374 = ((((((safe_sub_func_uint8_t_u_u(1UL, ((safe_unary_minus_func_int64_t_s((safe_add_func_uint64_t_u_u(l_370, ((safe_div_func_uint8_t_u_u(l_34[1][2][0], (((g_33 = ((((l_373 , 0xA222C2ECCDB6E9C6LL) & 0x7A9457048CE3E4D3LL) ^ g_212[4].f3.f1) || l_19)) || l_373.f3.f2) || g_63))) > l_34[1][2][0]))))) >= g_362))) ^ l_373.f1) == l_42.f0) != 0xF61A1B219117F19FLL) || 0xB6F0L) ^ g_236);
        if ((g_82[0][1][0] = ((l_31 &= (safe_rshift_func_int8_t_s_u(g_60[2], 0))) < ((safe_sub_func_int8_t_s_s(l_373.f3.f5, (safe_sub_func_uint8_t_u_u((safe_div_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(l_18[1][2], (g_303 ^= (safe_div_func_int64_t_s_s((g_81 && l_19), 4UL))))), 0xDD78E7BEL)), l_387[2])))) , l_388))))
        { 
            int16_t l_395 = (-8L);
            int32_t l_407 = 0xE8106C00L;
            int32_t l_410 = 2L;
            for (l_42.f0 = 15; (l_42.f0 > 25); l_42.f0 = safe_add_func_uint8_t_u_u(l_42.f0, 5))
            { 
                if (l_373.f3.f2)
                    break;
            }
            for (g_66 = 0; (g_66 < 40); ++g_66)
            { 
                l_374 = (safe_add_func_int16_t_s_s((l_395 <= (g_212[4].f1 ^ (safe_sub_func_int16_t_s_s(l_373.f3.f5, g_32)))), g_29));
            }
            if (l_387[4])
            { 
                if (l_373.f3.f5)
                    break;
            }
            else
            { 
                uint32_t l_412[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_412[i] = 5UL;
                l_31 |= ((l_370 != ((safe_add_func_int32_t_s_s(g_20, g_212[4].f3.f5)) != ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_406[1] = (g_303--)), l_395)), l_373.f3.f0)) , 0xE5D9F7D4L))) | g_212[4].f0);
                if (l_373.f3.f0)
                    break;
                l_412[1]++;
            }
        }
        else
        { 
            int32_t l_417 = 1L;
            g_2 &= (safe_mul_func_uint8_t_u_u(l_417, g_63));
        }
    }
    if ((2L == 65535UL))
    { 
        uint32_t l_428 = 18446744073709551615UL;
        const int32_t l_433[5][4][1] = {{{0x00B130DBL},{0x3C78C16DL},{0x00B130DBL},{0L}},{{0x00B130DBL},{0x3C78C16DL},{0x00B130DBL},{0L}},{{0x00B130DBL},{0x3C78C16DL},{0x00B130DBL},{0L}},{{0x00B130DBL},{0x3C78C16DL},{0x00B130DBL},{0L}},{{0x00B130DBL},{0x3C78C16DL},{0x00B130DBL},{0L}}};
        int32_t l_456 = (-1L);
        int32_t l_457 = 1L;
        int32_t l_458[4][2][2] = {{{(-8L),(-8L)},{0x7CD3711BL,(-8L)}},{{(-8L),0x7CD3711BL},{(-8L),(-8L)}},{{0x7CD3711BL,(-8L)},{(-8L),0x7CD3711BL}},{{(-8L),(-8L)},{0x7CD3711BL,(-8L)}}};
        int i, j, k;
        for (g_236 = (-9); (g_236 >= 31); g_236 = safe_add_func_uint32_t_u_u(g_236, 1))
        { 
            uint8_t l_422 = 255UL;
            int32_t l_434 = 0xA9F41EF7L;
            if ((safe_add_func_int16_t_s_s(l_422, (g_53 = (safe_sub_func_uint64_t_u_u((((safe_mul_func_int16_t_s_s((l_428 |= (!l_422)), ((l_434 &= ((safe_div_func_int64_t_s_s((safe_div_func_int32_t_s_s((l_388 & l_433[4][1][0]), 0x2DD2E46EL)), l_422)) && 1UL)) , g_309[2][3].f3.f1))) && l_422) ^ g_60[2]), g_82[0][1][0]))))))
            { 
                g_435[0] = g_212[4].f3;
                if (l_433[2][0][0])
                    break;
                g_436 = g_309[2][3].f3.f1;
            }
            else
            { 
                return l_428;
            }
            for (g_66 = 0; (g_66 <= 34); ++g_66)
            { 
                g_82[0][1][0] = ((l_34[1][2][0] == (g_435[0].f1 = ((safe_rshift_func_int8_t_s_s(((g_212[4].f2 = g_212[4].f3.f1) > (safe_rshift_func_int8_t_s_u(((l_387[4] && (g_33 > 9L)) <= l_434), 1))), g_309[2][3].f1)) != g_212[4].f0))) >= g_212[4].f1);
                if (g_309[2][3].f3.f4)
                    continue;
            }
            if ((+(((safe_add_func_uint8_t_u_u((+g_199[1][1]), ((safe_add_func_int64_t_s_s((g_212[4].f3.f2 != l_422), (((((safe_add_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((g_435[0] , g_435[0].f5), l_422)) , 0L), 0x91C8L)) || 7UL) >= g_60[2]) < g_435[0].f0) >= g_98.f0))) != g_20))) , g_309[2][3].f3.f2) > 0UL)))
            { 
                g_435[0].f0 ^= (l_34[1][2][0] |= 0x6590245AL);
                if (g_435[0].f5)
                    break;
            }
            else
            { 
                return l_422;
            }
        }
        l_34[1][1][0] = (~(safe_mod_func_int64_t_s_s(g_199[1][1], 0x9068611746868B74LL)));
        --l_461[3];
    }
    else
    { 
        int32_t l_465 = 0xD315E6F9L;
        int32_t l_466 = 0x9DD2755AL;
        int32_t l_467 = 0x2126D909L;
        int32_t l_468 = 0x7EBDB46AL;
        int32_t l_469 = (-8L);
        int32_t l_470 = 0xDB49FD2AL;
        int32_t l_471 = (-8L);
        int32_t l_472[5] = {0x38F4CC29L,0x38F4CC29L,0x38F4CC29L,0x38F4CC29L,0x38F4CC29L};
        uint8_t l_473 = 1UL;
        int i;
        l_464[0][2][2] = g_309[2][3].f3;
        --l_473;
    }
    return g_35;
}



static uint16_t  func_6(int8_t  p_7, uint16_t  p_8, int32_t  p_9, const struct S1  p_10)
{ 
    uint64_t l_320 = 0xE5EF0ED297B412A5LL;
    int32_t l_332[5] = {0x1A585898L,0x1A585898L,0x1A585898L,0x1A585898L,0x1A585898L};
    int32_t l_333 = (-1L);
    uint32_t l_361 = 0xFF3CF337L;
    int i;
    for (g_66 = 3; (g_66 >= 49); g_66 = safe_add_func_int8_t_s_s(g_66, 7))
    { 
        uint16_t l_314 = 0UL;
        int32_t l_319[1][4] = {{0xB828BC55L,0xB828BC55L,0xB828BC55L,0xB828BC55L}};
        int i, j;
        l_319[0][0] |= ((0x0163L > (safe_add_func_uint32_t_u_u(((l_314 == (-1L)) | (safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(p_9, p_10.f1)), p_10.f1))), g_309[2][3].f3.f0))) || g_168);
    }
    l_320--;
    if ((((safe_div_func_int8_t_s_s(((((g_303 = (0x1BC9CADE4583559ALL && ((safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((!((l_333 = (l_332[2] = ((safe_sub_func_uint64_t_u_u(p_10.f3.f2, g_35)) > (0xE997L != 0xF73FL)))) <= l_320)), p_10.f2)), l_320)) != g_199[1][1]))) != g_212[4].f3.f2) != p_8) , l_332[2]), 0x76L)) <= 0x6A6035907AE64AC9LL) > g_81))
    { 
        for (p_8 = 0; (p_8 == 6); p_8 = safe_add_func_int8_t_s_s(p_8, 1))
        { 
            if (g_60[2])
                break;
        }
    }
    else
    { 
        uint8_t l_359 = 1UL;
        int32_t l_360 = 0xA6235A72L;
        p_9 = (l_361 = (safe_add_func_int32_t_s_s((l_360 = ((safe_add_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((safe_add_func_int32_t_s_s((l_333 & (l_332[0] = ((safe_mul_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((g_30 = (((safe_div_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_7, (safe_add_func_int8_t_s_s((g_309[2][3].f3.f1 , ((+(p_10.f2 == p_10.f0)) && l_320)), g_29)))), p_10.f1)) && l_359) == g_2)) , g_212[4].f2), 9)), p_10.f0)), 0xFADA9A81L)), 0x56L)) > 1L))), p_10.f3.f3)), 13)), g_309[2][3].f3.f1)) || 0xE8L)), 4294967287UL)));
    }
    return g_81;
}



static int8_t  func_11(uint32_t  p_12, uint32_t  p_13, uint32_t  p_14, int16_t  p_15)
{ 
    int16_t l_299 = 0x1EA1L;
    int32_t l_300 = 0x452C0C4FL;
    int32_t l_301 = (-1L);
    int32_t l_302[4][5] = {{(-1L),0xBE6784F5L,0xBE6784F5L,(-1L),0L},{(-1L),0xBE6784F5L,0xBE6784F5L,(-1L),0L},{(-1L),0xBE6784F5L,0xBE6784F5L,(-1L),0L},{(-1L),0xBE6784F5L,0xBE6784F5L,(-1L),0L}};
    uint32_t l_306 = 1UL;
    int i, j;
    g_303++;
    --l_306;
    return g_212[4].f2;
}



static int16_t  func_39(union U2  p_40, int16_t  p_41)
{ 
    int8_t l_43[5] = {0L,0L,0L,0L,0L};
    uint64_t l_52 = 1UL;
    int32_t l_54 = 0x674E6A83L;
    int32_t l_56 = 4L;
    struct S1 l_75 = {4294967295UL,0x66L,65535UL,{-1L,0x32L,1L,0UL,0x758019D4L,0xE415L}};
    uint16_t l_76 = 8UL;
    int32_t l_90 = 0L;
    int32_t l_91[4][5] = {{0xF81C7DC7L,8L,8L,0xF81C7DC7L,0x3BB6A5CEL},{0x4290833CL,0x41CECC2FL,0x41CECC2FL,0x4290833CL,0x1FF5BAEDL},{0xC381FEC7L,0xF81C7DC7L,0xF81C7DC7L,0xC381FEC7L,0x81D0925AL},{0x790E36F3L,0x4290833CL,0x4290833CL,0x790E36F3L,0x296F1EF3L}};
    int32_t l_92 = 0x562E968FL;
    int32_t l_93 = 0xF5D8E54FL;
    int32_t l_94[3];
    union U2 l_114 = {65534UL};
    uint32_t l_129[5] = {0xD5174218L,0xD5174218L,0xD5174218L,0xD5174218L,0xD5174218L};
    const uint64_t l_175 = 0xAB10FF70A894EA7FLL;
    int32_t l_178 = 0x0CC145FEL;
    int64_t l_200 = 0x906DC5B995B8313BLL;
    int16_t l_273 = 0xC04CL;
    int64_t l_283 = 3L;
    uint8_t l_293 = 0xF5L;
    int i, j;
    for (i = 0; i < 3; i++)
        l_94[i] = 1L;
    if ((l_43[2] > (+g_33)))
    { 
        int64_t l_55 = 1L;
        int32_t l_57 = 0L;
        int32_t l_61 = (-1L);
        int32_t l_62 = 0x25AD92EDL;
        int32_t l_64 = (-7L);
        l_57 &= ((((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(g_2, (p_41 ^ (l_56 &= (l_55 = (safe_mul_func_int16_t_s_s((0x5B04L | (safe_unary_minus_func_int8_t_s((l_54 = (((g_53 = (0xCEDE6A6B93DCEDB1LL | l_52)) == 3L) && l_43[3]))))), 65530UL))))))), l_43[1])) != 1L) & p_40.f0) < p_40.f0);
        if ((((safe_lshift_func_uint8_t_u_u((++g_66), (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((0xB7F04272L && (0x8859L || g_20)) > ((safe_add_func_int16_t_s_s((l_57 = (l_75 , l_76)), p_40.f0)) < p_40.f0)), p_41)), l_75.f2)))) >= l_56) != 6L))
        { 
            struct S0 l_85[5] = {{-5L,0x4EL,0x7962L,0x4A10L,0xC2894B96L,65530UL},{-5L,0x4EL,0x7962L,0x4A10L,0xC2894B96L,65530UL},{-5L,0x4EL,0x7962L,0x4A10L,0xC2894B96L,65530UL},{-5L,0x4EL,0x7962L,0x4A10L,0xC2894B96L,65530UL},{-5L,0x4EL,0x7962L,0x4A10L,0xC2894B96L,65530UL}};
            int i;
            l_54 = (0x03L ^ p_41);
            g_82[0][1][0] = (g_30 = (safe_lshift_func_int8_t_s_s(g_33, (g_81 = ((l_54 = (((safe_div_func_int64_t_s_s(0xA85F8785D54DBC71LL, l_62)) && p_41) < p_40.f0)) != g_66)))));
            l_62 = ((safe_mod_func_uint8_t_u_u((l_85[2] , 255UL), 255UL)) & ((g_20 | g_81) > g_53));
        }
        else
        { 
            return g_81;
        }
    }
    else
    { 
        uint8_t l_88 = 0xFFL;
        int32_t l_89[4] = {0x21CC8E03L,0x21CC8E03L,0x21CC8E03L,0x21CC8E03L};
        uint32_t l_95 = 18446744073709551615UL;
        int i;
        g_82[0][1][0] = (safe_div_func_int16_t_s_s(g_2, l_88));
        --l_95;
    }
    if ((g_82[0][1][0] = ((((((((g_33 = (p_41 <= (((g_98 , (safe_div_func_int32_t_s_s(((safe_mod_func_int32_t_s_s((0x6FL | p_40.f0), p_41)) >= l_75.f0), 2UL))) != p_41) && g_81))) | g_60[2]) , 0xB709D1F70EA76F41LL) < 0x13F2C8C67737D685LL) & 0xAFL) < g_29) <= l_94[2]) , 0L)))
    { 
        int16_t l_107 = 1L;
        int8_t l_108[4];
        int8_t l_109 = 0L;
        int i;
        for (i = 0; i < 4; i++)
            l_108[i] = 0xCAL;
        l_54 = ((((safe_sub_func_uint32_t_u_u((l_75.f3.f5 && g_29), (l_108[0] = (((-1L) || (safe_div_func_int8_t_s_s(9L, l_107))) , 5UL)))) <= l_75.f3.f1) || l_108[0]) & l_107);
        l_109 = l_52;
        for (g_98.f0 = (-24); (g_98.f0 > 18); ++g_98.f0)
        { 
            return l_108[3];
        }
    }
    else
    { 
        uint32_t l_128[4];
        int32_t l_136 = (-10L);
        int32_t l_138 = 0x32B3D10AL;
        int32_t l_139 = 0xEE216E9BL;
        int32_t l_141 = 4L;
        int32_t l_143 = 0xD9D7C220L;
        int32_t l_144 = 0x604D7DB4L;
        int32_t l_147 = 0x2571DCDCL;
        int32_t l_148 = 0x0A5B6558L;
        int32_t l_151 = 0xC334F837L;
        int32_t l_152 = 1L;
        int32_t l_153 = (-1L);
        int32_t l_154 = 0L;
        int32_t l_155[3];
        int8_t l_160 = (-1L);
        int i;
        for (i = 0; i < 4; i++)
            l_128[i] = 0x64CB8E99L;
        for (i = 0; i < 3; i++)
            l_155[i] = 1L;
        if (((safe_rshift_func_int8_t_s_u((((l_114 , l_114) , (l_128[1] &= (safe_lshift_func_uint8_t_u_s((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((g_63 || (~(safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((g_53 = ((safe_mod_func_uint64_t_u_u(0x4A57D0CF7338C8B0LL, g_60[2])) < p_40.f0)), p_40.f0)), 4)))), 2)), p_40.f0)), g_98.f0)))) < (-1L)), l_129[4])) >= g_30))
        { 
            uint32_t l_132 = 0x5F88FA86L;
            g_82[0][1][0] = ((safe_mod_func_uint64_t_u_u(g_66, l_132)) | 0L);
            g_30 ^= (safe_mul_func_uint8_t_u_u(l_128[1], g_63));
        }
        else
        { 
            int32_t l_135 = (-1L);
            int32_t l_137 = 0x7BF9FC00L;
            int32_t l_140 = 0x4D8AA346L;
            int32_t l_142 = (-7L);
            int32_t l_145 = 0L;
            int32_t l_146 = 0xB45B50DBL;
            int32_t l_149 = 0L;
            int32_t l_150 = 0xD2CE5EEEL;
            int32_t l_156 = 0L;
            int32_t l_157 = 0L;
            int32_t l_158 = 0xDF838165L;
            int32_t l_159 = 9L;
            int32_t l_161 = 0x38CC87C9L;
            int32_t l_162 = (-5L);
            int32_t l_163 = 0L;
            int32_t l_164 = 0x83A9A7DBL;
            int32_t l_165[5][2][2] = {{{0xC6FD5171L,1L},{0x81B76BFBL,0x1645DA59L}},{{1L,0x1645DA59L},{0x81B76BFBL,1L}},{{0xC6FD5171L,0xC6FD5171L},{0xC6FD5171L,1L}},{{0x81B76BFBL,0x1645DA59L},{1L,0x1645DA59L}},{{0x81B76BFBL,1L},{0xC6FD5171L,0xC6FD5171L}}};
            int64_t l_166 = 1L;
            int16_t l_167 = (-2L);
            int i, j, k;
            g_168++;
        }
    }
    if (((((safe_mul_func_uint16_t_u_u((safe_add_func_int64_t_s_s((((l_175 & (safe_mod_func_uint8_t_u_u(((g_82[0][1][0] = (l_178 , (safe_div_func_int64_t_s_s((l_56 = (+(safe_mul_func_int8_t_s_s(((((l_93 = (+((((g_30 &= ((safe_sub_func_int8_t_s_s(p_41, (safe_add_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_40.f0, p_40.f0)), 0xE7L)) > p_40.f0), g_32)) | l_75.f3.f4), l_56)), l_75.f3.f2)) || g_82[1][1][1]) <= p_40.f0), g_199[1][1])))) & g_168)) && l_75.f2) ^ 0x00016984L) < g_33))) , g_2) <= 254UL) == l_129[4]), p_40.f0)))), l_94[2])))) < 0xCE3015E8L), g_33))) < l_75.f0) ^ l_75.f3.f0), p_40.f0)), 65528UL)) > l_178) || l_200) , (-1L)))
    { 
        uint32_t l_209 = 8UL;
        struct S1 l_222[5][2] = {{{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}},{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}}},{{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}},{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}}},{{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}},{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}}},{{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}},{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}}},{{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}},{0xF2B3A501L,0x57L,0x89F2L,{0x80F63046L,0x21L,0x296BL,9UL,0xB1666AC2L,1UL}}}};
        int i, j;
        for (l_93 = 0; (l_93 >= 15); ++l_93)
        { 
            uint32_t l_204 = 0x8D4344C0L;
            int32_t l_205 = 0xBE0E5867L;
            uint8_t l_214 = 1UL;
            if (((((((~3UL) > (l_204 &= (p_40.f0 , ((0xD6D6L < p_40.f0) >= l_94[2])))) != l_205) == g_63) < g_30) && g_66))
            { 
                uint16_t l_206[5][4][4] = {{{65532UL,0x7DA6L,0x1161L,6UL},{9UL,65530UL,1UL,0x31FAL},{0xCA19L,0x67E8L,6UL,65531UL},{6UL,65531UL,0UL,8UL}},{{65531UL,65530UL,1UL,65528UL},{65526UL,65532UL,65532UL,65526UL},{0x1161L,0x31FAL,2UL,65528UL},{65531UL,65526UL,0x2547L,0xAEFDL}},{{65528UL,0x6776L,6UL,0xAEFDL},{0UL,65526UL,0x67E8L,65528UL},{9UL,0x31FAL,0x09B6L,65526UL},{0x7DA6L,65532UL,0x1161L,65528UL}},{{2UL,65530UL,0x67E8L,8UL},{0xCA19L,65531UL,1UL,65531UL},{65528UL,0x67E8L,0UL,0x31FAL},{0x67E8L,65530UL,2UL,6UL}},{{65526UL,0x7DA6L,0xDC01L,65526UL},{65526UL,8UL,2UL,0x7C5EL},{0x67E8L,65526UL,0UL,0x1F4FL},{65528UL,0xF0B0L,1UL,0xAEFDL}}};
                int i, j, k;
                l_206[2][1][2]++;
                if (l_206[3][0][3])
                    continue;
                l_209 ^= p_40.f0;
            }
            else
            { 
                int8_t l_213 = 1L;
                int32_t l_217 = (-1L);
                l_214 = ((((p_41 < (0xE0L > (l_213 = ((g_212[4] , g_212[4].f3.f4) >= g_30)))) || p_41) , g_168) || 0xCB7A2258L);
                g_82[0][1][0] |= (g_199[1][1] < ((((0x6EL != g_212[4].f3.f2) ^ (((((((++g_212[4].f0) < p_40.f0) == l_204) <= 0x3FC7F965L) , p_41) != g_60[2]) & l_94[0])) == l_209) > g_32));
            }
            if (((g_212[4].f3.f4 , (safe_mul_func_uint16_t_u_u((l_222[0][1] , (safe_rshift_func_uint16_t_u_s((((g_212[4].f3.f4 | (safe_mod_func_int8_t_s_s(((l_205 = l_222[0][1].f3.f4) <= l_209), 0x2FL))) & l_75.f3.f1) || g_212[4].f3.f5), l_214))), g_199[1][1]))) == g_82[0][1][0]))
            { 
                int32_t l_235 = 6L;
                int32_t l_237 = 9L;
                g_30 ^= ((safe_mul_func_int8_t_s_s((g_236 = (l_235 &= (safe_add_func_uint64_t_u_u(((-7L) > (g_33 ^= ((safe_div_func_uint8_t_u_u(8UL, (safe_sub_func_int32_t_s_s(0x1FC11684L, (p_40.f0 >= 4294967295UL))))) < 0xD2E55EC7L))), 0x1012F7A823A494EFLL)))), l_237)) , 0xD3EB170DL);
            }
            else
            { 
                int64_t l_249 = 0x8E4A0112709D279ELL;
                l_205 &= (safe_div_func_int64_t_s_s(g_212[4].f3.f4, (safe_add_func_int64_t_s_s(g_33, p_40.f0))));
                l_56 = (l_222[0][1].f3.f5 && (safe_mul_func_uint8_t_u_u(((((p_41 && (safe_div_func_uint32_t_u_u(((-1L) | (!(safe_sub_func_uint32_t_u_u(l_222[0][1].f1, 5UL)))), 0x61453E12L))) ^ g_20) <= 0xC95F2445L) | l_249), 255UL)));
            }
        }
    }
    else
    { 
        int32_t l_260 = 0x429E244CL;
        int32_t l_284 = 0x56E3ABC2L;
        int32_t l_286 = 0xAA44A49AL;
        int32_t l_288 = (-1L);
        int32_t l_289 = 0x7D05AA68L;
        int32_t l_291[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i;
        if (l_75.f3.f1)
        { 
            int32_t l_261 = 0x8CD26204L;
            l_260 = ((3UL != ((((safe_mul_func_int8_t_s_s((l_75.f3.f4 != (g_82[1][1][0] = (safe_div_func_uint64_t_u_u((p_40.f0 && (l_261 = (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s((((((safe_lshift_func_uint16_t_u_s((1UL < 0x6AL), g_63)) == g_32) , 249UL) ^ 0x9EL) && l_260), p_41)) <= p_41), 0x46DCAA26L)))), l_260)))), l_94[2])) <= g_212[4].f1) || g_2) != g_236)) <= l_94[2]);
        }
        else
        { 
            int16_t l_265 = 2L;
            int32_t l_269[4];
            struct S0 l_274 = {-1L,-9L,-1L,1UL,0x3AACA498L,0x6F32L};
            int16_t l_287 = 0xA820L;
            int i;
            for (i = 0; i < 4; i++)
                l_269[i] = 0x5476D4B3L;
            if (((((!((g_82[1][2][1] |= g_20) < p_40.f0)) , ((safe_mul_func_int16_t_s_s(((l_265 = (g_63 = l_260)) , ((((((safe_add_func_uint32_t_u_u((~l_75.f0), 0x6B8E5C99L)) > l_260) >= g_66) && l_265) , p_41) , p_40.f0)), l_269[0])) & 0L)) | l_91[3][0]) | p_41))
            { 
                l_92 &= (g_33 | (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint8_t_u_u(l_273, p_41)))));
            }
            else
            { 
                int32_t l_282 = 1L;
                l_274 = g_212[4].f3;
                l_282 = (safe_div_func_int64_t_s_s((((9L <= 4L) , (!((l_260 = (p_41 = (((g_30 = (safe_mul_func_uint8_t_u_u(p_40.f0, (((safe_div_func_int32_t_s_s(g_212[4].f0, p_40.f0)) == p_41) && l_76)))) != g_20) != 0x33L))) | g_212[4].f3.f4))) != 0xAE7DL), p_40.f0));
            }
            if ((l_129[4] > l_260))
            { 
                int64_t l_285 = 1L;
                int32_t l_290 = 0x014A8628L;
                int32_t l_292[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_292[i] = 0xAC4F3AD5L;
                ++l_293;
                l_291[3] ^= (!p_41);
                g_82[0][1][0] = (g_212[4].f3 , ((safe_sub_func_uint32_t_u_u((((((g_212[4].f0 = p_40.f0) , p_41) != (-1L)) && p_40.f0) && (-1L)), p_41)) && p_40.f0));
            }
            else
            { 
                return l_91[1][0];
            }
            l_274 = l_75.f3;
        }
    }
    return g_2;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_60[i], "g_60[i]", print_hash_value);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_82[i][j][k], "g_82[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_199[i][j], "g_199[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_212[i].f0, "g_212[i].f0", print_hash_value);
        transparent_crc(g_212[i].f1, "g_212[i].f1", print_hash_value);
        transparent_crc(g_212[i].f2, "g_212[i].f2", print_hash_value);
        transparent_crc(g_212[i].f3.f0, "g_212[i].f3.f0", print_hash_value);
        transparent_crc(g_212[i].f3.f1, "g_212[i].f3.f1", print_hash_value);
        transparent_crc(g_212[i].f3.f2, "g_212[i].f3.f2", print_hash_value);
        transparent_crc(g_212[i].f3.f3, "g_212[i].f3.f3", print_hash_value);
        transparent_crc(g_212[i].f3.f4, "g_212[i].f3.f4", print_hash_value);
        transparent_crc(g_212[i].f3.f5, "g_212[i].f3.f5", print_hash_value);

    }
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_309[i][j].f0, "g_309[i][j].f0", print_hash_value);
            transparent_crc(g_309[i][j].f1, "g_309[i][j].f1", print_hash_value);
            transparent_crc(g_309[i][j].f2, "g_309[i][j].f2", print_hash_value);
            transparent_crc(g_309[i][j].f3.f0, "g_309[i][j].f3.f0", print_hash_value);
            transparent_crc(g_309[i][j].f3.f1, "g_309[i][j].f3.f1", print_hash_value);
            transparent_crc(g_309[i][j].f3.f2, "g_309[i][j].f3.f2", print_hash_value);
            transparent_crc(g_309[i][j].f3.f3, "g_309[i][j].f3.f3", print_hash_value);
            transparent_crc(g_309[i][j].f3.f4, "g_309[i][j].f3.f4", print_hash_value);
            transparent_crc(g_309[i][j].f3.f5, "g_309[i][j].f3.f5", print_hash_value);

        }
    }
    transparent_crc(g_362, "g_362", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_406[i], "g_406[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_435[i].f0, "g_435[i].f0", print_hash_value);
        transparent_crc(g_435[i].f1, "g_435[i].f1", print_hash_value);
        transparent_crc(g_435[i].f2, "g_435[i].f2", print_hash_value);
        transparent_crc(g_435[i].f3, "g_435[i].f3", print_hash_value);
        transparent_crc(g_435[i].f4, "g_435[i].f4", print_hash_value);
        transparent_crc(g_435[i].f5, "g_435[i].f5", print_hash_value);

    }
    transparent_crc(g_436, "g_436", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
