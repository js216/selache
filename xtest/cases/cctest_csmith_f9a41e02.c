// SPDX-License-Identifier: MIT
// cctest_csmith_f9a41e02.c --- cctest case csmith_f9a41e02 (csmith seed 4188282370)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x76baba8b */
/* @exp_ticks 0x7299 */

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

// Options:   -s 4188282370 -o /tmp/csmith_gen_cutv4ui8/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int64_t  f0;
   int64_t  f1;
};

struct S1 {
   uint32_t  f0;
   int32_t  f1;
   uint32_t  f2;
   const int32_t  f3;
   const uint32_t  f4;
   struct S0  f5;
};

union U2 {
   int32_t  f0;
   const uint32_t  f1;
   const int8_t  f2;
};


static int32_t g_3 = 1L;
static uint32_t g_4 = 7UL;
static struct S0 g_30 = {-1L,0xA550E8F7CF8FB6F8LL};
static int64_t g_43 = (-3L);
static int32_t g_46 = 0x6B93DCEDL;
static int64_t g_58 = (-7L);
static int16_t g_59 = (-3L);
static int32_t g_60[2][2][4] = {{{0xF2F08334L,0x5959469FL,0xF2F08334L,0xF2F08334L},{0x5959469FL,0x5959469FL,0xD04657E6L,0x5959469FL}},{{0x5959469FL,0xF2F08334L,0xF2F08334L,0x5959469FL},{0xF2F08334L,0x5959469FL,0xF2F08334L,0xF2F08334L}}};
static uint32_t g_61 = 18446744073709551607UL;
static int8_t g_77[3][4][4] = {{{0L,0L,0x82L,0L},{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)},{0L,0L,0x82L,0L}},{{0L,(-1L),(-1L),0L},{(-1L),0L,(-1L),(-1L)},{0L,0L,0x82L,0L},{0L,(-1L),0x82L,(-1L)}},{{0x82L,(-1L),0x82L,0x82L},{(-1L),(-1L),0L,(-1L)},{(-1L),0x82L,0x82L,(-1L)},{0x82L,(-1L),0x82L,0x82L}}};
static uint16_t g_83[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
static struct S1 *g_86 = (void*)0;
static int32_t g_89 = 9L;
static int32_t g_93 = 0xD857C4E4L;
static uint16_t g_94 = 0x9ED7L;
static uint8_t g_113 = 8UL;
static struct S0 g_122 = {-6L,1L};
static uint32_t g_132 = 0xDA593D3CL;
static int32_t *g_137 = &g_46;
static struct S1 g_155 = {0xB8313BAAL,2L,0xDAAB13C8L,0L,0x1803394BL,{0xC0CD3E02F516F70FLL,0x42EEF4D9A01408C7LL}};
static union U2 g_160 = {0x2E5B4F79L};
static uint8_t *g_163 = &g_113;
static uint8_t **g_162 = &g_163;
static uint8_t g_165 = 0xB2L;
static uint16_t *g_170 = &g_83[1];
static uint16_t **g_169 = &g_170;
static int8_t g_223 = 5L;
static uint64_t g_225 = 0UL;
static struct S0 g_228 = {0x5315019F29C5C5AALL,0L};
static int16_t g_244 = 0x47A6L;
static uint16_t g_253 = 0xEEB9L;
static uint8_t ***g_358 = &g_162;
static int32_t **g_400 = &g_137;
static int32_t ***g_399 = &g_400;
static uint32_t g_415[6][3][1] = {{{0xE6F3CDE0L},{3UL},{0x214D0552L}},{{3UL},{0xE6F3CDE0L},{0xB9393C2DL}},{{0xE6F3CDE0L},{3UL},{0x214D0552L}},{{3UL},{0xE6F3CDE0L},{0xB9393C2DL}},{{0xE6F3CDE0L},{3UL},{0x214D0552L}},{{3UL},{0xE6F3CDE0L},{0xB9393C2DL}}};
static uint8_t *g_445 = &g_113;
static int32_t g_462 = 0x0D5100B0L;
static int32_t g_465 = 0x83671564L;
static int32_t g_466 = (-2L);
static int32_t * const g_464[5] = {&g_465,&g_465,&g_465,&g_465,&g_465};
static int32_t * const *g_463 = &g_464[0];
static struct S1 g_541 = {18446744073709551615UL,0x422EB51FL,1UL,0xC7807090L,1UL,{1L,0x3664745B99DCBD1FLL}};
static int8_t g_593 = 0xC0L;
static int32_t * const **g_634[7][3][3] = {{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}},{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}},{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}},{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}},{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}},{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}},{{(void*)0,&g_463,&g_463},{(void*)0,&g_463,&g_463},{(void*)0,&g_463,(void*)0}}};
static struct S0 *g_636 = &g_122;
static struct S0 **g_635 = &g_636;
static struct S0 **g_640 = (void*)0;
static struct S1 g_699[2][1] = {{{18446744073709551615UL,0xD7BDC42CL,0x46A0987BL,0L,7UL,{1L,0x32765A56A178404FLL}}},{{18446744073709551615UL,0xD7BDC42CL,0x46A0987BL,0L,7UL,{1L,0x32765A56A178404FLL}}}};
static uint64_t ***g_740 = (void*)0;
static const struct S0 *g_770 = &g_155.f5;
static const struct S0 **g_769[4] = {&g_770,&g_770,&g_770,&g_770};
static int32_t g_795 = 0x6A077368L;
static uint8_t ****g_828[3][3][4] = {{{&g_358,&g_358,&g_358,&g_358},{&g_358,&g_358,&g_358,&g_358},{&g_358,&g_358,&g_358,&g_358}},{{&g_358,&g_358,&g_358,&g_358},{&g_358,&g_358,&g_358,&g_358},{&g_358,&g_358,&g_358,&g_358}},{{&g_358,&g_358,&g_358,&g_358},{&g_358,&g_358,&g_358,&g_358},{&g_358,&g_358,&g_358,&g_358}}};
static uint8_t *****g_827 = &g_828[1][1][3];
static int16_t *g_873 = &g_244;
static int32_t g_880 = (-9L);
static uint16_t g_891 = 65527UL;
static uint32_t * const *g_905 = (void*)0;
static uint32_t g_936 = 0xC4927A11L;
static const uint64_t *g_962 = (void*)0;
static const uint64_t **g_961[4] = {&g_962,&g_962,&g_962,&g_962};
static uint32_t g_978 = 3UL;
static struct S1 g_990[6] = {{0x0B42AE76L,0xDE5ABFA9L,0x34955AFBL,0xD5866FE1L,0x908EF78BL,{0xFC20E2414B8DDFFBLL,0L}},{0x0B42AE76L,0xDE5ABFA9L,0x34955AFBL,0xD5866FE1L,0x908EF78BL,{0xFC20E2414B8DDFFBLL,0L}},{0xA38E9F77L,0xC76CA7E0L,0xE62ACE2AL,0xF4120087L,4294967288UL,{-1L,-7L}},{0x0B42AE76L,0xDE5ABFA9L,0x34955AFBL,0xD5866FE1L,0x908EF78BL,{0xFC20E2414B8DDFFBLL,0L}},{0x0B42AE76L,0xDE5ABFA9L,0x34955AFBL,0xD5866FE1L,0x908EF78BL,{0xFC20E2414B8DDFFBLL,0L}},{0xA38E9F77L,0xC76CA7E0L,0xE62ACE2AL,0xF4120087L,4294967288UL,{-1L,-7L}}};
static int32_t *g_998 = &g_93;
static int16_t g_1031 = (-5L);
static union U2 g_1039 = {0xC2746925L};
static int64_t g_1101 = 0x84AA93220A60E057LL;
static const union U2 *g_1111 = (void*)0;
static const union U2 **g_1110 = &g_1111;
static const int32_t g_1131 = 0x6C38E5E1L;
static const int32_t * const g_1130 = &g_1131;
static const int32_t * const *g_1129 = &g_1130;
static uint32_t g_1223 = 0x212AF0B0L;
static int64_t g_1235[1][4][5] = {{{(-6L),(-6L),(-6L),(-6L),(-6L)},{4L,4L,4L,4L,4L},{(-6L),(-6L),(-6L),(-6L),(-6L)},{4L,4L,4L,4L,4L}}};
static union U2 *g_1288[5][3] = {{(void*)0,(void*)0,(void*)0},{&g_160,&g_1039,&g_160},{(void*)0,(void*)0,(void*)0},{&g_160,&g_1039,&g_160},{(void*)0,(void*)0,(void*)0}};
static union U2 **g_1287[7] = {&g_1288[1][2],&g_1288[1][2],&g_1288[1][2],&g_1288[1][2],&g_1288[1][2],&g_1288[1][2],&g_1288[1][2]};
static union U2 ***g_1286 = &g_1287[3];
static union U2 ****g_1285 = &g_1286;
static union U2 *****g_1284 = &g_1285;
static uint32_t g_1294 = 4294967291UL;
static int64_t *g_1303[3] = {&g_30.f1,&g_30.f1,&g_30.f1};
static uint64_t *g_1312[1] = {&g_225};
static uint64_t **g_1311 = &g_1312[0];
static int64_t ***g_1329 = (void*)0;
static uint16_t ***g_1332 = &g_169;
static int32_t *g_1368 = &g_795;
static int32_t g_1404 = 0x82A83915L;
static uint8_t ***g_1414 = &g_162;
static int8_t g_1447 = 0x77L;
static int16_t g_1477 = 0x5F16L;
static uint16_t ***g_1482 = &g_169;
static uint16_t **** const g_1481 = &g_1482;
static uint16_t **** const *g_1480 = &g_1481;
static uint16_t ****g_1484[5] = {&g_1332,&g_1332,&g_1332,&g_1332,&g_1332};
static uint16_t **** const *g_1483 = &g_1484[0];
static int64_t ****g_1497[3][2][7] = {{{&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329},{&g_1329,(void*)0,(void*)0,&g_1329,(void*)0,(void*)0,&g_1329}},{{&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329},{&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329}},{{&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329,&g_1329},{(void*)0,&g_1329,(void*)0,(void*)0,&g_1329,(void*)0,(void*)0}}};
static uint16_t g_1505 = 0x910AL;
static struct S1 g_1586 = {0xB44FE8A5L,0x4CE6F57BL,0x4FE91A06L,-4L,8UL,{0x0E01F6F8DFE9329BLL,0L}};
static int32_t **g_1611[3][2] = {{&g_1368,&g_1368},{&g_1368,&g_1368},{&g_1368,&g_1368}};
static int32_t g_1658 = 1L;
static uint16_t g_1683[1] = {0xA986L};
static uint32_t g_1926 = 0x745FE86EL;
static int32_t g_1941 = 6L;



