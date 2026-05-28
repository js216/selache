// SPDX-License-Identifier: MIT
// cctest_csmith_2d72334f.c --- cctest case csmith_2d72334f (csmith seed 762458959)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x75ad746 */
/* @exp_ticks 0x3dc4 */

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

// Options:   -s 762458959 -o /tmp/csmith_gen_r4q5_ztr/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint64_t  f1;
   const int8_t  f2;
   uint32_t  f3;
   uint16_t  f4;
};

struct S1 {
   uint8_t  f0;
   int8_t  f1;
   uint32_t  f2;
   uint32_t  f3;
};

union U2 {
   struct S0  f0;
   uint32_t  f1;
};


static int32_t g_2 = 0x950BA1BFL;
static int32_t g_5 = 3L;
static int32_t g_9 = (-1L);
static int32_t g_11 = 0xE54EE87FL;
static int32_t *g_32 = (void*)0;
static int32_t **g_31[5][4] = {{&g_32,(void*)0,&g_32,&g_32},{(void*)0,(void*)0,&g_32,(void*)0},{(void*)0,&g_32,&g_32,(void*)0},{&g_32,(void*)0,&g_32,&g_32},{(void*)0,(void*)0,&g_32,(void*)0}};
static struct S1 g_43 = {1UL,0L,1UL,0x80D33B94L};
static int16_t g_45 = 0L;
static uint64_t g_51 = 18446744073709551615UL;
static int8_t *g_115 = &g_43.f1;
static int8_t **g_114 = &g_115;
static struct S1 g_140 = {1UL,-1L,18446744073709551606UL,1UL};
static struct S1 *g_139 = &g_140;
static struct S0 g_145 = {65526UL,0x795E0524414FC2A3LL,0x5BL,2UL,0x256FL};
static union U2 g_156 = {{0xFCDEL,0x67DA599C36F569C0LL,0xF0L,1UL,0x5263L}};
static int32_t g_164 = 0x1BFB598AL;
static int64_t g_167 = (-3L);
static int16_t *g_195[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static uint64_t g_215 = 0x8551CB4CD0745E24LL;
static int8_t ***g_220 = &g_114;
static uint32_t g_295 = 0x7D163C83L;
static uint32_t *g_294 = &g_295;
static uint32_t **g_293 = &g_294;
static const uint64_t g_328 = 18446744073709551609UL;
static const uint64_t *g_327 = &g_328;
static int32_t g_344 = (-1L);
static uint8_t *g_497 = &g_43.f0;
static uint8_t * const * const g_496 = &g_497;
static uint8_t **g_880[3][1][2] = {{{&g_497,&g_497}},{{&g_497,&g_497}},{{&g_497,&g_497}}};
static uint8_t ***g_879 = &g_880[1][0][1];
static uint8_t ****g_878 = &g_879;
static const uint32_t g_916 = 0UL;
static const uint32_t *g_915 = &g_916;
static const uint32_t ** const g_914 = &g_915;
static const uint32_t ** const *g_913 = &g_914;
static union U2 *g_936[2][1][3] = {{{&g_156,&g_156,&g_156}},{{&g_156,&g_156,&g_156}}};
static union U2 **g_935[2][7] = {{&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1]},{&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1],&g_936[1][0][1]}};
static int8_t g_972 = 0L;
static int8_t ****g_1012[1][1] = {{&g_220}};
static int8_t *****g_1011 = &g_1012[0][0];
static struct S1 g_1048 = {255UL,6L,1UL,0x75D74BE5L};
static int64_t **g_1092 = (void*)0;
static int64_t ***g_1091 = &g_1092;
static struct S1 ****g_1124[1] = {(void*)0};
static uint16_t *g_1153 = &g_145.f4;
static uint16_t **g_1152 = &g_1153;
static uint32_t g_1203[1][3] = {{0x3B569168L,0x3B569168L,0x3B569168L}};
static uint32_t g_1205 = 1UL;
static int32_t g_1329 = (-10L);
static const uint16_t g_1367 = 1UL;
static const uint16_t *g_1366 = &g_1367;
static int32_t g_1396[2] = {(-4L),(-4L)};
static uint32_t ***g_1466 = &g_293;
static uint32_t ****g_1465[1][6] = {{(void*)0,&g_1466,(void*)0,(void*)0,&g_1466,(void*)0}};
static uint32_t *****g_1464[2] = {&g_1465[0][5],&g_1465[0][5]};
static struct S0 g_1479 = {1UL,1UL,-4L,0x07E97CEFL,65535UL};
static struct S0 *g_1478 = &g_1479;
static uint8_t **g_1496 = &g_497;
static int32_t g_1514 = 1L;



static uint32_t  func_1(void);
static int32_t  func_16(uint32_t  p_17, int32_t * p_18);
static int16_t  func_21(int32_t ** p_22);
static int16_t  func_25(int64_t  p_26, const int32_t * p_27, int32_t ** p_28, int32_t ** p_29);
static struct S1 * func_35(struct S0  p_36, struct S1 * p_37);
static struct S0  func_38(struct S1 * p_39, struct S1 * p_40, int16_t  p_41);
static union U2  func_46(uint32_t  p_47, struct S1 * p_48);
static uint32_t  func_58(int32_t * p_59, int16_t * const  p_60, struct S0  p_61);




