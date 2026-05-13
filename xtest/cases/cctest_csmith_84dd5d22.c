// SPDX-License-Identifier: MIT
// cctest_csmith_84dd5d22.c --- cctest case csmith_84dd5d22 (csmith seed 2229099810)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x89643595 */

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

// Options:   -s 2229099810 -o /tmp/csmith_gen_l02flr1x/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int64_t  f0;
   int32_t  f1;
};

union U1 {
   int32_t  f0;
};

union U2 {
   int16_t  f0;
   int64_t  f1;
   const int32_t  f2;
};


static uint32_t g_5[4] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL};
static int64_t g_45 = 0xDAF0B56FE18BD2E8LL;
static uint32_t g_57 = 0x57CF3D00L;
static int16_t g_64[2][2][3] = {{{7L,7L,0x4EB7L},{7L,7L,0x4EB7L}},{{7L,7L,0x4EB7L},{7L,7L,0x4EB7L}}};
static uint32_t g_65 = 1UL;
static union U1 g_70[3] = {{0x2CBEB03CL},{0x2CBEB03CL},{0x2CBEB03CL}};
static uint32_t g_92 = 0x04519F07L;
static int32_t g_136 = 5L;
static struct S0 g_140 = {0x42EC255036077B2ALL,1L};
static uint64_t g_203[2] = {0x1D9612183A9A7DBDLL,0x1D9612183A9A7DBDLL};
static int32_t g_208[2] = {1L,1L};
static uint64_t g_209[4][2][3] = {{{0x485764B534227FBCLL,0x179438D6BD404E85LL,0x485764B534227FBCLL},{2UL,0x9C38CBB5997E5F22LL,9UL}},{{2UL,2UL,0x9C38CBB5997E5F22LL},{0x485764B534227FBCLL,0x9C38CBB5997E5F22LL,0x9C38CBB5997E5F22LL}},{{0x9C38CBB5997E5F22LL,0x179438D6BD404E85LL,9UL},{0x485764B534227FBCLL,0x179438D6BD404E85LL,0x485764B534227FBCLL}},{{2UL,0x9C38CBB5997E5F22LL,9UL},{2UL,2UL,0x485764B534227FBCLL}}};
static int32_t g_225 = 0xCA0FAE57L;
static int8_t g_255 = 1L;
static union U2 g_261 = {0xB085L};
static uint32_t g_286 = 2UL;
static uint16_t g_289 = 0xC789L;
static int32_t g_299 = 0x0E16A57DL;
static int32_t g_352[4][5][2] = {{{0L,0x11497D11L},{(-3L),0x11497D11L},{0L,0x11497D11L},{(-3L),0x11497D11L},{0L,0x11497D11L}},{{(-3L),0x11497D11L},{0L,0x11497D11L},{(-3L),0x11497D11L},{0L,0x11497D11L},{(-3L),0x11497D11L}},{{0L,0x11497D11L},{(-3L),0x11497D11L},{0L,0x11497D11L},{(-3L),0x11497D11L},{0L,0x11497D11L}},{{(-3L),0x11497D11L},{0L,0x11497D11L},{(-3L),0x11497D11L},{0L,0x11497D11L},{(-3L),0x11497D11L}}};
static uint8_t g_378 = 255UL;
static int16_t g_412 = (-1L);
static uint8_t g_430 = 0UL;
static uint8_t g_442 = 255UL;
static uint8_t g_548 = 0x4FL;
static int32_t g_574 = (-2L);



static struct S0  func_1(void);
static int32_t  func_13(int64_t  p_14, int8_t  p_15, uint32_t  p_16, int16_t  p_17);
static union U2  func_79(uint16_t  p_80, uint8_t  p_81, const int64_t  p_82, uint32_t  p_83, int64_t  p_84);
static uint64_t  func_93(uint64_t  p_94, union U1  p_95, uint8_t  p_96, int32_t  p_97, uint32_t  p_98);