static uint32_t  func_1(void);
static int32_t  func_12(int32_t * p_13, int32_t * p_14);
static int32_t * func_15(uint16_t  p_16, int16_t  p_17);
static uint32_t  func_18(int32_t * p_19, int64_t  p_20, int32_t  p_21);
static int16_t  func_24(struct S0  p_25, struct S1  p_26, struct S0  p_27, int8_t  p_28, int32_t * p_29);
static union U2  func_31(uint32_t  p_32, int32_t * p_33, int8_t  p_34, int32_t  p_35);
static int64_t  func_38(int64_t  p_39, const int32_t  p_40, int32_t * p_41, int8_t  p_42);
static uint32_t  func_51(struct S1  p_52);




static uint32_t  func_1(void)
{ 
    int32_t *l_2[6] = {&g_3,&g_3,&g_3,&g_3,&g_3,&g_3};
    struct S0 l_542[3][6] = {{{0x7BFAE4F381AB7A69LL,0L},{0x7BFAE4F381AB7A69LL,0L},{0x50282AEA2AEAE553LL,-1L},{0x50282AEA2AEAE553LL,-1L},{0x7BFAE4F381AB7A69LL,0L},{0x7BFAE4F381AB7A69LL,0L}},{{0x7BFAE4F381AB7A69LL,0L},{0x50282AEA2AEAE553LL,-1L},{0x50282AEA2AEAE553LL,-1L},{0x7BFAE4F381AB7A69LL,0L},{0x7BFAE4F381AB7A69LL,0L},{0x50282AEA2AEAE553LL,-1L}},{{0x7BFAE4F381AB7A69LL,0L},{0x7BFAE4F381AB7A69LL,0L},{0x50282AEA2AEAE553LL,-1L},{0x50282AEA2AEAE553LL,-1L},{0x7BFAE4F381AB7A69LL,0L},{0x7BFAE4F381AB7A69LL,0L}}};
    uint16_t l_697 = 4UL;
    union U2 l_916 = {-1L};
    int8_t l_956 = (-4L);
    struct S1 *l_989[7] = {&g_699[0][0],&g_990[5],&g_990[5],&g_699[0][0],&g_990[5],&g_990[5],&g_699[0][0]};
    uint16_t l_991 = 0x47FCL;
    union U2 *l_1038 = &g_1039;
    int64_t l_1042 = 0x7EF6C265384FEEEELL;
    struct S0 l_1194[4] = {{0L,-7L},{0L,-7L},{0L,-7L},{0L,-7L}};
    int32_t l_1291 = 1L;
    int16_t l_1293 = 0xE38AL;
    uint32_t l_1371 = 0xD69A3216L;
    uint16_t l_1401[5];
    int64_t l_1406 = 0x0F1A7BA57DFE526CLL;
    uint32_t l_1409[6] = {0xAD966EE5L,0xAD966EE5L,0xAD966EE5L,0xAD966EE5L,0xAD966EE5L,0xAD966EE5L};
    int64_t ****l_1496 = &g_1329;
    const int64_t l_1506 = (-3L);
    uint16_t l_1515 = 6UL;
    uint64_t l_1549 = 0xF26D19D6F3969C28LL;
    uint16_t l_1583 = 8UL;
    int32_t **l_1610 = &g_1368;
    const uint16_t ***l_1632 = (void*)0;
    const uint16_t ****l_1631[2];
    const uint16_t *****l_1630 = &l_1631[1];
    uint64_t **l_1703 = &g_1312[0];
    uint8_t ** const *l_1706 = &g_162;
    int16_t l_1722 = 0x95C1L;
    uint64_t l_1734 = 18446744073709551615UL;
    uint8_t l_1763[5] = {0x42L,0x42L,0x42L,0x42L,0x42L};
    uint16_t *l_1771 = &l_991;
    uint8_t l_1787[4][5][7] = {{{1UL,249UL,0UL,3UL,255UL,0xFDL,1UL},{1UL,249UL,3UL,0UL,255UL,0x48L,1UL},{1UL,0xFDL,0UL,0UL,0UL,0xFDL,1UL},{1UL,249UL,0UL,3UL,255UL,0xFDL,1UL},{1UL,249UL,3UL,0UL,255UL,0x48L,1UL}},{{1UL,0xFDL,0UL,0UL,0UL,0xFDL,1UL},{1UL,249UL,0UL,3UL,255UL,0xFDL,1UL},{1UL,249UL,3UL,0UL,255UL,0x48L,1UL},{1UL,0xFDL,0UL,0UL,0UL,0xFDL,1UL},{1UL,249UL,0UL,3UL,255UL,0xFDL,1UL}},{{1UL,249UL,3UL,2UL,0xB7L,1UL,3UL},{3UL,246UL,1UL,2UL,1UL,246UL,3UL},{0x76L,1UL,1UL,0x5AL,0xB7L,246UL,0x76L},{3UL,1UL,1UL,2UL,0xB7L,1UL,3UL},{3UL,246UL,1UL,2UL,1UL,246UL,3UL}},{{0x76L,1UL,1UL,0x5AL,0xB7L,246UL,0x76L},{3UL,1UL,1UL,2UL,0xB7L,1UL,3UL},{3UL,246UL,1UL,2UL,1UL,246UL,3UL},{0x76L,1UL,1UL,0x5AL,0xB7L,246UL,0x76L},{3UL,1UL,1UL,2UL,0xB7L,1UL,3UL}}};
    int64_t **l_1791 = &g_1303[0];
    uint64_t l_1797 = 9UL;
    int8_t l_1828 = 1L;
    int64_t l_1862[2][1];
    int64_t l_1907 = (-6L);
    int32_t l_1937 = 9L;
    int32_t *l_1966[2][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_46,&g_46,&g_46,&g_46,&g_46}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1401[i] = 65535UL;
    for (i = 0; i < 2; i++)
        l_1631[i] = &l_1632;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1862[i][j] = 0xA98F87D15FC28D63LL;
    }
    g_4--;
    return g_155.f1;
}



static int32_t  func_12(int32_t * p_13, int32_t * p_14)
{ 
    struct S0 l_833 = {0L,0x6F12F3E284D7770CLL};
    int32_t *l_834 = &g_465;
    int32_t *l_835 = &g_160.f0;
    int32_t *l_836 = &g_160.f0;
    int32_t *l_837 = &g_465;
    int32_t *l_838 = &g_93;
    int32_t *l_839 = (void*)0;
    int32_t *l_840 = &g_462;
    int32_t *l_841 = &g_462;
    int32_t *l_842 = &g_462;
    int32_t *l_843 = &g_93;
    int32_t *l_844[1];
    uint64_t l_845 = 0xB75D41CDFAFF0AB5LL;
    union U2 l_865 = {0xA5283863L};
    int16_t *l_874 = &g_59;
    int i;
    for (i = 0; i < 1; i++)
        l_844[i] = (void*)0;
    l_833 = (*g_770);
lbl_858:
    l_845--;
    for (g_113 = 0; (g_113 <= 2); g_113++)
    { 
        uint16_t ** const *l_866 = &g_169;
        int32_t l_867 = (-1L);
        for (g_541.f5.f1 = 0; (g_541.f5.f1 >= 17); g_541.f5.f1 = safe_add_func_uint32_t_u_u(g_541.f5.f1, 7))
        { 
            uint64_t l_856 = 0UL;
            for (g_132 = 22; (g_132 != 45); g_132 = safe_add_func_uint32_t_u_u(g_132, 1))
            { 
                uint32_t l_857 = 4294967289UL;
                for (g_155.f5.f0 = 0; (g_155.f5.f0 >= 0); g_155.f5.f0 -= 1)
                { 
                    int32_t l_859 = 0x38A57768L;
                    int i;
                    l_857 ^= (safe_lshift_func_int16_t_s_s(l_856, 12));
                    if (g_113)
                        goto lbl_858;
                    if (l_859)
                        continue;
                }
            }
        }
        for (g_155.f1 = 0; (g_155.f1 >= 0); g_155.f1 -= 1)
        { 
            int32_t l_860 = 9L;
            if (l_860)
                break;
            return l_860;
        }
        if (((-8L) >= (&g_169 != ((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s((l_865 , ((void*)0 == l_866)), (-1L))), l_867)) , (void*)0))))
        { 
            return (*l_843);
        }
        else
        { 
            int16_t *l_870 = &g_244;
            int32_t l_877[2][6][2] = {{{(-1L),0xE509D9B6L},{(-1L),(-1L)},{(-1L),0xE509D9B6L},{(-1L),(-1L)},{(-1L),0xE509D9B6L},{(-1L),(-1L)}},{{(-1L),0xE509D9B6L},{(-1L),(-1L)},{(-1L),0xE509D9B6L},{(-1L),(-1L)},{(-1L),0xE509D9B6L},{(-1L),(-1L)}}};
            struct S0 l_890 = {0L,1L};
            int i, j, k;
            for (g_541.f0 = 0; (g_541.f0 <= 2); g_541.f0 += 1)
            { 
                int16_t **l_871 = (void*)0;
                int16_t **l_872[5][3][7] = {{{&l_870,&l_870,&l_870,&l_870,(void*)0,&l_870,&l_870},{(void*)0,&l_870,&l_870,&l_870,&l_870,(void*)0,&l_870},{&l_870,&l_870,&l_870,&l_870,&l_870,&l_870,(void*)0}},{{&l_870,&l_870,&l_870,&l_870,(void*)0,&l_870,&l_870},{&l_870,(void*)0,&l_870,(void*)0,&l_870,&l_870,(void*)0},{&l_870,&l_870,&l_870,(void*)0,&l_870,&l_870,&l_870}},{{&l_870,&l_870,&l_870,&l_870,&l_870,&l_870,&l_870},{&l_870,(void*)0,(void*)0,&l_870,&l_870,&l_870,(void*)0},{&l_870,&l_870,&l_870,&l_870,&l_870,&l_870,&l_870}},{{&l_870,(void*)0,&l_870,&l_870,&l_870,&l_870,&l_870},{&l_870,&l_870,&l_870,(void*)0,(void*)0,&l_870,&l_870},{(void*)0,&l_870,&l_870,&l_870,&l_870,&l_870,&l_870}},{{&l_870,(void*)0,&l_870,&l_870,&l_870,&l_870,&l_870},{&l_870,&l_870,&l_870,&l_870,&l_870,(void*)0,&l_870},{&l_870,&l_870,&l_870,&l_870,(void*)0,(void*)0,&l_870}}};
                int32_t l_878[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_878[i] = 0L;
                if ((safe_mul_func_uint8_t_u_u((((g_873 = l_870) != (l_865 , l_874)) && ((*l_835) ^= (-7L))), ((((((g_155.f0 ^ l_877[0][1][0]) != (((*l_842) & (**g_162)) <= l_878[2])) >= l_878[2]) <= 0x18L) <= 0x91L) < (*l_838)))))
                { 
                    union U2 l_879[3] = {{0xBBE0C748L},{0xBBE0C748L},{0xBBE0C748L}};
                    int i;
                    (*l_835) &= (l_879[1] , g_880);
                    return (*p_14);
                }
                else
                { 
                    uint32_t l_889 = 1UL;
                    (*l_838) ^= ((((((safe_mul_func_int16_t_s_s(l_878[2], 0x63D0L)) || 0x2859L) > (safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(((!l_878[2]) && ((safe_div_func_int64_t_s_s((p_14 != (void*)0), l_877[0][1][0])) , 1UL)))), l_867))) != 0xA3E1A6CFC4AE6DF3LL) < (-1L)) , l_889);
                    (**g_635) = l_890;
                }
                --g_891;
                for (g_43 = 0; (g_43 <= 2); g_43 += 1)
                { 
                    int i, j, k;
                    (**g_399) = ((*g_86) , &l_867);
                    return g_77[g_43][g_43][(g_541.f0 + 1)];
                }
            }
            for (g_155.f5.f1 = 3; (g_155.f5.f1 >= 0); g_155.f5.f1 -= 1)
            { 
                uint64_t l_894[6] = {0xF2462A526F249A0DLL,0x7D6A4B0F5C6648E6LL,0xF2462A526F249A0DLL,0xF2462A526F249A0DLL,0x7D6A4B0F5C6648E6LL,0xF2462A526F249A0DLL};
                int32_t l_897 = 1L;
                int i;
                if (l_894[1])
                { 
                    int16_t **l_895 = &l_874;
                    int16_t **l_896 = &l_870;
                    (*g_400) = &l_877[0][1][0];
                    (*l_834) &= ((*l_841) = ((*l_843) = (((*g_170) = ((l_877[0][1][0] , (*g_137)) , (((*l_895) = &g_244) != ((*l_896) = (void*)0)))) < (l_867 && (&p_13 != (void*)0)))));
                    return (*p_14);
                }
                else
                { 
                    uint64_t l_898 = 0x6A2DB0E6364BF9C1LL;
                    l_898++;
                    (*l_834) = (-10L);
                    return (*p_14);
                }
            }
        }
        if ((*l_838))
            continue;
    }
    return (*p_14);
}