static uint32_t  func_1(void)
{ 
    int32_t l_19 = 5L;
    const int32_t *l_30 = &g_11;
    int64_t l_33 = 3L;
    int32_t **l_34 = &g_32;
    struct S0 *l_1476[5][4][4] = {{{&g_145,&g_145,&g_145,&g_145},{&g_156.f0,&g_145,&g_145,&g_156.f0},{(void*)0,&g_145,&g_156.f0,&g_156.f0},{&g_145,&g_145,&g_145,&g_156.f0}},{{&g_145,&g_145,&g_145,&g_156.f0},{&g_145,&g_145,&g_145,&g_156.f0},{&g_145,&g_145,&g_145,&g_156.f0},{&g_145,&g_145,&g_145,&g_145}},{{&g_156.f0,&g_145,&g_156.f0,&g_145},{&g_156.f0,&g_145,&g_156.f0,&g_145},{&g_156.f0,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_156.f0}},{{&g_145,&g_156.f0,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_156.f0,&g_156.f0,&g_156.f0}},{{(void*)0,&g_145,&g_145,&g_145},{&g_156.f0,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145,&g_145}}};
    union U2 l_1493[2] = {{{0x3CF9L,0x590749512FA633F3LL,0x38L,0xE7A30530L,65535UL}},{{0x3CF9L,0x590749512FA633F3LL,0x38L,0xE7A30530L,65535UL}}};
    uint32_t l_1508 = 0UL;
    uint16_t l_1509 = 0x3767L;
    int32_t l_1518 = 0x9B0FCF55L;
    int32_t l_1520 = 0xE238BDA0L;
    int32_t l_1524 = (-1L);
    uint32_t l_1525[1][7][6] = {{{0UL,0x9623F642L,0x9623F642L,0UL,0xF13CF751L,0xD5D452B2L},{0xD5D452B2L,0UL,1UL,0UL,0xD5D452B2L,0x6EC1D5CBL},{0UL,0xD5D452B2L,0x6EC1D5CBL,0x6EC1D5CBL,0xD5D452B2L,0UL},{0x9623F642L,0UL,0xF13CF751L,0xD5D452B2L,0xF13CF751L,0UL},{0xF13CF751L,0x9623F642L,0x6EC1D5CBL,1UL,1UL,0x6EC1D5CBL},{0xF13CF751L,0xF13CF751L,1UL,0xD5D452B2L,9UL,0xD5D452B2L},{0x9623F642L,0xF13CF751L,0x9623F642L,0x6EC1D5CBL,1UL,1UL}}};
    const int32_t l_1533 = 0x58F6E3ECL;
    uint8_t ***l_1536 = &g_1496;
    uint8_t l_1545 = 255UL;
    int32_t l_1561 = (-4L);
    int32_t l_1562 = 0x68886A4BL;
    int32_t l_1564 = (-1L);
    int64_t *l_1608 = &l_33;
    uint32_t *****l_1635 = &g_1465[0][5];
    int32_t l_1637[1];
    int32_t l_1638 = 0xBCFFBE7DL;
    uint64_t l_1715 = 0x0F5C5FD25264D43ELL;
    int16_t l_1720 = (-8L);
    uint8_t l_1721 = 0x52L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1637[i] = 0xCEAABD93L;
    for (g_2 = (-27); (g_2 != (-7)); g_2 = safe_add_func_int16_t_s_s(g_2, 4))
    { 
        int32_t *l_12 = &g_5;
        int64_t *l_1497 = &g_167;
        int64_t *l_1498 = &l_33;
        int16_t *l_1505 = (void*)0;
        int16_t *l_1506 = &g_45;
        int16_t l_1507 = 0x59C0L;
        int64_t l_1515 = (-1L);
        int32_t l_1517 = 1L;
        int32_t l_1563[7][3] = {{0x41A48E09L,1L,0x41A48E09L},{0x41A48E09L,0xBD5FDEFAL,(-6L)},{0x41A48E09L,7L,2L},{0x41A48E09L,1L,0x41A48E09L},{0x41A48E09L,0xBD5FDEFAL,(-6L)},{0x41A48E09L,7L,2L},{0x41A48E09L,1L,0x41A48E09L}};
        int32_t l_1567 = 0xAAA4A432L;
        uint64_t l_1573 = 18446744073709551615UL;
        struct S0 *l_1589[7][2][4] = {{{&g_145,&g_1479,(void*)0,&g_145},{&g_1479,(void*)0,&l_1493[0].f0,&g_156.f0}},{{&g_1479,&g_156.f0,(void*)0,&g_156.f0},{&g_145,&g_156.f0,(void*)0,(void*)0}},{{&g_145,&g_145,&l_1493[0].f0,&g_156.f0},{&g_156.f0,&g_145,&l_1493[0].f0,(void*)0}},{{&g_156.f0,&g_1479,(void*)0,&l_1493[0].f0},{(void*)0,(void*)0,&g_156.f0,(void*)0}},{{(void*)0,(void*)0,&g_156.f0,(void*)0},{&g_156.f0,&g_145,&g_156.f0,&l_1493[0].f0}},{{(void*)0,(void*)0,&g_1479,&l_1493[0].f0},{&g_145,&g_156.f0,&l_1493[0].f0,(void*)0}},{{&g_145,(void*)0,&l_1493[0].f0,(void*)0},{&g_145,(void*)0,&g_1479,&g_156.f0}}};
        int8_t l_1600[7][2];
        struct S1 l_1612 = {0x4EL,0xBFL,0x88118D7CL,18446744073709551615UL};
        int64_t l_1676 = 0x694CD0EE8EB4C220LL;
        int32_t *l_1696 = &l_1561;
        const uint32_t l_1741[4][3] = {{0x9F9E3CC9L,0x9F9E3CC9L,0x9F9E3CC9L},{4294967290UL,0xAC0B9FA8L,4294967290UL},{0x9F9E3CC9L,0x9F9E3CC9L,0x9F9E3CC9L},{4294967290UL,0xAC0B9FA8L,4294967290UL}};
        int i, j, k;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 2; j++)
                l_1600[i][j] = 0x24L;
        }
        for (g_5 = 0; (g_5 <= 4); g_5 = safe_add_func_uint16_t_u_u(g_5, 7))
        { 
            int32_t *l_8 = &g_9;
            int32_t *l_10 = &g_11;
            int32_t **l_13 = &l_8;
            int16_t l_20 = 0x4E86L;
            struct S0 **l_1477 = &l_1476[4][0][3];
            (*l_10) &= ((*l_8) = g_2);
            (*l_13) = l_12;
            if (g_11)
                break;
        }
    }
    return (*l_30);
}



static int32_t  func_16(uint32_t  p_17, int32_t * p_18)
{ 
    int32_t l_1432 = 0L;
    int32_t l_1433 = (-9L);
    int32_t l_1434[1][5] = {{1L,1L,1L,1L,1L}};
    int64_t l_1459 = 6L;
    uint16_t l_1475[1][7] = {{0x3DF4L,0x3DF4L,65535UL,0x3DF4L,0x3DF4L,65535UL,0x3DF4L}};
    int i, j;
    for (g_344 = 25; (g_344 <= (-28)); g_344--)
    { 
        int32_t l_1426 = 0x752A080DL;
        int32_t l_1447 = 0L;
        int32_t l_1449 = 6L;
        int32_t l_1450[2];
        int8_t l_1471 = 0x2EL;
        struct S1 *l_1472 = &g_43;
        uint32_t l_1473 = 0x8642B26DL;
        int32_t *l_1474 = &l_1426;
        int i;
        for (i = 0; i < 2; i++)
            l_1450[i] = 0xB52657A5L;
        for (g_43.f3 = 0; (g_43.f3 > 3); ++g_43.f3)
        { 
            uint8_t l_1435[5] = {6UL,6UL,6UL,6UL,6UL};
            int32_t l_1446 = 0L;
            int32_t l_1448 = (-1L);
            int32_t l_1451 = 0x98BEF3FDL;
            int32_t l_1452[6] = {0xEC7CEF37L,0xEC7CEF37L,0xEC7CEF37L,0xEC7CEF37L,0xEC7CEF37L,0xEC7CEF37L};
            uint64_t l_1453 = 18446744073709551615UL;
            int i;
        }
        (*l_1474) &= (safe_lshift_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(0x8093L, (func_46(l_1471, l_1472) , (func_46((p_17 , l_1432), func_35(g_145, l_1472)) , 0xAC36L)))), 2));
    }
    return l_1475[0][1];
}



