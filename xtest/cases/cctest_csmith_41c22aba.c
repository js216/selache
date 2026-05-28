// SPDX-License-Identifier: MIT
// cctest_csmith_41c22aba.c --- cctest case csmith_41c22aba (csmith seed 1103243962)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xcf76e3a7 */
/* @exp_ticks 0xbb8c */

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

// Options:   -s 1103243962 -o /tmp/csmith_gen_w9x_cqn1/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   const int16_t  f0;
   const int32_t  f1;
   int16_t  f2;
   uint16_t  f3;
   uint32_t  f4;
   const uint32_t  f5;
};

union U1 {
   uint8_t  f0;
   const int8_t * f1;
};


static int64_t g_3 = 0x6B6EB6B9DD952EAALL;
static int32_t g_5 = 0xA42B4837L;
static int16_t g_20 = 0xAFD0L;
static uint32_t g_28 = 18446744073709551615UL;
static int16_t g_32 = 0xB4B7L;
static uint64_t g_33 = 3UL;
static int32_t g_61 = (-2L);
static uint32_t g_73 = 2UL;
static union U1 g_102 = {6UL};
static uint64_t g_104 = 0x41409B4FD71AF1E1LL;
static uint32_t g_110[1] = {0x5BD15A59L};
static int32_t g_114[5][7][6] = {{{5L,0x54C91E54L,0x056167B9L,1L,0x087AC20AL,8L},{0xDBF4B608L,(-9L),(-4L),1L,0x3135CAF2L,3L},{4L,(-1L),(-9L),0L,0xEA524B17L,0x7346DDCFL},{0x122A8473L,0xDBF4B608L,4L,5L,0xF2F77261L,(-4L)},{1L,(-6L),0x54C91E54L,(-9L),(-8L),0x909C2EEFL},{1L,0xA8B4E140L,(-8L),1L,0x64D6F6C9L,0xF2F77261L},{0x54C91E54L,4L,1L,4L,0x54C91E54L,7L}},{{0xA8B4E140L,0x122A8473L,(-10L),1L,0x122A8473L,0x087AC20AL},{(-9L),0xEA524B17L,0L,0xDBF4B608L,0x0C02A0D8L,0x087AC20AL},{(-10L),0x73B194E8L,0x47852D38L,(-1L),(-1L),0x0C02A0D8L},{0x0C02A0D8L,7L,1L,0x54C91E54L,0x47852D38L,4L},{0L,3L,9L,0x122A8473L,8L,7L},{(-3L),4L,0x7346DDCFL,0x056167B9L,0xBB176A92L,0x122A8473L},{0x3135CAF2L,0x174F5884L,1L,0x64D6F6C9L,(-3L),(-4L)}},{{1L,0x47852D38L,(-1L),(-3L),0xC3742197L,0xC3742197L},{0xB8B4D839L,0x122A8473L,0x122A8473L,0xB8B4D839L,1L,0xBB176A92L},{0L,(-9L),(-10L),4L,(-6L),0x64D6F6C9L},{(-1L),0xF2F77261L,3L,4L,(-6L),(-1L)},{0x909C2EEFL,(-9L),0x4FF8C8F4L,0x47852D38L,1L,0L},{(-1L),0x122A8473L,(-1L),0xA8B4E140L,0xC3742197L,0xB8B4D839L},{1L,0x47852D38L,1L,3L,(-3L),0x54C91E54L}},{{(-6L),0x174F5884L,0xB194A10BL,0xC3742197L,0xBB176A92L,0x385A40E5L},{0x73B194E8L,4L,5L,0xB194A10BL,8L,(-1L)},{0x122A8473L,3L,(-1L),1L,0x47852D38L,1L},{0x015B3359L,7L,0x015B3359L,0L,(-1L),(-1L)},{7L,0x73B194E8L,(-3L),0x909C2EEFL,0x0C02A0D8L,4L},{0xA8B4E140L,0xEA524B17L,(-4L),0x909C2EEFL,0x122A8473L,0L},{7L,0xDBF4B608L,4L,0L,0x7346DDCFL,1L}},{{0x015B3359L,1L,0x087AC20AL,1L,1L,1L},{0x122A8473L,0L,4L,0xB194A10BL,9L,1L},{0x73B194E8L,0xB8B4D839L,1L,0xC3742197L,4L,(-1L)},{(-6L),0x087AC20AL,0x385A40E5L,3L,0xB194A10BL,0x909C2EEFL},{1L,(-1L),(-9L),0xA8B4E140L,0xA8B4E140L,(-9L)},{(-1L),(-1L),8L,0x47852D38L,(-8L),4L},{0x909C2EEFL,0x7346DDCFL,0xA8B4E140L,4L,0L,8L}}};
static int8_t g_117 = 0xD7L;
static uint32_t g_167 = 0xD805DE68L;
static uint32_t *g_193 = &g_110[0];
static uint16_t g_218 = 0xA34BL;
static struct S0 g_240[1] = {{0xC037L,0x3507AE03L,0x2B40L,0x8C9EL,18446744073709551615UL,4294967294UL}};
static const struct S0 *g_239 = &g_240[0];
static int32_t *g_244[3] = {&g_5,&g_5,&g_5};
static int32_t **g_243[4][3][1] = {{{(void*)0},{&g_244[1]},{&g_244[1]}},{{&g_244[1]},{&g_244[1]},{(void*)0}},{{&g_244[1]},{&g_244[1]},{&g_244[1]}},{{&g_244[1]},{(void*)0},{&g_244[1]}}};
static int32_t ***g_242 = &g_243[2][1][0];
static uint16_t g_250[4][2] = {{0x94CDL,0xCE86L},{0x94CDL,0x94CDL},{0xCE86L,0x94CDL},{0x94CDL,0xCE86L}};
static int8_t g_252 = 1L;
static union U1 *g_280 = (void*)0;
static union U1 **g_279 = &g_280;
static uint8_t *g_346 = &g_102.f0;
static uint64_t g_394 = 18446744073709551615UL;
static int32_t ** const **g_397 = (void*)0;
static int32_t ** const ***g_396[7][4] = {{(void*)0,&g_397,&g_397,&g_397},{(void*)0,(void*)0,(void*)0,&g_397},{(void*)0,&g_397,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,&g_397,(void*)0},{(void*)0,&g_397,&g_397,&g_397},{(void*)0,(void*)0,(void*)0,&g_397}};
static int16_t *g_496 = &g_32;
static int16_t * const *g_495[6] = {&g_496,&g_496,&g_496,&g_496,&g_496,&g_496};
static uint16_t g_585[1][7][7] = {{{0x6B22L,65532UL,0x528DL,0x6610L,0x528DL,65532UL,0x6B22L},{65532UL,0x06A8L,1UL,0x528DL,0x6B22L,65532UL,0x528DL},{0x1E11L,0UL,65531UL,0x06A8L,0x06A8L,65531UL,0UL},{0x06A8L,0xBCC8L,1UL,0x6610L,0xBCC8L,0x528DL,0UL},{0UL,0x06A8L,0x528DL,0UL,0UL,0UL,0x528DL},{0x6B22L,0x6B22L,65526UL,0x6610L,0x06A8L,0UL,0x6B22L},{0x6B22L,0x528DL,1UL,0x06A8L,65532UL,65532UL,0x06A8L}}};
static int32_t g_609[5] = {0x2BC8991CL,0x2BC8991CL,0x2BC8991CL,0x2BC8991CL,0x2BC8991CL};
static uint32_t g_631 = 4UL;
static uint8_t g_728 = 0x9FL;
static uint32_t **g_769 = &g_193;
static uint8_t g_828 = 0x50L;
static const int16_t **g_863 = (void*)0;
static uint32_t *g_873 = &g_167;
static struct S0 *g_912 = (void*)0;
static struct S0 * const *g_911 = &g_912;
static struct S0 * const **g_910 = &g_911;
static struct S0 **g_916 = &g_912;
static struct S0 ***g_915[2] = {&g_916,&g_916};
static const uint32_t ** const *g_977 = (void*)0;
static const uint32_t ** const **g_976 = &g_977;
static int32_t *** const *g_999 = (void*)0;
static int32_t *** const **g_998[4] = {&g_999,&g_999,&g_999,&g_999};
static struct S0 ** const *g_1030[2][5] = {{&g_916,&g_916,&g_916,&g_916,&g_916},{&g_916,&g_916,&g_916,&g_916,&g_916}};
static struct S0 ** const **g_1029 = &g_1030[0][0];
static int64_t g_1123[1][5] = {{0x4B46B0F1E7F0E2FCLL,0x4B46B0F1E7F0E2FCLL,0x4B46B0F1E7F0E2FCLL,0x4B46B0F1E7F0E2FCLL,0x4B46B0F1E7F0E2FCLL}};
static int8_t g_1148[6][4][6] = {{{2L,1L,0x92L,0x1AL,1L,0xA2L},{9L,0xF7L,0L,1L,1L,0xA2L},{(-1L),0xF0L,0x92L,1L,3L,0x53L},{1L,0x92L,2L,1L,0L,(-2L)}},{{1L,0x98L,0xFEL,0xFEL,0x98L,1L},{1L,0x3FL,0x98L,(-10L),(-5L),0xA3L},{(-2L),1L,0xCFL,1L,9L,3L},{(-2L),1L,1L,(-10L),1L,0x52L}},{{1L,(-5L),0xA2L,0xFEL,0xA3L,(-10L)},{1L,8L,0x3FL,1L,0x3FL,8L},{1L,(-2L),0xF0L,1L,1L,1L},{(-1L),(-1L),0xA3L,1L,0x52L,2L}},{{9L,(-1L),8L,0x1AL,1L,1L},{2L,(-2L),0x53L,9L,0x3FL,(-10L)},{1L,1L,0xA3L,0L,0L,0xA3L},{0x9CL,0x9CL,(-5L),3L,0xA3L,2L}},{{1L,2L,0x92L,1L,0x98L,(-5L)},{(-5L),1L,0x92L,1L,0x9CL,2L},{0xCFL,1L,(-5L),0xA2L,0xFEL,0xA3L},{0xA2L,0xFEL,0xA3L,(-10L),(-2L),(-10L)}},{{(-1L),0xCFL,(-1L),0xF7L,0x1AL,0xF0L},{0x1AL,(-10L),1L,(-10L),0x52L,8L},{0xFEL,0x92L,0L,(-10L),0xF0L,0xF7L},{0x1AL,9L,(-10L),0xF7L,1L,1L}}};
static int32_t *g_1238 = &g_114[0][3][2];
static int16_t g_1265 = 0x3815L;
static int8_t *g_1317 = (void*)0;
static int8_t **g_1316 = &g_1317;
static int8_t **g_1318 = &g_1317;
static const uint32_t *g_1338 = &g_240[0].f5;
static const uint32_t **g_1337[3][1] = {{&g_1338},{&g_1338},{&g_1338}};
static int32_t g_1360 = 9L;
static int8_t *g_1363[1] = {&g_252};
static uint32_t ***g_1416 = &g_769;
static uint32_t ****g_1415 = &g_1416;
static uint32_t g_1419 = 0xD52B815EL;
static const uint32_t g_1504 = 18446744073709551614UL;
static uint64_t g_1542 = 0xF257C268A1119785LL;
static int8_t ** const *g_1568 = &g_1318;
static int8_t ** const **g_1567[1] = {&g_1568};
static int8_t * const **g_1600 = (void*)0;
static uint16_t g_1622 = 65535UL;
static uint64_t *g_1632 = &g_394;
static uint64_t **g_1631 = &g_1632;
static int32_t g_1683 = 0x59589C66L;
static int32_t g_1698 = (-8L);
static int64_t g_1706[3][1] = {{0xE5E3919514EAC633LL},{0xE5E3919514EAC633LL},{0xE5E3919514EAC633LL}};
static const struct S0 **g_1727[7][5] = {{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239}};
static uint64_t g_1826 = 1UL;
static uint32_t g_1829 = 0x299B9CC1L;
static int64_t *g_1852[3] = {(void*)0,(void*)0,(void*)0};
static int64_t **g_1851 = &g_1852[1];
static int64_t g_1854 = (-1L);
static int16_t * const *g_1871 = &g_496;
static uint32_t *****g_1906 = &g_1415;
static const struct S0 g_1959 = {0x516CL,0L,-1L,0x4BBEL,0UL,0x96C4B32CL};
static const struct S0 g_1961 = {0x3986L,0xFD363D04L,0x5118L,65535UL,3UL,0xE3900246L};
static int32_t g_1968 = (-3L);
static int64_t *g_2066 = &g_1123[0][4];
static uint32_t g_2118 = 1UL;



static uint8_t  func_1(void);
static int32_t  func_6(uint32_t  p_7, uint16_t  p_8, uint64_t  p_9);
static uint16_t  func_16(int16_t  p_17, int32_t * const  p_18);
static int32_t * const  func_21(const int32_t * p_22, int32_t  p_23);
static int32_t * func_47(uint16_t  p_48, union U1  p_49, int16_t * p_50, uint8_t  p_51, struct S0  p_52);
static int8_t * func_53(uint32_t  p_54, uint64_t  p_55, uint16_t  p_56);
static int16_t * const * func_76(uint64_t  p_77, const uint16_t  p_78, int32_t  p_79, uint32_t  p_80, int8_t  p_81);
static uint8_t  func_88(uint32_t  p_89, union U1  p_90, int8_t  p_91);