static int32_t * func_15(uint16_t  p_16, int16_t  p_17)
{ 
    uint64_t *l_739 = &g_225;
    int32_t l_744 = 0L;
    int64_t l_756 = 0x0B445B5F59B8547DLL;
    uint8_t l_766 = 0x77L;
    struct S0 **l_773 = (void*)0;
    struct S0 l_806 = {0x0A0BBB7E238EFD87LL,-9L};
    uint8_t **** const l_809 = &g_358;
    int32_t **l_829 = (void*)0;
    int32_t l_832[6][3][6] = {{{0xBFAF81A1L,0x2FB5965AL,0xBFAF81A1L,(-1L),0x171934B6L,(-9L)},{0L,0xCDBAE5E0L,0x84B3FF13L,0xBFAF81A1L,0xBFAF81A1L,0x84B3FF13L},{0x38B40C9DL,0x38B40C9DL,0xB2C671D5L,0xBFAF81A1L,0xCDBAE5E0L,(-1L)}},{{0L,0xB2C671D5L,(-9L),(-1L),(-9L),0xB2C671D5L},{0xBFAF81A1L,0L,(-9L),(-1L),0x38B40C9DL,(-1L)},{0x84B3FF13L,(-1L),0xB2C671D5L,0xB2C671D5L,(-1L),0x84B3FF13L}},{{0xB2C671D5L,(-1L),0x84B3FF13L,0x171934B6L,0x38B40C9DL,(-9L)},{(-9L),0L,0xBFAF81A1L,0L,(-9L),(-1L)},{(-9L),0xB2C671D5L,0L,0x171934B6L,0xCDBAE5E0L,0xCDBAE5E0L}},{{0xB2C671D5L,0x38B40C9DL,0x38B40C9DL,0xB2C671D5L,0xBFAF81A1L,0xCDBAE5E0L},{0x84B3FF13L,0xCDBAE5E0L,0L,(-1L),0x171934B6L,(-1L)},{0xBFAF81A1L,0x2FB5965AL,0xBFAF81A1L,(-1L),0x171934B6L,(-9L)}},{{0L,0xCDBAE5E0L,0x84B3FF13L,0xBFAF81A1L,0xBFAF81A1L,0x84B3FF13L},{0x38B40C9DL,0x38B40C9DL,0xB2C671D5L,0xBFAF81A1L,0xCDBAE5E0L,(-1L)},{0L,0xB2C671D5L,(-9L),(-1L),(-9L),0xB2C671D5L}},{{0xBFAF81A1L,0L,(-9L),(-1L),0x38B40C9DL,(-1L)},{0x84B3FF13L,(-1L),0xB2C671D5L,0xB2C671D5L,(-1L),0x84B3FF13L},{0xB2C671D5L,(-1L),0x84B3FF13L,0x171934B6L,0x38B40C9DL,(-9L)}}};
    int i, j, k;
    for (g_30.f1 = (-10); (g_30.f1 >= 11); ++g_30.f1)
    { 
        union U2 *l_723 = &g_160;
        int32_t l_731[7][5][3] = {{{0xCAEEE7A8L,(-3L),1L},{0x6E969FC3L,0xACA57658L,0x03EACDABL},{0xCAEEE7A8L,0x095DD129L,6L},{6L,0x095DD129L,0xCAEEE7A8L},{0x03EACDABL,0xACA57658L,0x6E969FC3L}},{{1L,(-3L),0xCAEEE7A8L},{0xD4B73BB9L,0xEDB2F52BL,6L},{0xD4B73BB9L,0xF73D0E80L,0x03EACDABL},{1L,0xFF411242L,1L},{0x03EACDABL,0xF73D0E80L,0xD4B73BB9L}},{{6L,0xEDB2F52BL,0xD4B73BB9L},{0xCAEEE7A8L,(-3L),1L},{0x6E969FC3L,0xACA57658L,0x03EACDABL},{0xCAEEE7A8L,0x095DD129L,6L},{6L,0x095DD129L,0xCAEEE7A8L}},{{0x03EACDABL,0xACA57658L,0x6E969FC3L},{1L,(-3L),0xCAEEE7A8L},{0xD4B73BB9L,0xEDB2F52BL,6L},{0xD4B73BB9L,0xF73D0E80L,0x03EACDABL},{1L,0xFF411242L,0x3F244466L}},{{6L,0x03EACDABL,(-10L)},{1L,0xCAEEE7A8L,(-10L)},{(-9L),0xE3AA3CB7L,0x3F244466L},{0x4C32329CL,0xB2B5E31DL,6L},{(-9L),0x6E969FC3L,1L}},{{1L,0x6E969FC3L,(-9L)},{6L,0xB2B5E31DL,0x4C32329CL},{0x3F244466L,0xE3AA3CB7L,(-9L)},{(-10L),0xCAEEE7A8L,1L},{(-10L),0x03EACDABL,6L}},{{0x3F244466L,0xC5699EE8L,0x3F244466L},{6L,0x03EACDABL,(-10L)},{1L,0xCAEEE7A8L,(-10L)},{(-9L),0xE3AA3CB7L,0x3F244466L},{0x4C32329CL,0xB2B5E31DL,6L}}};
        uint64_t *l_738 = &g_225;
        uint64_t **l_742 = &l_739;
        uint64_t ***l_741 = &l_742;
        int32_t l_743 = 1L;
        const struct S0 **l_772 = &g_770;
        int32_t l_802 = (-1L);
        int32_t l_803 = (-8L);
        struct S0 l_807 = {0xE31B61AFF70D85DALL,0x9684AB5828115E9CLL};
        uint8_t *** const l_813 = (void*)0;
        int i, j, k;
        for (g_89 = 0; (g_89 < (-2)); g_89--)
        { 
            int32_t **l_719 = (void*)0;
            int32_t **l_720 = &g_137;
            int64_t l_792 = 1L;
            uint64_t ***l_793 = (void*)0;
            uint16_t l_797 = 5UL;
            uint8_t ****l_814 = &g_358;
            uint64_t l_815 = 0x58DAC71EC7C09AAALL;
            uint32_t *l_822 = &g_155.f2;
            uint32_t *l_830 = &g_132;
            int8_t *l_831[6][2][5] = {{{&g_77[0][2][3],&g_223,&g_77[0][2][3],&g_77[0][3][2],&g_77[2][1][2]},{&g_77[2][0][1],(void*)0,&g_77[0][0][2],(void*)0,&g_77[2][0][1]}},{{&g_77[0][2][3],&g_77[0][0][2],&g_223,&g_593,&g_223},{&g_223,&g_223,&g_77[0][0][2],&g_77[2][0][1],&g_223}},{{&g_77[0][0][2],&g_77[0][2][3],&g_77[0][2][3],&g_77[0][0][2],&g_223},{(void*)0,&g_77[2][0][1],(void*)0,(void*)0,&g_77[2][0][1]}},{{&g_223,&g_77[0][2][3],&g_77[0][3][2],&g_77[2][1][2],&g_77[2][1][2]},{&g_77[1][0][1],&g_223,&g_77[1][0][1],(void*)0,&g_77[0][0][2]}},{{&g_593,&g_77[0][0][2],&g_77[2][1][2],&g_77[0][0][2],&g_593},{&g_77[1][0][1],(void*)0,&g_223,&g_77[2][0][1],&g_223}},{{&g_223,&g_223,&g_77[2][1][2],&g_593,&g_223},{(void*)0,&g_77[1][0][1],&g_77[1][0][1],(void*)0,&g_223}}};
            int i, j, k;
            (*l_720) = (*g_463);
            for (g_244 = 0; (g_244 >= (-1)); g_244 = safe_sub_func_uint8_t_u_u(g_244, 9))
            { 
                union U2 **l_724 = &l_723;
                uint64_t **l_727 = (void*)0;
                uint32_t *l_729 = &g_699[0][0].f2;
                uint32_t *l_730 = &g_4;
                int32_t *l_745 = &g_160.f0;
                int8_t *l_767 = &g_593;
                int64_t *l_768 = &g_155.f5.f1;
                const struct S0 ***l_771[5] = {&g_769[2],&g_769[2],&g_769[2],&g_769[2],&g_769[2]};
                int32_t l_798 = 0x70DE87DDL;
                const int32_t l_804 = 0x80161BAEL;
                int i;
                (*l_724) = l_723;
                (*l_745) |= ((safe_mod_func_int16_t_s_s((l_727 != ((((((((*l_730) = (safe_unary_minus_func_uint32_t_u(((*l_729) = 0UL)))) >= (l_731[5][3][2] = (p_16 && 255UL))) != ((*g_163) == (g_77[1][1][1] | ((safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(((((l_738 != l_739) , g_740) != l_741) == 0UL), p_17)), 0xCE133DEB7BD005C7LL)) > 2UL)))) != l_743) & p_16) || l_731[5][3][2]) , (void*)0)), l_744)) && p_16);
            }
            (*l_814) = l_813;
            if (l_815)
                continue;
            l_832[4][0][1] ^= (((((*g_445) >= (g_77[0][0][2] &= (l_766 ^ (safe_div_func_int32_t_s_s((((*l_830) = (((safe_mod_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((--(*l_822)), (safe_div_func_uint32_t_u_u(((((g_827 != &l_814) , (void*)0) != l_829) , (((*g_636) , p_16) <= p_16)), 0x71D2A08DL)))), (-1L))) < p_16) | (*g_170))) , 0xCAC6F658L), l_803))))) > (-1L)) ^ l_803) ^ 0x8CL);
        }
    }
    return (**g_399);
}