static struct S0  func_1(void)
{ 
    uint64_t l_6[5] = {0x9E843631E19E95D1LL,0x9E843631E19E95D1LL,0x9E843631E19E95D1LL,0x9E843631E19E95D1LL,0x9E843631E19E95D1LL};
    int32_t l_18 = 0x7D6364D6L;
    int32_t l_19 = 0x1B40E11AL;
    int16_t l_60 = 0xF903L;
    struct S0 l_611[2] = {{0x12FA7069FD0670CALL,0L},{0x12FA7069FD0670CALL,0L}};
    int i;
    if (((safe_div_func_int64_t_s_s((safe_unary_minus_func_int16_t_s(0L)), (((l_6[3] = g_5[2]) < (safe_sub_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((func_13((0x9AL < l_18), l_19, g_5[2], l_19) & l_19) , l_19), g_5[2])) < g_5[2]), 0x7240L)), 0x0555F25AD92EDCDDLL))) , l_60))) | 0x00L))
    { 
        int16_t l_528 = 0xF61CL;
        uint16_t l_529[1];
        struct S0 l_550 = {0xF8949A61FAFEF3B1LL,4L};
        int i;
        for (i = 0; i < 1; i++)
            l_529[i] = 0x1179L;
        if (l_6[2])
        { 
            int8_t l_63 = (-1L);
            if ((((safe_lshift_func_uint16_t_u_u((g_65--), (((safe_div_func_uint64_t_u_u(18446744073709551615UL, ((g_70[1] , l_63) | (safe_sub_func_uint8_t_u_u(func_13((safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint8_t_u_u((((func_79(g_5[2], l_18, g_70[1].f0, l_63, g_45) , l_528) <= 1UL) && g_299), g_208[1])), 6)), 5)), l_529[0], g_208[0], l_528), g_208[0]))))) && l_529[0]) <= g_208[0]))) >= g_261.f0) < (-8L)))
            { 
                int8_t l_531 = 8L;
                uint32_t l_549[2][5][1] = {{{4294967295UL},{4294967295UL},{0xBCB64288L},{4294967295UL},{4294967295UL}},{{0xBCB64288L},{4294967295UL},{4294967295UL},{0xBCB64288L},{4294967295UL}}};
                int i, j, k;
                g_299 = ((0x41AAL >= g_255) >= (safe_unary_minus_func_int16_t_s(l_531)));
                l_549[0][1][0] &= (safe_mul_func_int16_t_s_s((safe_add_func_int16_t_s_s(((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint64_t_u(0UL)), (safe_add_func_int8_t_s_s(0x7CL, (0x8FL & (~((safe_sub_func_int16_t_s_s((safe_div_func_uint64_t_u_u(((safe_mul_func_int8_t_s_s(((g_412 >= 0xCEL) != g_65), l_18)) || g_225), g_289)), l_529[0])) , l_531))))))) ^ g_548), 0xC752L)), 0x349FL));
            }
            else
            { 
                g_299 = (-1L);
            }
            return l_550;
        }
        else
        { 
            int32_t l_567 = 0x1100D153L;
            g_352[3][0][0] = (l_550.f1 >= (((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_div_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u(0x280FF014CA690686LL, (safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s(l_567, (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((g_5[2] || (-4L)), l_18)) & g_261.f0), 6)), 5UL)))), g_574)))) && l_550.f1) <= l_6[1]), l_18)) >= l_529[0]), g_574)) , l_528), g_209[3][0][0])), 7)), 1)) <= l_567) ^ 1UL));
            for (l_60 = 1; (l_60 >= 0); l_60 -= 1)
            { 
                int32_t l_592 = (-1L);
                g_299 &= ((safe_add_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_64[0][0][1], (l_550.f1 = 0x6B51L))), ((safe_div_func_int64_t_s_s((~g_208[0]), (safe_lshift_func_int8_t_s_u((l_567 & l_567), 5)))) , g_45))) , g_442), l_592)) < g_548), l_592)) ^ l_6[2]), (-1L))), g_70[1].f0)) > 0x1B4430A292557BF3LL);
                g_140 = g_140;
                g_352[0][4][1] = (safe_lshift_func_uint8_t_u_u(((((safe_sub_func_int64_t_s_s(((g_352[0][4][1] && g_208[0]) | (g_45 &= l_6[2])), (l_19 |= (l_550.f1 = (safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(3L, l_6[3])), g_64[1][0][0])) < g_442), 0x37644270L)))))) == l_60) == (-10L)) || l_567), g_70[1].f0));
            }
        }
        l_19 = (g_299 = (safe_mod_func_uint8_t_u_u((g_261 , g_430), ((g_208[0] == ((safe_sub_func_int32_t_s_s(((l_18 = (safe_div_func_uint32_t_u_u(l_6[3], l_529[0]))) != g_574), g_442)) > g_430)) , 0x8DL))));
    }
    else
    { 
        int32_t l_617 = 0L;
        for (g_289 = 0; (g_289 <= 1); g_289 += 1)
        { 
            uint64_t l_612 = 0x466EF3F224DAA721LL;
            uint32_t l_616 = 0UL;
            g_140 = l_611[0];
            for (g_261.f0 = 1; (g_261.f0 >= 0); g_261.f0 -= 1)
            { 
                union U1 l_615[2][2][4] = {{{{0x62FABED1L},{0x62FABED1L},{0x62FABED1L},{0x62FABED1L}},{{0x62FABED1L},{0x62FABED1L},{0x62FABED1L},{0x62FABED1L}}},{{{0x62FABED1L},{0x62FABED1L},{0x62FABED1L},{0x62FABED1L}},{{0x62FABED1L},{0x62FABED1L},{0x62FABED1L},{0x62FABED1L}}}};
                int i, j, k;
                ++l_612;
                l_617 = (((-1L) == (g_203[1] <= (((l_615[1][1][3] , ((0x82FF2273L && 0x0986D2FAL) ^ 0xC01DL)) , l_615[1][1][3].f0) , l_616))) ^ (-3L));
                g_140 = g_140;
            }
        }
        l_611[1] = l_611[0];
    }
    g_140.f1 &= (safe_add_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(((l_6[3] , 0x3CD86116L) > g_299), ((++g_289) , (safe_mul_func_int16_t_s_s(l_60, l_6[3]))))) == g_209[2][0][1]) <= 1L), g_352[1][0][0]));
    return l_611[0];
}