static uint8_t  func_1(void)
{ 
    int64_t *l_2 = &g_3;
    int32_t *l_4 = &g_5;
    int8_t l_10 = 0xEDL;
    int64_t l_1576 = 0xF7AFE16B34F55227LL;
    int16_t ** const l_1577[4][3] = {{(void*)0,(void*)0,(void*)0},{&g_496,&g_496,&g_496},{(void*)0,(void*)0,(void*)0},{&g_496,&g_496,&g_496}};
    int32_t l_1591 = 0x8B606143L;
    int32_t l_1594 = (-1L);
    uint64_t l_1602 = 0x936B849F85774F6FLL;
    union U1 l_1611 = {250UL};
    int32_t l_1655 = 0xF5E066F3L;
    int32_t l_1659 = 0x1CAD8012L;
    int32_t l_1662 = 7L;
    int32_t l_1670 = (-1L);
    uint32_t l_1740 = 0xB82F0508L;
    int16_t l_1771 = 0L;
    const int32_t *l_1794 = &g_1698;
    struct S0 * const ***l_1825 = &g_910;
    union U1 l_1891 = {255UL};
    uint32_t *****l_1904 = (void*)0;
    uint64_t l_1933 = 0x2FE404325E40A385LL;
    uint32_t l_1938 = 0x7C72E97FL;
    uint16_t l_1946[2];
    int32_t l_2000 = 0x28957FC3L;
    uint16_t l_2040 = 7UL;
    uint8_t l_2104 = 0x0DL;
    int64_t l_2138 = 0x9B0FE5087BC71684LL;
    int8_t **l_2139 = &g_1363[0];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1946[i] = 0UL;
    (*l_4) = (((*l_2) = 0x7FD1E814B733C633LL) , (-1L));
    if (func_6((*l_4), (*l_4), l_10))
    { 
        int32_t l_1552 = 1L;
        struct S0 l_1555 = {0x3CCFL,-3L,1L,0UL,1UL,4UL};
        int32_t l_1579 = 0xB65BACB5L;
        union U1 *l_1599 = &g_102;
        uint32_t l_1603 = 0xC0490C34L;
        int32_t l_1615 = 0x210B55C9L;
        int32_t l_1651 = 0x557570BFL;
        int8_t l_1652 = 0x30L;
        int64_t l_1657 = 0x1D33DB3E62B0F494LL;
        int32_t l_1658 = (-9L);
        int32_t l_1665 = 0L;
        int32_t l_1666 = 0xF2FF0769L;
        int32_t l_1668 = 0x5AC55995L;
        int32_t l_1669 = 1L;
        int64_t l_1696 = (-5L);
        uint64_t l_1701 = 1UL;
        uint32_t ***l_1728 = &g_769;
        int16_t l_1733 = (-1L);
        if ((safe_unary_minus_func_int16_t_s(((*g_496) |= (((*l_4) , g_33) && ((*l_2) = (!(safe_mul_func_uint16_t_u_u(0x6AE6L, l_1552)))))))))
        { 
            uint32_t l_1575 = 0UL;
            int16_t **l_1578[1][5];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_1578[i][j] = &g_496;
            }
            (*g_1238) = (safe_div_func_int8_t_s_s((l_1555 , (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((((safe_lshift_func_int8_t_s_u(((~((safe_add_func_int16_t_s_s(((void*)0 != g_1567[0]), g_102.f0)) ^ (**g_769))) || (safe_rshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u(((&g_1416 != (g_102 , &g_977)) > (*l_4)), (*l_4))), 5)) ^ l_1575), (*g_496)))), l_1555.f4)) > g_1123[0][4]) ^ 4294967288UL), (*l_4))) & l_1575), (*g_346))) & (-6L)), l_1576))), (*g_346)));
            if ((l_1577[2][2] != l_1578[0][0]))
            { 
                (*g_1238) = 5L;
            }
            else
            { 
                return l_1555.f1;
            }
            for (l_1552 = 0; (l_1552 <= 0); l_1552 += 1)
            { 
                uint32_t l_1580 = 0x9BDB96B2L;
                l_1579 = (-2L);
                for (l_1579 = 0; (l_1579 >= 0); l_1579 -= 1)
                { 
                    return l_1580;
                }
            }
            return l_1575;
        }
        else
        { 
            uint32_t l_1585 = 7UL;
            int32_t l_1590 = (-4L);
            int32_t l_1592 = (-8L);
            int32_t l_1593 = 0L;
            union U1 * const l_1598[5] = {&g_102,&g_102,&g_102,&g_102,&g_102};
            int32_t l_1616[4] = {1L,1L,1L,1L};
            uint32_t l_1617 = 18446744073709551615UL;
            int8_t l_1628 = 0x53L;
            uint16_t *l_1679[1][2][6] = {{{&g_240[0].f3,&g_240[0].f3,&g_240[0].f3,&g_240[0].f3,&g_240[0].f3,&g_240[0].f3},{&g_240[0].f3,&g_240[0].f3,&g_240[0].f3,&g_240[0].f3,&g_240[0].f3,&g_240[0].f3}}};
            int64_t **l_1682 = &l_2;
            int64_t l_1697 = 0x7BFB344D0C751775LL;
            int32_t *l_1699 = &g_114[0][3][2];
            int32_t *l_1700[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j, k;
            for (g_5 = (-11); (g_5 == 16); ++g_5)
            { 
                uint16_t l_1595 = 6UL;
                int32_t *l_1612 = &l_1579;
                int32_t *l_1613 = &g_1360;
                int32_t *l_1614[1][3];
                uint32_t l_1643 = 0x5A4392A2L;
                int32_t l_1648 = 0x7CD592FFL;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1614[i][j] = &l_1592;
                }
            }
            l_1592 |= (safe_mul_func_uint16_t_u_u((l_1590 = 0x7F1EL), (safe_add_func_int32_t_s_s(((((*l_1682) = &l_1576) != ((((((*g_279) = ((g_1683 , (*l_4)) , &l_1611)) == ((safe_rshift_func_uint8_t_u_s(((((*g_193) &= (safe_unary_minus_func_uint16_t_u(((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((*g_873))), ((safe_rshift_func_uint16_t_u_s((((void*)0 != &l_1611) != (*l_4)), 7)) && l_1658))), 7)) , (*g_346)), 0xCCL)) || l_1696)))) <= 0xB108B509L) && l_1603), l_1697)) , &g_102)) | (**g_1631)) >= 0x916DA172624D6F16LL) , &g_1123[0][4])) & 1L), 4294967295UL))));
            l_1592 ^= 0L;
            l_1701--;
        }
        for (g_61 = 0; (g_61 > (-19)); g_61 = safe_sub_func_uint64_t_u_u(g_61, 9))
        { 
            uint8_t l_1720 = 0xB8L;
            int32_t l_1729 = (-10L);
            (*l_4) = g_1706[2][0];
            for (g_33 = 17; (g_33 == 50); ++g_33)
            { 
                int16_t l_1716 = 0xFE17L;
                l_1729 ^= ((-7L) & ((((safe_mul_func_uint16_t_u_u((((!(safe_sub_func_int8_t_s_s(l_1716, (safe_mul_func_int16_t_s_s(((*g_496) = (+(((l_1720 && ((safe_rshift_func_int16_t_s_s(1L, (((safe_lshift_func_int8_t_s_u((((safe_add_func_uint16_t_u_u(((void*)0 != g_1727[4][2]), ((*g_346) > (*l_4)))) , l_1728) == l_1728), l_1716)) ^ (*l_4)) == (*g_1238)))) , (*g_496))) , g_585[0][1][5]) <= 6UL))), 2UL))))) >= (*l_4)) | 0L), l_1720)) > l_1716) & 1L) == 18446744073709551607UL));
            }
            for (l_1652 = 21; (l_1652 < (-11)); l_1652 = safe_sub_func_uint32_t_u_u(l_1652, 5))
            { 
                if ((0x95340087L <= 0x5808A1C9L))
                { 
                    struct S0 *l_1732 = &g_240[0];
                    (*g_916) = l_1732;
                    return (*g_346);
                }
                else
                { 
                    return (*g_346);
                }
            }
        }
        return l_1733;
    }
    else
    { 
        uint16_t l_1739 = 65531UL;
        int32_t l_1746 = (-4L);
        int16_t l_1777 = 0xFCBBL;
        int32_t l_1784 = 0xFB5DE407L;
        int32_t l_1789 = 4L;
        const int32_t **l_1795 = &l_1794;
        struct S0 l_1798[5][6][7] = {{{{2L,0x1C6B338FL,1L,0x03C1L,0x7A1A16DEL,0x388820D5L},{-5L,8L,0L,0UL,8UL,5UL},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{0L,0xFAA6D23DL,0x1FF9L,1UL,18446744073709551608UL,7UL},{-10L,1L,3L,1UL,0x9F788C4BL,0x629F5436L},{0x52BFL,1L,1L,65535UL,1UL,0UL},{0x3F5DL,-1L,-1L,65527UL,18446744073709551615UL,0x24EA638EL}},{{1L,0L,-7L,1UL,1UL,3UL},{7L,1L,0x0C29L,1UL,7UL,0xF57798B2L},{-1L,0xD6776503L,0xBF70L,2UL,0UL,5UL},{-5L,8L,0L,0UL,8UL,5UL},{0xA448L,0x0AC14FEBL,-1L,0x2794L,0UL,4294967295UL},{0L,0xE4679D14L,0x8654L,0x7B23L,0x6FBF4ED7L,4294967295UL},{-3L,0x047F90C3L,-9L,0UL,0xF7D2810AL,0xCF00B189L}},{{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0xF197L,0x863AF70FL,1L,0x062CL,0x127A0EECL,0xF15B6222L},{0xE67DL,0x82194F64L,-8L,0x2519L,0xBA2C2347L,0x031A70B5L},{0xE67DL,0x82194F64L,-8L,0x2519L,0xBA2C2347L,0x031A70B5L},{0xF197L,0x863AF70FL,1L,0x062CL,0x127A0EECL,0xF15B6222L},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{7L,1L,0x0C29L,1UL,7UL,0xF57798B2L}},{{0x51A6L,-8L,0x8687L,5UL,6UL,0x8C96910BL},{0L,0xFAA6D23DL,0x1FF9L,1UL,18446744073709551608UL,7UL},{1L,0x5085A7D7L,0xCB17L,0xE0AEL,2UL,0x18E7FC14L},{-8L,1L,1L,65535UL,0xEC698DA4L,1UL},{-3L,0x047F90C3L,-9L,0UL,0xF7D2810AL,0xCF00B189L},{0x2C5FL,0xFB99FF46L,0x20CCL,0x9EA6L,2UL,1UL},{0x3F5DL,-1L,-1L,65527UL,18446744073709551615UL,0x24EA638EL}},{{0xD886L,0x4F73C9B4L,0xC798L,0x6CFFL,0x0D5FE554L,4294967290UL},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L},{0xA448L,0x0AC14FEBL,-1L,0x2794L,0UL,4294967295UL},{9L,1L,-6L,0x9ABBL,0UL,7UL},{0x7701L,0xD79E2A36L,0x9092L,1UL,0UL,4294967288UL},{-2L,1L,0xE416L,0x5F2BL,0x43A3ADDFL,1UL},{0L,-8L,0x4776L,0x92EBL,0x7A50212EL,0xB4D5D632L}},{{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL},{0L,0xFAA6D23DL,0x1FF9L,1UL,18446744073709551608UL,7UL},{0L,0x10CA833DL,8L,0UL,0xD4A9697DL,0xD680FB6BL},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{-10L,1L,3L,1UL,0x9F788C4BL,0x629F5436L},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L}}},{{{-8L,1L,1L,65535UL,0xEC698DA4L,1UL},{0xF197L,0x863AF70FL,1L,0x062CL,0x127A0EECL,0xF15B6222L},{1L,0xEA4A52F1L,-1L,0x9D94L,0x24609704L,4294967295UL},{0x228AL,2L,-1L,65535UL,18446744073709551606UL,0UL},{0x3F5DL,-1L,-1L,65527UL,18446744073709551615UL,0x24EA638EL},{-6L,1L,-10L,65529UL,0xB0647E3FL,0xDF2CD224L},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L}},{{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{1L,1L,-1L,0xD312L,1UL,0UL},{0x0F9BL,-4L,0x96C6L,0UL,0x459F5BDFL,1UL},{0x4FEEL,0x81DA4325L,0x4521L,0x16ABL,3UL,4294967289UL},{0x52BFL,1L,1L,65535UL,1UL,0UL},{0x749FL,4L,0x4369L,65535UL,0xD80E797BL,4294967295UL},{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL}},{{-1L,0x4756AA55L,1L,3UL,0x297129BDL,0UL},{-10L,1L,0x13F4L,0x6BE5L,0xB4D4E063L,0x748D83BAL},{0x1B0EL,-1L,0L,65529UL,0UL,0x5ECE0167L},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL},{0x4A9EL,0x193C1201L,0x0235L,0xB812L,0x4AEB6D63L,4294967295UL},{0x9DA7L,0xFFC8AC2DL,0L,0x1C23L,1UL,4294967290UL}},{{2L,4L,-1L,65535UL,1UL,4294967288UL},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{-8L,1L,1L,65535UL,0xEC698DA4L,1UL},{0x38E8L,0x12ADE719L,1L,0x1A76L,0x6A5B004FL,4294967294UL},{-1L,0xD6776503L,0xBF70L,2UL,0UL,5UL},{0x228AL,2L,-1L,65535UL,18446744073709551606UL,0UL},{2L,4L,-1L,65535UL,1UL,4294967288UL}},{{2L,4L,-1L,65535UL,1UL,4294967288UL},{0x1B0EL,-1L,0L,65529UL,0UL,0x5ECE0167L},{-1L,-1L,0x5175L,65529UL,0xDD64EB94L,0xB8F2DF6DL},{-10L,1L,0x13F4L,0x6BE5L,0xB4D4E063L,0x748D83BAL},{0xCFE4L,1L,-7L,4UL,18446744073709551609UL,0xE20D2A65L},{0x4DCCL,0x6B643E3CL,0xCDF3L,65535UL,18446744073709551615UL,0UL},{-1L,0xD6776503L,0xBF70L,2UL,0UL,5UL}},{{-1L,0x4756AA55L,1L,3UL,0x297129BDL,0UL},{0L,0xA094BBD4L,0L,1UL,0xEC870D3EL,4294967287UL},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{0x9DA7L,0xFFC8AC2DL,0L,0x1C23L,1UL,4294967290UL},{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{0xE266L,-7L,0x64CAL,0x1056L,7UL,0xDA2F891FL},{0x52BFL,1L,1L,65535UL,1UL,0UL}}},{{{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL},{0x682BL,7L,0x66B4L,0UL,0x5F1F55E8L,0x9AA7C7B6L},{7L,1L,0x0C29L,1UL,7UL,0xF57798B2L},{0L,0x1B6E18CBL,0x91D4L,0UL,0xC0922AC8L,4294967295UL},{0L,0x949A0CE6L,0x2F3EL,1UL,0x7F508C93L,0x4199B177L},{0L,0x1B6E18CBL,0x91D4L,0UL,0xC0922AC8L,4294967295UL}},{{0L,-1L,0L,5UL,18446744073709551612UL,0x224694EAL},{1L,0xEA4A52F1L,-1L,0x9D94L,0x24609704L,4294967295UL},{1L,0xEA4A52F1L,-1L,0x9D94L,0x24609704L,4294967295UL},{0L,-1L,0L,5UL,18446744073709551612UL,0x224694EAL},{-5L,0xA30D4685L,-8L,65535UL,0xA58B167AL,0xD19D2336L},{0L,-1L,0x9F9AL,0x4FF6L,18446744073709551609UL,0UL},{-10L,1L,0x13F4L,0x6BE5L,0xB4D4E063L,0x748D83BAL}},{{0xD743L,0x40089C28L,1L,65535UL,1UL,0x24018825L},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0x1B0EL,-1L,0L,65529UL,0UL,0x5ECE0167L},{0x0F9BL,-4L,0x96C6L,0UL,0x459F5BDFL,1UL},{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{1L,0x5085A7D7L,0xCB17L,0xE0AEL,2UL,0x18E7FC14L},{0xEDB5L,-10L,0xFE2EL,0x4E4CL,0x1D0E2C63L,4294967295UL}},{{0x7701L,0xD79E2A36L,0x9092L,1UL,0UL,4294967288UL},{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{-1L,0x968A1242L,1L,1UL,0x7CCF25ACL,0x0792C074L},{0L,0xE4679D14L,0x8654L,0x7B23L,0x6FBF4ED7L,4294967295UL},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0xE72AL,0xB35F787BL,1L,0x4CE4L,0x38E4C2A1L,0x442B6924L},{-10L,1L,0x13F4L,0x6BE5L,0xB4D4E063L,0x748D83BAL}},{{0xBE4FL,0x0343265DL,0x00BAL,0xEC59L,18446744073709551609UL,1UL},{-5L,0xA30D4685L,-8L,65535UL,0xA58B167AL,0xD19D2336L},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{-1L,0xD6776503L,0xBF70L,2UL,0UL,5UL},{1L,0xEA4A52F1L,-1L,0x9D94L,0x24609704L,4294967295UL},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{0L,0x1B6E18CBL,0x91D4L,0UL,0xC0922AC8L,4294967295UL}},{{0x749FL,4L,0x4369L,65535UL,0xD80E797BL,4294967295UL},{0L,0x1B6E18CBL,0x91D4L,0UL,0xC0922AC8L,4294967295UL},{1L,0x8CC72E5BL,8L,65532UL,0UL,0xCDCD5925L},{-1L,-1L,0x5175L,65529UL,0xDD64EB94L,0xB8F2DF6DL},{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL},{0x749FL,4L,0x4369L,65535UL,0xD80E797BL,4294967295UL},{0x52BFL,1L,1L,65535UL,1UL,0UL}}},{{{0xE67DL,0x82194F64L,-8L,0x2519L,0xBA2C2347L,0x031A70B5L},{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{0L,-4L,0xF79AL,9UL,18446744073709551615UL,4294967294UL},{0L,-1L,0L,5UL,18446744073709551612UL,0x224694EAL},{0L,0xA094BBD4L,0L,1UL,0xEC870D3EL,4294967287UL},{0x40CEL,-7L,1L,0xE32EL,1UL,4294967287UL},{-1L,0xD6776503L,0xBF70L,2UL,0UL,5UL}},{{0xA448L,0x0AC14FEBL,-1L,0x2794L,0UL,4294967295UL},{0xCFE4L,1L,-7L,4UL,18446744073709551609UL,0xE20D2A65L},{0x2C5FL,0xFB99FF46L,0x20CCL,0x9EA6L,2UL,1UL},{7L,0x1CA4419AL,0x2427L,0x9F9CL,18446744073709551614UL,0x4FB216B4L},{0x1B0EL,-1L,0L,65529UL,0UL,0x5ECE0167L},{0xEDB5L,-10L,0xFE2EL,0x4E4CL,0x1D0E2C63L,4294967295UL},{2L,4L,-1L,65535UL,1UL,4294967288UL}},{{0xCFE4L,1L,-7L,4UL,18446744073709551609UL,0xE20D2A65L},{-1L,0xD6776503L,0xBF70L,2UL,0UL,5UL},{0x436BL,0x5F64BA8DL,-1L,65535UL,0x760A2DFEL,3UL},{1L,0xEA4A52F1L,-1L,0x9D94L,0x24609704L,4294967295UL},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0xEDB5L,-10L,0xFE2EL,0x4E4CL,0x1D0E2C63L,4294967295UL},{0x9DA7L,0xFFC8AC2DL,0L,0x1C23L,1UL,4294967290UL}},{{8L,0xF096D223L,-10L,0xD279L,18446744073709551615UL,0x3B10E49BL},{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL},{9L,1L,-6L,0x9ABBL,0UL,7UL},{0L,0xE4679D14L,0x8654L,0x7B23L,0x6FBF4ED7L,4294967295UL},{-10L,1L,0x13F4L,0x6BE5L,0xB4D4E063L,0x748D83BAL},{0x40CEL,-7L,1L,0xE32EL,1UL,4294967287UL},{0x441CL,1L,-1L,1UL,0xA591AA27L,0xB31BA6FEL}},{{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{0x52BFL,1L,1L,65535UL,1UL,0UL},{0x44F7L,-7L,0x5ABCL,0x9104L,1UL,0x98516328L},{0x79FFL,0x0EBCF86AL,0xCB3AL,0x2FCFL,1UL,0xE7836F51L},{1L,1L,-1L,0xD312L,1UL,0UL},{0x749FL,4L,0x4369L,65535UL,0xD80E797BL,4294967295UL},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L}},{{0x4A9EL,0x193C1201L,0x0235L,0xB812L,0x4AEB6D63L,4294967295UL},{0L,0xE4679D14L,0x8654L,0x7B23L,0x6FBF4ED7L,4294967295UL},{0x749FL,4L,0x4369L,65535UL,0xD80E797BL,4294967295UL},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{0x749FL,4L,0x4369L,65535UL,0xD80E797BL,4294967295UL}}},{{{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0L,0x949A0CE6L,0x2F3EL,1UL,0x7F508C93L,0x4199B177L},{7L,1L,0x0C29L,1UL,7UL,0xF57798B2L},{0x9346L,0x67563411L,6L,0xF3F7L,18446744073709551615UL,1UL},{0xE72AL,0xB35F787BL,1L,0x4CE4L,0x38E4C2A1L,0x442B6924L},{2L,4L,-1L,65535UL,1UL,4294967288UL}},{{0xA448L,0x0AC14FEBL,-1L,0x2794L,0UL,4294967295UL},{0x2C5FL,0xFB99FF46L,0x20CCL,0x9EA6L,2UL,1UL},{0x44F7L,-7L,0x5ABCL,0x9104L,1UL,0x98516328L},{0x9346L,0x67563411L,6L,0xF3F7L,18446744073709551615UL,1UL},{0xCFE4L,1L,-7L,4UL,18446744073709551609UL,0xE20D2A65L},{1L,0x5085A7D7L,0xCB17L,0xE0AEL,2UL,0x18E7FC14L},{0L,0xE4679D14L,0x8654L,0x7B23L,0x6FBF4ED7L,4294967295UL}},{{0xE266L,-7L,0x64CAL,0x1056L,7UL,0xDA2F891FL},{-2L,1L,0xE416L,0x5F2BL,0x43A3ADDFL,1UL},{-1L,0x92F50EC3L,0x2780L,0x10FDL,0x9F50A1ADL,4294967295UL},{0x2C5FL,0xFB99FF46L,0x20CCL,0x9EA6L,2UL,1UL},{0x9346L,0x67563411L,6L,0xF3F7L,18446744073709551615UL,1UL},{0L,-1L,0x9F9AL,0x4FF6L,18446744073709551609UL,0UL},{1L,1L,-1L,0xD312L,1UL,0UL}},{{7L,0x0C023710L,0x665BL,65532UL,18446744073709551615UL,0x9E75D6D1L},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L},{0xF197L,0x863AF70FL,1L,0x062CL,0x127A0EECL,0xF15B6222L},{0x38E8L,0x12ADE719L,1L,0x1A76L,0x6A5B004FL,4294967294UL},{1L,0x479B3BBDL,0xBDB5L,0x692BL,18446744073709551612UL,0x25369E03L},{0L,0x949A0CE6L,0x2F3EL,1UL,0x7F508C93L,0x4199B177L},{-2L,1L,0xE416L,0x5F2BL,0x43A3ADDFL,1UL}},{{0xBE4FL,0x0343265DL,0x00BAL,0xEC59L,18446744073709551609UL,1UL},{0x9DA7L,0xFFC8AC2DL,0L,0x1C23L,1UL,4294967290UL},{0x2C5FL,0xFB99FF46L,0x20CCL,0x9EA6L,2UL,1UL},{0L,-1L,0L,5UL,18446744073709551612UL,0x224694EAL},{1L,1L,-1L,0xD312L,1UL,0UL},{0xE266L,-7L,0x64CAL,0x1056L,7UL,0xDA2F891FL},{0L,0xE4679D14L,0x8654L,0x7B23L,0x6FBF4ED7L,4294967295UL}},{{1L,0x5085A7D7L,0xCB17L,0xE0AEL,2UL,0x18E7FC14L},{0x4D60L,1L,0xF664L,65529UL,0xB451C963L,0x17C8C530L},{0x9DA7L,0xFFC8AC2DL,0L,0x1C23L,1UL,4294967290UL},{0x44F7L,-7L,0x5ABCL,0x9104L,1UL,0x98516328L},{-10L,1L,0x13F4L,0x6BE5L,0xB4D4E063L,0x748D83BAL},{0x4DCCL,0x6B643E3CL,0xCDF3L,65535UL,18446744073709551615UL,0UL},{0xEDB5L,-10L,0xFE2EL,0x4E4CL,0x1D0E2C63L,4294967295UL}}}};
        const int8_t *l_1806 = &g_252;
        const int8_t **l_1805 = &l_1806;
        struct S0 ****l_1827[5][7][2] = {{{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[1]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]}},{{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[1]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]}},{{&g_915[1],&g_915[1]},{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]},{&g_915[1],&g_915[0]}},{{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]},{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]}},{{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]},{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]},{&g_915[0],&g_915[1]},{&g_915[1],&g_915[0]},{&g_915[1],&g_915[1]}}};
        union U1 l_1828 = {0x11L};
        struct S0 *****l_1888 = &l_1827[0][3][1];
        uint32_t l_1889 = 0UL;
        int32_t *l_1909 = &l_1594;
        int16_t **l_1917 = &g_496;
        int32_t l_1944 = 0xB82EF7D6L;
        int32_t l_1945 = 5L;
        const struct S0 *l_1958 = &g_1959;
        int64_t l_1998 = (-1L);
        uint32_t l_2033 = 1UL;
        uint32_t ** const l_2064 = &g_193;
        uint16_t l_2120[6][7][1] = {{{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL}},{{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L}},{{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL}},{{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L}},{{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL}},{{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L},{0x403CL},{0xD905L}}};
        int i, j, k;
        for (g_1265 = 3; (g_1265 >= 0); g_1265 -= 1)
        { 
            int32_t *l_1747 = &g_5;
            int32_t *l_1749 = &g_1698;
            int32_t l_1786 = 1L;
            int8_t l_1787 = 0x73L;
            for (l_1662 = 0; (l_1662 <= 3); l_1662 += 1)
            { 
                uint32_t l_1741 = 0x3872B268L;
                union U1 l_1744 = {0xF8L};
                int32_t *l_1748 = &g_5;
                int32_t l_1785 = 0x81A08AEBL;
                int32_t l_1788 = 0xF163C4ECL;
                int32_t l_1790 = 0xA34C11AFL;
                uint64_t l_1791 = 18446744073709551606UL;
                (*g_1238) |= 6L;
                for (g_104 = 0; (g_104 <= 0); g_104 += 1)
                { 
                    uint8_t *l_1745 = &g_102.f0;
                    int i, j, k;
                    l_1741 = (+((g_1148[(l_1662 + 1)][l_1662][(l_1662 + 1)] , ((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_1706[g_104][g_104], (&g_1706[g_104][g_104] != &g_1123[0][0]))), g_585[g_104][(l_1662 + 1)][g_104])) < 0x517FB31EL) && (1UL && l_1739)) > g_585[g_104][(l_1662 + 1)][g_104])) < l_1740));
                    l_1746 = (((((safe_add_func_int16_t_s_s(((0xA903L | (g_33 > (((l_1744 , l_1745) != &g_728) & ((1UL > (l_1741 && 0L)) | (*g_1632))))) == 255UL), l_1741)) < 0x65L) , (*l_4)) , 0x3FD07025L) == 0xBC3D7070L);
                    l_1748 = l_1747;
                }
                l_1746 |= (*g_1238);
                for (g_28 = 0; (g_28 <= 3); g_28 += 1)
                { 
                    int32_t **l_1750 = (void*)0;
                    int32_t **l_1751 = &g_244[2];
                    int8_t *l_1754 = &l_10;
                    int i, j, k;
                    (*l_1751) = l_1749;
                    (*l_4) &= (safe_rshift_func_int8_t_s_s(((*l_1754) = g_1148[(l_1662 + 1)][l_1662][l_1662]), (safe_unary_minus_func_int8_t_s((-1L)))));
                    if (g_1148[(l_1662 + 2)][g_28][(g_1265 + 2)])
                        continue;
                }
                for (g_1622 = 0; (g_1622 <= 3); g_1622 += 1)
                { 
                    uint32_t ****l_1756 = &g_1416;
                    uint32_t *****l_1757 = &g_1415;
                    uint16_t *l_1773[3][3] = {{&g_585[0][3][5],&l_1739,&g_585[0][3][5]},{&g_218,&g_218,&g_218},{&g_585[0][3][5],&l_1739,&g_585[0][3][5]}};
                    union U1 *l_1776 = &g_102;
                    int32_t *l_1778 = &l_1659;
                    int32_t *l_1779 = &g_5;
                    int32_t *l_1780 = &g_5;
                    int32_t *l_1781 = (void*)0;
                    int32_t *l_1782 = &g_5;
                    int32_t *l_1783[4][2][6] = {{{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]},{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]}},{{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]},{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]}},{{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]},{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]}},{{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]},{&l_1746,&g_114[0][0][2],&g_114[0][0][2],&l_1746,&g_114[0][0][2],&g_114[0][0][2]}}};
                    int i, j, k;
                    (*l_1757) = l_1756;
                    l_1748 = (void*)0;
                    (*l_1778) = (safe_div_func_int32_t_s_s(((*l_1749) = (safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((*g_1238) &= ((*l_4) = g_1148[(g_1622 + 1)][l_1662][(g_1265 + 1)])) ^ ((safe_rshift_func_uint16_t_u_s((((((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((((0L == (((*l_2) |= ((((+l_1771) , (g_250[2][1] |= (!g_394))) >= g_110[0]) , ((safe_mod_func_int8_t_s_s((((*g_279) = &l_1744) != l_1776), 0x95L)) , l_1746))) < 0xC8FC517FA840107ELL)) <= (*l_1749)) != l_1777), g_1706[2][0])), 4L)) && (**g_769)) , l_1746) , g_1148[(g_1622 + 1)][l_1662][(g_1265 + 1)]) & l_1602), 12)) ^ (*l_1749))) != g_20), 0xF0439627L)), 0xF20ECC70B7A379FELL))), (*g_1338)));
                    l_1791--;
                }
            }
            if ((*l_1749))
                continue;
            for (g_73 = 0; (g_73 <= 4); g_73 += 1)
            { 
                int i;
                return g_609[(g_1265 + 1)];
            }
        }
        (*l_1795) = l_1794;
        for (l_1777 = 0; (l_1777 != (-4)); l_1777 = safe_sub_func_uint8_t_u_u(l_1777, 4))
        { 
            int64_t l_1807 = 0x8752ECC417540A1CLL;
            struct S0 l_1814 = {0x7A2FL,0xD1BC5BD0L,0x0603L,0x1249L,0x03FE0379L,0x5DB4ACE5L};
            union U1 l_1815 = {0UL};
            struct S0 *l_1857 = (void*)0;
            union U1 ***l_1859[7] = {&g_279,&g_279,&g_279,&g_279,&g_279,&g_279,&g_279};
            int8_t **l_1865 = &g_1363[0];
            int16_t * const *l_1869 = &g_496;
            int16_t * const **l_1870[2][3][2];
            int32_t l_1895[4][6][3] = {{{0xA1D69209L,(-1L),0x8CDC1258L},{1L,4L,1L},{1L,(-1L),0x0861B2FCL},{0xA1D69209L,0x3FF67112L,1L},{0x0861B2FCL,0x3FF67112L,0x8CDC1258L},{0x588797AFL,(-1L),0xA53EF428L}},{{0x0861B2FCL,4L,0xA53EF428L},{0xA1D69209L,(-1L),0x8CDC1258L},{1L,4L,1L},{1L,(-1L),0x0861B2FCL},{0xA1D69209L,0x3FF67112L,1L},{0x0861B2FCL,0x3FF67112L,0x8CDC1258L}},{{0x588797AFL,(-1L),0xA53EF428L},{0x0861B2FCL,4L,0xA53EF428L},{0xA1D69209L,0x8CDC1258L,(-1L)},{0x7764C3E8L,0x3809D317L,0x7764C3E8L},{0x7764C3E8L,1L,0x17FF88F8L},{(-6L),0x588797AFL,0x7764C3E8L}},{{0x17FF88F8L,0x588797AFL,(-1L)},{0L,1L,0xDDF32638L},{0x17FF88F8L,0x3809D317L,0xDDF32638L},{(-6L),0x8CDC1258L,(-1L)},{0x7764C3E8L,0x3809D317L,0x7764C3E8L},{0x7764C3E8L,1L,0x17FF88F8L}}};
            uint32_t *****l_1905 = &g_1415;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1870[i][j][k] = (void*)0;
                }
            }
        }
        if ((safe_add_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(((*l_4) = ((void*)0 == l_1917)), (((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((((**l_1795) <= (safe_lshift_func_int8_t_s_s(0xFEL, ((((g_242 = (void*)0) == (void*)0) | (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((**l_1795), (*l_1909))) & (*g_346)), (*l_1909))), 0xC4B3L))) > 0x83B9L)))) | (*g_346)), 0xE3L)) >= (*l_1909)), (**g_769))) && (*l_1794)) && (*g_346)))), (**l_1795))) <= 1UL), (*l_1794))))
        { 
            int32_t *l_1930 = &l_1659;
            int32_t l_1942[2];
            struct S0 *l_1956 = &g_240[0];
            const struct S0 *l_1960 = &g_1961;
            uint16_t l_1999 = 65528UL;
            union U1 l_2054 = {1UL};
            uint32_t **l_2065 = &g_873;
            uint32_t l_2075[6][5] = {{9UL,0xF7016C6CL,9UL,0xF7016C6CL,9UL},{0xB0752868L,0xB0752868L,0xB0752868L,0xB0752868L,0xB0752868L},{9UL,0xF7016C6CL,9UL,0xF7016C6CL,9UL},{0xB0752868L,0xB0752868L,0xB0752868L,0xB0752868L,0xB0752868L},{9UL,0xF7016C6CL,9UL,0xF7016C6CL,9UL},{0xB0752868L,0xB0752868L,0xB0752868L,0xB0752868L,0xB0752868L}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_1942[i] = 0xF0E83052L;
            for (g_1265 = 0; (g_1265 >= 0); g_1265 -= 1)
            { 
                struct S0 l_1935 = {0L,0xB8419FF9L,-1L,0UL,0x379A957FL,0x004481D5L};
                int32_t l_1941 = 0x68400E30L;
                int32_t l_1943[4][5][7] = {{{3L,0x0DB61A26L,3L,0x0DB61A26L,3L,0x0DB61A26L,3L},{0L,0L,1L,1L,0L,0L,1L},{0L,0x0DB61A26L,0L,0x0DB61A26L,0L,0x0DB61A26L,0L},{0L,1L,1L,0L,0L,1L,1L},{3L,0x0DB61A26L,3L,0x0DB61A26L,3L,0x0DB61A26L,3L}},{{0L,0L,1L,1L,0L,0L,1L},{0L,0x0DB61A26L,0L,0x0DB61A26L,0L,0x0DB61A26L,0L},{0L,1L,1L,0L,0L,1L,1L},{3L,0x0DB61A26L,3L,0x0DB61A26L,3L,0x0DB61A26L,3L},{0L,0L,1L,1L,0L,0L,1L}},{{0L,0x0DB61A26L,0L,0x0DB61A26L,0L,0x0DB61A26L,0L},{0L,1L,1L,0L,0L,1L,1L},{3L,0x0DB61A26L,3L,0x0DB61A26L,3L,0x0DB61A26L,3L},{0L,0L,1L,1L,0L,0L,1L},{0L,0x0DB61A26L,0L,0x0DB61A26L,0L,0x0DB61A26L,0L}},{{0L,1L,1L,0L,0L,1L,1L},{3L,0x0DB61A26L,3L,0x0DB61A26L,3L,0x0DB61A26L,3L},{0L,0L,1L,1L,0L,0L,1L},{0L,0x0DB61A26L,0L,0x0DB61A26L,0L,0x0DB61A26L,0L},{0L,1L,1L,0L,0L,1L,1L}}};
                int32_t l_2056 = 0x25CEFA65L;
                uint32_t ** const *l_2074 = &l_2064;
                uint32_t ** const ** const l_2073 = &l_2074;
                int i, j, k;
                l_1930 = &l_1670;
                if (((*l_1930) = ((((safe_add_func_uint32_t_u_u(((****g_1415) = ((l_1933 = g_110[g_1265]) != ((*g_346) = (g_110[g_1265] , (((*l_2) &= (!(*l_1909))) == (((**g_1631) , l_1935) , ((safe_mod_func_int8_t_s_s((((l_1935.f0 != (l_1935.f0 == (**l_1795))) ^ (*l_1909)) | (*l_1930)), 0x0FL)) == l_1938))))))), (*g_1238))) <= (**g_1871)) > (-7L)) ^ 1UL)))
                { 
                    int8_t l_1939 = 0x4CL;
                    int32_t *l_1940[1][4][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1940[i][j][k] = &l_1659;
                        }
                    }
                    ++l_1946[1];
                    return (*l_1794);
                }
                else
                { 
                    uint32_t l_1949[5];
                    const struct S0 **l_1957[2][4][5] = {{{&g_239,(void*)0,&g_239,(void*)0,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,(void*)0,&g_239,(void*)0,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239}},{{&g_239,(void*)0,&g_239,(void*)0,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239},{&g_239,(void*)0,&g_239,(void*)0,&g_239},{&g_239,&g_239,&g_239,&g_239,&g_239}}};
                    uint8_t *l_1965 = &l_1828.f0;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1949[i] = 0x6263E07FL;
                    if (l_1949[1])
                        break;
                    (*g_1238) = (safe_mul_func_uint8_t_u_u((*g_346), (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((-2L) >= (l_1956 == (l_1960 = (l_1958 = &l_1935)))), ((safe_add_func_int8_t_s_s((~0xA2L), ((--(*l_1965)) >= 255UL))) >= g_1968))), (-1L)))));
                    (*l_1909) ^= (~(safe_mul_func_int8_t_s_s((**l_1795), 1L)));
                }
            }
            return l_2075[3][3];
        }
        else
        { 
            uint64_t l_2084[1];
            uint16_t *l_2085 = &g_250[3][0];
            uint16_t *l_2097 = &g_218;
            int64_t l_2098 = (-8L);
            int32_t l_2099[6] = {0L,0L,0L,0L,0L,0L};
            int16_t l_2119 = (-2L);
            struct S0 l_2121 = {-10L,-4L,0x6BBCL,1UL,18446744073709551613UL,9UL};
            int8_t l_2137 = 0xBCL;
            uint32_t *l_2148[5];
            uint32_t *l_2149 = &g_167;
            int8_t * const *l_2150 = &g_1317;
            int i;
            for (i = 0; i < 1; i++)
                l_2084[i] = 0xC629D2629F3BD36FLL;
            for (i = 0; i < 5; i++)
                l_2148[i] = &l_2033;
lbl_2107:
            l_2099[5] |= (((l_1828 , ((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((((safe_div_func_uint16_t_u_u(((*l_2097) = (l_2084[0] & ((*l_4) = ((((*l_2085)--) & 0x116BL) > ((safe_div_func_int16_t_s_s(((((((safe_lshift_func_int8_t_s_s((((((safe_mul_func_uint8_t_u_u((((*l_1794) >= l_2084[0]) | 0xA40A3456L), (!((safe_mul_func_int16_t_s_s((((l_2084[0] ^ g_61) < (**g_1631)) >= (*l_1794)), g_585[0][2][6])) ^ 0x9151L)))) && 0xA8L) , l_2084[0]) , 0x0A46L) , (*l_1909)), 3)) < (*l_4)) == (*g_1238)) <= 18446744073709551613UL) > (*g_1338)) & (*l_1909)), g_631)) != (**l_1795)))))), l_2084[0])) && l_2084[0]) || l_2084[0]), l_2098)), (**g_1631))) > l_2084[0])) && (*l_4)) >= 5L);
            for (l_1655 = (-22); (l_1655 < (-25)); --l_1655)
            { 
                uint32_t l_2116[1][6] = {{0x9E03165AL,9UL,0x9E03165AL,0x9E03165AL,9UL,0x9E03165AL}};
                int32_t l_2117[6] = {0x410CD867L,0x410CD867L,0x410CD867L,0x410CD867L,0x410CD867L,0x410CD867L};
                int i, j;
                for (g_3 = 26; (g_3 > (-22)); g_3 = safe_sub_func_int16_t_s_s(g_3, 7))
                { 
                    const int8_t l_2114 = (-1L);
                    struct S0 l_2115[6] = {{0xE5FFL,0xEF075F71L,0L,65535UL,0xD2F87146L,0x5C05EFC7L},{0xE5FFL,0xEF075F71L,0L,65535UL,0xD2F87146L,0x5C05EFC7L},{0xE5FFL,0xEF075F71L,0L,65535UL,0xD2F87146L,0x5C05EFC7L},{0xE5FFL,0xEF075F71L,0L,65535UL,0xD2F87146L,0x5C05EFC7L},{0xE5FFL,0xEF075F71L,0L,65535UL,0xD2F87146L,0x5C05EFC7L},{0xE5FFL,0xEF075F71L,0L,65535UL,0xD2F87146L,0x5C05EFC7L}};
                    int i;
                    l_2104--;
                    if (l_10)
                        goto lbl_2107;
                    (*g_1238) &= (((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((0xE81AEBE3L < (l_1891 , ((((safe_add_func_int64_t_s_s(l_2114, l_2084[0])) , l_2115[4]) , ((l_2117[5] = l_2116[0][0]) || ((*g_346) <= 0x22L))) || g_2118))) == l_2119), 0)), l_2116[0][0])) ^ l_2115[4].f5) ^ (*l_4));
                    (*g_1238) ^= (l_2120[4][1][0] , ((l_2121 , (safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u(((*g_346) ^= 3UL), (!((safe_div_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s(((*l_4) , 0x2D17F5FDL), (safe_mul_func_int8_t_s_s(l_2117[4], l_2115[4].f0)))) > l_2115[4].f4), (**l_1795))), 2)) , l_2121.f1) && (*g_2066)), 4L)) , 0L)))) || l_2137), l_2138))) > l_2116[0][0]));
                }
                (*l_4) &= (l_2139 != ((safe_mul_func_uint16_t_u_u(((**l_1795) ^ (safe_sub_func_uint64_t_u_u(((**g_1631)--), (((**g_769) <= ((safe_sub_func_int8_t_s_s(((*l_1909) , 9L), (l_2148[2] == (l_2149 = (void*)0)))) , (*l_1909))) != (*g_2066))))), l_2116[0][5])) , l_2150));
            }
            return (*g_346);
        }
    }
}



