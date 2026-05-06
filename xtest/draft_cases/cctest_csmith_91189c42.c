// SPDX-License-Identifier: MIT
// cctest_csmith_91189c42.c --- cctest case csmith_91189c42 (csmith seed 2434309186)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xef7eaa9d */

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

// Options:   -s 2434309186 -o /tmp/csmith_gen_1t5l_g5f/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   unsigned f0 : 15;
   int64_t  f1;
   signed f2 : 16;
   int64_t  f3;
};

union U1 {
   int64_t  f0;
   uint32_t  f1;
   signed f2 : 17;
   uint16_t  f3;
};


static uint32_t g_2 = 0xA77C8748L;
static uint16_t g_26 = 0x8787L;
static uint64_t g_43 = 0x210CBEDFA90EF874LL;
static union U1 g_45 = {0L};
static int32_t g_67 = 0x0BB1DCEDL;
static uint8_t g_68 = 255UL;
static int32_t g_74 = (-1L);
static uint32_t g_106 = 18446744073709551615UL;
static struct S0 g_107[5] = {{115,0xDC5007C8A85F8785LL,141,9L},{115,0xDC5007C8A85F8785LL,141,9L},{115,0xDC5007C8A85F8785LL,141,9L},{115,0xDC5007C8A85F8785LL,141,9L},{115,0xDC5007C8A85F8785LL,141,9L}};
static uint32_t g_151 = 2UL;
static uint8_t g_165 = 0UL;
static struct S0 g_190 = {140,0xF057B95470CACEDFLL,-71,0x1556E8D107E331B4LL};
static uint8_t g_195[5][4][2] = {{{0xF2L,1UL},{0xCCL,0xB6L},{0xF2L,0xB6L},{0xCCL,1UL}},{{0xF2L,1UL},{0xCCL,0xB6L},{0xF2L,0xB6L},{0xCCL,1UL}},{{0xF2L,1UL},{0xCCL,0xB6L},{0xF2L,0xB6L},{0xCCL,1UL}},{{0xF2L,1UL},{0xCCL,0xB6L},{0xF2L,0xB6L},{0xCCL,1UL}},{{0xF2L,1UL},{0xCCL,0xB6L},{0xF2L,0xB6L},{0xCCL,1UL}}};
static int8_t g_234 = 0L;
static int64_t g_272[3] = {0xA35D59E726B2BAEALL,0xA35D59E726B2BAEALL,0xA35D59E726B2BAEALL};
static const int32_t g_273[3][5][5] = {{{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L}},{{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L}},{{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L},{1L,0x7921FCF2L,1L,1L,1L}}};



static int8_t  func_1(void);
static int16_t  func_11(int64_t  p_12, const uint8_t  p_13, union U1  p_14, const uint64_t  p_15);
static int64_t  func_16(uint16_t  p_17, uint32_t  p_18);
static uint16_t  func_21(uint32_t  p_22, uint16_t  p_23, union U1  p_24);