static uint32_t  func_18(int32_t * p_19, int64_t  p_20, int32_t  p_21)
{ 
    struct S1 *l_698 = &g_699[0][0];
    int32_t l_700 = 0L;
    int32_t *l_701 = &l_700;
    int32_t *l_702 = &g_93;
    int32_t *l_703[6][3] = {{&g_3,(void*)0,&g_93},{&g_160.f0,(void*)0,&g_93},{&g_466,(void*)0,(void*)0},{&g_3,(void*)0,&g_93},{&g_160.f0,(void*)0,&g_93},{&g_466,(void*)0,(void*)0}};
    uint32_t l_704 = 0x4D0CDEF5L;
    int16_t l_707 = (-10L);
    int64_t l_708 = 2L;
    int32_t l_709 = 0x0CCDC27AL;
    int32_t l_710 = 0x33ABF475L;
    uint32_t l_711 = 5UL;
    int32_t *l_714[1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_714[i] = (void*)0;
    l_698 = &g_541;
    l_704--;
    l_711++;
    (**g_399) = l_714[0];
    return g_541.f1;
}



static int16_t  func_24(struct S0  p_25, struct S1  p_26, struct S0  p_27, int8_t  p_28, int32_t * p_29)
{ 
    uint8_t ****l_543 = &g_358;
    uint8_t *****l_544 = &l_543;
    struct S1 *l_551 = &g_541;
    struct S1 **l_552 = &g_86;
    int32_t l_553[6];
    union U2 l_554 = {1L};
    uint16_t *l_581 = &g_253;
    int32_t l_588[1];
    uint64_t l_594 = 9UL;
    uint16_t **l_693 = &l_581;
    struct S0 l_696 = {-2L,0x7DB722B07C3206A9LL};
    int i;
    for (i = 0; i < 6; i++)
        l_553[i] = (-4L);
    for (i = 0; i < 1; i++)
        l_588[i] = 0xCFF8D089L;
    (*l_544) = l_543;
    if ((((*p_29) & 0xEBC6A1F9L) > ((0x3BEEL & (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_28, g_244)), (((*l_552) = (l_551 = l_551)) == (((l_553[0] ^ (-1L)) , l_554) , &p_26)))), l_553[4]))) > 0x64EFL)))
    { 
        return g_541.f4;
    }
    else
    { 
        int32_t l_555 = 0x6B966C4CL;
        int32_t l_587[6][5][2] = {{{0x121A118EL,(-4L)},{0x121A118EL,7L},{0x9AD18978L,0x121A118EL},{7L,(-4L)},{1L,1L}},{{0x9AD18978L,1L},{1L,(-4L)},{7L,0x121A118EL},{0x9AD18978L,7L},{0x121A118EL,(-4L)}},{{0x121A118EL,7L},{0x9AD18978L,0x121A118EL},{7L,(-4L)},{1L,1L},{0x9AD18978L,1L}},{{1L,(-4L)},{7L,0x121A118EL},{0x9AD18978L,7L},{0x121A118EL,(-4L)},{0x121A118EL,7L}},{{0x9AD18978L,0x121A118EL},{7L,(-4L)},{1L,1L},{0x9AD18978L,1L},{1L,(-4L)}},{{7L,0x121A118EL},{0x9AD18978L,7L},{0x121A118EL,(-4L)},{0x121A118EL,7L},{0x9AD18978L,0x121A118EL}}};
        uint8_t l_604 = 255UL;
        struct S0 * const *l_680 = &g_636;
        int32_t l_683 = 0x8C71F8D2L;
        uint32_t l_691 = 0x2B2D4D02L;
        uint16_t ***l_692 = &g_169;
        int i, j, k;
        l_555 ^= 0xD96A2A38L;
        for (g_466 = 2; (g_466 >= 0); g_466 -= 1)
        { 
            return l_555;
        }
        (**g_399) = p_29;
        for (g_155.f1 = 0; (g_155.f1 == (-20)); --g_155.f1)
        { 
            int8_t l_578[5][1];
            struct S1 **l_582 = &l_551;
            int32_t l_583 = 0xE7E2188EL;
            int32_t l_584[2];
            uint8_t l_633 = 1UL;
            int16_t *l_658 = &g_59;
            uint8_t l_661 = 0x8DL;
            int32_t l_684[7] = {(-2L),(-2L),(-2L),(-2L),(-2L),(-2L),(-2L)};
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_578[i][j] = 0xB9L;
            }
            for (i = 0; i < 2; i++)
                l_584[i] = 0L;
        }
        l_683 ^= (((((l_691 || ((&l_581 == (l_693 = &g_170)) && (&g_636 == &g_636))) != 0xEDB1F0673AEE771DLL) > (safe_sub_func_uint8_t_u_u(l_554.f1, l_554.f1))) > p_27.f0) != 0x8BL);
    }
    (*g_636) = l_696;
    return l_553[0];
}