static int32_t  func_6(uint32_t  p_7, uint16_t  p_8, uint64_t  p_9)
{ 
    int16_t *l_19[4][4][6] = {{{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}},{{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20}}};
    const int32_t l_1495[7][2][7] = {{{0x44A39E83L,(-4L),0x44A39E83L,1L,0L,1L,0x44A39E83L},{(-9L),(-9L),0L,(-9L),(-9L),0L,(-9L)}},{{0L,1L,0x44A39E83L,(-4L),0x44A39E83L,1L,0L},{0x565F51AFL,0x565F51AFL,0L,0L,0x565F51AFL,0L,0L}},{{0x44A39E83L,1L,0L,1L,0x44A39E83L,(-4L),0x44A39E83L},{0x565F51AFL,0L,0L,0x565F51AFL,0L,0L,0x565F51AFL}},{{0xC7098C30L,1L,0xC7098C30L,0L,0x44A39E83L,0L,0xC7098C30L},{0x565F51AFL,0x565F51AFL,(-9L),0x565F51AFL,0x565F51AFL,(-9L),0x565F51AFL}},{{0x44A39E83L,0L,0xC7098C30L,1L,0xC7098C30L,0L,0x44A39E83L},{0L,0x565F51AFL,0L,0L,0x565F51AFL,0L,0L}},{{0x44A39E83L,1L,0L,1L,0x44A39E83L,(-4L),0x44A39E83L},{0x565F51AFL,0L,0L,0x565F51AFL,0L,0L,0x565F51AFL}},{{0xC7098C30L,1L,0xC7098C30L,0L,0x44A39E83L,0L,0xC7098C30L},{0x565F51AFL,0x565F51AFL,(-9L),0x565F51AFL,0x565F51AFL,(-9L),0x565F51AFL}}};
    union U1 l_1498 = {4UL};
    struct S0 l_1500 = {0x9BCDL,0x50C634D6L,0x6EA9L,0x1F40L,18446744073709551615UL,5UL};
    const uint32_t *l_1503 = &g_1504;
    int32_t l_1505 = 0x36936C9EL;
    int32_t l_1506 = 0L;
    union U1 *l_1508 = &l_1498;
    int32_t *l_1509 = &l_1506;
    int32_t l_1523[5][3] = {{1L,0L,0L},{1L,0L,0L},{1L,0L,0L},{1L,0L,0L},{1L,0L,0L}};
    struct S0 * const ***l_1545 = &g_910;
    int i, j, k;
    if (((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((~func_16((g_20 |= p_8), func_21(&g_5, p_7))), 14)), (-5L))) > (safe_mul_func_uint8_t_u_u((((*g_239) , g_240[0].f3) ^ g_110[0]), p_9))))
    { 
        int32_t l_1499 = (-4L);
        const uint32_t *l_1502 = (void*)0;
        const uint32_t **l_1501[3][7] = {{&l_1502,&l_1502,&l_1502,&l_1502,&l_1502,&l_1502,&l_1502},{(void*)0,(void*)0,&l_1502,&l_1502,&l_1502,(void*)0,(void*)0},{(void*)0,&l_1502,&l_1502,&l_1502,(void*)0,(void*)0,&l_1502}};
        int32_t l_1507[2][5][6] = {{{0x0299BE29L,2L,0x0299BE29L,0x7E20E421L,0x7E20E421L,0x0299BE29L},{0xF5FF0DEDL,0xF5FF0DEDL,0x7E20E421L,0xA56361DBL,0x7E20E421L,0xF5FF0DEDL},{0x7E20E421L,2L,0xA56361DBL,0xA56361DBL,2L,0x7E20E421L},{0xF5FF0DEDL,0x7E20E421L,0xA56361DBL,0x7E20E421L,0xF5FF0DEDL,0xF5FF0DEDL},{0x0299BE29L,0x7E20E421L,0x7E20E421L,0x0299BE29L,2L,0x0299BE29L}},{{0x0299BE29L,2L,0x0299BE29L,0x7E20E421L,0x7E20E421L,0x0299BE29L},{0xF5FF0DEDL,0xF5FF0DEDL,0x7E20E421L,0xA56361DBL,0x7E20E421L,0xF5FF0DEDL},{0x7E20E421L,2L,0xA56361DBL,0xA56361DBL,2L,0x7E20E421L},{0xF5FF0DEDL,0x7E20E421L,0xA56361DBL,0x7E20E421L,0xF5FF0DEDL,0xF5FF0DEDL},{0x0299BE29L,0x7E20E421L,0x7E20E421L,0x0299BE29L,2L,0x0299BE29L}}};
        int32_t *l_1510 = &g_61;
        int32_t *l_1511 = (void*)0;
        int32_t *l_1512 = &g_609[2];
        int32_t *l_1513 = &g_114[0][3][2];
        int32_t *l_1514 = &l_1506;
        int32_t *l_1515 = &g_1360;
        int32_t *l_1516 = &l_1505;
        int32_t *l_1517 = (void*)0;
        int32_t *l_1518 = &g_5;
        int32_t *l_1519 = &g_61;
        int32_t *l_1520 = &l_1507[1][3][3];
        int32_t *l_1521 = &g_114[0][3][2];
        int32_t *l_1522[2];
        uint8_t l_1524 = 255UL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1522[i] = (void*)0;
        l_1507[0][4][2] ^= ((*g_496) || (l_1506 ^= ((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_8, (l_1495[0][0][4] , ((*g_1338) & (((0x1026BDADL || p_8) == (l_1505 &= (((l_1503 = func_47((safe_rshift_func_uint8_t_u_s((p_7 || 0x3708B8BBL), l_1495[3][1][6])), l_1498, &g_20, l_1499, l_1500)) == (void*)0) <= p_7))) | g_3))))), p_8)), 1UL)) >= g_828)));
        l_1508 = (void*)0;
        l_1509 = &l_1507[0][3][1];
        ++l_1524;
        (*g_1238) = (1UL & (p_9 != p_8));
    }
    else
    { 
        int16_t l_1527 = (-9L);
        int32_t *l_1528 = &g_61;
        int32_t *l_1529 = &l_1523[1][2];
        int32_t *l_1530 = &g_609[4];
        int32_t *l_1531 = &g_114[0][3][2];
        int32_t *l_1532 = &g_114[0][1][5];
        int32_t *l_1533 = (void*)0;
        int32_t *l_1534 = &g_61;
        int32_t l_1535 = 1L;
        int32_t *l_1536 = &g_609[2];
        int32_t *l_1537 = (void*)0;
        int32_t *l_1538 = &g_114[2][3][3];
        int32_t *l_1539 = &g_5;
        int32_t *l_1540[5];
        int32_t l_1541 = 1L;
        struct S0 * const ****l_1546 = (void*)0;
        struct S0 * const ***l_1547 = &g_910;
        int i;
        for (i = 0; i < 5; i++)
            l_1540[i] = &l_1506;
        g_1542++;
        l_1547 = l_1545;
    }
    return p_8;
}