static int16_t  func_21(int32_t ** p_22)
{ 
    uint32_t l_1090 = 0x40EB11B9L;
    const struct S1 *l_1103 = &g_140;
    int32_t *l_1106 = &g_344;
    int8_t l_1130 = 0L;
    int64_t ***l_1131 = &g_1092;
    int64_t ***l_1144 = &g_1092;
    struct S0 l_1156 = {0x5857L,0xEA408D3A60A42767LL,0xB9L,0xAAE018DDL,0x6A1EL};
    union U2 l_1157 = {{65533UL,18446744073709551612UL,-1L,0x9EAC048AL,0x0CB8L}};
    int32_t l_1180 = 0xA1D73D9DL;
    uint32_t l_1197 = 0xC8BED39CL;
    int32_t l_1246 = 3L;
    int32_t l_1247 = 0xA4ECA67FL;
    int32_t l_1248 = 0x4AB77B6CL;
    int32_t l_1267 = 0x347FA70EL;
    int32_t l_1271 = 0x20D27427L;
    int32_t l_1273 = 0x55F303E8L;
    int32_t l_1274[1][3];
    int32_t l_1283 = 0x44026336L;
    struct S1 * const *l_1301 = &g_139;
    struct S1 * const **l_1300 = &l_1301;
    uint32_t l_1346 = 18446744073709551615UL;
    uint32_t * const *l_1406 = (void*)0;
    uint32_t * const **l_1405 = &l_1406;
    uint32_t ***l_1407[4];
    uint32_t l_1409 = 1UL;
    int32_t *l_1410 = &g_11;
    int32_t *l_1411 = &g_164;
    int32_t *l_1412[7] = {&g_11,&g_11,&g_1329,&g_11,&g_11,&g_1329,&g_11};
    int8_t l_1413 = 0x72L;
    int8_t l_1414[1];
    int64_t l_1415[6][6][3] = {{{(-3L),(-8L),0xB3484F9ACEA39E83LL},{(-1L),0x5764D8206266FB47LL,(-1L)},{7L,7L,(-6L)},{(-1L),0x6829A69CE7F35CA3LL,0xC0D896801E1CC8A0LL},{(-6L),(-1L),0xF9B45A980E4BE633LL},{0x9CB73C48E77DD42DLL,0x6C2AAC95EA01B37BLL,0x1A763E8806EAF497LL}},{{0x1B9CD75FE75C3895LL,(-6L),0xF9B45A980E4BE633LL},{(-1L),(-1L),0xC0D896801E1CC8A0LL},{8L,0xF6B299CBA4080BAELL,(-6L)},{0xFF987B51F82EA7BCLL,7L,(-1L)},{0xB3484F9ACEA39E83LL,0xE9EB565977C09B57LL,0xB3484F9ACEA39E83LL},{0xCCA5A1367E68527CLL,0x2A12D9F2588DE6D5LL,1L}},{{0x5AF6BF0D88D58A02LL,7L,0xF6B299CBA4080BAELL},{4L,0xFF987B51F82EA7BCLL,0x6829A69CE7F35CA3LL},{(-6L),(-1L),(-3L)},{4L,0xC3F6D95E6584E6DDLL,0x1A763E8806EAF497LL},{0x5AF6BF0D88D58A02LL,0xAE5AE71776BDC92CLL,0xD8383360F6077BE3LL},{0xCCA5A1367E68527CLL,(-1L),0x5764D8206266FB47LL}},{{0xB3484F9ACEA39E83LL,(-1L),(-1L)},{0xFF987B51F82EA7BCLL,0xC53F0E025BF29D89LL,(-1L)},{8L,0x44443982E4351889LL,0xB3484F9ACEA39E83LL},{(-1L),0xC0D896801E1CC8A0LL,(-3L)},{0x1B9CD75FE75C3895LL,7L,0xAE5AE71776BDC92CLL},{0x9CB73C48E77DD42DLL,0xC0D896801E1CC8A0LL,0x2A12D9F2588DE6D5LL}},{{(-6L),0x44443982E4351889LL,0L},{(-1L),0xC53F0E025BF29D89LL,0x1A763E8806EAF497LL},{7L,(-1L),(-5L)},{(-1L),(-1L),0xFF987B51F82EA7BCLL},{(-3L),0xAE5AE71776BDC92CLL,0x4D13755254C29321LL},{0xFF987B51F82EA7BCLL,0xC3F6D95E6584E6DDLL,0xCD524A7D545BC46DLL}},{{4L,(-1L),0xB3484F9ACEA39E83LL},{1L,0xFF987B51F82EA7BCLL,0xCD524A7D545BC46DLL},{0xA9B6C512EF2EEBA8LL,7L,0x4D13755254C29321LL},{(-8L),0x2A12D9F2588DE6D5LL,0xFF987B51F82EA7BCLL},{(-6L),0xE9EB565977C09B57LL,(-5L)},{0x1A763E8806EAF497LL,7L,0x1A763E8806EAF497LL}}};
    uint32_t l_1416 = 1UL;
    uint32_t l_1419 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_1274[i][j] = 0x103218DCL;
    }
    for (i = 0; i < 4; i++)
        l_1407[i] = &g_293;
    for (i = 0; i < 1; i++)
        l_1414[i] = 1L;
    for (g_43.f2 = 0; (g_43.f2 <= 0); g_43.f2 += 1)
    { 
        int32_t l_1086 = 0xCD2990CEL;
        int16_t *l_1089[6] = {(void*)0,&g_45,&g_45,(void*)0,&g_45,&g_45};
        uint16_t *l_1114[4] = {&g_156.f0.f0,&g_156.f0.f0,&g_156.f0.f0,&g_156.f0.f0};
        uint16_t **l_1113 = &l_1114[3];
        struct S1 l_1148 = {0x2EL,0x5AL,0UL,0x73C3329AL};
        struct S1 l_1160 = {0x0FL,0x6CL,0xA1EE15CBL,0UL};
        int16_t l_1191[3];
        int32_t l_1210 = 1L;
        int32_t l_1211 = 0x73289D59L;
        struct S0 l_1260 = {2UL,18446744073709551611UL,0x9EL,0xEAD102CDL,65528UL};
        int32_t l_1268 = 0xEAAAA55CL;
        int32_t l_1269 = 1L;
        int32_t l_1270 = 0x47E8AF58L;
        int32_t l_1275 = 0L;
        int32_t l_1276 = (-1L);
        int32_t l_1277 = (-7L);
        int32_t l_1278 = 0x48C832CCL;
        int32_t l_1279 = 0xD2CDBDD3L;
        int32_t l_1280 = 0xE44ABC40L;
        int32_t l_1281 = 1L;
        int32_t l_1282[4][2][7] = {{{(-6L),0L,(-1L),9L,0x3CE9D733L,0x682577EEL,0L},{(-4L),0xE25C7139L,0xAAF90A32L,0x89C2A63DL,0x18FF359CL,(-1L),0x38D0F18CL}},{{(-1L),0x89C2A63DL,0L,9L,0xAAF90A32L,0xAAF90A32L,9L},{0x4028DA95L,0x38D0F18CL,0x4028DA95L,0x682577EEL,0xAAF90A32L,4L,1L}},{{0xE25C7139L,(-1L),0x70325D6DL,0x38D0F18CL,0x18FF359CL,0L,9L},{0x38D0F18CL,0x70325D6DL,(-1L),0xE25C7139L,0x3CE9D733L,4L,4L}},{{0x682577EEL,0x4028DA95L,0x38D0F18CL,0x4028DA95L,0x682577EEL,0xAAF90A32L,4L},{9L,0L,0x89C2A63DL,(-1L),4L,(-1L),9L}}};
        int16_t l_1284 = 0x794EL;
        int8_t l_1287[5][7] = {{0x98L,0x98L,0xACL,0xACL,0x98L,0x98L,0xACL},{0x12L,0xB1L,0x12L,0xB1L,0x12L,0xB1L,0x12L},{0x98L,0xACL,0xACL,0x98L,0x98L,0xACL,0xACL},{0xDBL,0xB1L,0xDBL,0xB1L,0xDBL,0xB1L,0xDBL},{0x98L,0x98L,0xACL,0xACL,0x98L,0x98L,0xACL}};
        int32_t **l_1309 = (void*)0;
        int32_t l_1313 = 0x196E875AL;
        int32_t l_1319 = 0x0A4A74E8L;
        uint16_t ***l_1376[4][6] = {{&g_1152,&g_1152,(void*)0,&g_1152,&g_1152,(void*)0},{&g_1152,&g_1152,(void*)0,&g_1152,&g_1152,(void*)0},{&g_1152,&g_1152,(void*)0,&g_1152,&g_1152,(void*)0},{&g_1152,&g_1152,(void*)0,&g_1152,&g_1152,(void*)0}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_1191[i] = (-4L);
        if ((0xE86A86293AA96EC6LL < (safe_mod_func_int8_t_s_s((g_294 != g_32), ((safe_sub_func_int32_t_s_s((((safe_add_func_int64_t_s_s((!(l_1086 & (****g_878))), ((l_1090 |= ((safe_rshift_func_int8_t_s_s((g_43.f3 <= (0UL <= l_1086)), l_1086)) , l_1086)) && 0x77F8L))) , 1UL) < 0x9CFFL), 0x0DC8F739L)) , 1UL)))))
        { 
            int64_t ****l_1093 = &g_1091;
            struct S1 l_1104 = {0x23L,0L,0x664337E7L,0x8BFE9010L};
            int32_t *l_1105[7][5][4] = {{{&g_344,&g_344,&l_1086,&g_344},{(void*)0,&g_344,&g_344,(void*)0},{(void*)0,&g_344,&g_344,&l_1086},{&g_344,&l_1086,&l_1086,&g_344},{&g_344,&l_1086,&l_1086,&g_344}},{{(void*)0,&l_1086,&g_344,&l_1086},{&l_1086,&g_344,(void*)0,(void*)0},{&l_1086,&g_344,(void*)0,&g_344},{&l_1086,&g_344,&g_344,&l_1086},{&l_1086,(void*)0,(void*)0,(void*)0}},{{&l_1086,&l_1086,(void*)0,&l_1086},{&l_1086,(void*)0,&g_344,&g_344},{(void*)0,&g_344,&l_1086,&g_344},{&g_344,&g_344,&l_1086,&g_344},{&g_344,(void*)0,&g_344,&l_1086}},{{(void*)0,&l_1086,&g_344,(void*)0},{(void*)0,(void*)0,&l_1086,&l_1086},{&g_344,&g_344,&l_1086,&g_344},{(void*)0,&g_344,&g_344,(void*)0},{(void*)0,(void*)0,&g_344,&l_1086}},{{&g_344,&l_1086,&g_344,&l_1086},{&g_344,&l_1086,&g_344,&l_1086},{&g_344,&l_1086,&g_344,&l_1086},{&l_1086,(void*)0,&g_344,&l_1086},{&g_344,&l_1086,&g_344,(void*)0}},{{&l_1086,&l_1086,(void*)0,&g_344},{&l_1086,&g_344,&g_344,&g_344},{&g_344,&g_344,&g_344,(void*)0},{&l_1086,&g_344,&g_344,(void*)0},{&g_344,&g_344,&g_344,&g_344}},{{&g_344,&g_344,&g_344,(void*)0},{&g_344,&g_344,&g_344,(void*)0},{&g_344,&g_344,&l_1086,&g_344},{&l_1086,&g_344,(void*)0,&g_344},{(void*)0,&l_1086,(void*)0,(void*)0}}};
            uint32_t ***l_1108 = &g_293;
            int64_t l_1143 = (-9L);
            uint16_t **l_1181 = &g_1153;
            int32_t l_1184 = 0L;
            uint8_t ***l_1200 = &g_880[1][0][1];
            int32_t *l_1235 = &l_1211;
            int32_t *l_1236 = &l_1180;
            int32_t *l_1237 = &l_1211;
            int32_t *l_1238 = &g_9;
            int32_t *l_1239 = &l_1211;
            int32_t *l_1240 = &l_1210;
            int32_t *l_1241 = &l_1184;
            int32_t *l_1242 = &g_164;
            int32_t *l_1243 = &l_1184;
            int32_t *l_1244 = &g_164;
            int32_t *l_1245[7][3][3] = {{{&g_11,(void*)0,&g_5},{&l_1211,&l_1211,&g_9},{&l_1211,(void*)0,(void*)0}},{{&g_9,&g_164,&l_1211},{&l_1211,&g_5,&l_1211},{&l_1211,&g_9,&l_1211}},{{&g_11,&g_11,(void*)0},{&l_1211,&g_9,&g_9},{(void*)0,&g_5,&g_5}},{{&l_1211,&g_164,&l_1211},{&g_11,(void*)0,&g_5},{&l_1211,&l_1211,&g_9}},{{&l_1211,(void*)0,(void*)0},{&g_9,&g_164,&l_1211},{&l_1211,&g_5,&l_1211}},{{&l_1211,&g_9,&l_1211},{&g_11,&g_11,(void*)0},{&l_1211,&g_9,&g_9}},{{(void*)0,&g_5,&g_5},{&l_1211,&g_164,&l_1211},{&g_11,(void*)0,&g_5}}};
            uint8_t l_1249 = 255UL;
            uint32_t l_1252 = 0x97DB9E53L;
            int32_t ***l_1255 = &g_31[1][2];
            int i, j, k;
            (*l_1093) = (l_1090 , g_1091);
            for (l_1090 = 0; (l_1090 <= 0); l_1090 += 1)
            { 
                int16_t l_1102 = (-8L);
                int32_t l_1107 = 0xED3C8604L;
                uint16_t *l_1111 = (void*)0;
                uint16_t **l_1110 = &l_1111;
                int8_t *l_1142 = &g_140.f1;
                int64_t *l_1166 = &l_1143;
                const uint16_t l_1167 = 9UL;
                struct S0 l_1193[5] = {{0UL,0x98A58FEEB5602AB7LL,-3L,18446744073709551613UL,0x85E4L},{0UL,0x98A58FEEB5602AB7LL,-3L,18446744073709551613UL,0x85E4L},{0UL,0x98A58FEEB5602AB7LL,-3L,18446744073709551613UL,0x85E4L},{0UL,0x98A58FEEB5602AB7LL,-3L,18446744073709551613UL,0x85E4L},{0UL,0x98A58FEEB5602AB7LL,-3L,18446744073709551613UL,0x85E4L}};
                struct S0 *l_1196 = &g_145;
                struct S0 **l_1195 = &l_1196;
                struct S0 ***l_1194 = &l_1195;
                int32_t l_1201 = 0xA716913FL;
                int32_t l_1204 = 0xDE9D2F1DL;
                int32_t *l_1208 = &g_11;
                int32_t *l_1209[6][1][6] = {{{&g_9,&l_1204,&g_5,&g_5,&l_1204,&g_9}},{{&g_5,&l_1204,&g_9,&g_11,(void*)0,&g_9}},{{&g_9,&l_1204,&l_1204,&l_1204,&g_9,&l_1204}},{{&g_9,&g_5,&l_1204,&g_11,&l_1204,&l_1204}},{{&g_5,(void*)0,(void*)0,&g_5,&l_1204,&l_1204}},{{&g_9,&l_1204,&l_1204,&l_1204,&g_11,&l_1204}}};
                uint16_t l_1212[1][1];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1212[i][j] = 0x02DCL;
                }
                for (g_140.f3 = 0; (g_140.f3 <= 0); g_140.f3 += 1)
                { 
                    int32_t l_1094 = 1L;
                    if (l_1094)
                        break;
                }
                if (((safe_rshift_func_uint16_t_u_s((((((((safe_lshift_func_uint16_t_u_s((~(((l_1090 != ((safe_rshift_func_uint16_t_u_s(l_1102, 15)) < ((&g_1048 == l_1103) > (((****g_878) = (0x7E4CL == ((l_1104 , l_1105[2][1][3]) == l_1106))) == l_1104.f0)))) >= 0x836AL) != l_1107)), 3)) == l_1107) > (-1L)) != l_1104.f3) >= l_1102) > l_1086) >= l_1090), 4)) , 0xF6B44D10L))
                { 
                    uint32_t ****l_1109 = &l_1108;
                    uint16_t ***l_1112 = (void*)0;
                    uint16_t ***l_1115 = &l_1110;
                    int32_t l_1125 = (-1L);
                    (*l_1109) = l_1108;
                    (*l_1115) = (l_1113 = l_1110);
                    l_1125 &= (safe_sub_func_uint16_t_u_u(((-1L) && (safe_sub_func_uint8_t_u_u((((((((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(0x12L, 254UL)) < 7UL), (l_1104.f2 <= g_140.f0))) , l_1090) , (void*)0) != (void*)0) , g_1124[0]) != (void*)0) && l_1086), 0UL))), l_1090));
                    if (l_1107)
                        break;
                    (*g_139) = (*l_1103);
                }
                else
                { 
                    (*p_22) = (*p_22);
                }
                if (((safe_lshift_func_int8_t_s_u(0L, (safe_rshift_func_uint16_t_u_u((l_1086 , (((((((***l_1108) = l_1130) & 0x28F2F26FL) && ((l_1131 = &g_1092) == ((safe_sub_func_int64_t_s_s((safe_sub_func_int16_t_s_s((l_1143 = ((l_1086 ^ (safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((((*l_1142) ^= l_1130) ^ 0x4CL), 0xFD24L)), 2)) ^ (-5L)), l_1102))) & l_1107)), (-1L))), l_1130)) , l_1144))) , 9L) | l_1086) > l_1086)), l_1102)))) > 0x5CA4L))
                { 
                    int32_t *l_1145 = &g_164;
                    (*l_1145) |= (**p_22);
                    (*l_1145) ^= l_1090;
                    return l_1086;
                }
                else
                { 
                    uint16_t **l_1146 = &l_1114[3];
                    int32_t *l_1147 = &g_11;
                    struct S0 *l_1151 = (void*)0;
                    struct S0 **l_1150 = &l_1151;
                    struct S0 ***l_1149 = &l_1150;
                    (*l_1147) = ((void*)0 == l_1146);
                    (*g_139) = l_1148;
                    l_1149 = (void*)0;
                    (*l_1147) = (((((((void*)0 != g_1152) || 0xF5L) > ((((((((~(((!((l_1156 , l_1157) , ((safe_lshift_func_uint16_t_u_s((((l_1160 , (((!(safe_sub_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((*g_327), l_1104.f3)), (*g_497)))) , (void*)0) == l_1166)) >= (**g_1152)) || 8L), 1)) | (-2L)))) >= (**p_22)) != l_1160.f2)) < l_1167) , (void*)0) == l_1114[0]) & (**g_293)) < l_1102) > 65535UL) & l_1104.f2)) > (*l_1147)) || 0x71AD4CE7C4F49E0ALL) , 0x78484ADBL);
                }
                for (l_1102 = 0; (l_1102 <= 5); l_1102 += 1)
                { 
                    uint64_t l_1172 = 0xB9274435476811E4LL;
                    int32_t *l_1179 = (void*)0;
                    int32_t l_1182 = 0L;
                    int32_t *l_1183[4];
                    uint32_t *l_1202 = &g_1203[0][0];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1183[i] = &g_11;
                    l_1184 = ((safe_sub_func_uint8_t_u_u((((l_1172 ^ ((safe_add_func_uint16_t_u_u(0x0D1EL, (l_1156.f0 , ((l_1172 & (safe_add_func_int8_t_s_s(0xD8L, (((((**g_1152) |= ((0xB2L & ((*l_1142) = (safe_div_func_int32_t_s_s((l_1180 |= ((1L || 0x6B8AL) == l_1160.f1)), 1UL)))) & 0x49L)) , l_1181) == &l_1114[3]) == l_1182)))) || l_1102)))) && l_1143)) < 0x917065647B0C0CFFLL) , l_1107), l_1160.f3)) == 0L);
                    l_1204 &= (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((**l_1181) |= ((((((safe_add_func_int8_t_s_s((((l_1191[0] , (((((0xD075L >= l_1102) != (~(((l_1193[2] , ((l_1197 = ((***l_1108) = (l_1194 == &l_1195))) | ((*l_1202) = (safe_div_func_uint64_t_u_u((((*g_878) == l_1200) >= l_1107), l_1201))))) > (*g_327)) == (-2L)))) <= l_1156.f2) == 1L) >= l_1148.f1)) , l_1143) != l_1184), 0x1FL)) , l_1107) < (**g_496)) , l_1104.f1) && l_1197) | l_1160.f1)), 3)) != 0x6638D7C4FB5F82A9LL), l_1167));
                    g_1205++;
                }
                l_1212[0][0]++;
                for (l_1148.f0 = 0; (l_1148.f0 <= 0); l_1148.f0 += 1)
                { 
                    uint32_t *l_1221 = (void*)0;
                    uint32_t *l_1222[7][6][2] = {{{&l_1197,&g_140.f3},{(void*)0,&l_1104.f3},{&l_1156.f3,&l_1148.f3},{&l_1148.f2,(void*)0},{&g_156.f0.f3,&g_156.f0.f3},{&l_1104.f3,&l_1197}},{{(void*)0,&g_43.f3},{&g_145.f3,&l_1104.f3},{&l_1160.f2,&g_145.f3},{&l_1104.f3,&l_1104.f2},{&l_1104.f3,&g_145.f3},{&l_1160.f2,&l_1104.f3}},{{(void*)0,&l_1160.f3},{&l_1104.f3,(void*)0},{&g_140.f3,(void*)0},{(void*)0,(void*)0},{&l_1160.f3,&l_1104.f2},{&g_156.f0.f3,&l_1104.f3}},{{&l_1104.f3,&g_43.f3},{(void*)0,&l_1156.f3},{(void*)0,&l_1148.f3},{&g_43.f3,&l_1148.f3},{(void*)0,&l_1156.f3},{(void*)0,&g_43.f3}},{{&l_1104.f3,&l_1104.f3},{&g_156.f0.f3,&l_1104.f2},{&l_1160.f3,(void*)0},{(void*)0,(void*)0},{&g_140.f3,(void*)0},{&l_1104.f3,&l_1160.f3}},{{(void*)0,&g_145.f3},{&g_1048.f3,(void*)0},{&l_1104.f3,&l_1160.f2},{&l_1104.f3,(void*)0},{&g_1048.f3,&g_145.f3},{(void*)0,&l_1160.f3}},{{&l_1104.f3,(void*)0},{&g_140.f3,(void*)0},{(void*)0,(void*)0},{&l_1160.f3,&l_1104.f2},{&g_156.f0.f3,&l_1104.f3},{&l_1104.f3,&g_43.f3}}};
                    int32_t l_1223 = (-1L);
                    uint64_t *l_1232 = &l_1157.f0.f1;
                    int i, j, k;
                    (*l_1208) = (((**p_22) | (l_1160.f1 < (safe_mul_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(((((g_1048.f2--) , ((((*l_1142) = (safe_rshift_func_uint8_t_u_s((((l_1160.f1 >= ((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((*g_1153), (0x02L <= (((*l_1232) &= l_1223) , (safe_sub_func_uint64_t_u_u((((*l_1232) |= (l_1104.f2 ^ (*l_1208))) | l_1090), 18446744073709551615UL)))))) != l_1180), 4)) <= l_1148.f1)) == l_1223) | 0x78F15BFCL), 3))) >= l_1223) , 0x80144F3BL)) , 18446744073709551615UL) == l_1184), 5L)), (**g_1152))))) < 0L);
                }
            }
            l_1249++;
            if ((l_1252 = (4L != l_1156.f3)))
            { 
                int64_t l_1253 = (-1L);
                (*l_1238) = ((*l_1242) = 0x0529480CL);
                for (l_1090 = 0; (l_1090 <= 0); l_1090 += 1)
                { 
                    if (l_1157.f0.f2)
                        break;
                }
                l_1253 = 0x60DADFC2L;
                if ((**p_22))
                    continue;
            }
            else
            { 
                uint32_t l_1254 = 7UL;
                return l_1254;
            }
            (*l_1255) = &g_32;
        }
        else
        { 
            int64_t *l_1257 = (void*)0;
            int64_t **l_1256 = &l_1257;
            int32_t l_1263 = 5L;
            int32_t l_1266[1][7][7] = {{{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL},{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL},{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL},{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL},{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL},{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL},{0xAE3CCBF9L,0xABF7D69AL,0xAE3CCBF9L,0x747BDDFBL,0xDD41BD2CL,0xDD41BD2CL,0x747BDDFBL}}};
            int16_t l_1285 = 0x3752L;
            int32_t *l_1293 = &l_1282[0][0][2];
            int i, j, k;
            for (g_43.f0 = 0; (g_43.f0 <= 0); g_43.f0 += 1)
            { 
                int32_t *l_1264 = &l_1246;
                int32_t l_1272[2][6][1] = {{{0x280BFFEEL},{(-1L)},{0xD63763A4L},{0L},{0xD63763A4L},{(-1L)}},{{0x280BFFEEL},{(-1L)},{0xD63763A4L},{0L},{0xD63763A4L},{(-1L)}}};
                int16_t l_1288[3][2] = {{0x3DD3L,(-6L)},{(-6L),0x3DD3L},{(-6L),(-6L)}};
                uint32_t l_1289 = 18446744073709551613UL;
                int i, j, k;
                (*l_1264) ^= (((((l_1256 == ((safe_div_func_uint32_t_u_u(l_1191[(g_43.f0 + 1)], (l_1260 , l_1148.f0))) , (void*)0)) | ((*g_1153) || (safe_rshift_func_uint8_t_u_u(l_1263, (**g_496))))) && l_1263) ^ l_1263) == l_1191[(g_43.f0 + 1)]);
                for (g_145.f4 = 0; (g_145.f4 <= 5); g_145.f4 += 1)
                { 
                    int32_t *l_1265[2][4] = {{&l_1248,&g_2,&l_1248,&l_1248},{&g_2,&g_2,&l_1180,&g_2}};
                    int8_t l_1286 = (-1L);
                    int i, j;
                    l_1289--;
                }
            }
            if (l_1156.f1)
                continue;
            (*l_1293) &= (+(-7L));
        }
        for (l_1271 = 0; (l_1271 <= 0); l_1271 += 1)
        { 
            struct S1 ***l_1302[5][2];
            struct S1 ****l_1303 = &l_1302[0][0];
            uint64_t *l_1304 = &l_1157.f0.f1;
            int32_t l_1310 = (-1L);
            int32_t l_1311 = 0x74BB5661L;
            int64_t l_1320 = 2L;
            int32_t l_1323 = 0L;
            int32_t l_1324 = 0xF463A6B8L;
            int32_t l_1325 = 0x7C1CB774L;
            int32_t l_1327 = (-1L);
            int32_t l_1328 = 0xFAC65B4BL;
            int32_t l_1331 = (-7L);
            int32_t l_1332 = 0x728240CEL;
            int32_t l_1334 = (-3L);
            int32_t l_1336[7][5] = {{(-6L),1L,1L,(-6L),(-1L)},{1L,(-6L),1L,0x1808FD1CL,0x1808FD1CL},{0x54C2B3EAL,(-6L),0x54C2B3EAL,(-1L),(-6L)},{0x1808FD1CL,1L,(-1L),0x1808FD1CL,(-1L)},{0x1808FD1CL,0x1808FD1CL,1L,(-6L),1L},{0x54C2B3EAL,1L,(-1L),(-1L),1L},{1L,1L,0x54C2B3EAL,1L,(-1L)}};
            int8_t ****l_1371 = &g_220;
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 2; j++)
                    l_1302[i][j] = (void*)0;
            }
        }
    }
    l_1267 = ((((*g_497)++) || ((safe_sub_func_uint64_t_u_u((*g_327), ((safe_sub_func_int8_t_s_s((l_1405 == (l_1157 , (l_1157.f0 , l_1407[1]))), (safe_unary_minus_func_uint32_t_u(l_1267)))) == (l_1409 != l_1246)))) <= 0L)) <= l_1274[0][2]);
    l_1416++;
    l_1419--;
    return (*l_1410);
}