static union U2  func_31(uint32_t  p_32, int32_t * p_33, int8_t  p_34, int32_t  p_35)
{ 
    int32_t *l_90 = (void*)0;
    int32_t *l_91 = &g_46;
    int32_t *l_92[7][3] = {{&g_3,(void*)0,&g_46},{&g_3,&g_3,&g_3},{&g_3,&g_3,&g_46},{&g_46,&g_46,&g_3},{&g_3,&g_3,&g_3},{&g_3,&g_3,(void*)0},{&g_3,(void*)0,&g_3}};
    uint16_t *l_101 = &g_94;
    uint16_t *l_111 = &g_83[4];
    uint8_t *l_112 = &g_113;
    int64_t l_114 = 1L;
    struct S0 *l_118 = &g_30;
    union U2 l_149 = {0xCA2155B1L};
    struct S1 *l_154 = &g_155;
    uint64_t *l_314 = &g_225;
    struct S0 l_330 = {-8L,0L};
    int32_t ***l_409 = &g_400;
    uint8_t ****l_452 = &g_358;
    int8_t l_485[7][7][4] = {{{0x35L,0L,(-5L),(-8L)},{0x53L,9L,(-1L),0x31L},{1L,(-9L),0x97L,1L},{0x97L,1L,0x86L,0xB7L},{(-1L),0xFAL,1L,7L},{0x31L,1L,0xA1L,7L},{0xB7L,(-1L),(-6L),9L}},{{1L,0x53L,(-1L),1L},{(-1L),0xDFL,0x34L,0x34L},{0x88L,0x88L,(-8L),1L},{1L,(-1L),0L,0xA3L},{0x05L,0x34L,0xADL,0L},{(-5L),0x34L,(-3L),0xA3L},{0x34L,(-1L),9L,1L}},{{7L,0x88L,0x31L,0x34L},{0xFAL,0xDFL,7L,1L},{7L,0x53L,0xDFL,9L},{0x96L,(-1L),0x05L,7L},{0x53L,1L,(-1L),7L},{0xCAL,0xFAL,0x96L,0xB7L},{(-9L),1L,0x35L,1L}},{{(-3L),(-9L),0x53L,0x31L},{(-1L),9L,0xFEL,(-8L)},{(-1L),0L,0xDCL,0L},{(-1L),0x1AL,0xFEL,0x35L},{(-1L),0L,0x53L,0x05L},{(-3L),(-5L),0x35L,0x97L},{(-9L),0xA1L,0x96L,0xDFL}},{{0xCAL,(-3L),(-1L),0L},{0x53L,(-1L),0x05L,(-1L)},{0x96L,0xADL,0xDFL,1L},{7L,0xCAL,7L,0x1AL},{0xFAL,0x31L,0x31L,0xFAL},{7L,0xA3L,9L,0xA1L},{0x34L,(-1L),(-3L),1L}},{{(-5L),(-1L),0xADL,1L},{0x05L,(-1L),0L,0xA1L},{1L,0xA3L,(-8L),0xFAL},{0x88L,0x31L,0x34L,0x1AL},{(-1L),0xCAL,(-1L),1L},{1L,0xADL,(-6L),(-1L)},{1L,0xA3L,0x53L,0xADL}},{{0xDFL,0xA1L,0xDCL,7L},{1L,0x53L,(-1L),(-9L)},{(-9L),(-3L),(-9L),0x53L},{0L,0xFAL,0xA3L,0x86L},{(-1L),(-1L),(-3L),0xFAL},{0x86L,0x88L,(-3L),(-1L)},{(-1L),(-1L),0xA3L,0xDFL}}};
    uint64_t l_500 = 0x9C1D391246385FB9LL;
    int i, j, k;
    g_94++;
    if ((safe_mul_func_uint8_t_u_u(249UL, ((safe_lshift_func_uint16_t_u_s(((*l_101)++), ((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(255UL, ((*l_112) = ((0x0D117829FC7FA6F0LL <= ((safe_unary_minus_func_uint64_t_u(18446744073709551615UL)) , (((g_83[2] , l_111) != l_111) ^ p_32))) >= p_32)))), g_83[1])), l_114)) >= 0x8DL))) > 0x7C2203A2L))))
    { 
        int64_t l_117[3][7] = {{(-4L),(-4L),0L,(-4L),(-4L),0L,(-4L)},{(-4L),0x2CAAA7E9AD55411ALL,0x2CAAA7E9AD55411ALL,(-4L),0x2CAAA7E9AD55411ALL,0x2CAAA7E9AD55411ALL,(-4L)},{0x2CAAA7E9AD55411ALL,(-4L),0x2CAAA7E9AD55411ALL,0x2CAAA7E9AD55411ALL,(-4L),0x2CAAA7E9AD55411ALL,0x2CAAA7E9AD55411ALL}};
        struct S0 **l_119 = &l_118;
        const union U2 l_120[7] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
        struct S0 *l_121 = &g_122;
        const int32_t *l_125 = &g_93;
        int32_t l_128 = 0x1295E224L;
        int32_t l_130 = 0x07FE9BFAL;
        uint8_t *l_150[4] = {&g_113,&g_113,&g_113,&g_113};
        uint8_t *l_157 = (void*)0;
        int32_t l_177 = 0xA823A494L;
        int32_t l_186 = 0x09068607L;
        uint32_t *l_232 = &g_155.f2;
        int16_t *l_235 = &g_59;
        struct S1 l_256 = {0x0830096BL,0L,0x106FE50BL,0x48ACF2BDL,4294967290UL,{0x55781F09E4EC8DBFLL,0x0A492C279F2604A9LL}};
        uint32_t l_317 = 2UL;
        int64_t l_418 = 0L;
        int i, j;
        (*l_91) = (safe_mul_func_int16_t_s_s(g_58, ((l_117[1][2] || p_32) & (((*l_119) = l_118) == (g_77[0][0][2] , &g_30)))));
        (*l_121) = (l_120[6] , (**l_119));
lbl_171:
        for (g_94 = 0; (g_94 < 23); g_94 = safe_add_func_uint64_t_u_u(g_94, 6))
        { 
            int8_t l_126 = (-1L);
            int32_t l_129 = 0x11E9822EL;
            int32_t **l_135[3];
            struct S1 l_148 = {2UL,-9L,0x5FE504BBL,0xF763CE0EL,0x5F683789L,{-9L,0xC340CA8D4FCCDB89LL}};
            int i;
            for (i = 0; i < 3; i++)
                l_135[i] = &l_92[0][1];
            if ((l_126 ^= ((*l_91) &= ((void*)0 == l_125))))
            { 
                int64_t l_127[4];
                int32_t l_131 = 0x0681B76BL;
                int i;
                for (i = 0; i < 4; i++)
                    l_127[i] = 0xE8D107E331B44237LL;
                g_132++;
            }
            else
            { 
                int32_t ***l_136 = &l_135[1];
                (*l_136) = l_135[1];
                (**l_136) = (void*)0;
                (**l_136) = (g_137 = l_92[0][1]);
                (**l_136) = &g_93;
            }
            for (g_46 = 0; (g_46 <= 13); ++g_46)
            { 
                for (p_35 = 0; (p_35 != 0); p_35++)
                { 
                    l_128 |= (*l_91);
                    g_93 |= (safe_div_func_int32_t_s_s(((*l_91) < 0x6632BE3B96202E0DLL), (safe_div_func_uint16_t_u_u(((g_58 || (*p_33)) && (0xAB10L != ((0xFDE322FCL <= (safe_rshift_func_uint8_t_u_s((l_148 , p_32), 4))) , g_77[2][1][3]))), 2UL))));
                    return l_149;
                }
            }
        }
        for (l_114 = 0; (l_114 <= 2); l_114 += 1)
        { 
            uint8_t *l_156[5][1][4] = {{{&g_113,&g_113,(void*)0,&g_113}},{{&g_113,(void*)0,&g_113,(void*)0}},{{&g_113,(void*)0,(void*)0,&g_113}},{{&g_113,(void*)0,&g_113,(void*)0}},{{(void*)0,(void*)0,&g_113,&g_113}}};
            int32_t l_158 = 0x007DA6FAL;
            struct S0 l_161[7][3][7] = {{{{0L,-1L},{0L,0x15FF56717282AEC8LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{1L,0x0DD6F6EEB393109ELL},{0xE256FD15697580FFLL,7L},{1L,0x65207D733AEA3B36LL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL}},{{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0L,-7L},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL}},{{0L,-1L},{1L,0x0DD6F6EEB393109ELL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL},{0xE256FD15697580FFLL,7L},{0L,0x15FF56717282AEC8LL},{0xAA1E914ED28DC9B1LL,0L},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL}}},{{{0x881F7A3D568A4185LL,2L},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{-5L,0L},{0x3A77B9CB57D1AC81LL,-2L},{0x881F7A3D568A4185LL,2L},{0x3A77B9CB57D1AC81LL,-2L},{-5L,0L}},{{0L,0x15FF56717282AEC8LL},{0L,0x15FF56717282AEC8LL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{0L,-1L},{1L,0x65207D733AEA3B36LL},{1L,0x0DD6F6EEB393109ELL}},{{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{-10L,-4L},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0x3A77B9CB57D1AC81LL,-2L},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL},{-10L,-4L},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL}}},{{{0xE256FD15697580FFLL,7L},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{0xE256FD15697580FFLL,7L},{0L,-1L},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL},{0xAA1E914ED28DC9B1LL,0L}},{{0x881F7A3D568A4185LL,2L},{0L,-7L},{3L,0x85B9072670521212LL},{0L,-7L},{0x881F7A3D568A4185LL,2L},{-10L,-4L},{3L,0x85B9072670521212LL}},{{1L,0x65207D733AEA3B36LL},{0L,0x15FF56717282AEC8LL},{1L,0x0DD6F6EEB393109ELL},{1L,0x0DD6F6EEB393109ELL},{0L,0x15FF56717282AEC8LL},{1L,0x65207D733AEA3B36LL},{0xAA1E914ED28DC9B1LL,0L}}},{{{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL},{0x3A77B9CB57D1AC81LL,-2L},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{-10L,-4L},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0x3A77B9CB57D1AC81LL,-2L},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL}},{{1L,0x65207D733AEA3B36LL},{1L,0x0DD6F6EEB393109ELL},{0xAA1E914ED28DC9B1LL,0L},{0xE256FD15697580FFLL,7L},{0xE256FD15697580FFLL,7L},{0xAA1E914ED28DC9B1LL,0L},{1L,0x0DD6F6EEB393109ELL}},{{0x881F7A3D568A4185LL,2L},{0x3A77B9CB57D1AC81LL,-2L},{-5L,0L},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{0x881F7A3D568A4185LL,2L},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{-5L,0L}}},{{{0xE256FD15697580FFLL,7L},{0L,0x15FF56717282AEC8LL},{0xAA1E914ED28DC9B1LL,0L},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{1L,0x65207D733AEA3B36LL},{1L,0x65207D733AEA3B36LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL}},{{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0L,-7L},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL},{0L,-7L},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL}},{{0L,0x15FF56717282AEC8LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{1L,0x0DD6F6EEB393109ELL},{0xE256FD15697580FFLL,7L},{1L,0x65207D733AEA3B36LL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL}}},{{{0x881F7A3D568A4185LL,2L},{-10L,-4L},{3L,0x85B9072670521212LL},{-10L,-4L},{0x881F7A3D568A4185LL,2L},{0L,-7L},{3L,0x85B9072670521212LL}},{{0L,-1L},{0L,0x15FF56717282AEC8LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{1L,0x0DD6F6EEB393109ELL},{0xE256FD15697580FFLL,7L},{1L,0x65207D733AEA3B36LL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL}},{{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0L,-7L},{0x18C28FC6314671A0LL,0x041CE7FD013EDE44LL},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{0x977AF7773343C1BBLL,0x4476C7899EEED96ALL}}},{{{0L,-1L},{1L,0x0DD6F6EEB393109ELL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL},{0xE256FD15697580FFLL,7L},{0L,0x15FF56717282AEC8LL},{0xAA1E914ED28DC9B1LL,0L},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL}},{{0x881F7A3D568A4185LL,2L},{0xE2F3EFAEFD56AB96LL,0xE6F76B87F12E359ELL},{-5L,0L},{0x3A77B9CB57D1AC81LL,-2L},{0x881F7A3D568A4185LL,2L},{0x3A77B9CB57D1AC81LL,-2L},{-5L,0L}},{{0L,0x15FF56717282AEC8LL},{0L,0x15FF56717282AEC8LL},{0x6A5D6F3FE045DE4ALL,0x5F31A84B02573FF7LL},{0x77AE96437F609D87LL,0xC5E7DC01900FF0B0LL},{0L,-1L},{1L,0x65207D733AEA3B36LL},{1L,0x0DD6F6EEB393109ELL}}}};
            uint8_t l_185 = 0x30L;
            uint32_t l_188 = 0x037EAE16L;
            uint8_t l_191 = 0x24L;
            int32_t l_205 = 1L;
            int i, j, k;
            if ((((((&g_113 == (l_150[0] = l_112)) <= (+g_83[(l_114 + 1)])) == (p_34 > 0L)) || ((**l_119) , ((safe_unary_minus_func_uint8_t_u(((&g_93 != &g_3) && (*l_125)))) != p_32))) & 0xCBDEBE93CE3015E8LL))
            { 
                uint8_t **l_153 = &l_112;
                int32_t l_159 = 0x1F4F5D26L;
                l_159 &= ((*l_91) = (l_158 = (((((*l_153) = (void*)0) != (((void*)0 == l_154) , l_156[3][0][1])) , &g_113) == l_157)));
                return g_160;
            }
            else
            { 
                l_161[0][1][0] = l_161[0][0][4];
                for (g_155.f0 = 0; (g_155.f0 <= 2); g_155.f0 += 1)
                { 
                    g_122 = l_161[0][0][4];
                }
                for (g_93 = 5; (g_93 >= 0); g_93 -= 1)
                { 
                    uint8_t ***l_164 = &g_162;
                    (*l_164) = g_162;
                    ++g_165;
                    return g_160;
                }
                if (((*p_33) & 4294967295UL))
                { 
                    uint16_t **l_168 = &l_111;
                    g_169 = l_168;
                }
                else
                { 
                    return g_160;
                }
            }
            if ((*l_125))
            { 
                uint32_t l_172 = 0x11684F62L;
                if (l_114)
                    goto lbl_171;
                l_172++;
            }
            else
            { 
                int32_t l_187 = 0x6504F610L;
                if ((((safe_mod_func_int32_t_s_s((((**g_162) ^ l_177) != ((5UL & 0x1C6D6D27L) , (safe_unary_minus_func_int32_t_s((safe_mod_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((((-1L) > 0x5AFF450A725E86CDLL) | (safe_rshift_func_int16_t_s_s((-1L), (*l_125)))) , 0xFCE7L), (*l_125))) , l_161[0][0][4].f1), (**g_162))))))), 0xFCE4B785L)) ^ l_185) , g_93))
                { 
                    ++l_188;
                    (*l_121) = g_155.f5;
                    (*l_91) = l_191;
                }
                else
                { 
                    int32_t *l_192 = &l_149.f0;
                    l_192 = (g_137 = p_33);
                    (*l_91) = ((((((safe_mul_func_int8_t_s_s((p_34 , (((p_32 = l_187) == (*g_137)) == ((safe_div_func_uint32_t_u_u(g_77[0][2][2], ((safe_div_func_int64_t_s_s((*l_192), (safe_add_func_int64_t_s_s((g_30.f1 >= (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((*g_170), p_34)), 1L))), 0xC0A38D345E9BEFF2LL)))) , g_160.f0))) <= (*g_170)))), p_34)) ^ 18446744073709551609UL) , g_155.f2) , 0UL) < g_77[0][0][2]) || (**g_162));
                }
            }
            for (g_155.f5.f0 = 0; (g_155.f5.f0 <= 2); g_155.f5.f0 += 1)
            { 
                uint16_t l_206 = 1UL;
                int32_t **l_211[4][4] = {{&l_92[6][1],&l_90,&l_92[6][1],&l_90},{&l_92[6][1],&l_90,&l_92[6][1],&l_90},{&l_92[6][1],&l_90,&l_92[6][1],&l_90},{&l_92[6][1],&l_90,&l_92[6][1],&l_90}};
                struct S0 l_212 = {0L,0x69DFC2EF96565B5ALL};
                int8_t *l_220 = &g_77[2][0][2];
                int8_t *l_221 = (void*)0;
                int8_t *l_222[6][4] = {{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223},{&g_223,&g_223,&g_223,&g_223}};
                uint64_t *l_224[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_224[i] = &g_225;
                for (l_185 = 0; (l_185 <= 2); l_185 += 1)
                { 
                    (*l_91) = (*p_33);
                    l_206--;
                    return l_120[4];
                }
                (*l_91) |= ((safe_add_func_uint8_t_u_u((0x85AF8C4AL || 1L), p_32)) != ((l_211[0][0] != (((((*p_33) == (*p_33)) ^ 1UL) & 18446744073709551607UL) , &g_137)) >= (*l_125)));
                (*l_121) = l_212;
                (*l_121) = ((((&g_162 != (void*)0) < (safe_div_func_int16_t_s_s(((g_155.f4 , &l_212) != l_118), 0x22BAL))) < (g_225 = (safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_uint8_t_u((((g_223 ^= ((*l_220) = (safe_mul_func_int16_t_s_s(p_32, p_35)))) == 4UL) >= g_160.f2))), 2)))) , g_155.f5);
                for (g_155.f0 = 0; (g_155.f0 <= 3); g_155.f0 += 1)
                { 
                    struct S0 l_226 = {0x5F5A95782ED9C985LL,-5L};
                    struct S0 *l_227[4];
                    struct S0 ***l_229 = &l_119;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_227[i] = (void*)0;
                    p_33 = &g_3;
                    g_228 = ((*l_121) = l_226);
                    (*l_229) = &l_118;
                    g_137 = (void*)0;
                }
                for (g_93 = 0; (g_93 <= 2); g_93 += 1)
                { 
                    (*l_121) = l_161[6][1][4];
                    return g_160;
                }
            }
        }
        if ((g_160.f0 |= ((((((((p_34 == ((*l_235) = ((((++(*g_170)) , l_150[0]) == ((*g_162) = l_112)) ^ (((*l_232) ^= p_32) | (++g_4))))) != (g_132 ^ (&g_228 != &g_122))) , &l_101) == &g_170) && (*g_170)) == g_46) , (*l_125)) > g_155.f0)))
        { 
            int64_t l_238 = 4L;
            struct S0 **l_239 = &l_118;
            int16_t *l_242 = (void*)0;
            int16_t *l_243 = &g_244;
            int32_t l_251 = (-1L);
            int32_t *l_266 = &l_130;
            int64_t *l_281 = (void*)0;
            int64_t *l_282 = (void*)0;
            int64_t *l_283 = (void*)0;
            int64_t *l_284 = &g_122.f0;
            uint32_t l_285 = 0x0BD83429L;
            uint16_t **l_300 = &l_101;
lbl_245:
            if ((safe_mul_func_int16_t_s_s(0L, ((((l_238 , &l_121) != (g_228 , l_239)) & ((((safe_rshift_func_int16_t_s_s(0L, ((*l_243) |= ((*l_235) = 0x913AL)))) , p_35) , (void*)0) != (void*)0)) | 0L))))
            { 
lbl_302:
                (*l_91) ^= 1L;
                (*l_121) = (*l_118);
            }
            else
            { 
lbl_263:
                l_130 = g_61;
                if (g_160.f0)
                    goto lbl_245;
            }
            for (l_149.f0 = 25; (l_149.f0 >= 20); l_149.f0 = safe_sub_func_int16_t_s_s(l_149.f0, 7))
            { 
                int32_t **l_248 = &g_137;
                int32_t l_249 = 1L;
                int32_t l_250 = 0x929FAF4FL;
                int32_t l_252[4][4] = {{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L},{0L,0L,0L,0L}};
                int i, j;
                for (l_114 = 1; (l_114 >= 0); l_114 -= 1)
                { 
                    return g_160;
                }
                if ((*p_33))
                    continue;
                (*l_248) = &g_46;
                g_253++;
            }
            if (((g_58 == (((*l_243) = ((((*l_121) , ((((*l_125) & p_34) & ((*l_91) = ((l_186 = (l_256 , ((*l_235) = (l_149 , (!(((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint16_t_u((safe_div_func_uint8_t_u_u(((&g_77[0][0][2] == (void*)0) ^ g_223), (**g_162))))) , 1UL), p_32)) | (*g_163)) ^ (*l_125))))))) ^ p_32))) < 0x7615F8351B3DFC46LL)) , l_251) & 0xA3A7E0E6L)) ^ 65535UL)) > g_61))
            { 
                if (l_256.f5.f1)
                    goto lbl_263;
            }
            else
            { 
                union U2 l_270 = {0x49AD7379L};
                for (l_186 = (-8); (l_186 >= 21); ++l_186)
                { 
                    union U2 l_267 = {0x43DA4B0DL};
                    l_266 = &g_93;
                    return l_267;
                }
                for (g_61 = 10; (g_61 == 33); g_61++)
                { 
                    return l_270;
                }
                return g_160;
            }
            g_160.f0 &= ((g_83[1] > (((*l_266) < (((safe_add_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(((*l_284) = ((((safe_add_func_int16_t_s_s((-10L), (**g_169))) | 0xE6C7L) >= (safe_lshift_func_uint16_t_u_s(((((*l_243) ^= ((((void*)0 != (*g_162)) < (*p_33)) || (*g_163))) == p_34) > (*l_125)), p_32))) == g_94)), 0xE217CBE34D34D7A4LL)), 0x9FL)), 1UL)) , p_34) & l_285)) , (*l_91))) && g_155.f2);
            for (g_113 = 0; (g_113 <= 2); g_113 += 1)
            { 
                int32_t l_297 = 0L;
                int32_t l_301 = 0L;
                int i;
                l_301 = (safe_sub_func_uint8_t_u_u((g_83[(g_113 + 2)] && (safe_mul_func_int16_t_s_s((((safe_mod_func_int16_t_s_s(g_160.f2, (+((safe_rshift_func_uint16_t_u_u(((g_93 = (safe_mod_func_uint16_t_u_u((((l_297 = 0x23L) , l_111) == &g_83[(g_113 + 2)]), (safe_add_func_uint32_t_u_u(4UL, ((void*)0 == l_300)))))) >= 0L), 11)) > 0xE49ED9ADL)))) & (*p_33)) , 6L), p_35))), 0x81L));
                if (g_228.f1)
                    goto lbl_302;
                for (l_256.f5.f1 = 0; (l_256.f5.f1 <= 2); l_256.f5.f1 += 1)
                { 
                    int i, j;
                    (*l_121) = g_228;
                    if (l_117[g_113][(l_256.f5.f1 + 1)])
                        break;
                }
                for (l_256.f5.f0 = 2; (l_256.f5.f0 >= 0); l_256.f5.f0 -= 1)
                { 
                    int i, j;
                    (*l_266) = l_117[l_256.f5.f0][l_256.f5.f0];
                    if (l_117[l_256.f5.f0][(l_256.f5.f0 + 3)])
                        break;
                }
            }
        }
        else
        { 
            int32_t *l_318 = &l_186;
            struct S0 l_331 = {0x6E4BEBF86CB764C7LL,0xAE149A9F41EF78B6LL};
            struct S0 ***l_336[2][4] = {{&l_119,&l_119,&l_119,&l_119},{&l_119,&l_119,&l_119,&l_119}};
            int16_t *l_354[7] = {&g_244,(void*)0,&g_244,&g_244,(void*)0,&g_244,&g_244};
            int32_t l_412 = (-4L);
            int32_t l_414 = 0x0825CCABL;
            int i, j;
            for (g_155.f1 = 17; (g_155.f1 == 20); g_155.f1 = safe_add_func_uint64_t_u_u(g_155.f1, 8))
            { 
                int64_t l_309[3];
                uint64_t **l_315 = &l_314;
                int16_t *l_316[7] = {&g_244,&g_244,(void*)0,&g_244,&g_244,(void*)0,&g_244};
                int32_t **l_319[3];
                uint16_t l_355 = 6UL;
                uint8_t ***l_356 = (void*)0;
                uint8_t ****l_357[4][4][4] = {{{&l_356,&l_356,&l_356,(void*)0},{&l_356,&l_356,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356}},{{&l_356,&l_356,(void*)0,(void*)0},{&l_356,&l_356,&l_356,&l_356},{(void*)0,(void*)0,&l_356,&l_356},{(void*)0,&l_356,&l_356,&l_356}},{{&l_356,&l_356,(void*)0,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,(void*)0},{(void*)0,&l_356,&l_356,&l_356}},{{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,&l_356,&l_356},{&l_356,&l_356,(void*)0,(void*)0},{(void*)0,&l_356,&l_356,&l_356}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_309[i] = 4L;
                for (i = 0; i < 3; i++)
                    l_319[i] = (void*)0;
                l_317 &= ((safe_mul_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(g_228.f1, (l_309[0] <= g_155.f1))), ((&p_33 != &p_33) <= (safe_lshift_func_int16_t_s_u((l_120[6] , ((safe_sub_func_int16_t_s_s((g_244 = ((*l_235) = (((*l_315) = l_314) == (void*)0))), 7UL)) || g_83[1])), (*g_170)))))) >= 1L);
                l_91 = l_318;
                if ((safe_add_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(((*l_314)--), p_32)) , ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((g_155.f4 == (0x97L ^ (((l_331 = l_330) , (safe_mod_func_int32_t_s_s((*l_318), (*l_125)))) >= (((g_160.f0 ^= (safe_add_func_int16_t_s_s((-1L), (*l_318)))) != 0x92CB7200L) & p_32)))) , l_336[0][1]) != l_336[0][1]), p_35)), (*l_318))) == 4294967295UL)), g_122.f0)))
                { 
                    uint8_t *l_349 = &g_113;
                    int32_t l_350 = (-1L);
                    (*l_318) = ((l_350 = (safe_lshift_func_uint16_t_u_s((*g_170), ((-6L) <= ((safe_add_func_int16_t_s_s(((safe_sub_func_uint64_t_u_u(((+((~0x7022CB941DC91713LL) < g_253)) != ((*l_235) = ((safe_mul_func_int16_t_s_s((((void*)0 != l_349) ^ (((**g_162) |= l_350) && g_165)), p_32)) & 1L))), 0x982AADF2E0D3893CLL)) && (*l_318)), (*g_170))) == p_32))))) != 0x12FEL);
                    g_137 = p_33;
                    if ((*p_33))
                        break;
                    (*l_121) = g_155.f5;
                }
                else
                { 
                    g_93 = (0xD691L <= ((+((safe_mul_func_int8_t_s_s((*l_125), ((l_186 &= (-1L)) ^ ((*g_170) = ((*l_101) = p_32))))) != ((p_35 ^ (g_3 , (((l_354[4] = &g_59) == (void*)0) == (*l_125)))) < l_355))) > 65535UL));
                }
                g_358 = l_356;
            }
            for (p_34 = 0; (p_34 != 24); p_34 = safe_add_func_int8_t_s_s(p_34, 6))
            { 
                uint64_t l_389 = 0x0F610E579CAB940DLL;
                struct S0 l_410 = {1L,0x92E31FD890B7200CLL};
                for (g_93 = 0; (g_93 <= 6); g_93 += 1)
                { 
                    uint32_t l_388 = 0x2CCC6C4DL;
                    int8_t *l_390[2][1][5] = {{{&g_77[0][0][2],&g_77[0][0][2],&g_77[0][0][2],(void*)0,(void*)0}},{{&g_77[0][0][2],&g_77[0][0][2],&g_77[0][0][2],(void*)0,&g_77[0][0][2]}}};
                    int32_t **l_393 = &l_90;
                    int i, j, k;
                    if ((*p_33))
                        break;
                    (*l_393) = ((safe_lshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(((*l_111) = (safe_mod_func_uint32_t_u_u((((-1L) != 0x0D8B566A6466EB96LL) <= (!(((safe_mod_func_int64_t_s_s(((safe_rshift_func_int8_t_s_s((((*g_170) < (safe_rshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((((g_77[0][0][2] = (safe_rshift_func_int8_t_s_s(l_388, l_389))) > (l_388 && (safe_rshift_func_uint8_t_u_u(l_389, 4)))) , p_32) < 248UL), (*l_125))) && (-5L)), (*l_318))), l_389)), (*l_125)))) ^ (*l_318)), 2)) < g_83[1]), (*l_318))) >= 0x708EL) != 1L))), l_388))), p_32)) == g_89) ^ 0xB5L), 0x96L)), p_35)) ^ 252UL), p_34)) , (void*)0);
                }
                for (g_165 = 0; (g_165 <= 2); g_165 += 1)
                { 
                    int32_t l_406 = 0x909BDC29L;
                    int i, j;
                    (*l_121) = ((((l_117[g_165][(g_165 + 2)] , &l_314) == &l_314) != (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((g_122 , ((safe_unary_minus_func_int64_t_s((g_399 == ((((safe_rshift_func_int16_t_s_u(((~((safe_div_func_int32_t_s_s((l_406 = 0x66EF3F22L), (safe_lshift_func_int16_t_s_s(p_35, l_389)))) >= p_35)) && 0xEBL), (**g_169))) != g_94) , g_160.f0) , l_409)))) || (-10L))), 0xC82FF2273EAB0986LL)), (-1L)))) , (**l_119));
                    (*l_121) = l_410;
                    return l_120[4];
                }
                (**g_399) = (((void*)0 != l_354[4]) , &l_128);
                if ((***l_409))
                    continue;
            }
            for (g_122.f0 = 3; (g_122.f0 >= 0); g_122.f0 -= 1)
            { 
                int8_t l_411 = 0xD4L;
                int32_t l_413 = (-9L);
                ++g_415[3][0][0];
                for (g_223 = 3; (g_223 >= 0); g_223 -= 1)
                { 
                    if (l_418)
                        break;
                    (*l_91) ^= (*p_33);
                    return g_160;
                }
            }
        }
    }
    else
    { 
        struct S0 **l_435 = &l_118;
        struct S0 **l_437 = &l_118;
        uint8_t *l_443 = &g_113;
        int32_t l_454 = 0x1252B737L;
        const int32_t *l_458 = &l_454;
        const int32_t **l_457 = &l_458;
        const int8_t l_467 = 0L;
        struct S0 l_473 = {-1L,0x67F97A311BCDE581LL};
        int32_t l_496 = 0L;
        int32_t l_497[3];
        union U2 l_504 = {0x0438497BL};
        uint32_t l_518 = 0xDE4621F2L;
        uint16_t *l_538 = &g_94;
        int i;
        for (i = 0; i < 3; i++)
            l_497[i] = 1L;
        if ((**g_400))
        { 
            uint8_t *l_446 = &g_165;
            int32_t l_450 = 0x6E5F2A4EL;
            int32_t *l_451 = &g_60[0][1][3];
            int8_t *l_453 = &g_77[1][1][2];
            int32_t * const l_461 = &g_462;
            int32_t * const *l_460 = &l_461;
            int32_t * const **l_459[5];
            int64_t *l_468[5];
            uint32_t l_486 = 0x2C044C8DL;
            int i;
            for (i = 0; i < 5; i++)
                l_459[i] = &l_460;
            for (i = 0; i < 5; i++)
                l_468[i] = &l_114;
            for (g_132 = (-5); (g_132 < 53); g_132 = safe_add_func_int32_t_s_s(g_132, 1))
            { 
                struct S0 l_423 = {0x51A77CA87C93DA48LL,1L};
                struct S0 *l_424 = &g_155.f5;
                struct S0 ***l_436 = &l_435;
                struct S0 ***l_438 = &l_437;
                uint8_t **l_444[2][4][6] = {{{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443}},{{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443},{&l_443,&l_443,&l_443,&l_443,&l_443,&l_443}}};
                int i, j, k;
                g_160.f0 &= ((safe_div_func_int16_t_s_s((p_32 == (((*l_424) = l_423) , ((((*l_111) = ((*l_101) = ((((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((*l_91), 2)), (safe_mod_func_int32_t_s_s(((*g_163) != ((void*)0 == (*g_399))), (*g_137))))) < 8L) || 0UL) && (-7L)))) , g_77[0][2][3]) == 0xD09D9527L))), g_228.f1)) > 0xBD3FL);
                (*l_91) &= (safe_mul_func_uint8_t_u_u((((*l_436) = l_435) != ((*l_438) = l_437)), ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((*g_162) = (**g_358)) == (l_446 = (g_445 = l_443))), 14)), 4)) , 0x56L)));
                (*g_137) = (*p_33);
            }
            (***l_409) = (((*l_453) = (p_35 != ((safe_mod_func_uint8_t_u_u((((*l_451) = (safe_unary_minus_func_uint32_t_u(l_450))) , 0xE8L), ((0x7D9123E0L || 0UL) ^ ((*l_314) = ((p_34 , l_452) != l_452))))) && 1L))) , l_454);
            if ((((l_457 != (g_463 = (*l_409))) || (*p_33)) | (l_467 < (g_155.f5.f1 &= (g_155.f5.f0 = (0xACL && p_34))))))
            { 
                union U2 l_474 = {9L};
                for (g_113 = 0; (g_113 >= 49); g_113 = safe_add_func_uint16_t_u_u(g_113, 1))
                { 
                    struct S0 l_471 = {-10L,6L};
                    struct S0 *l_472[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    l_473 = l_471;
                }
                return l_474;
            }
            else
            { 
                struct S1 l_481 = {7UL,0L,1UL,0L,0UL,{-7L,0xCDB37475A7284693LL}};
                int16_t *l_484 = &g_59;
                int32_t l_489 = 7L;
                int32_t l_490 = 8L;
                int32_t l_491 = 5L;
                int32_t l_492 = 1L;
                int32_t l_493 = 0L;
                int32_t l_495[6] = {6L,6L,6L,6L,6L,6L};
                int8_t l_498 = 0L;
                struct S0 *l_503[2][5][1] = {{{(void*)0},{&l_330},{(void*)0},{&l_330},{(void*)0}},{{&l_330},{(void*)0},{&l_330},{(void*)0},{&l_330}}};
                int i, j, k;
                (*l_91) = (((l_485[2][4][2] &= ((((((safe_mod_func_int16_t_s_s((-4L), ((-4L) && (safe_lshift_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((*l_453) = (((l_111 == (void*)0) > p_32) , ((((((l_481 , (((safe_mod_func_int64_t_s_s((((l_484 = l_484) != (void*)0) ^ g_228.f0), g_30.f0)) , &p_34) == (void*)0)) | l_481.f4) , p_35) > (**l_457)) , &p_34) == &g_77[1][2][1]))) , (*g_170)), p_32)) | 9UL), 4))))) != g_60[0][1][3]) != p_35) == (*p_33)) && 8UL) & (*l_461))) , 0L) <= (*l_458));
                if ((*p_33))
                { 
                    ++l_486;
                }
                else
                { 
                    int64_t l_494 = 0x1D9611BD1179D6E5LL;
                    int32_t l_499 = 1L;
                    g_122 = (**l_437);
                    (**l_409) = (void*)0;
                    (**l_460) |= (((void*)0 == &g_77[2][3][3]) ^ p_32);
                    l_454 = 0xE9BADD51L;
                    ++l_500;
                }
                g_122 = (**l_437);
            }
            return l_504;
        }
        else
        { 
            const uint32_t l_519[4][5] = {{18446744073709551607UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551607UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551607UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL,18446744073709551607UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
            struct S0 l_523 = {-1L,1L};
            int32_t **l_524 = &g_137;
            uint64_t *l_536 = &g_225;
            uint64_t **l_537 = &l_536;
            int16_t *l_539 = &g_59;
            uint32_t l_540 = 0xBB3F19BAL;
            int i, j;
            for (g_223 = 0; (g_223 <= 0); g_223 += 1)
            { 
                uint32_t *l_520 = &g_4;
                int32_t l_521[6][5] = {{0x42A6075FL,0xF71C3AF1L,0xF71C3AF1L,0x42A6075FL,0xF71C3AF1L},{0xAF3C9094L,0xAF3C9094L,0x29F798D3L,0xAF3C9094L,0xAF3C9094L},{0xF71C3AF1L,0x42A6075FL,0xF71C3AF1L,0xF71C3AF1L,0x42A6075FL},{0xAF3C9094L,0x2B1B688AL,0x2B1B688AL,0xAF3C9094L,0x2B1B688AL},{0x42A6075FL,0x42A6075FL,0xCDA945E8L,0x42A6075FL,0x42A6075FL},{0x2B1B688AL,0xAF3C9094L,0x2B1B688AL,0x2B1B688AL,0xAF3C9094L}};
                int32_t l_522 = (-1L);
                int i, j;
            }
            (*l_524) = (*g_463);
            l_540 = (safe_sub_func_int8_t_s_s(g_4, (((safe_div_func_int32_t_s_s(((**g_400) = ((((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((((*g_170) == (safe_unary_minus_func_uint64_t_u(((((*l_539) = ((((0x9513E9CCB2E98933LL | (((l_523 = g_155.f5) , 0x65L) , ((((safe_mul_func_int8_t_s_s(((((*l_537) = l_536) == ((((*g_169) != l_538) | g_94) , &l_500)) == (**l_524)), p_32)) >= p_32) & p_35) , g_223))) & (**g_169)) > p_32) , p_32)) == (*g_170)) != 65532UL)))) & g_77[1][1][3]), 1L)), (*g_170))) , g_61) | (*l_458)) < 0xBCL)), (*p_33))) == (*l_458)) != g_122.f1)));
        }
    }
    return l_149;
}