static uint16_t  func_16(int16_t  p_17, int32_t * const  p_18)
{ 
    int16_t l_1470 = (-1L);
    int32_t l_1471[2];
    int32_t *l_1472 = &l_1471[1];
    int32_t *l_1473 = &g_114[0][3][2];
    int32_t *l_1474 = &l_1471[0];
    int32_t *l_1475 = &g_114[0][3][2];
    int32_t *l_1476 = &g_114[1][2][0];
    int32_t *l_1477 = &g_5;
    int32_t *l_1478 = (void*)0;
    int32_t *l_1479 = (void*)0;
    int32_t *l_1480 = &g_61;
    int32_t *l_1481 = &l_1471[1];
    int32_t *l_1482[7] = {&g_114[0][3][2],&g_114[0][3][2],&g_114[0][3][2],&g_114[0][3][2],&g_114[0][3][2],&g_114[0][3][2],&g_114[0][3][2]};
    uint64_t l_1483 = 0UL;
    uint32_t l_1486 = 0x582B30D6L;
    int i;
    for (i = 0; i < 2; i++)
        l_1471[i] = 0x16EB4804L;
    --l_1483;
    return l_1486;
}



static int32_t * const  func_21(const int32_t * p_22, int32_t  p_23)
{ 
    int32_t *l_24 = &g_5;
    int32_t *l_25 = &g_5;
    int32_t *l_26[1];
    int64_t l_27[3][6] = {{(-2L),0xAAD901516EA3DE81LL,0L,0x889EC0021FBB9CF7LL,0xAAD901516EA3DE81LL,0x889EC0021FBB9CF7LL},{(-2L),0L,(-2L),0x889EC0021FBB9CF7LL,0L,0L},{1L,0x889EC0021FBB9CF7LL,(-10L),(-10L),0x889EC0021FBB9CF7LL,1L}};
    int16_t *l_31[1][4] = {{&g_32,&g_32,&g_32,&g_32}};
    struct S0 l_1215[7][6] = {{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}},{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}},{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}},{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}},{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}},{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}},{{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xDD0BL,0x4C1FE430L,0xDB21L,8UL,0x110EB1C1L,0xAE472C0CL},{0xF051L,-4L,1L,0x806FL,0xC2A4370DL,0xB04F65D3L}}};
    const uint32_t l_1264[2] = {0xA0B6D842L,0xA0B6D842L};
    union U1 * const l_1294 = &g_102;
    int64_t l_1372 = 0xAFDB80AB984A91BCLL;
    int32_t ***l_1412[3];
    uint32_t ****l_1413 = (void*)0;
    int32_t * const l_1468[5] = {&g_609[1],&g_609[1],&g_609[1],&g_609[1],&g_609[1]};
    int32_t * const l_1469 = &g_114[0][3][2];
    int i, j;
    for (i = 0; i < 1; i++)
        l_26[i] = &g_5;
    for (i = 0; i < 3; i++)
        l_1412[i] = &g_243[2][0][0];
    ++g_28;
    for (g_5 = 2; (g_5 >= 0); g_5 -= 1)
    { 
        p_23 = (l_31[0][2] != &g_32);
        ++g_33;
        for (g_28 = 0; (g_28 <= 2); g_28 += 1)
        { 
            return &g_5;
        }
    }
    for (g_33 = 0; (g_33 <= 52); g_33 = safe_add_func_int8_t_s_s(g_33, 5))
    { 
        int32_t *l_46 = &g_5;
        int8_t *l_1212 = (void*)0;
        union U1 l_1213 = {0x5EL};
        int16_t *l_1214 = &g_240[0].f2;
        int8_t l_1271 = 0L;
        int32_t ***l_1284[7][4][3] = {{{&g_243[2][1][0],&g_243[2][1][0],&g_243[0][1][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[1][1][0]},{&g_243[0][1][0],&g_243[2][1][0],(void*)0},{&g_243[2][1][0],&g_243[2][1][0],&g_243[2][1][0]}},{{(void*)0,&g_243[2][2][0],(void*)0},{&g_243[2][1][0],&g_243[2][1][0],&g_243[2][1][0]},{(void*)0,&g_243[2][1][0],(void*)0},{&g_243[2][1][0],&g_243[1][1][0],&g_243[1][1][0]}},{{&g_243[1][0][0],&g_243[2][2][0],&g_243[0][1][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[3][2][0]},{(void*)0,&g_243[2][1][0],&g_243[3][2][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[1][1][0]}},{{(void*)0,&g_243[2][1][0],&g_243[1][0][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[2][1][0]},{&g_243[0][1][0],&g_243[2][2][0],&g_243[0][1][0]},{&g_243[2][1][0],&g_243[1][1][0],&g_243[2][1][0]}},{{&g_243[2][1][0],&g_243[2][1][0],&g_243[1][0][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[1][1][0]},{(void*)0,&g_243[2][2][0],&g_243[3][2][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[3][2][0]}},{{&g_243[2][1][0],&g_243[2][1][0],&g_243[0][1][0]},{&g_243[2][1][0],&g_243[2][1][0],&g_243[1][1][0]},{&g_243[0][1][0],&g_243[2][1][0],(void*)0},{&g_243[2][1][0],&g_243[2][1][0],&g_243[2][1][0]}},{{(void*)0,&g_243[2][2][0],(void*)0},{&g_243[2][1][0],&g_243[2][1][0],&g_243[2][1][0]},{(void*)0,&g_243[2][1][0],(void*)0},{&g_243[2][1][0],&g_243[1][1][0],&g_243[1][1][0]}}};
        uint64_t *l_1344 = &g_394;
        uint64_t **l_1343 = &l_1344;
        uint64_t l_1373 = 0x7E6DAC86DB62353ALL;
        uint32_t l_1376[1][4];
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
                l_1376[i][j] = 2UL;
        }
    }
    return l_1469;
}



static int32_t * func_47(uint16_t  p_48, union U1  p_49, int16_t * p_50, uint8_t  p_51, struct S0  p_52)
{ 
    uint32_t l_1218[2];
    int32_t l_1223 = (-8L);
    int32_t l_1224 = 0L;
    uint16_t *l_1232 = (void*)0;
    int64_t *l_1237 = &g_1123[0][4];
    int i;
    for (i = 0; i < 2; i++)
        l_1218[i] = 0UL;
    l_1224 ^= (l_1223 = ((((((*g_346)--) == g_32) && l_1218[0]) > (g_240[0].f3 & 0x69586E08C2450AE2LL)) >= ((((p_52.f2 , (safe_div_func_int8_t_s_s(((((g_609[4] == (((safe_add_func_int16_t_s_s(l_1218[0], 0x5A96L)) , (void*)0) == (void*)0)) , l_1218[0]) & p_49.f0) <= l_1218[1]), 0xF4L))) == 0xB618L) && g_28) && 0x1CL)));
    l_1223 = (safe_mul_func_int16_t_s_s((!(*g_346)), (((safe_add_func_int64_t_s_s(((*l_1237) = (safe_lshift_func_int16_t_s_s((((void*)0 == l_1232) <= (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((g_102.f0 , g_828), ((0xDC92L == 65535UL) & p_52.f4))) ^ 0xD2CBL), 0))), 15))), 18446744073709551615UL)) != p_52.f4) <= p_52.f0)));
    return g_1238;
}



static int8_t * func_53(uint32_t  p_54, uint64_t  p_55, uint16_t  p_56)
{ 
    int32_t l_70 = 0xBC0E3E0EL;
    int32_t l_72 = 0xF2FE87A7L;
    int16_t *l_253 = &g_32;
    int16_t * const *l_1190 = &l_253;
    int32_t l_1193 = (-6L);
    struct S0 **l_1201 = &g_912;
    struct S0 ****l_1208 = &g_915[1];
    int8_t *l_1211[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    for (g_5 = 0; (g_5 != 25); g_5++)
    { 
        uint64_t l_59[6] = {18446744073709551607UL,18446744073709551607UL,0xB6BEFC5446ED9A83LL,18446744073709551607UL,18446744073709551607UL,0xB6BEFC5446ED9A83LL};
        union U1 l_92 = {0x1CL};
        struct S0 **l_1200 = &g_912;
        int i;
        for (g_32 = 5; (g_32 >= 1); g_32 -= 1)
        { 
            int8_t *l_1191 = &g_252;
            const union U1 l_1209 = {1UL};
            int32_t l_1210 = 1L;
            for (p_55 = 1; (p_55 <= 5); p_55 += 1)
            { 
                int32_t *l_60 = &g_61;
                int32_t *l_62 = &g_61;
                int32_t *l_63 = &g_61;
                int32_t *l_64 = &g_61;
                int32_t *l_65 = &g_61;
                int32_t *l_66 = (void*)0;
                int32_t *l_67 = (void*)0;
                int32_t *l_68 = &g_61;
                int32_t l_69 = (-1L);
                int32_t *l_71[4][7] = {{(void*)0,(void*)0,&g_61,(void*)0,(void*)0,&g_61,(void*)0},{&g_5,&g_61,&g_5,(void*)0,&g_5,&g_61,&g_5},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_5,(void*)0,&l_69,(void*)0,&g_5,&g_5,&g_5}};
                struct S0 l_1192[5] = {{0x346FL,0L,9L,0x2186L,18446744073709551615UL,4294967295UL},{0x346FL,0L,9L,0x2186L,18446744073709551615UL,4294967295UL},{0x346FL,0L,9L,0x2186L,18446744073709551615UL,4294967295UL},{0x346FL,0L,9L,0x2186L,18446744073709551615UL,4294967295UL},{0x346FL,0L,9L,0x2186L,18446744073709551615UL,4294967295UL}};
                int i, j;
                g_73++;
                for (p_54 = 0; (p_54 <= 5); p_54 += 1)
                { 
                    int16_t *l_84 = (void*)0;
                    union U1 *l_93 = &l_92;
                    int8_t *l_251 = &g_252;
                    int i;
                    l_1190 = func_76((safe_add_func_uint8_t_u_u((l_84 == ((+(safe_mod_func_uint8_t_u_u(func_88(l_59[g_32], ((*l_93) = l_92), l_59[g_32]), ((*l_251) &= (safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s((l_59[p_54] >= ((g_250[0][1] <= p_56) || p_56)), l_70)), g_250[0][1])))))) , l_253)), l_59[g_32])), p_56, l_59[g_32], g_240[0].f4, l_59[g_32]);
                    if ((*l_65))
                        break;
                    return l_1191;
                }
                (*l_65) = (l_1192[3] , l_1193);
            }
            l_1210 = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(g_28, 7)), p_55)) < (l_1200 != (l_1201 = l_1201))), (safe_lshift_func_uint16_t_u_s((safe_mul_func_uint16_t_u_u((((safe_div_func_int16_t_s_s((((((l_1208 == (void*)0) ^ ((*l_1191) = (l_1193 > p_55))) | g_3) , 0x2F23C1B8L) , p_54), p_54)) , l_1209) , g_240[0].f5), p_54)), 12)))) < g_240[0].f5);
        }
    }
    return l_1211[4];
}