static int16_t  func_25(int64_t  p_26, const int32_t * p_27, int32_t ** p_28, int32_t ** p_29)
{ 
    struct S1 *l_42 = &g_43;
    int16_t *l_44[1];
    struct S1 *l_1047 = &g_1048;
    struct S1 **l_1046 = &l_1047;
    int32_t l_1076[7];
    int i;
    for (i = 0; i < 1; i++)
        l_44[i] = &g_45;
    for (i = 0; i < 7; i++)
        l_1076[i] = 0L;
    (*l_1046) = func_35(func_38(l_42, l_42, (g_45 = 0x446BL)), ((*l_1046) = l_42));
    l_1076[5] &= 0L;
    return p_26;
}



static struct S1 * func_35(struct S0  p_36, struct S1 * p_37)
{ 
    int8_t ****l_1049[4][4][6] = {{{(void*)0,(void*)0,&g_220,&g_220,&g_220,(void*)0},{&g_220,(void*)0,&g_220,&g_220,(void*)0,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,(void*)0},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220}},{{(void*)0,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,(void*)0,(void*)0,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220}},{{&g_220,&g_220,(void*)0,&g_220,(void*)0,&g_220},{&g_220,&g_220,(void*)0,&g_220,(void*)0,&g_220},{&g_220,&g_220,(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220,(void*)0,&g_220}},{{&g_220,(void*)0,(void*)0,(void*)0,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,&g_220,&g_220,&g_220,&g_220},{&g_220,&g_220,(void*)0,&g_220,&g_220,&g_220}}};
    int32_t *l_1050 = &g_11;
    int32_t **l_1056 = &l_1050;
    int32_t ***l_1055 = &l_1056;
    union U2 l_1066 = {{0x946BL,0xBDAB52A5E11F7AA3LL,4L,0x763CD3B2L,0x18A6L}};
    uint8_t *l_1067[1];
    int32_t *l_1068 = (void*)0;
    int32_t *l_1069 = (void*)0;
    int32_t *l_1070 = &g_9;
    int8_t *l_1073 = &g_972;
    int32_t l_1074[6] = {0L,0L,0x160B02C9L,0L,0L,0x160B02C9L};
    int64_t *l_1075 = &g_167;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1067[i] = &g_140.f0;
    (*l_1050) &= ((void*)0 == l_1049[0][3][5]);
    (*l_1070) ^= (safe_sub_func_uint16_t_u_u(((*g_497) != ((((safe_mod_func_int16_t_s_s((((*l_1055) = (g_31[1][2] = (void*)0)) != &l_1050), (safe_mod_func_uint16_t_u_u(0x08CCL, (safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u((l_1066 , ((*l_1050) &= p_36.f1)))), (0xFCABL & p_36.f4))), 6L)), (*g_327))))))) , (*g_327)) ^ p_36.f4) >= 0xC9CDL)), l_1066.f0.f4));
    (*l_1070) |= (((*l_1075) = (func_46(((safe_add_func_uint64_t_u_u((((*g_114) = (void*)0) != l_1073), p_36.f0)) || l_1074[5]), &g_43) , p_36.f3)) , (*l_1050));
    return &g_140;
}