static int32_t  func_13(int64_t  p_14, int8_t  p_15, uint32_t  p_16, int16_t  p_17)
{ 
    int32_t l_44 = (-1L);
    int32_t l_46[5][3][2] = {{{0xFA08552AL,0xD35555D5L},{0x14CA72CBL,0xFA08552AL},{2L,2L}},{{0L,0L},{0x14CA72CBL,0x66B6C7E7L},{0L,0xD35555D5L}},{{(-8L),0L},{2L,0L},{2L,0L}},{{(-8L),0xD35555D5L},{0L,0x66B6C7E7L},{0x14CA72CBL,0L}},{{0L,2L},{2L,0xFA08552AL},{0x14CA72CBL,0xD35555D5L}}};
    int i, j, k;
    for (p_14 = 0; (p_14 > (-24)); p_14 = safe_sub_func_int64_t_s_s(p_14, 7))
    { 
        uint64_t l_35 = 0x0CBEDFA90EF874ACLL;
        int32_t l_47 = (-2L);
        int32_t l_48 = 0xCEAA9639L;
        l_48 = (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((+((safe_mod_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((l_47 |= (safe_mod_func_int64_t_s_s(((l_35 || (l_46[1][2][1] = (safe_mod_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(g_5[3], (safe_sub_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s(l_44, (g_45 = l_35))) > g_5[2]), p_14)))), l_35)))) >= 1L), 8UL))), g_5[3])), l_44)), p_17)) == l_44)) || g_5[2]), 4)), l_35));
        for (l_47 = 6; (l_47 == 15); l_47 = safe_add_func_uint32_t_u_u(l_47, 7))
        { 
            uint32_t l_54[4] = {0xDA0D3D7FL,0xDA0D3D7FL,0xDA0D3D7FL,0xDA0D3D7FL};
            int i;
            for (g_45 = 0; (g_45 > (-8)); g_45 = safe_sub_func_int64_t_s_s(g_45, 1))
            { 
                int32_t l_53 = (-4L);
                l_54[2]++;
            }
        }
    }
    --g_57;
    return p_14;
}