static int8_t  func_1(void)
{ 
    int32_t l_3 = 0x5A23E86FL;
    int8_t l_41[4] = {0x3CL,0x3CL,0x3CL,0x3CL};
    int32_t l_44[5][2];
    int8_t l_207 = 0xB6L;
    uint64_t l_209 = 0x3F5755E19477FFDDLL;
    struct S0 l_226 = {139,0L,110,0x49C65317659B8041LL};
    uint32_t l_244[5][1][2] = {{{0x9B1D4343L,0x9B1D4343L}},{{0UL,0x9B1D4343L}},{{0x9B1D4343L,0UL}},{{0x9B1D4343L,0x9B1D4343L}},{{0UL,0x9B1D4343L}}};
    uint64_t l_260 = 18446744073709551610UL;
    int32_t l_274 = 1L;
    int32_t l_277[3][3] = {{1L,(-1L),(-1L)},{1L,(-1L),(-1L)},{1L,(-1L),(-1L)}};
    int8_t l_278 = 0xFEL;
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_44[i][j] = (-1L);
    }
    if ((g_2 | 0UL))
    { 
        uint32_t l_4 = 0UL;
        int32_t l_25 = (-1L);
        int32_t l_42[2];
        union U1 l_187 = {1L};
        int i;
        for (i = 0; i < 2; i++)
            l_42[i] = (-1L);
        g_195[0][1][0] ^= ((l_4--) == (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint16_t_u_s(0xD19CL, 2)) , func_11(func_16(((safe_mod_func_uint8_t_u_u((l_44[3][1] = (l_3 >= ((func_21((--g_26), (l_44[3][1] &= ((safe_div_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(((((safe_div_func_int16_t_s_s(l_3, (g_43 &= (safe_sub_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_41[0], l_42[1])), 0x7D17L)) <= 0xA68FL), g_2))))) && g_2) <= g_2) | l_42[1]), g_2)) >= g_2), 1L)) < g_2)), g_45) != 0x1C7DL) > 0UL))), l_42[1])) , g_45.f2), l_25), l_42[0], l_187, g_67)), 13)));
        g_107[1].f2 = 0xDB8501E2L;
        g_74 = g_106;
    }
    else
    { 
        uint64_t l_206 = 0x44356CBF89ECF18CLL;
        int32_t l_208 = (-1L);
        union U1 l_221 = {0xC906DC5B995B8313LL};
lbl_261:
        if (((((l_208 = (((((safe_mod_func_int32_t_s_s(((((((g_151 == (safe_div_func_int32_t_s_s(((safe_lshift_func_int16_t_s_u(0x173EL, ((((safe_lshift_func_uint16_t_u_u((g_107[1].f3 , (((g_43 & l_44[3][1]) > 0x892DAB10FF70A894LL) <= 0L)), 2)) , g_165) || g_107[1].f2) >= g_43))) == 0xBBL), 0xEB5F6837L))) & 0x0C34L) , g_107[1].f0) != l_41[0]) >= g_195[4][2][0]) ^ l_206), l_207)) < 65535UL) >= l_206) || 0xD509144EL) && l_206)) <= g_107[1].f1) > l_3) & g_195[0][1][0]))
        { 
            g_190.f2 = (g_107[1].f2 = 7L);
            l_209--;
        }
        else
        { 
            int32_t l_215 = 0x8FF1440BL;
            for (g_26 = 0; (g_26 > 10); g_26 = safe_add_func_int32_t_s_s(g_26, 5))
            { 
                const uint8_t l_214 = 246UL;
                l_215 = l_214;
                return g_190.f0;
            }
        }
        for (g_106 = 1; (g_106 > 3); ++g_106)
        { 
            uint16_t l_220 = 0x4A25L;
            int8_t l_233 = (-1L);
            int32_t l_245 = 0x9F66EA20L;
            l_221.f2 = ((((safe_add_func_int16_t_s_s(1L, l_220)) & (((l_221 , (safe_sub_func_uint8_t_u_u((safe_div_func_uint8_t_u_u((((0x51L > (-2L)) ^ g_43) <= 0x14L), g_67)), g_67))) != 0x61L) == l_220)) >= g_45.f3) & 0x5AACL);
            l_226 = (g_195[0][1][0] , (g_106 , g_190));
            l_245 = (safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(((g_234 |= (safe_add_func_int16_t_s_s(l_206, (l_233 &= (l_221.f2 | 1L))))) , ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u((((((((((safe_unary_minus_func_uint16_t_u((g_45.f3 = (safe_mul_func_int8_t_s_s(((((l_208 >= l_206) < 0L) , 255UL) | g_26), g_67))))) > l_226.f3) == 0L) <= l_220) | l_226.f2) , l_244[4][0][1]) != 0x3A0965E3L) == (-1L)) != l_233), g_67)), 0x3343L)), g_67)) | g_2)), 4294967295UL)), 4L));
        }
        if ((g_190.f1 & g_68))
        { 
            int32_t l_250 = 0x5FF56717L;
            for (g_190.f3 = 0; (g_190.f3 >= 0); g_190.f3 -= 1)
            { 
                int i;
            }
            for (g_68 = (-14); (g_68 < 25); g_68++)
            { 
                g_74 &= (18446744073709551611UL == (safe_rshift_func_uint8_t_u_s(l_250, 7)));
            }
            g_67 = (!(safe_lshift_func_uint8_t_u_s(l_260, 7)));
        }
        else
        { 
            union U1 l_270 = {-7L};
            uint32_t l_271[1];
            int i;
            for (i = 0; i < 1; i++)
                l_271[i] = 0x7A83810AL;
            if (g_190.f0)
                goto lbl_261;
            l_208 = (g_67 != (safe_add_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((l_44[3][1] = ((g_272[0] = (safe_div_func_uint16_t_u_u((g_26 |= (g_107[1] , (l_270 , ((l_270.f2 < l_271[0]) ^ l_208)))), 0xA2A8L))) | g_273[2][0][4])) , 0xAEE2L) >= g_190.f3) > l_274), 0x6C3CCF7CL)), 4)) != l_244[4][0][1]), g_234)));
        }
    }
    l_3 |= (l_44[0][1] = ((l_226.f3 , (safe_lshift_func_uint8_t_u_s((((l_278 ^= (l_277[2][1] |= (l_226.f2 = 65535UL))) ^ 0xE42AL) || (safe_sub_func_uint16_t_u_u((g_190.f1 < g_190.f3), g_190.f2))), 1))) <= g_272[0]));
    g_67 |= 0x745AFF45L;
    return l_41[0];
}