static int16_t * const * func_76(uint64_t  p_77, const uint16_t  p_78, int32_t  p_79, uint32_t  p_80, int8_t  p_81)
{ 
    union U1 *l_255 = &g_102;
    union U1 **l_254 = &l_255;
    uint64_t *l_256 = &g_33;
    int32_t l_272[4] = {0xD43AD270L,0xD43AD270L,0xD43AD270L,0xD43AD270L};
    int32_t l_292 = (-7L);
    uint32_t l_296 = 4294967295UL;
    int32_t ** const *l_333 = &g_243[2][1][0];
    uint8_t *l_348 = &g_102.f0;
    uint32_t l_380 = 0xECD880B4L;
    uint32_t l_447 = 4294967291UL;
    int16_t *l_492 = &g_32;
    int16_t * const *l_491[2][3];
    uint32_t l_567 = 3UL;
    uint32_t l_595 = 0x8C4577E1L;
    int32_t **l_630 = (void*)0;
    int16_t l_632 = 0xA81EL;
    int32_t *l_757 = &l_272[1];
    int16_t * const *l_770 = &l_492;
    uint32_t l_790 = 18446744073709551610UL;
    const int16_t **l_861 = (void*)0;
    uint32_t l_864 = 18446744073709551614UL;
    struct S0 ****l_942 = (void*)0;
    uint32_t **l_943 = &g_193;
    struct S0 **l_944 = (void*)0;
    uint32_t l_975 = 5UL;
    int32_t *** const **l_1001 = (void*)0;
    int8_t l_1021 = (-1L);
    struct S0 *l_1071 = (void*)0;
    uint32_t ** const * const l_1147 = &l_943;
    uint32_t ** const * const *l_1146 = &l_1147;
    const uint64_t *l_1186 = &g_394;
    int16_t * const *l_1189 = &l_492;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            l_491[i][j] = &l_492;
    }
lbl_377:
    (*l_254) = &g_102;