static union U2  func_79(uint16_t  p_80, uint8_t  p_81, const int64_t  p_82, uint32_t  p_83, int64_t  p_84)
{ 
    uint64_t l_91 = 0x6757AC12ABB1EF36LL;
    union U1 l_99 = {-3L};
    int32_t l_413[4][4][3] = {{{0x8C169C80L,0x8C169C80L,0xA6A33111L},{0L,0x1A870D0BL,0xA6A33111L},{0x1A870D0BL,1L,0x8DA247D1L},{0L,1L,0x7583D3E0L}},{{0x8C169C80L,0x1A870D0BL,0x8DA247D1L},{0x8C169C80L,0x8C169C80L,0xA6A33111L},{0L,0x1A870D0BL,0xA6A33111L},{0x1A870D0BL,1L,0x8DA247D1L}},{{0L,1L,0x7583D3E0L},{0x8C169C80L,0x1A870D0BL,0x8DA247D1L},{0x8C169C80L,0x8C169C80L,0xA6A33111L},{0L,0x1A870D0BL,0xA6A33111L}},{{0x1A870D0BL,1L,0x8DA247D1L},{0L,1L,0x7583D3E0L},{0x8C169C80L,0x1A870D0BL,0x8DA247D1L},{0x8C169C80L,0x8C169C80L,0xA6A33111L}}};
    struct S0 l_425 = {-1L,0x29D72D5AL};
    uint32_t l_439 = 0x896290C4L;
    const int16_t l_484 = 1L;
    uint32_t l_499 = 0x16541869L;
    union U2 l_504 = {0xBBC2L};
    uint16_t l_527 = 0x6625L;
    int i, j, k;
    l_413[0][3][2] = (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((func_13(((((safe_mul_func_uint8_t_u_u((g_92 &= l_91), g_64[0][0][2])) , ((g_412 &= func_93((l_99 , (((p_81 == 1UL) != 8L) ^ g_64[0][0][2])), l_99, g_45, p_81, g_64[0][0][2])) >= 0xBC25AA0ACD712F5DLL)) == g_261.f0) , g_45), p_81, p_84, p_80) | (-1L)), g_208[1])), 0x6F84L));
    if ((safe_div_func_int16_t_s_s((l_425.f1 = (~(g_5[2] |= ((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((l_413[2][1][1] ^= (g_352[0][4][1] == (l_425 , ((safe_div_func_uint8_t_u_u((g_378--), (-1L))) , (l_99.f0 <= 0L))))) <= g_430) && l_425.f0), p_80)), 4)), l_425.f0)) & (-9L)), g_70[1].f0)) , 9UL)))), 0x0FBAL)))
    { 
        uint32_t l_431 = 1UL;
        struct S0 l_434 = {0xA44097DE9974B316LL,5L};
        union U1 l_440 = {5L};
        int32_t l_441 = 0xB0A492C2L;
        int32_t l_495 = 0xC7228BB2L;
        int32_t l_500 = 7L;
        if (l_431)
        { 
            uint64_t l_458 = 0x337403DDD2A7615FLL;
            g_299 = (((safe_sub_func_int64_t_s_s((l_434 , (p_84 = (safe_mul_func_uint16_t_u_u(((p_82 >= (safe_mod_func_int32_t_s_s(((l_99.f0 ^ (((((g_203[0] ^= ((l_431 || l_439) != g_57)) <= p_80) , l_440) , l_440.f0) == g_412)) == (-1L)), 1UL))) > l_441), l_413[2][0][1])))), 0x7AD3F36638D83F14LL)) | l_413[3][1][2]) <= 0x0C7025D4L);
            for (g_378 = 0; (g_378 <= 1); g_378 += 1)
            { 
                uint32_t l_459 = 4294967288UL;
                if (p_81)
                    break;
                g_442 = g_203[0];
                l_459 |= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_255, (safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((!(safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_261.f0 == g_136), 0xA6235A72L)), 15)) ^ l_441), l_458))), l_440.f0)), 4)))), 14));
            }
        }
        else
        { 
            uint16_t l_462[4];
            uint32_t l_483 = 6UL;
            int i;
            for (i = 0; i < 4; i++)
                l_462[i] = 65534UL;
            g_352[2][2][0] = ((((((0xFA78L & p_84) | (((safe_add_func_int8_t_s_s(((g_255 = ((g_378 > (l_462[1] = 0xCF76A16CL)) > p_81)) > l_434.f0), g_208[1])) == p_84) && p_82)) || 5L) >= p_84) > l_425.f0) || p_84);
            for (l_431 = 0; (l_431 <= 1); l_431 += 1)
            { 
                int32_t l_485 = (-1L);
                int i;
                l_485 &= (safe_add_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(g_208[l_431], (-1L))) >= (safe_sub_func_uint64_t_u_u((safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s((l_413[3][0][1] = g_430), (safe_div_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((((((((p_84 ^= (safe_lshift_func_uint8_t_u_u(1UL, l_483))) | (-2L)) ^ l_484) && g_442) || l_440.f0) != 1UL) ^ p_81) && g_299), p_80)) >= l_483) & p_80), p_81)))), l_440.f0)) <= p_82), g_209[3][1][1])), (-10L)))), 0x8401850DL)), p_80));
            }
        }
        if ((((l_500 = ((((safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((p_84 > (!(l_495 = (l_434.f1 = (-9L))))), (0xF0L >= (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u(255UL)), 5))))), g_255)), 255UL)), l_499)) >= l_441) , p_84) || p_84)) || p_84) | g_208[1]))
        { 
            uint64_t l_501[5] = {0x43F57216A0719E04LL,0x43F57216A0719E04LL,0x43F57216A0719E04LL,0x43F57216A0719E04LL,0x43F57216A0719E04LL};
            int i;
            --l_501[3];
            return l_504;
        }
        else
        { 
            for (l_504.f1 = 0; (l_504.f1 == (-28)); l_504.f1--)
            { 
                if (g_261.f0)
                    break;
            }
        }
        for (g_430 = (-28); (g_430 >= 53); ++g_430)
        { 
            int8_t l_509 = 0L;
            l_509 = 0x7FCC6718L;
        }
    }
    else
    { 
        union U2 l_510 = {0x4BC4L};
        return l_510;
    }
    l_527 = (safe_add_func_int32_t_s_s((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((g_64[1][1][2] && (l_413[0][0][2] = ((((((safe_mod_func_int32_t_s_s((((((((safe_lshift_func_uint8_t_u_u(((1UL < (safe_mul_func_int8_t_s_s((l_413[0][3][2] || (g_5[1] , 4294967286UL)), 0L))) >= p_83), 7)) ^ l_504.f2) >= l_413[0][3][2]) && (-7L)) < g_64[1][0][2]) , l_439) & 0x77L), l_504.f1)) & 0x00L) || g_352[2][4][1]) , 0xF28E4C5F02C2562DLL) > p_84) == 0xE4BEBF86L))) | 6UL), 1L)), 0x8007L)), g_352[0][4][1])), 0x9B96A1A2L));
    return g_261;
}