static int16_t  func_11(int64_t  p_12, const uint8_t  p_13, union U1  p_14, const uint64_t  p_15)
{ 
    struct S0 l_194 = {163,0x6BB261D9612183A9LL,-250,0xBD6090396A4FF77BLL};
    for (g_26 = 0; (g_26 == 17); g_26 = safe_add_func_int32_t_s_s(g_26, 6))
    { 
        for (p_14.f3 = 1; (p_14.f3 <= 4); p_14.f3 += 1)
        { 
            int i;
            g_190 = (g_107[p_14.f3] = g_107[p_14.f3]);
        }
        for (p_12 = 0; (p_12 > (-14)); p_12--)
        { 
            int16_t l_193 = 0x25AEL;
            l_193 = 0x538CC87CL;
            l_194 = l_194;
        }
    }
    return g_43;
}



static int64_t  func_16(uint16_t  p_17, uint32_t  p_18)
{ 
    uint8_t l_113 = 0xC8L;
    int32_t l_137 = 0x41CA980DL;
    uint64_t l_154 = 0xFA0F4C7584E37E41LL;
    if (l_113)
    { 
        return l_113;
    }
    else
    { 
        uint32_t l_136 = 0xC85B7F5DL;
        uint16_t l_138 = 0x3C6CL;
        int32_t l_139[2];
        int32_t l_150 = 0xC80A0586L;
        uint8_t l_166[1];
        int i;
        for (i = 0; i < 2; i++)
            l_139[i] = 0xDF6E60FBL;
        for (i = 0; i < 1; i++)
            l_166[i] = 2UL;
        if ((((safe_lshift_func_int8_t_s_s(l_113, (((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(g_2, (p_18++))), 1)) , (l_139[0] |= (((safe_mod_func_int16_t_s_s(((((l_137 = ((0x1EF3L <= (((safe_mul_func_int16_t_s_s(((g_45.f0 = (safe_mod_func_uint16_t_u_u((safe_sub_func_int8_t_s_s(((safe_sub_func_int16_t_s_s((safe_sub_func_int32_t_s_s((g_74 = (((safe_add_func_int8_t_s_s(0x64L, g_68)) || g_26) , g_43)), l_113)), 0xD8E5L)) || 18446744073709551611UL), l_113)), (-1L)))) ^ g_107[1].f3), l_136)) == 6L) > (-1L))) < l_136)) , p_18) >= l_138) && p_17), p_18)) == g_68) > l_138))) , p_18))) <= p_17) != 0xD0L))
        { 
            int32_t l_140[1][4] = {{0x1FCFF4A0L,0x1FCFF4A0L,0x1FCFF4A0L,0x1FCFF4A0L}};
            int32_t l_182 = 0x3E715EE1L;
            int i, j;
            if (((g_43 = l_140[0][0]) && ((~(g_151 |= (safe_add_func_int64_t_s_s((l_150 = ((p_17 >= (l_139[0] = 0xAEL)) || ((safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(g_45.f2, p_17)) | g_107[1].f2), 4294967290UL)), 11)) <= p_18))), g_45.f2)))) || l_140[0][1])))
            { 
                g_45.f2 = l_140[0][0];
                g_107[0] = g_107[1];
                g_74 = p_17;
            }
            else
            { 
                return l_139[1];
            }
            if ((l_166[0] = ((l_137 = (safe_mod_func_uint32_t_u_u((g_107[1].f2 | ((l_154 < (((safe_mul_func_int16_t_s_s((g_165 = (((((g_43--) || l_137) != (((safe_rshift_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_s((p_17 || 5UL), 6)) || p_17) , 0x8AL), l_140[0][1])) || g_107[1].f0) < g_107[1].f1)) > 0xED7CD5174218ACB7LL) , p_18)), (-2L))) == p_17) <= 253UL)) != (-2L))), g_74))) <= l_140[0][0])))
            { 
                int32_t l_183 = 0x6EB45B50L;
                g_45.f2 ^= (safe_div_func_int8_t_s_s((l_154 && (safe_mul_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(((p_17 , p_18) >= (safe_rshift_func_uint16_t_u_u(((l_140[0][1] = (safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((((((safe_unary_minus_func_uint64_t_u((l_182 ^= l_140[0][1]))) >= g_67) <= 2UL) , 0xF0L) & l_183), l_139[0])) , l_140[0][2]), g_67)), l_137))) <= 0L), g_26))), 0)) > 0UL), g_107[1].f2))), 255UL));
            }
            else
            { 
                return l_136;
            }
        }
        else
        { 
            uint64_t l_184 = 18446744073709551607UL;
            l_184++;
            return l_137;
        }
    }
    return g_107[1].f3;
}