lbl_1150:
    if (p_80)
    { 
        uint8_t l_273[3];
        int32_t l_290 = (-7L);
        union U1 *l_316 = &g_102;
        union U1 l_334[3][3] = {{{1UL},{7UL},{7UL}},{{1UL},{7UL},{7UL}},{{1UL},{7UL},{7UL}}};
        int32_t ***l_335 = &g_243[0][1][0];
        uint32_t *l_354 = (void*)0;
        int64_t *l_385 = &g_3;
        struct S0 **l_393 = (void*)0;
        int32_t ** const ***l_398 = &g_397;
        int32_t l_412[3][1][7];
        const struct S0 **l_425 = &g_239;
        int32_t l_429 = 7L;
        int64_t l_430[6] = {(-3L),(-4L),(-4L),(-3L),(-4L),(-4L)};
        int32_t l_431 = 5L;
        uint64_t l_433 = 18446744073709551609UL;
        int16_t *l_441 = (void*)0;
        int16_t **l_440[3][3][7] = {{{&l_441,&l_441,(void*)0,&l_441,(void*)0,&l_441,&l_441},{&l_441,&l_441,&l_441,(void*)0,&l_441,(void*)0,&l_441},{&l_441,&l_441,&l_441,&l_441,&l_441,&l_441,&l_441}},{{&l_441,&l_441,&l_441,&l_441,(void*)0,&l_441,&l_441},{&l_441,&l_441,(void*)0,(void*)0,&l_441,&l_441,&l_441},{&l_441,&l_441,&l_441,&l_441,&l_441,&l_441,&l_441}},{{&l_441,&l_441,&l_441,&l_441,(void*)0,(void*)0,&l_441},{&l_441,&l_441,&l_441,(void*)0,&l_441,&l_441,&l_441},{&l_441,&l_441,&l_441,&l_441,&l_441,&l_441,&l_441}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_273[i] = 4UL;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 7; k++)
                    l_412[i][j][k] = 0x987E043FL;
            }
        }
        if ((l_256 == &p_77))
        { 
            uint32_t l_275 = 0x9C80B205L;
            uint64_t *l_276 = (void*)0;
            uint64_t l_291 = 0x5F7A7125ED15D58CLL;
            int32_t *l_293 = &g_114[4][6][2];
            int32_t l_294 = 0xBFF30CF9L;
            int32_t l_295 = 0x6F63ACA2L;
            uint16_t *l_297 = (void*)0;
            uint16_t *l_298 = &g_250[0][1];
            int32_t *l_299 = &l_272[1];
            (*l_299) = ((((g_104 = ((((*l_298) = (safe_mul_func_int8_t_s_s((!(safe_div_func_int32_t_s_s((((safe_add_func_int32_t_s_s(((((((&g_102 == &g_102) , ((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s((l_273[2] = l_272[1]), (+(p_77 = l_275)))), (((safe_add_func_int32_t_s_s(((void*)0 != g_279), ((safe_unary_minus_func_uint64_t_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((safe_div_func_int32_t_s_s(((((*l_293) = (l_292 = ((safe_div_func_int16_t_s_s((1UL || l_290), l_291)) == l_272[0]))) >= l_290) > p_79), l_272[2])) || 248UL), g_218)) ^ p_81), p_81)))) > p_78))) , l_294) < g_240[0].f2))) || l_295), 3)), l_290)) && (-1L))) <= l_290) > 0x442F112EA4976389LL) < g_102.f0) | p_81), l_296)) , g_250[3][1]) && (*l_293)), p_81))), p_80))) >= l_272[1]) , (*l_293))) < 0x2CFC59ED45C23DEELL) == 0UL) | l_272[2]);
        }
        else
        { 
            int16_t l_309 = 1L;
            struct S0 l_317 = {0xC67CL,2L,-1L,0xE6EBL,0xB7F6C108L,0UL};
            uint64_t *l_365 = (void*)0;
            uint64_t *l_366[6] = {&g_33,&g_104,&g_104,&g_33,&g_104,&g_104};
            uint16_t *l_369 = &g_250[0][1];
            int32_t l_376[4];
            union U1 *l_391 = (void*)0;
            struct S0 **l_402 = (void*)0;
            int32_t l_409 = 0xDA6FFCF7L;
            int16_t l_444 = 1L;
            int32_t *l_462 = &l_272[1];
            int i;
            for (i = 0; i < 4; i++)
                l_376[i] = (-1L);
            for (g_218 = 9; (g_218 != 41); g_218 = safe_add_func_int8_t_s_s(g_218, 2))
            { 
                uint8_t *l_305[2];
                int32_t l_306 = 0L;
                int32_t *l_318 = &l_272[0];
                uint32_t *l_336 = &g_240[0].f4;
                uint32_t *l_339 = &g_167;
                int32_t *l_340 = (void*)0;
                int32_t *l_341 = &g_114[0][6][4];
                int i;
                for (i = 0; i < 2; i++)
                    l_305[i] = &l_273[0];
                l_306 = (p_79 ^= ((p_77 > (&p_79 == (void*)0)) , ((safe_rshift_func_int8_t_s_s(((&g_117 == &g_252) || (l_273[2] , ((!(l_290 = 1UL)) || (-8L)))), l_273[2])) != 9UL)));
                (*l_318) = (((safe_add_func_int64_t_s_s((((l_309 & (((safe_add_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(l_272[1], 6)), (p_79 ^ 0L))) , l_316) != ((*g_279) = (l_317 , (*l_254)))), 0L)) > 4294967293UL) , 4L)) >= 0x569EL) || l_317.f4), 18446744073709551615UL)) == l_317.f4) >= p_81);
                (*l_341) ^= (safe_lshift_func_uint16_t_u_s((safe_div_func_int32_t_s_s(l_317.f0, ((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((*l_339) &= (safe_sub_func_int16_t_s_s((((*l_336) = (safe_div_func_int32_t_s_s((l_333 == (l_334[0][2] , l_335)), (*l_318)))) , (-1L)), ((safe_lshift_func_int8_t_s_s((((void*)0 == &g_28) || 5L), 1)) , p_79)))), p_80)), l_317.f1)), g_240[0].f5)) && l_317.f1))), p_77));
                (*l_341) &= (*l_318);
            }
            for (g_104 = 0; (g_104 > 12); g_104++)
            { 
                uint8_t **l_347 = &g_346;
                int8_t *l_355 = (void*)0;
                int8_t *l_356 = (void*)0;
                int8_t *l_357 = (void*)0;
                int8_t *l_358 = (void*)0;
                int8_t *l_359 = &g_252;
                int32_t **l_360 = &g_244[0];
                p_79 = (((safe_add_func_int16_t_s_s((((*l_347) = g_346) != l_348), (((*l_359) ^= ((safe_mul_func_int8_t_s_s((p_79 || ((p_80 != (((safe_unary_minus_func_int64_t_s((safe_div_func_uint16_t_u_u(5UL, g_240[0].f2)))) != (&g_28 != l_354)) <= p_78)) , p_79)), g_250[0][1])) & p_80)) && 1L))) , &g_240[0]) != &g_240[0]);
                (*l_360) = &p_79;
            }
            p_79 = ((safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((((((p_77 = (l_317.f0 || l_317.f4)) <= (safe_sub_func_uint16_t_u_u(0x6B28L, (++(*l_369))))) & 0xD66F16D8L) | 3L) != (p_79 , (safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((l_376[3] = ((g_73 && 0xD480L) , 65535UL)) <= g_240[0].f5) , p_79), l_273[2])), p_80)))), g_73)), l_317.f4)) != l_292);
            if (((*l_316) , l_317.f0))
            { 
lbl_442:
                if (p_80)
                    goto lbl_377;
                for (g_252 = (-8); (g_252 != 18); ++g_252)
                { 
                    int32_t *l_381 = (void*)0;
                    int32_t *l_382 = &g_114[4][1][5];
                    (*l_382) &= l_380;
                }
            }
            else
            { 
                union U1 *l_390 = &l_334[1][2];
                struct S0 ***l_392 = (void*)0;
                int32_t *l_395 = &l_272[1];
                int32_t l_432 = 0x907F4B08L;
                int32_t *l_437 = (void*)0;
                int32_t l_445 = (-1L);
                int32_t l_446[5][7] = {{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{6L,6L,6L,6L,6L,6L,6L},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)},{6L,6L,6L,6L,6L,6L,6L},{(-7L),(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)}};
                int i, j;
                (*l_395) &= ((safe_add_func_int8_t_s_s(((void*)0 != l_385), ((p_77 & (1UL == (safe_sub_func_int16_t_s_s((((*g_279) = &l_334[2][1]) != (l_391 = l_390)), ((l_393 = (void*)0) == (void*)0))))) | p_79))) & g_394);
                (*l_395) = (p_79 |= p_80);
                if (p_79)
                    goto lbl_399;