static int64_t  func_38(int64_t  p_39, const int32_t  p_40, int32_t * p_41, int8_t  p_42)
{ 
    int16_t l_44[1][6][6];
    int32_t l_78 = 0xD5298B49L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
                l_44[i][j][k] = 0xCE9DL;
        }
    }
    for (p_42 = 0; (p_42 <= 0); p_42 += 1)
    { 
        int32_t *l_45 = &g_46;
        struct S1 l_53 = {0UL,9L,0x30988A21L,-10L,1UL,{0L,0x0E60136B80555F25LL}};
        int32_t l_82 = 0xCD07CA36L;
        int32_t *l_88 = &l_78;
        (*l_45) = 0L;
        if (((safe_rshift_func_int16_t_s_s((246UL >= (safe_add_func_int32_t_s_s((func_51(l_53) & (1L | (((*l_45) , ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((((*l_45) |= (*p_41)) , l_44[0][0][2]), 0xC8E5C63B6D63D46BLL)), g_30.f0)) || g_30.f0)) || 2L))), g_43))), 14)) && (-6L)))
        { 
            for (g_58 = 0; (g_58 <= 0); g_58 += 1)
            { 
                struct S0 *l_75 = &g_30;
                int32_t l_79 = 3L;
                int32_t *l_80 = &l_79;
                int32_t *l_81[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_81[i] = (void*)0;
                for (l_53.f2 = 0; (l_53.f2 <= 0); l_53.f2 += 1)
                { 
                    struct S0 l_74 = {-1L,2L};
                    struct S0 **l_76 = &l_75;
                    int i, j, k;
                    l_78 ^= (g_77[0][0][2] = ((0xC4FEF296L | ((*l_45) = (l_44[g_58][p_42][(g_58 + 5)] == (safe_mod_func_int64_t_s_s(0xFEC7F1FF5BAED681LL, (g_60[0][0][0] , (safe_mul_func_int8_t_s_s(((((l_74 , &l_74) == ((*l_76) = l_75)) ^ 0x6A81L) , g_46), l_44[0][4][3])))))))) <= 0x7C5F07B8L));
                }
                --g_83[1];
                g_86 = g_86;
            }
        }
        else
        { 
            int32_t **l_87 = &l_45;
            (*l_87) = (void*)0;
            (*l_87) = (void*)0;
        }
        (*l_88) = g_58;
        if (g_58)
            continue;
        if (l_78)
            break;
    }
    return g_3;
}