static uint16_t  func_21(uint32_t  p_22, uint16_t  p_23, union U1  p_24)
{ 
    const int8_t l_60 = 0xFFL;
    int32_t l_65 = (-10L);
    int32_t l_66 = 0x0512ED40L;
    uint64_t l_73 = 18446744073709551615UL;
    uint8_t l_75[1][3][3] = {{{7UL,0x6BL,7UL},{7UL,0x6BL,7UL},{7UL,0x6BL,7UL}}};
    uint64_t l_110 = 0UL;
    int i, j, k;
lbl_109:
    p_24.f2 |= (safe_add_func_uint32_t_u_u((l_65 = (((((safe_mod_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((g_74 = (safe_mod_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(((p_23 = p_23) <= g_45.f1), ((l_60 , (safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((l_66 = (++g_68)), (safe_rshift_func_int16_t_s_u(l_60, 15)))) > g_45.f1) , 0x96L), g_45.f2))) & g_26))) | l_73), l_60))), p_22)), 15)), 8UL)) >= 5UL), 1L)) , 0L) != g_45.f0) != 1UL) > l_60)), g_2));
    for (l_65 = 0; (l_65 >= 0); l_65 -= 1)
    { 
        int16_t l_98 = 0xBEC1L;
        int32_t l_104 = (-8L);
        int16_t l_105[5][4] = {{(-1L),0x6938L,(-1L),(-1L)},{0x6938L,0x6938L,0L,0x6938L},{0x6938L,(-1L),(-1L),0x6938L},{(-1L),0x6938L,(-1L),(-1L)},{0x6938L,0x6938L,0L,0x6938L}};
        int i, j;
        g_106 |= (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((l_104 |= (l_60 < (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((l_98 > (safe_rshift_func_int16_t_s_u((((safe_unary_minus_func_uint16_t_u((g_45.f3 , ((safe_mod_func_uint8_t_u_u(p_23, 0x73L)) >= 2L)))) && 0xFB71L) | 7L), 0))) < g_45.f3), 0UL)), g_67)), l_66)))), 3)), 1L)), 1)) , g_45.f0), 0)), 6)), l_105[3][0])) | l_66) > 1L), p_24.f2)), (-1L)));
        for (l_66 = 0; (l_66 <= 0); l_66 += 1)
        { 
            for (l_73 = 0; (l_73 <= 0); l_73 += 1)
            { 
                struct S0 l_108 = {93,0xEDFCA599F3DF38E6LL,-42,0x6D00DAEFF8EE8584LL};
                l_108 = g_107[1];
                if (l_65)
                    goto lbl_109;
            }
            for (p_24.f1 = 0; (p_24.f1 <= 0); p_24.f1 += 1)
            { 
                int i, j, k;
                return l_75[l_66][(p_24.f1 + 2)][(l_66 + 2)];
            }
        }
    }
    l_110++;
    return g_106;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_107[i].f0, "g_107[i].f0", print_hash_value);
        transparent_crc(g_107[i].f1, "g_107[i].f1", print_hash_value);
        transparent_crc(g_107[i].f2, "g_107[i].f2", print_hash_value);
        transparent_crc(g_107[i].f3, "g_107[i].f3", print_hash_value);

    }
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f1, "g_190.f1", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    transparent_crc(g_190.f3, "g_190.f3", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_195[i][j][k], "g_195[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_234, "g_234", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_272[i], "g_272[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_273[i][j][k], "g_273[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