lbl_399:
                l_398 = g_396[6][0];
                if ((safe_add_func_uint16_t_u_u((l_402 == l_402), (safe_div_func_uint32_t_u_u((safe_mod_func_int32_t_s_s((l_412[2][0][3] |= (((safe_rshift_func_uint8_t_u_s(l_409, (g_28 , (p_78 , (safe_div_func_uint16_t_u_u((p_81 | (((*l_369) = p_77) , g_250[2][0])), 0x47B1L)))))) == g_114[0][3][2]) , p_77)), p_79)), 4294967289UL)))))
                { 
                    uint32_t *l_420[2];
                    const struct S0 ***l_426 = &l_425;
                    int32_t *l_427[5];
                    int32_t l_428 = (-7L);
                    int32_t **l_436[4][5] = {{&g_244[1],&g_244[1],&l_395,&g_244[1],&g_244[1]},{(void*)0,&l_427[4],(void*)0,(void*)0,&l_427[4]},{&g_244[1],(void*)0,(void*)0,&g_244[1],(void*)0},{&l_427[4],&l_427[4],&g_244[1],&l_427[4],&l_427[4]}};
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_420[i] = &g_240[0].f4;
                    for (i = 0; i < 5; i++)
                        l_427[i] = &g_114[0][3][2];
                    p_79 |= (safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_77, p_78)), (safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_int64_t_s((3L ^ p_81))) >= (((((g_240[0].f4++) , ((*l_395) != (safe_sub_func_int64_t_s_s(0xA8E8ADBD2BE88828LL, ((((*l_426) = l_425) != &g_239) , 0x3EF2993F3C37F6B4LL))))) || (*l_395)) | g_3) <= p_77)), 13))));
                    --l_433;
                    l_437 = &p_79;
                    p_79 = (safe_mul_func_int16_t_s_s(p_80, ((void*)0 != l_440[1][2][1])));
                    if (g_104)
                        goto lbl_442;
                }
                else
                { 
                    int32_t *l_443[5][4][6] = {{{(void*)0,&g_114[1][1][4],(void*)0,&g_61,&g_114[0][3][2],&l_292},{&l_272[1],&g_114[0][3][2],&l_376[3],&l_290,&g_5,&l_376[3]},{&l_290,&g_5,&l_376[3],&l_290,(void*)0,&g_61},{&l_272[1],&g_114[0][3][2],&g_114[3][0][2],&g_61,&l_290,&l_429}},{{(void*)0,(void*)0,&l_376[3],&l_376[3],&l_290,&l_376[3]},{&l_429,&g_114[0][3][2],&g_114[0][3][2],&l_292,(void*)0,&g_114[3][0][2]},{&g_114[3][0][2],&g_5,&l_292,&l_292,&g_5,&g_114[3][0][2]},{&l_292,&g_114[0][3][2],&g_114[0][3][2],(void*)0,&g_114[0][3][2],&l_376[3]}},{{&l_376[3],&g_114[1][1][4],&l_376[3],&l_432,&l_272[1],(void*)0},{&l_431,&g_114[0][3][2],&l_432,&l_272[1],&l_376[3],(void*)0},{&l_290,&l_376[3],&l_431,(void*)0,&l_376[3],&l_431},{&l_432,&l_376[3],&l_292,&l_290,&l_376[3],(void*)0}},{{(void*)0,&g_114[0][3][2],&l_272[1],&l_292,&l_272[1],&l_292},{&l_272[1],&l_292,&l_272[1],(void*)0,&l_376[3],(void*)0},{&l_431,&l_376[3],&l_292,&l_432,&l_290,&l_431},{&l_432,&l_290,&l_431,&l_432,&l_429,(void*)0}},{{&l_431,&l_376[3],&l_432,(void*)0,&l_292,(void*)0},{&l_272[1],&l_429,&l_272[1],&l_292,&l_292,&g_114[0][4][2]},{(void*)0,&l_376[3],&l_429,&l_290,&l_429,&l_432},{&l_432,&l_290,(void*)0,(void*)0,&l_290,&l_432}}};
                    int i, j, k;
                    l_447--;
                    l_292 ^= (safe_sub_func_int32_t_s_s((p_79 , (-3L)), (g_117 , p_77)));
                    p_79 = (18446744073709551608UL | (safe_div_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(g_240[0].f4, (safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((p_77 , ((((*l_369) = (p_78 , p_78)) | g_32) < (*g_346))) > (*l_395)) , (*l_395)), 1UL)) , p_78), (-1L))))) <= l_317.f3), (-1L))), 0x073AF742L)));
                    l_462 = (l_395 = &l_376[3]);
                    l_443[3][0][5] = &l_432;
                }
            }
        }
    }
    else
    { 
        uint16_t l_465 = 0xC25FL;
        uint16_t *l_476 = (void*)0;
        uint16_t *l_477[7][7][2] = {{{&g_250[0][1],&g_218},{&g_240[0].f3,(void*)0},{&l_465,&g_240[0].f3},{(void*)0,&g_250[0][1]},{&g_218,&g_218},{&l_465,&l_465},{&g_218,&g_218}},{{&g_250[0][1],(void*)0},{&g_240[0].f3,&l_465},{(void*)0,&g_240[0].f3},{&g_218,&g_250[0][1]},{&g_218,&g_240[0].f3},{(void*)0,&l_465},{&g_240[0].f3,(void*)0}},{{&g_250[0][1],&g_218},{&g_218,&l_465},{&l_465,&g_218},{&g_218,&g_250[0][1]},{(void*)0,&g_240[0].f3},{&l_465,(void*)0},{&g_240[0].f3,&g_218}},{{&g_250[0][1],&g_218},{&g_240[0].f3,(void*)0},{&l_465,&g_240[0].f3},{(void*)0,&g_250[0][1]},{&g_218,&g_218},{&l_465,&l_465},{&g_218,&g_218}},{{&g_250[0][1],(void*)0},{&g_240[0].f3,&l_465},{(void*)0,&g_240[0].f3},{&g_218,&g_250[0][1]},{&g_218,&g_240[0].f3},{(void*)0,&l_465},{&g_240[0].f3,(void*)0}},{{&g_250[0][1],&g_218},{&g_218,&l_465},{&l_465,&g_218},{&g_218,&g_250[0][1]},{(void*)0,&g_240[0].f3},{&l_465,(void*)0},{&g_240[0].f3,&g_218}},{{&g_250[0][1],&g_218},{&g_240[0].f3,(void*)0},{&l_465,&g_240[0].f3},{(void*)0,&g_250[0][1]},{&g_218,&g_218},{&l_465,&l_465},{&g_218,&g_218}}};
        int32_t l_478 = 0x62E44AEDL;
        int8_t *l_479 = (void*)0;
        int8_t *l_480[6];
        int32_t l_481 = 0xC8697BA7L;
        uint64_t *l_482 = &g_394;
        uint32_t *l_483 = (void*)0;
        uint32_t *l_484 = (void*)0;
        uint32_t *l_485[2][3] = {{&g_73,&g_73,&g_73},{&g_73,&g_73,&g_73}};
        int32_t l_486 = (-4L);
        int64_t l_487 = 1L;
        const uint64_t l_488 = 1UL;
        int16_t * const *l_493[1];
        uint8_t l_513 = 0x24L;
        int32_t l_516 = 0x1FBC879AL;
        int32_t l_517 = (-1L);
        int32_t l_520 = 0x8BFA158FL;
        int32_t l_523 = (-1L);
        int32_t l_524 = 0L;
        int32_t l_525 = 0L;
        int32_t l_526 = 0x8CD2DE1CL;
        int32_t l_527 = 0x32E945ECL;
        int32_t l_528 = 0L;
        int32_t l_529 = 0x138C7D02L;
        int32_t l_532[2];
        uint32_t l_591 = 0x2B95F55AL;
        uint64_t l_608[6][4] = {{8UL,1UL,0UL,8UL},{0UL,8UL,0x189A3244E3B8AD0BLL,0x189A3244E3B8AD0BLL},{0x34E33E3D56D01904LL,0x34E33E3D56D01904LL,1UL,18446744073709551615UL},{0x34E33E3D56D01904LL,1UL,0x189A3244E3B8AD0BLL,0x34E33E3D56D01904LL},{0UL,18446744073709551615UL,18446744073709551615UL,9UL},{0x189A3244E3B8AD0BLL,1UL,0x34E33E3D56D01904LL,0UL}};
        int32_t *l_621 = &l_292;
        int16_t ****l_664 = (void*)0;
        int32_t l_665 = (-8L);
        int32_t l_724 = 0x69848416L;
        uint64_t l_762 = 0x2282FED734739AB9LL;
        uint32_t **l_767 = (void*)0;
        uint64_t l_774 = 5UL;
        int16_t **l_806 = &g_496;
        int32_t *l_831 = (void*)0;
        int32_t *l_832 = &l_524;
        int32_t *l_833 = &l_527;
        int32_t *l_834 = &l_532[1];
        int32_t *l_835 = &l_517;
        int32_t *l_836 = &l_532[0];
        int32_t *l_837 = &l_523;
        int32_t *l_838 = &l_525;
        int32_t *l_839 = &l_520;
        int32_t *l_840 = &l_517;
        int32_t *l_841 = &g_609[2];
        int32_t *l_842 = &l_724;
        int32_t *l_843 = (void*)0;
        int32_t *l_844 = &g_114[2][3][0];
        int32_t *l_845 = (void*)0;
        int32_t *l_846 = &l_532[0];
        int32_t *l_847 = &l_526;
        int32_t *l_848[4] = {&l_724,&l_724,&l_724,&l_724};
        uint16_t l_849 = 65535UL;
        int16_t ***l_858 = &l_806;
        const int16_t ***l_862[6] = {&l_861,&l_861,&l_861,&l_861,&l_861,&l_861};
        int64_t l_865 = 4L;
        union U1 *l_907 = (void*)0;
        struct S0 ****l_941 = &g_915[1];
        union U1 l_950[1][6][7] = {{{{1UL},{0x8BL},{1UL},{0x72L},{0x8BL},{0x8BL},{0x8BL}},{{0x8BL},{1UL},{0xB5L},{1UL},{0x8BL},{0xB5L},{0x97L}},{{0x97L},{0x8BL},{0x72L},{0x97L},{0x72L},{0x8BL},{0x97L}},{{1UL},{0x97L},{0x8BL},{0x72L},{0x97L},{0x72L},{0x8BL}},{{0x97L},{0x97L},{0xB5L},{0x8BL},{1UL},{0xB5L},{1UL}},{{0x8BL},{0x8BL},{0x8BL},{0x8BL},{0x72L},{1UL},{0x8BL}}}};
        uint32_t l_962 = 1UL;
        int64_t l_1031 = 0x47D617C5591ECA0CLL;
        int16_t l_1058 = 0x31E8L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_480[i] = &g_117;
        for (i = 0; i < 1; i++)
            l_493[i] = &l_492;
        for (i = 0; i < 2; i++)
            l_532[i] = (-2L);
        if (((p_78 >= 6L) > ((safe_rshift_func_int16_t_s_s(((((l_465 ^ (((l_486 = (((*l_482) = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((l_481 = (safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(0x9139L, (((*g_239) , (safe_rshift_func_uint16_t_u_s(((l_478 ^= p_78) ^ (((void*)0 == &g_110[0]) <= 65535UL)), p_77))) && p_81))), p_79))), p_79)), g_240[0].f5))) , p_81)) , 1L) , l_487)) < 0x88L) < 0x3D294501L) & g_110[0]), l_488)) && l_481)))
        { 
            int16_t * const *l_494[6][1][7] = {{{(void*)0,&l_492,&l_492,&l_492,&l_492,(void*)0,&l_492}},{{&l_492,&l_492,&l_492,&l_492,&l_492,&l_492,&l_492}},{{&l_492,&l_492,(void*)0,&l_492,&l_492,&l_492,&l_492}},{{&l_492,&l_492,&l_492,&l_492,&l_492,&l_492,&l_492}},{{&l_492,&l_492,(void*)0,&l_492,&l_492,(void*)0,&l_492}},{{&l_492,&l_492,&l_492,&l_492,&l_492,&l_492,&l_492}}};
            int32_t l_497 = 0xA9F1A553L;
            int32_t l_499 = 0L;
            int32_t l_500 = 0x1F998BFFL;
            int32_t l_503[7][1] = {{(-4L)},{1L},{(-4L)},{1L},{(-4L)},{1L},{(-4L)}};
            int i, j, k;
            for (p_81 = (-23); (p_81 > (-26)); p_81 = safe_sub_func_uint32_t_u_u(p_81, 1))
            { 
                return g_495[4];
            }
            for (p_80 = 0; (p_80 <= 3); p_80 += 1)
            { 
                int32_t l_502 = (-1L);
                int16_t **l_508 = &l_492;
                int16_t ***l_507 = &l_508;
                int16_t l_510[4][6][6] = {{{0x5F6BL,0x86CCL,(-1L),(-1L),0xBB46L,0x2DD7L},{0x5E24L,(-9L),0x86CCL,(-1L),(-1L),1L},{0xBB46L,0x2C27L,1L,0x2A18L,(-1L),(-1L)},{0x2A84L,9L,9L,0x2A84L,1L,(-1L)},{9L,1L,0xD34AL,0x5939L,0x2DD7L,0xBB46L},{0xA8A1L,0x3FF9L,0x5E24L,(-1L),0x2DD7L,0xCEB2L}},{{0xCEB2L,1L,0x2A18L,(-9L),1L,0x86CCL},{(-4L),9L,0x337AL,0x5F6BL,(-1L),0x5F6BL},{1L,0x2C27L,1L,(-4L),(-1L),0x9BFBL},{0x2A0CL,(-9L),(-1L),9L,0xBB46L,0x337AL},{0x9BFBL,0x86CCL,1L,9L,0xCEB2L,(-4L)},{0x2A0CL,(-1L),0x3FF9L,(-4L),0x86CCL,1L}},{{1L,0x5E24L,0L,0x5F6BL,0x5F6BL,0L},{(-4L),(-4L),0x4714L,(-9L),0x9BFBL,0x9BFBL},{0x4714L,0x3FF9L,0L,1L,0x406DL,0x86CCL},{1L,0x4714L,0L,0xD34AL,0x2DD7L,0x9BFBL},{0x5F6BL,0xD34AL,0x86CCL,0L,0x5939L,0x3FF9L},{0L,0x5939L,0x3FF9L,1L,0x3FF9L,0x5939L}},{{0x2C27L,1L,(-4L),(-1L),0x9BFBL,0x2DD7L},{0x9BFBL,1L,1L,0xCEB2L,0x86CCL,0x406DL},{(-9L),1L,(-1L),9L,0x9BFBL,0xBB46L},{1L,1L,(-1L),0x9BFBL,0x3FF9L,(-9L)},{0x2A18L,0x5939L,0x406DL,0x406DL,0x5939L,0x2A18L},{0x2A0CL,0xD34AL,1L,(-1L),0x2DD7L,0x4714L}}};
                int32_t l_512 = 0x5F202A77L;
                int32_t l_518 = 0xF9F997E0L;
                int32_t l_519 = 0L;
                int32_t l_521 = 2L;
                int32_t l_522 = 0xE8B60CE4L;
                int32_t l_530 = (-8L);
                int32_t l_531[5];
                uint32_t l_533 = 1UL;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_531[i] = 0xE40A3AB3L;
                for (l_487 = 3; (l_487 >= 0); l_487 -= 1)
                { 
                    int32_t *l_498[4];
                    int64_t l_501 = (-7L);
                    uint8_t l_504 = 0UL;
                    int16_t ****l_509 = &l_507;
                    int64_t l_511 = 0x66C3400799771193LL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_498[i] = &g_114[1][6][0];
                    l_504++;
                    (*l_509) = l_507;
                    l_513++;
                    if (g_117)
                        goto lbl_377;
                    --l_533;
                }
                if (l_272[p_80])
                    continue;
                for (l_513 = 1; (l_513 <= 4); l_513 += 1)
                { 
                    struct S0 *l_542 = &g_240[0];
                    struct S0 **l_541 = &l_542;
                    struct S0 ***l_540 = &l_541;
                    int32_t **l_543 = &g_244[1];
                    int i;
                    (*l_543) = ((safe_add_func_uint32_t_u_u(0xD013DC98L, (l_272[p_80] != ((void*)0 == l_540)))) , (void*)0);
                    if (l_272[p_80])
                        continue;
                }
            }
        }
        else
        { 
            int8_t **l_548 = (void*)0;
            int8_t **l_549 = &l_479;
            int32_t l_566 = 0xFA15A2C4L;
            int32_t *l_586 = (void*)0;
            int32_t *l_587 = &g_114[0][3][2];
            int32_t l_588 = 0x869D975CL;
            int32_t *l_589[6][7] = {{&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2],&l_272[2]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
            int8_t l_590[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_590[i] = (-9L);
            for (g_394 = 29; (g_394 < 2); g_394 = safe_sub_func_int8_t_s_s(g_394, 2))
            { 
                return &g_496;
            }
            l_523 = (safe_mul_func_uint16_t_u_u((p_78 | ((&g_117 == ((*l_549) = (l_480[2] = &p_81))) , (safe_rshift_func_int8_t_s_u(p_78, (safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((-1L), (safe_div_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_525 && (safe_lshift_func_int8_t_s_s((p_81 = ((safe_sub_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((p_77 , p_79), l_566)), p_78)) < (-7L))), 5))), l_566)), g_114[0][3][2])))), l_567)))))), g_167));
            for (l_524 = 19; (l_524 > (-11)); l_524 = safe_sub_func_uint32_t_u_u(l_524, 4))
            { 
                int64_t l_583 = 0x685CEB02AE673D0FLL;
                int32_t *l_584 = &l_566;
                p_79 = (safe_unary_minus_func_int32_t_s((safe_lshift_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((((g_240[0].f5 , (((g_585[0][3][5] &= (safe_lshift_func_int16_t_s_s((((p_80 = (safe_mul_func_uint16_t_u_u(((p_81 | (safe_rshift_func_uint8_t_u_u(0xEDL, (safe_lshift_func_uint8_t_u_s(((*g_346) = (g_167 <= ((0xD7E0A2D795BA7978LL > g_114[4][2][5]) == ((*l_584) = ((p_79 <= 0xD192L) || l_583))))), 6))))) && (-1L)), p_77))) | 5L) < l_517), p_77))) | 8L) != 18446744073709551613UL)) <= l_478) <= (-8L)), p_81)) && p_77) || g_33), 14))));
            }
            ++l_591;
        }
        l_608[2][3] = ((~(g_114[2][5][1] > ((((*g_239) , l_595) , (g_5 , p_81)) == (safe_mod_func_int16_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_int64_t_s_s(((&g_252 == (l_524 , &g_117)) ^ (*g_346)), 0x885628033E6721BFLL)) | p_80), 5)), p_78)) && 0UL) , g_117), p_77)), 1UL)), p_81))))) , l_527);
    }
    for (g_631 = 0; (g_631 <= 1); g_631 += 1)
    { 
        struct S0 *l_1117 = &g_240[0];
        int16_t **l_1118 = &l_492;
        int32_t l_1124 = 0x6709CE6DL;
        int32_t l_1125 = 0L;
        uint8_t **l_1151 = &g_346;
        uint16_t *l_1165 = (void*)0;
        uint16_t *l_1166 = &g_585[0][3][5];
        union U1 *l_1169[3];
        uint8_t l_1170 = 5UL;
        int32_t *l_1171[6] = {&l_292,&l_292,&l_292,&l_292,&l_292,&l_292};
        int32_t l_1172 = 0x9251FFF7L;
        int i;
        for (i = 0; i < 3; i++)
            l_1169[i] = &g_102;
        for (g_117 = 1; (g_117 >= 0); g_117 -= 1)
        { 
            uint64_t l_1119 = 0xD17244FF650EE4EDLL;
            int32_t l_1142 = (-1L);
            int8_t *l_1152 = &g_1148[3][3][2];
            uint16_t *l_1156 = (void*)0;
            uint16_t *l_1157 = &g_240[0].f3;
            int32_t **l_1158 = &g_244[1];
            for (g_61 = 0; (g_61 <= 1); g_61 += 1)
            { 
                int32_t l_1120 = 0x842A47D6L;
                uint16_t *l_1121 = &g_240[0].f3;
                int64_t *l_1122[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1122[i] = &g_1123[0][4];
                if ((safe_sub_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(p_77, (safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((l_1124 |= (((*l_1121) = ((safe_add_func_int64_t_s_s(((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((((0xB2A58BAB47F5205ELL > ((((safe_mod_func_uint64_t_u_u(g_117, (0xB5A2FF98E200C295LL | (safe_div_func_int32_t_s_s((p_79 = ((safe_rshift_func_uint8_t_u_s(0xD8L, 5)) ^ ((void*)0 == l_1117))), p_77))))) , &l_492) == l_1118) ^ l_1119)) && g_117) < 0xCE612AECL), p_78)), 65531UL)), 1)) > 0xB6B7E045L) == (*l_757)), l_1120)), p_77)), p_77)) == p_77), l_1119)) < 65533UL)) , (-7L))) != p_80), 250UL)), p_77)))) | l_1125), g_1123[0][3])))
                { 
                    uint64_t *l_1143 = &l_1119;
                    int32_t l_1149 = 0L;
                    (*l_757) = (((g_252 = p_77) != (((safe_rshift_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((0x1CAE718FL >= 1UL), 0xCA57D51AE8DDDF53LL)), (safe_rshift_func_int16_t_s_u(l_1125, 10)))) ^ (safe_add_func_int16_t_s_s(((safe_mul_func_int16_t_s_s((p_78 == (safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u(((((--(*l_1143)) , ((void*)0 == l_1146)) | g_1148[3][3][2]) , p_79), 0)) , p_78) | l_1149), l_1120))), g_218)) , l_1125), (-1L)))) == l_1149)) | 5UL);
                }
                else
                { 
                    if (l_1124)
                        break;
                }
                (*l_757) ^= 6L;
                if (g_5)
                    goto lbl_1150;
            }
            if (l_1125)
                break;
            if (l_1125)
                goto lbl_1150;
            p_79 = (((0xF68824B3BBED8B5ALL ^ (l_1151 == &l_348)) , &p_79) != &p_79);
            (*l_1158) = ((((*l_1152) = p_79) || ((((6UL & (*l_757)) < (((!0L) , (p_78 >= ((*l_1157) = ((safe_lshift_func_uint16_t_u_u(((0x369AL < (l_1125 = (&l_1118 != (void*)0))) <= (-1L)), 13)) <= 0x1CC0L)))) <= p_79)) > p_81) && 1L)) , (void*)0);
        }
        l_1172 ^= (l_1170 = ((*l_757) ^= ((((*g_873) > ((((safe_mod_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(p_77, (safe_add_func_uint32_t_u_u(p_79, ((p_81 > ((--(*l_1166)) | g_114[0][3][0])) <= g_110[0]))))) , g_1123[0][4]) , p_79), 9L)) ^ g_728) , &g_280) == (void*)0)) , (*l_254)) == l_1169[2])));
        return &g_496;
    }
    for (g_828 = 24; (g_828 != 57); g_828++)
    { 
        union U1 l_1177 = {0xD3L};
        uint16_t *l_1184 = &g_240[0].f3;
        uint64_t **l_1185 = &l_256;
        int32_t l_1187[6] = {0x485DA5BDL,0x485DA5BDL,0x485DA5BDL,0x485DA5BDL,0x485DA5BDL,0x485DA5BDL};
        int32_t *l_1188 = &l_292;
        int i;
        (*l_1188) |= (safe_sub_func_int16_t_s_s(((*l_757) &= (l_1177 , (l_1187[0] ^= ((*g_873) , (safe_add_func_uint32_t_u_u(((*g_239) , (safe_lshift_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s((((*l_1184) = 0x9B57L) , ((l_1177.f0 , ((*l_1185) = &p_77)) != l_1186)), p_77)) >= 2UL) | g_117) | 18446744073709551608UL), 11))), 4294967295UL)))))), 0x9AA0L));
        return &g_496;
    }
    for (l_292 = 2; (l_292 >= 0); l_292 -= 1)
    { 
        return &g_496;
    }
    return &g_496;
}