static uint32_t  func_51(struct S1  p_52)
{ 
    int32_t *l_54 = &g_46;
    int32_t *l_55[5] = {&g_3,&g_3,&g_3,&g_3,&g_3};
    int32_t l_56 = 0L;
    int8_t l_57 = 0xC6L;
    struct S0 l_64[6][2] = {{{-9L,0xEFF8EE8584DF831BLL},{-9L,0xEFF8EE8584DF831BLL}},{{0x8BEBE4505C2614ACLL,-1L},{-9L,0xEFF8EE8584DF831BLL}},{{-9L,0xEFF8EE8584DF831BLL},{0x8BEBE4505C2614ACLL,-1L}},{{-9L,0xEFF8EE8584DF831BLL},{-9L,0xEFF8EE8584DF831BLL}},{{0x8BEBE4505C2614ACLL,-1L},{-9L,0xEFF8EE8584DF831BLL}},{{-9L,0xEFF8EE8584DF831BLL},{0x8BEBE4505C2614ACLL,-1L}}};
    struct S0 *l_65 = &l_64[0][1];
    int i, j;
    --g_61;
    (*l_65) = l_64[4][0];
    return p_52.f0;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_30.f0, "g_30.f0", print_hash_value);
    transparent_crc(g_30.f1, "g_30.f1", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_46, "g_46", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_60[i][j][k], "g_60[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_77[i][j][k], "g_77[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_83[i], "g_83[i]", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_122.f1, "g_122.f1", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    transparent_crc(g_155.f3, "g_155.f3", print_hash_value);
    transparent_crc(g_155.f4, "g_155.f4", print_hash_value);
    transparent_crc(g_155.f5.f0, "g_155.f5.f0", print_hash_value);
    transparent_crc(g_155.f5.f1, "g_155.f5.f1", print_hash_value);
    transparent_crc(g_160.f0, "g_160.f0", print_hash_value);
    transparent_crc(g_160.f1, "g_160.f1", print_hash_value);
    transparent_crc(g_160.f2, "g_160.f2", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_225, "g_225", print_hash_value);
    transparent_crc(g_228.f0, "g_228.f0", print_hash_value);
    transparent_crc(g_228.f1, "g_228.f1", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_415[i][j][k], "g_415[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_541.f1, "g_541.f1", print_hash_value);
    transparent_crc(g_541.f2, "g_541.f2", print_hash_value);
    transparent_crc(g_541.f3, "g_541.f3", print_hash_value);
    transparent_crc(g_541.f4, "g_541.f4", print_hash_value);
    transparent_crc(g_541.f5.f0, "g_541.f5.f0", print_hash_value);
    transparent_crc(g_541.f5.f1, "g_541.f5.f1", print_hash_value);
    transparent_crc(g_593, "g_593", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_699[i][j].f0, "g_699[i][j].f0", print_hash_value);
            transparent_crc(g_699[i][j].f1, "g_699[i][j].f1", print_hash_value);
            transparent_crc(g_699[i][j].f2, "g_699[i][j].f2", print_hash_value);
            transparent_crc(g_699[i][j].f3, "g_699[i][j].f3", print_hash_value);
            transparent_crc(g_699[i][j].f4, "g_699[i][j].f4", print_hash_value);
            transparent_crc(g_699[i][j].f5.f0, "g_699[i][j].f5.f0", print_hash_value);
            transparent_crc(g_699[i][j].f5.f1, "g_699[i][j].f5.f1", print_hash_value);

        }
    }
    transparent_crc(g_795, "g_795", print_hash_value);
    transparent_crc(g_880, "g_880", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    transparent_crc(g_936, "g_936", print_hash_value);
    transparent_crc(g_978, "g_978", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_990[i].f0, "g_990[i].f0", print_hash_value);
        transparent_crc(g_990[i].f1, "g_990[i].f1", print_hash_value);
        transparent_crc(g_990[i].f2, "g_990[i].f2", print_hash_value);
        transparent_crc(g_990[i].f3, "g_990[i].f3", print_hash_value);
        transparent_crc(g_990[i].f4, "g_990[i].f4", print_hash_value);
        transparent_crc(g_990[i].f5.f0, "g_990[i].f5.f0", print_hash_value);
        transparent_crc(g_990[i].f5.f1, "g_990[i].f5.f1", print_hash_value);

    }
    transparent_crc(g_1031, "g_1031", print_hash_value);
    transparent_crc(g_1039.f0, "g_1039.f0", print_hash_value);
    transparent_crc(g_1039.f1, "g_1039.f1", print_hash_value);
    transparent_crc(g_1039.f2, "g_1039.f2", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    transparent_crc(g_1223, "g_1223", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_1235[i][j][k], "g_1235[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1294, "g_1294", print_hash_value);
    transparent_crc(g_1404, "g_1404", print_hash_value);
    transparent_crc(g_1447, "g_1447", print_hash_value);
    transparent_crc(g_1477, "g_1477", print_hash_value);
    transparent_crc(g_1505, "g_1505", print_hash_value);
    transparent_crc(g_1586.f0, "g_1586.f0", print_hash_value);
    transparent_crc(g_1586.f1, "g_1586.f1", print_hash_value);
    transparent_crc(g_1586.f2, "g_1586.f2", print_hash_value);
    transparent_crc(g_1586.f3, "g_1586.f3", print_hash_value);
    transparent_crc(g_1586.f4, "g_1586.f4", print_hash_value);
    transparent_crc(g_1586.f5.f0, "g_1586.f5.f0", print_hash_value);
    transparent_crc(g_1586.f5.f1, "g_1586.f5.f1", print_hash_value);
    transparent_crc(g_1658, "g_1658", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1683[i], "g_1683[i]", print_hash_value);

    }
    transparent_crc(g_1926, "g_1926", print_hash_value);
    transparent_crc(g_1941, "g_1941", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