static uint64_t  func_93(uint64_t  p_94, union U1  p_95, uint8_t  p_96, int32_t  p_97, uint32_t  p_98)
{ 
    uint16_t l_115 = 1UL;
    int16_t l_118 = 0xC7DCL;
    uint16_t l_130[5];
    int32_t l_162 = 1L;
    uint32_t l_226[2][2];
    uint32_t l_256[1];
    int32_t l_290 = 3L;
    uint32_t l_324 = 4294967288UL;
    int32_t l_353 = 0x0DAB3317L;
    int32_t l_380 = (-7L);
    int32_t l_392 = 0x9C775E31L;
    int32_t l_394 = 0L;
    int32_t l_395 = 0x346A795FL;
    int32_t l_396 = 0x985195A8L;
    int32_t l_400 = 0x31C68CD3L;
    int32_t l_401 = 4L;
    int32_t l_402 = 0xE3DF74E8L;
    int32_t l_403[5][5] = {{1L,1L,1L,1L,0L},{1L,1L,1L,1L,0L},{1L,1L,1L,1L,0L},{1L,1L,1L,1L,0L},{1L,1L,1L,1L,0L}};
    uint64_t l_405 = 0x6289F0428AFD14C5LL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_130[i] = 65535UL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_226[i][j] = 0x1253B820L;
    }
    for (i = 0; i < 1; i++)
        l_256[i] = 0x70F242EEL;
    for (p_95.f0 = 0; (p_95.f0 > (-26)); p_95.f0 = safe_sub_func_int64_t_s_s(p_95.f0, 2))
    { 
        uint32_t l_107 = 4294967286UL;
        int32_t l_108[3];
        int32_t l_173 = 1L;
        const int8_t l_186 = 4L;
        uint32_t l_202 = 0xED9211E9L;
        struct S0 l_257 = {0L,-1L};
        int i;
        for (i = 0; i < 3; i++)
            l_108[i] = 0x25C8E5C6L;
        for (g_92 = 0; (g_92 <= 1); g_92 += 1)
        { 
            int32_t l_109 = 0xB2EB2EFFL;
            struct S0 l_139 = {-8L,0x80A0586BL};
            int i;
            if (((l_109 = (l_108[1] = (((safe_rshift_func_int8_t_s_s((g_5[(g_92 + 1)] == (g_5[(g_92 + 1)] ^ ((safe_div_func_uint64_t_u_u((+g_92), 0x7D2D86EA79F159E9LL)) & 0xC6L))), 3)) || l_107) != (-1L)))) >= 0xC4CBL))
            { 
                uint32_t l_110 = 6UL;
                --l_110;
                if (l_108[1])
                    continue;
            }
            else
            { 
                uint64_t l_135 = 0x1D701D6BCCD07CA3LL;
                l_118 = (((l_109 |= (g_70[1].f0 , ((0UL == (safe_mul_func_uint8_t_u_u(l_115, (safe_div_func_int16_t_s_s((0x08L == (-2L)), 8L))))) , p_97))) || g_45) & l_115);
                g_136 &= (((((g_45 = l_108[1]) , 0xE968F5B2L) & (safe_lshift_func_int8_t_s_u(((((safe_add_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((safe_lshift_func_uint16_t_u_s((~(((safe_mul_func_uint16_t_u_u((l_130[1] != (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint8_t_u_u(g_5[(g_92 + 1)], g_92)) ^ g_5[3]), l_109))), p_97)) || l_135) && 1L)), p_94)) < 0UL), 18446744073709551606UL)), p_97)) != (-1L)) <= g_5[(g_92 + 1)]) , p_96), g_64[0][0][2]))) && g_64[0][0][2]) <= 0xFAEAFAE61C728F08LL);
            }
            for (g_57 = 0; (g_57 <= 3); g_57 += 1)
            { 
                int i, j, k;
                g_140 = ((safe_lshift_func_int8_t_s_u((0x71B68C1BL <= g_64[g_92][g_92][g_92]), l_107)) , l_139);
            }
        }
        if (l_107)
        { 
            uint16_t l_152 = 0x57DFL;
            int32_t l_159[1];
            int8_t l_165 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_159[i] = 0x2906C797L;
            for (p_96 = 7; (p_96 != 12); p_96 = safe_add_func_uint16_t_u_u(p_96, 5))
            { 
                uint16_t l_163 = 0xCA6AL;
                int32_t l_164 = 0x64CB8E99L;
                g_140.f1 = (((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((!p_95.f0), (l_164 = (safe_mod_func_int32_t_s_s((((l_152--) ^ (((l_162 = (safe_div_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(l_159[0], 0UL)), (g_64[0][0][2] = (safe_lshift_func_int8_t_s_s(0x7DL, 4)))))) & g_136) && g_70[1].f0)) < l_163), l_118))))), (-6L))), l_130[1])) & 18446744073709551613UL) , l_165);
                if (l_130[1])
                    break;
            }
            if (p_94)
                continue;
        }
        else
        { 
            uint32_t l_166 = 0x01E8EA3FL;
            l_166 = l_115;
        }
        if (((safe_lshift_func_uint8_t_u_s(((l_118 >= (g_45 = p_96)) < (safe_lshift_func_int16_t_s_s(((((safe_div_func_int32_t_s_s(l_115, ((0x03BC58EBAA32B3D1LL && l_115) , g_136))) , g_136) >= 0x9D5ECC4D8AA34682LL) || l_173), 8))), 0)) & l_107))
        { 
            int64_t l_188 = 8L;
            for (l_107 = 0; (l_107 == 58); l_107 = safe_add_func_uint16_t_u_u(l_107, 5))
            { 
                int16_t l_187 = 0xE1C1L;
                g_140.f1 |= ((p_96 & (safe_lshift_func_uint8_t_u_u(p_95.f0, 2))) < ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(1UL, (safe_add_func_int32_t_s_s(((((p_97 || l_186) <= p_97) == 1UL) > g_64[0][0][2]), l_187)))) >= 0UL), l_188)) <= g_64[0][0][2]));
                l_108[2] |= l_187;
            }
            l_108[1] = (safe_div_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((~(((safe_sub_func_uint64_t_u_u((l_108[1] < g_140.f0), (7UL > (1L | 4294967293UL)))) == 1UL) == l_188)), l_186)), p_96)) != g_64[0][0][2]), p_96));
        }
        else
        { 
            uint64_t l_205 = 0x8B371645DA593D3CLL;
            int32_t l_206[5][4] = {{(-1L),9L,9L,(-1L)},{0xD5CCC3D4L,(-1L),0x2E48255AL,(-1L)},{(-1L),0xD5CCC3D4L,0x2E48255AL,0x2E48255AL},{9L,9L,(-1L),0x2E48255AL},{(-1L),0xD5CCC3D4L,(-1L),(-1L)}};
            union U1 l_254[3] = {{-4L},{-4L},{-4L}};
            int i, j;
            if ((safe_mod_func_uint8_t_u_u(((g_203[0] &= (p_94 , (safe_div_func_int64_t_s_s(l_115, (l_202 ^ g_64[0][1][2]))))) && p_94), 6L)))
            { 
                l_108[1] = p_95.f0;
                l_205 &= (~g_57);
                l_206[3][1] = (-6L);
            }
            else
            { 
                int32_t l_207 = 0xC0C82507L;
                ++g_209[2][0][1];
                g_140.f1 = (g_45 != ((l_226[0][0] = (safe_rshift_func_uint16_t_u_s(((7UL > (safe_div_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(0xAAD0L, (safe_mul_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((~(safe_mul_func_uint16_t_u_u(p_95.f0, g_225))), 255UL)) , 0x504BB9F7L) >= p_97), l_202)))), 65535UL))) || g_225), p_98))) > g_209[2][0][1]));
                return p_94;
            }
            if ((safe_div_func_int32_t_s_s(((l_206[0][3] = (((+(safe_sub_func_uint16_t_u_u(((safe_sub_func_int64_t_s_s(((safe_add_func_uint16_t_u_u(((safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(0L, 14)) , (safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(g_92, 0x5755E19477FFDD8ALL)), (safe_mod_func_int32_t_s_s(((safe_add_func_int32_t_s_s((((l_254[2] , 0x6EL) , 0xA0D9A2E6310CBDEBLL) , g_208[1]), l_130[1])) , g_255), p_94)))), p_95.f0)) < l_226[1][1]), 0x68L)), 12))), 0x06L)) != 0x95B8L), g_70[1].f0)) , p_95.f0), 18446744073709551615UL)) != l_107), p_94))) > l_256[0]) != p_94)) < 255UL), l_205)))
            { 
                l_257 = g_140;
                if (g_208[0])
                    continue;
            }
            else
            { 
                uint16_t l_266 = 0xC019L;
                l_108[1] = (+((safe_add_func_int32_t_s_s(((((g_261 , (safe_add_func_uint32_t_u_u(g_261.f0, (g_261.f0 | 0x98L)))) ^ p_98) != g_225) <= 0UL), 0x6F9F2E5BL)) <= g_64[0][0][2]));
                g_140.f1 &= ((safe_lshift_func_int8_t_s_u((l_266 , (~(g_140.f0 , (-1L)))), (l_108[2] = ((g_203[0] &= g_92) && p_94)))) ^ 0xED16L);
                l_290 |= (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(65533UL, (safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_289 &= (g_255 ^= (safe_sub_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((7L & ((safe_rshift_func_uint16_t_u_u((l_108[2] ^= g_225), (++g_286))) | 0xF96D8EFD3A0965E3LL)), p_97)), g_5[2])) >= l_266) || 0x7334L), g_5[2])))), (-4L))), 15)))) , 0UL), l_162)), 2));
            }
            if (((p_96 != (safe_sub_func_int8_t_s_s((~(((p_95 , g_136) != p_95.f0) || 0x93L)), p_98))) && g_209[2][0][1]))
            { 
                return p_95.f0;
            }
            else
            { 
                uint8_t l_296 = 251UL;
                int32_t l_323 = 0x9A55D285L;
                l_206[1][2] = ((safe_rshift_func_uint16_t_u_u(l_296, (safe_lshift_func_int16_t_s_s(((((((p_96++) & (((safe_mod_func_uint64_t_u_u((((safe_div_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u(((safe_unary_minus_func_uint16_t_u(65535UL)) < (l_323 &= (safe_mul_func_int8_t_s_s(((0x66AC21E7AE008CDALL > ((l_257.f1 = ((safe_mod_func_uint8_t_u_u(l_296, l_206[3][1])) & l_296)) | g_57)) == g_203[1]), 0xBDL)))), l_206[0][1])) ^ (-1L)), l_324)) <= l_162) != p_97), g_57)), l_130[3])), p_98)), l_254[2].f0)) && (-1L)), 0x84438402E813D55CLL)) == p_95.f0) < l_254[2].f0), l_173)) != 0x54A3L) <= p_98)) < 0x7AL) ^ g_225) && g_289) && 0UL), g_5[2])))) , p_94);
                if (g_70[1].f0)
                    continue;
            }
        }
    }
    for (l_162 = 0; (l_162 < (-1)); l_162--)
    { 
        int32_t l_334 = 0x3E42A8C7L;
        uint32_t l_338 = 0xCE78FCAFL;
        int32_t l_389 = 0xDDD462EFL;
        int32_t l_391 = 0xBFEAC4E3L;
        int32_t l_393 = 0x57972259L;
        int32_t l_397 = 0x7F9CC139L;
        int32_t l_398 = 0x3A13B9C7L;
        int32_t l_399[3];
        int8_t l_404 = (-9L);
        int i;
        for (i = 0; i < 3; i++)
            l_399[i] = 0xD0380F5EL;
        for (p_98 = 15; (p_98 > 31); p_98 = safe_add_func_uint32_t_u_u(p_98, 9))
        { 
            uint32_t l_337 = 0xD116E7FBL;
            for (g_92 = 0; (g_92 >= 26); g_92 = safe_add_func_int32_t_s_s(g_92, 3))
            { 
                l_290 = (!((safe_add_func_uint8_t_u_u(p_96, (l_334 < (((g_140 = g_140) , ((safe_sub_func_uint8_t_u_u((((g_140.f0 > (-6L)) ^ l_337) && 0xB8L), l_337)) || 255UL)) > l_338)))) , 1UL));
            }
        }
        if ((g_299 = (l_353 = ((safe_add_func_uint8_t_u_u(g_289, ((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint16_t_u_s((l_290 = (safe_mod_func_uint32_t_u_u((4UL >= ((((g_140.f1 = (safe_sub_func_int16_t_s_s((g_64[0][1][1] &= (safe_lshift_func_int8_t_s_s((249UL != (((safe_mul_func_uint8_t_u_u(g_261.f0, g_261.f0)) | l_338) & p_95.f0)), g_208[0]))), l_130[2]))) < g_352[0][4][1]) , l_162) == p_95.f0)), l_338))), p_94)))) >= l_338))) == 0x6A152108L))))
        { 
            for (g_299 = (-20); (g_299 >= 23); g_299++)
            { 
                union U1 l_358 = {0x647A815BL};
                struct S0 l_359 = {0x6F7BA14FACFC0601LL,0xAD9EB117L};
                l_290 = (safe_lshift_func_int8_t_s_s(p_96, 4));
                g_140 = (((g_225 ^= (l_290 >= g_64[0][1][2])) , l_358) , l_359);
            }
            if (g_45)
                continue;
        }
        else
        { 
            uint32_t l_379 = 1UL;
            int32_t l_381 = (-3L);
            int32_t l_390[2][2] = {{(-1L),(-1L)},{(-1L),(-1L)}};
            int i, j;
            for (g_299 = (-3); (g_299 != (-9)); g_299 = safe_sub_func_uint64_t_u_u(g_299, 6))
            { 
                uint64_t l_386 = 1UL;
                l_381 ^= (0xF88CL && (((safe_lshift_func_int8_t_s_s((0xC998L >= ((l_353 = (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u((((((l_379 |= ((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((l_118 | (safe_mul_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(((((((((safe_sub_func_int32_t_s_s((p_94 & p_96), 4294967287UL)) || 0xE7L) < g_352[0][4][1]) <= p_98) && l_334) >= (-1L)) , 0xEEEE6405L) <= g_57), 0x3EL)) && g_203[0]), p_97))), g_378)) , 0L), 0)) && p_95.f0)) > g_299) | 255UL) > (-9L)) || 2UL), l_380)), 0x63B41C2AL))) || p_97)), 0)) > l_334) >= p_94));
                l_290 ^= ((g_57 = (((p_97 == (p_95.f0 == p_94)) , (l_386 = ((g_352[3][3][0] = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((g_140 , p_94), g_261.f0)), l_324))) & p_96))) == g_299)) > g_378);
                g_352[0][0][0] &= ((l_338 , (g_140 , (safe_rshift_func_int16_t_s_u(((g_378 = (6UL < p_97)) == 1L), 6)))) <= p_94);
            }
            l_405++;
        }
        l_393 ^= ((safe_add_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((255UL >= (p_94 < (l_401 ^= g_225))), (0L >= (-1L)))) || l_392), g_203[0])) , (-1L));
    }
    return g_70[1].f0;
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
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);

    }
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_64[i][j][k], "g_64[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_70[i].f0, "g_70[i].f0", print_hash_value);

    }
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_208[i], "g_208[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_209[i][j][k], "g_209[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_261.f0, "g_261.f0", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_299, "g_299", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_352[i][j][k], "g_352[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_548, "g_548", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