static struct S0  func_38(struct S1 * p_39, struct S1 * p_40, int16_t  p_41)
{ 
    struct S1 *l_49 = &g_43;
    int32_t l_1006 = (-7L);
    int8_t ***l_1039 = &g_114;
    int32_t l_1041 = 0x5F91C3BEL;
    struct S0 l_1045 = {0xF9C9L,0UL,0xD4L,18446744073709551613UL,1UL};
    if (((func_46(g_43.f2, l_49) , 0L) , (safe_sub_func_uint8_t_u_u(0x7DL, (*g_115)))))
    { 
        int16_t *l_1009 = &g_45;
        int8_t *****l_1010 = (void*)0;
        int8_t *****l_1013 = &g_1012[0][0];
        int32_t l_1014 = (-10L);
        int32_t *l_1015 = &l_1006;
        int64_t *l_1017[6][2][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,&g_167},{(void*)0,&g_167}},{{(void*)0,(void*)0},{&g_167,&g_167}},{{&g_167,(void*)0},{(void*)0,&g_167}},{{(void*)0,&g_167},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,&g_167}}};
        int32_t *l_1018 = &g_164;
        struct S1 l_1038 = {0x16L,0xA6L,18446744073709551610UL,18446744073709551614UL};
        uint64_t l_1040 = 0UL;
        int i, j, k;
        (*l_1015) = ((((((((((((safe_rshift_func_int16_t_s_s((safe_div_func_int8_t_s_s((g_156.f0 , ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(l_1006, 6)), 7)) <= ((*l_1009) = (safe_rshift_func_uint16_t_u_s(l_1006, 9))))), ((*g_497) = 0x2AL))), 8)) != (g_145.f1 != (l_1010 == (l_1013 = g_1011)))) >= (*g_327)) >= p_41) ^ l_1014) == 3UL) > (*g_294)) != 1UL) , (**g_1011)) != (void*)0) <= l_1006) && l_1006);
        (*l_1018) &= (~(((((void*)0 != &g_145) == p_41) > (g_167 = p_41)) <= (*l_1015)));
        for (g_43.f2 = 0; g_43.f2 < 5; g_43.f2 += 1)
        {
            for (l_1006 = 0; l_1006 < 4; l_1006 += 1)
            {
                g_31[g_43.f2][l_1006] = &g_32;
            }
        }
        l_1041 &= (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((((*l_1015) = ((safe_sub_func_uint64_t_u_u((((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((**g_496) &= p_41), 1)), 2)) > (safe_div_func_int16_t_s_s((!(safe_lshift_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(l_1006, (4294967288UL == (safe_mul_func_int16_t_s_s(((void*)0 == &g_31[1][2]), ((((l_1039 = (((*g_139) = l_1038) , l_1039)) != (void*)0) || p_41) & l_1040)))))) & 1UL), 2))), l_1006))) , l_1006), 1UL)) == p_41)) ^ (***g_913)), (*****g_1011))), 1UL));
        (*l_1015) = (-1L);
    }
    else
    { 
        uint16_t l_1042 = 0xF6A8L;
        int64_t *l_1043[6][6][7] = {{{(void*)0,&g_167,&g_167,&g_167,&g_167,&g_167,(void*)0},{(void*)0,&g_167,&g_167,&g_167,&g_167,(void*)0,(void*)0},{&g_167,(void*)0,&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,(void*)0,&g_167,&g_167,(void*)0,&g_167}},{{&g_167,&g_167,&g_167,(void*)0,&g_167,(void*)0,(void*)0},{&g_167,&g_167,(void*)0,&g_167,(void*)0,(void*)0,&g_167},{(void*)0,&g_167,(void*)0,&g_167,&g_167,(void*)0,&g_167},{(void*)0,(void*)0,&g_167,&g_167,&g_167,(void*)0,(void*)0},{&g_167,(void*)0,&g_167,&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167,&g_167}},{{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0,(void*)0,(void*)0,&g_167},{&g_167,(void*)0,(void*)0,&g_167,(void*)0,&g_167,&g_167},{&g_167,(void*)0,&g_167,(void*)0,&g_167,(void*)0,&g_167},{&g_167,&g_167,(void*)0,(void*)0,&g_167,(void*)0,&g_167},{&g_167,&g_167,&g_167,&g_167,(void*)0,&g_167,(void*)0}},{{&g_167,&g_167,&g_167,&g_167,(void*)0,&g_167,&g_167},{(void*)0,&g_167,&g_167,&g_167,&g_167,(void*)0,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167,(void*)0}},{{(void*)0,&g_167,(void*)0,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,(void*)0,(void*)0,&g_167,&g_167,(void*)0},{&g_167,&g_167,(void*)0,&g_167,&g_167,&g_167,(void*)0},{(void*)0,&g_167,&g_167,&g_167,&g_167,&g_167,&g_167},{(void*)0,&g_167,&g_167,&g_167,&g_167,&g_167,(void*)0},{(void*)0,(void*)0,&g_167,(void*)0,&g_167,&g_167,&g_167}},{{&g_167,(void*)0,&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167,&g_167},{(void*)0,&g_167,&g_167,&g_167,&g_167,(void*)0,(void*)0},{&g_167,(void*)0,&g_167,&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,(void*)0,(void*)0,&g_167,&g_167,&g_167},{&g_167,(void*)0,(void*)0,&g_167,&g_167,(void*)0,(void*)0}}};
        int32_t *l_1044 = &l_1041;
        int i, j, k;
        (*l_1044) = (l_1042 <= (g_167 ^= 0x97D3345A5314C958LL));
    }
    return l_1045;
}