static uint8_t  func_88(uint32_t  p_89, union U1  p_90, int8_t  p_91)
{ 
    uint8_t l_97[7] = {253UL,253UL,0x24L,253UL,253UL,0x24L,253UL};
    int32_t l_111 = (-10L);
    int32_t l_170[3];
    int64_t l_171 = (-1L);
    int32_t l_184 = 8L;
    uint64_t *l_203 = &g_33;
    int i;
    for (i = 0; i < 3; i++)
        l_170[i] = 0x6D8666C7L;
    if (g_61)
    { 
lbl_98:
        for (g_28 = 7; (g_28 >= 16); g_28 = safe_add_func_int64_t_s_s(g_28, 7))
        { 
            uint8_t l_96 = 252UL;
            return l_96;
        }
        return l_97[5];
    }
    else
    { 
        uint8_t l_122 = 0xE4L;
        int16_t **l_148[2];
        int32_t l_166[7][7] = {{0xA569110DL,(-8L),(-8L),0xA569110DL,0x987753CBL,0xAD9904AAL,0xA569110DL},{0xAD9904AAL,3L,0x987753CBL,0x987753CBL,3L,0xAD9904AAL,(-8L)},{3L,0xA569110DL,9L,(-1L),(-1L),9L,0xA569110DL},{3L,(-8L),0xAD9904AAL,3L,0x987753CBL,0x987753CBL,3L},{0xAD9904AAL,0xA569110DL,0xAD9904AAL,0x987753CBL,0xA569110DL,(-8L),(-8L)},{0xA569110DL,3L,9L,3L,0xA569110DL,9L,(-1L)},{(-1L),(-8L),0x987753CBL,(-1L),0x987753CBL,(-8L),(-1L)}};
        int32_t l_177 = 0x9745CED4L;
        int32_t l_185 = (-5L);
        uint32_t *l_189 = (void*)0;
        const union U1 l_236 = {248UL};
        const struct S0 **l_241 = &g_239;
        int32_t ****l_245 = &g_242;
        int i, j;
        for (i = 0; i < 2; i++)
            l_148[i] = (void*)0;
lbl_228:
        for (g_28 = 1; (g_28 <= 6); g_28 += 1)
        { 
            int16_t l_112 = (-1L);
            union U1 l_127 = {0x8DL};
            int16_t l_169[1][3][3];
            int32_t l_172 = 0xAF48925BL;
            int32_t l_173 = 0xD59A9D03L;
            int32_t l_174 = 0x434C76B8L;
            int32_t l_175 = (-10L);
            int32_t l_181[6][6] = {{0x1D7C410AL,0L,0x1D7C410AL,3L,0x1D7C410AL,0L},{4L,0L,0x1FD32157L,0L,4L,0L},{0x1D7C410AL,3L,0x1D7C410AL,0L,0x1D7C410AL,3L},{4L,3L,0x1FD32157L,3L,4L,3L},{0x1D7C410AL,0L,0x1D7C410AL,3L,0x1D7C410AL,0L},{4L,0L,0x1FD32157L,0L,4L,0L}};
            int32_t l_182 = 0x04B277A0L;
            int32_t l_183[7];
            const struct S0 l_198 = {0xFD3EL,4L,-9L,0x575AL,0UL,0x60E5AE00L};
            int32_t *l_227[4] = {&l_166[6][5],&l_166[6][5],&l_166[6][5],&l_166[6][5]};
            int32_t **l_226 = &l_227[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                {
                    for (k = 0; k < 3; k++)
                        l_169[i][j][k] = (-9L);
                }
            }
            for (i = 0; i < 7; i++)
                l_183[i] = 0x03943421L;
            for (g_73 = 0; (g_73 <= 6); g_73 += 1)
            { 
                uint64_t *l_103 = &g_104;
                uint32_t *l_109[7][3] = {{&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0]},{&g_110[0],&g_110[0],&g_110[0]}};
                int32_t *l_113 = &g_114[0][3][2];
                int32_t *l_115 = &g_61;
                int i, j;
                if (g_28)
                    goto lbl_98;
                (*l_115) = (safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((l_97[g_73] || ((((*l_113) &= (((g_102 , (--(*l_103))) ^ 0x352EE06DCF8E4507LL) && (((l_97[g_28] >= (((safe_mod_func_uint64_t_u_u(l_97[g_73], (((g_33 , ((l_111 = g_33) == g_61)) & (-6L)) && p_91))) ^ l_112) & 0xABB8780EC7D23680LL)) >= 0x099732EDL) , 0xF1AFC50BL))) <= p_89) >= (-1L))), 0x89L))));
            }
            if (l_97[g_28])
                continue;
            for (p_91 = 2; (p_91 <= 6); p_91 += 1)
            { 
                int8_t *l_116[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int32_t l_128[3][5] = {{0xDF513FACL,2L,0x8D33E78EL,2L,0xDF513FACL},{0xDF513FACL,2L,0x8D33E78EL,2L,0xDF513FACL},{0xDF513FACL,2L,0x8D33E78EL,2L,0xDF513FACL}};
                int16_t *l_160 = &l_112;
                int16_t **l_159 = &l_160;
                uint32_t **l_190 = &l_189;
                uint32_t *l_192 = &g_110[0];
                uint32_t **l_191[2][1][3] = {{{&l_192,&l_192,&l_192}},{{&l_192,&l_192,&l_192}}};
                union U1 *l_202 = &g_102;
                union U1 **l_201 = &l_202;
                int i, j, k;
                for (g_73 = 0; (g_73 <= 6); g_73 += 1)
                { 
                    int32_t *l_129 = (void*)0;
                    int32_t *l_130 = &g_114[0][3][2];
                    uint64_t *l_142 = &g_104;
                    int32_t *l_143 = &l_111;
                    int i;
                    (*l_130) = ((l_116[4] != (p_90 , &p_91)) || (((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((l_122 & (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((p_90 , (l_127 , &g_117)) == &p_91) & 0xC6C14278DB3D8346LL), 0xEAL)) >= (-5L)), g_28))), 0L)), l_128[1][4])) || g_114[0][5][5]) , 0x08L));
                    (*l_143) |= ((*l_130) = (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_3, (((safe_mul_func_int8_t_s_s((l_128[1][4] = (safe_mod_func_uint64_t_u_u(0x9B6CB083140AF3A0LL, ((*l_142) = (safe_mul_func_uint16_t_u_u((((l_97[g_28] &= g_104) > (g_117 ^= 0x53L)) , ((void*)0 != &g_110[0])), (safe_unary_minus_func_int8_t_s(l_127.f0)))))))), p_91)) > p_90.f0) || g_114[3][2][4]))), p_91)));
                    if (g_5)
                        break;
                }
                g_114[4][3][0] = (safe_rshift_func_int16_t_s_u((l_128[0][2] , (safe_add_func_uint8_t_u_u((l_148[1] == (void*)0), (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(l_122, (safe_mul_func_int16_t_s_s((p_91 != 0L), (safe_lshift_func_int8_t_s_s(l_122, 3)))))), 0))))), l_97[4]));
                for (l_111 = 6; (l_111 >= 0); l_111 -= 1)
                { 
                    union U1 **l_161 = (void*)0;
                    union U1 *l_163 = &g_102;
                    union U1 **l_162 = &l_163;
                    int32_t l_164 = 0xCF6E471BL;
                    uint32_t *l_165[5];
                    int32_t *l_168[4] = {&l_128[1][4],&l_128[1][4],&l_128[1][4],&l_128[1][4]};
                    int32_t l_176 = 1L;
                    uint64_t l_178 = 18446744073709551611UL;
                    uint64_t l_186[2];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_165[i] = &g_110[0];
                    for (i = 0; i < 2; i++)
                        l_186[i] = 1UL;
                    g_114[0][2][4] = ((g_167 = (l_97[l_111] ^ ((((g_102 , (l_166[6][5] |= (safe_add_func_uint32_t_u_u(((g_104 &= ((void*)0 != l_159)) || ((((*l_162) = &p_90) != ((l_164 = l_97[l_111]) , (void*)0)) && 0x62C093970EBC1338LL)), 1UL)))) , p_90.f0) <= l_128[2][4]) || 18446744073709551614UL))) | p_89);
                    l_169[0][2][2] = (&g_33 == &g_104);
                    l_178++;
                    --l_186[1];
                }
                if ((((*l_190) = l_189) == (g_193 = (void*)0)))
                { 
                    union U1 ** const l_204 = &l_202;
                    uint64_t *l_205 = &g_104;
                    int32_t *l_206 = (void*)0;
                    int32_t *l_207 = &l_173;
                    (*l_207) |= (safe_div_func_uint64_t_u_u(((safe_mul_func_uint32_t_u_u(p_91, ((((((*l_205) = (l_198 , (safe_mul_func_int8_t_s_s((g_102.f0 == g_114[0][3][2]), ((l_201 != (((l_97[g_28] & (((l_203 == (void*)0) , l_128[1][4]) , l_166[6][2])) , l_198.f4) , l_204)) < 1L))))) , g_102.f0) & 0x4842L) == l_181[3][2]) < g_28))) < l_128[2][0]), 0x85546EA2C2CABF74LL));
                    return p_90.f0;
                }
                else
                { 
                    int32_t *l_208 = (void*)0;
                    int32_t *l_209 = &l_128[2][1];
                    uint16_t *l_217[7] = {&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218};
                    int i;
                    g_61 = (p_90.f0 || 0x8266L);
                    if (l_122)
                        break;
                    (*l_209) &= p_90.f0;
                    l_183[6] &= (~(((((0x64E8FA73L < ((*l_209) = (g_5 == (((+(safe_sub_func_uint8_t_u_u(((g_104 & (~(--g_218))) , (+l_128[1][3])), 0x26L))) ^ (g_102.f0 < (((safe_lshift_func_uint8_t_u_u(((safe_div_func_int32_t_s_s(1L, l_111)) && g_102.f0), 6)) ^ 0L) != g_33))) <= (*l_209))))) > (-5L)) <= l_184) , &l_128[1][4]) != l_209));
                    if (p_91)
                        goto lbl_228;
                }
            }
            if (p_90.f0)
                break;
            (*l_226) = &l_185;
        }
        for (g_73 = (-8); (g_73 < 28); ++g_73)
        { 
            int32_t *l_231 = &g_114[0][3][2];
            int32_t *l_232[2][2][4] = {{{&g_5,&l_170[0],&l_170[0],&g_5},{&l_170[0],&g_5,&l_170[0],&l_170[0]}},{{&g_5,&g_5,&g_61,&g_5},{&g_5,&l_170[0],&l_170[0],&g_5}}};
            uint64_t l_233 = 0x1EB78E166C6893DELL;
            int i, j, k;
            ++l_233;
        }
        (*l_241) = ((l_236 , (safe_div_func_uint64_t_u_u(18446744073709551607UL, p_89))) , g_239);
        (*l_245) = g_242;
    }
    return l_171;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_110[i], "g_110[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_114[i][j][k], "g_114[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_240[i].f0, "g_240[i].f0", print_hash_value);
        transparent_crc(g_240[i].f1, "g_240[i].f1", print_hash_value);
        transparent_crc(g_240[i].f2, "g_240[i].f2", print_hash_value);
        transparent_crc(g_240[i].f3, "g_240[i].f3", print_hash_value);
        transparent_crc(g_240[i].f4, "g_240[i].f4", print_hash_value);
        transparent_crc(g_240[i].f5, "g_240[i].f5", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_250[i][j], "g_250[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_252, "g_252", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_585[i][j][k], "g_585[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_609[i], "g_609[i]", print_hash_value);

    }
    transparent_crc(g_631, "g_631", print_hash_value);
    transparent_crc(g_728, "g_728", print_hash_value);
    transparent_crc(g_828, "g_828", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1123[i][j], "g_1123[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1148[i][j][k], "g_1148[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_1265, "g_1265", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    transparent_crc(g_1419, "g_1419", print_hash_value);
    transparent_crc(g_1504, "g_1504", print_hash_value);
    transparent_crc(g_1542, "g_1542", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1683, "g_1683", print_hash_value);
    transparent_crc(g_1698, "g_1698", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_1706[i][j], "g_1706[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1826, "g_1826", print_hash_value);
    transparent_crc(g_1829, "g_1829", print_hash_value);
    transparent_crc(g_1854, "g_1854", print_hash_value);
    transparent_crc(g_1959.f0, "g_1959.f0", print_hash_value);
    transparent_crc(g_1959.f1, "g_1959.f1", print_hash_value);
    transparent_crc(g_1959.f2, "g_1959.f2", print_hash_value);
    transparent_crc(g_1959.f3, "g_1959.f3", print_hash_value);
    transparent_crc(g_1959.f4, "g_1959.f4", print_hash_value);
    transparent_crc(g_1959.f5, "g_1959.f5", print_hash_value);
    transparent_crc(g_1961.f0, "g_1961.f0", print_hash_value);
    transparent_crc(g_1961.f1, "g_1961.f1", print_hash_value);
    transparent_crc(g_1961.f2, "g_1961.f2", print_hash_value);
    transparent_crc(g_1961.f3, "g_1961.f3", print_hash_value);
    transparent_crc(g_1961.f4, "g_1961.f4", print_hash_value);
    transparent_crc(g_1961.f5, "g_1961.f5", print_hash_value);
    transparent_crc(g_1968, "g_1968", print_hash_value);
    transparent_crc(g_2118, "g_2118", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