static union U2  func_46(uint32_t  p_47, struct S1 * p_48)
{ 
    uint8_t l_50 = 0UL;
    int16_t l_54 = 0L;
    int32_t *l_62 = &g_2;
    struct S0 l_63[5] = {{0xEA12L,0UL,5L,0UL,0x039BL},{0xEA12L,0UL,5L,0UL,0x039BL},{0xEA12L,0UL,5L,0UL,0x039BL},{0xEA12L,0UL,5L,0UL,0x039BL},{0xEA12L,0UL,5L,0UL,0x039BL}};
    int16_t l_282 = 0x2A03L;
    uint8_t l_283[5];
    const uint32_t *l_297 = &g_295;
    const uint32_t **l_296 = &l_297;
    int32_t l_305 = 4L;
    int32_t l_306 = 9L;
    int32_t l_307[3];
    uint8_t l_312 = 0x71L;
    int32_t **l_316 = (void*)0;
    const int8_t l_329 = 0x90L;
    int16_t l_396[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int32_t l_401[3];
    struct S1 *l_415 = (void*)0;
    union U2 l_451[1][6] = {{{{0x655FL,18446744073709551608UL,4L,0x601D8CE1L,1UL}},{{5UL,0xC6022C7CA74C791BLL,6L,0x6AAE510AL,65535UL}},{{5UL,0xC6022C7CA74C791BLL,6L,0x6AAE510AL,65535UL}},{{0x655FL,18446744073709551608UL,4L,0x601D8CE1L,1UL}},{{5UL,0xC6022C7CA74C791BLL,6L,0x6AAE510AL,65535UL}},{{5UL,0xC6022C7CA74C791BLL,6L,0x6AAE510AL,65535UL}}}};
    int32_t l_469 = 0x4F7A2B9AL;
    uint32_t l_540 = 18446744073709551606UL;
    int8_t ** const **l_587 = (void*)0;
    int32_t **l_641 = &l_62;
    uint8_t ** const l_709 = (void*)0;
    uint8_t ** const *l_708[4][3][6] = {{{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709}},{{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709}},{{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709}},{{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709},{&l_709,&l_709,&l_709,&l_709,&l_709,&l_709}}};
    uint8_t ** const * const *l_707 = &l_708[3][0][3];
    const int32_t *l_718 = &l_307[2];
    int64_t *l_793 = &g_167;
    int64_t *l_797 = &g_167;
    int16_t l_813 = 1L;
    int32_t l_817 = 0L;
    uint64_t l_818 = 0xE1D0478D832AB97ELL;
    int32_t *l_888 = &l_307[2];
    const struct S0 **l_921 = (void*)0;
    uint16_t *l_929 = (void*)0;
    uint64_t l_976 = 0x7173E198B27AE2BELL;
    uint64_t l_987[7] = {0x4B2A0E2E7F54AAA5LL,0x4B2A0E2E7F54AAA5LL,0x4B2A0E2E7F54AAA5LL,0x4B2A0E2E7F54AAA5LL,0x4B2A0E2E7F54AAA5LL,0x4B2A0E2E7F54AAA5LL,0x4B2A0E2E7F54AAA5LL};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_283[i] = 0xDBL;
    for (i = 0; i < 3; i++)
        l_307[i] = (-3L);
    for (i = 0; i < 3; i++)
        l_401[i] = 1L;
    l_50 &= p_47;
    return l_451[0][4];
}



static uint32_t  func_58(int32_t * p_59, int16_t * const  p_60, struct S0  p_61)
{ 
    int8_t l_73 = 1L;
    int32_t l_74[1][4];
    struct S1 l_84 = {8UL,1L,18446744073709551615UL,18446744073709551612UL};
    struct S1 l_85 = {0xB0L,-6L,7UL,8UL};
    uint64_t l_121 = 18446744073709551610UL;
    int32_t l_130 = 0L;
    uint64_t l_132[1][2];
    uint32_t l_151 = 0x89E628F7L;
    int16_t l_165 = 2L;
    int32_t *l_184 = &l_74[0][1];
    union U2 l_202 = {{0x0614L,18446744073709551613UL,0xF6L,3UL,0x53BFL}};
    uint64_t l_232 = 18446744073709551606UL;
    uint8_t *l_256 = &g_140.f0;
    int32_t l_281 = 0L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_74[i][j] = (-1L);
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_132[i][j] = 0x23E191EB41D5FB7FLL;
    }
    for (p_61.f1 = 12; (p_61.f1 >= 57); ++p_61.f1)
    { 
        int32_t *l_66 = &g_11;
        int32_t *l_67 = &g_11;
        int32_t *l_68 = &g_9;
        int32_t *l_69 = &g_9;
        int32_t *l_70 = &g_11;
        int32_t *l_71 = &g_11;
        int32_t *l_72[4][4] = {{&g_5,&g_9,(void*)0,&g_9},{&g_2,&g_9,&g_9,&g_2},{&g_9,&g_2,&g_5,&g_9},{&g_9,&g_5,&g_9,(void*)0}};
        uint32_t l_75 = 0UL;
        uint64_t *l_100 = &g_51;
        uint32_t *l_111 = &l_75;
        int8_t *l_112 = &l_73;
        int8_t *l_113 = &g_43.f1;
        int32_t l_119 = 0xE4B88546L;
        union U2 *l_153 = (void*)0;
        int32_t l_166[7] = {0x34144847L,0x34144847L,0L,0x34144847L,0x34144847L,0L,0x34144847L};
        struct S1 l_245 = {0x15L,-3L,18446744073709551611UL,0UL};
        int8_t ****l_249[6][5][4] = {{{(void*)0,(void*)0,&g_220,(void*)0},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,(void*)0,&g_220,(void*)0}},{{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,(void*)0,&g_220,(void*)0},{(void*)0,&g_220,&g_220,&g_220}},{{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,(void*)0,&g_220,(void*)0},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220}},{{(void*)0,&g_220,&g_220,&g_220},{(void*)0,(void*)0,&g_220,(void*)0},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220}},{{(void*)0,(void*)0,&g_220,(void*)0},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,(void*)0,&g_220,(void*)0}},{{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,&g_220,&g_220,&g_220},{(void*)0,(void*)0,&g_220,(void*)0},{(void*)0,&g_220,&g_220,&g_220}}};
        uint8_t *l_255 = &l_245.f0;
        uint8_t **l_254 = &l_255;
        int i, j, k;
        l_75--;
        (*l_67) ^= (safe_add_func_int8_t_s_s(p_61.f2, ((-1L) < ((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_int64_t_s((!((*p_60) = ((l_84 , (p_61.f4 , (l_85 , ((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(l_84.f2, 4294967295UL)), l_85.f0)) != l_84.f2), 2L)) , p_61.f0)))) != 0x63L))))), g_5)) < p_61.f2))));
    }
    return l_281;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_43.f0, "g_43.f0", print_hash_value);
    transparent_crc(g_43.f1, "g_43.f1", print_hash_value);
    transparent_crc(g_43.f2, "g_43.f2", print_hash_value);
    transparent_crc(g_43.f3, "g_43.f3", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_140.f1, "g_140.f1", print_hash_value);
    transparent_crc(g_140.f2, "g_140.f2", print_hash_value);
    transparent_crc(g_140.f3, "g_140.f3", print_hash_value);
    transparent_crc(g_145.f0, "g_145.f0", print_hash_value);
    transparent_crc(g_145.f1, "g_145.f1", print_hash_value);
    transparent_crc(g_145.f2, "g_145.f2", print_hash_value);
    transparent_crc(g_145.f3, "g_145.f3", print_hash_value);
    transparent_crc(g_145.f4, "g_145.f4", print_hash_value);
    transparent_crc(g_156.f0.f0, "g_156.f0.f0", print_hash_value);
    transparent_crc(g_156.f0.f1, "g_156.f0.f1", print_hash_value);
    transparent_crc(g_156.f0.f2, "g_156.f0.f2", print_hash_value);
    transparent_crc(g_156.f0.f3, "g_156.f0.f3", print_hash_value);
    transparent_crc(g_156.f0.f4, "g_156.f0.f4", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_295, "g_295", print_hash_value);
    transparent_crc(g_328, "g_328", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_916, "g_916", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_1048.f0, "g_1048.f0", print_hash_value);
    transparent_crc(g_1048.f1, "g_1048.f1", print_hash_value);
    transparent_crc(g_1048.f2, "g_1048.f2", print_hash_value);
    transparent_crc(g_1048.f3, "g_1048.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1203[i][j], "g_1203[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1205, "g_1205", print_hash_value);
    transparent_crc(g_1329, "g_1329", print_hash_value);
    transparent_crc(g_1367, "g_1367", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1396[i], "g_1396[i]", print_hash_value);

    }
    transparent_crc(g_1479.f0, "g_1479.f0", print_hash_value);
    transparent_crc(g_1479.f1, "g_1479.f1", print_hash_value);
    transparent_crc(g_1479.f2, "g_1479.f2", print_hash_value);
    transparent_crc(g_1479.f3, "g_1479.f3", print_hash_value);
    transparent_crc(g_1479.f4, "g_1479.f4", print_hash_value);
    transparent_crc(g_1514, "g_1514", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
