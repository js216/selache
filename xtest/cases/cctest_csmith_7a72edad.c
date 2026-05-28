// SPDX-License-Identifier: MIT
// cctest_csmith_7a72edad.c --- cctest case csmith_7a72edad (csmith seed 2054352301)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc909be20 */
/* @exp_ticks 0xd1c2 */

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

// Options:   -s 2054352301 -o /tmp/csmith_gen_qq09g3f6/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   int8_t  f0;
   int64_t  f1;
   const uint32_t  f2;
   const int32_t  f3;
};

struct S1 {
   const int32_t  f0;
};

struct S2 {
   int16_t  f0;
   int32_t  f1;
   int8_t  f2;
};

union U3 {
   int8_t  f0;
   int32_t  f1;
};

union U4 {
   int8_t  f0;
   uint32_t  f1;
};

union U5 {
   int32_t  f0;
   struct S2  f1;
   int64_t  f2;
   const int8_t  f3;
};


static uint32_t g_7[3] = {18446744073709551614UL,18446744073709551614UL,18446744073709551614UL};
static uint32_t g_9 = 4294967288UL;
static struct S1 g_14 = {0xC9CA3191L};
static int64_t g_20[2][1][3] = {{{(-1L),(-1L),(-1L)}},{{0x451F1E283D1F0DFBLL,0x451F1E283D1F0DFBLL,0x451F1E283D1F0DFBLL}}};
static uint32_t g_39[3][5] = {{0xEC701401L,0x309757A8L,0xEC701401L,0xEC701401L,0x309757A8L},{0x309757A8L,0xEC701401L,0xEC701401L,0x309757A8L,0xEC701401L},{0x309757A8L,0x309757A8L,0x6979F9F4L,0x309757A8L,0x309757A8L}};
static uint8_t g_41 = 0UL;
static uint32_t g_43 = 0x3028EC7DL;
static const union U4 g_47 = {0x36L};
static int32_t g_49 = 0xA3A4AA3EL;
static uint32_t *g_73 = (void*)0;
static const uint32_t g_76 = 0x504C99CCL;
static int32_t g_90 = 4L;
static uint16_t g_102 = 0xC414L;
static int8_t g_136 = 0xB8L;
static uint8_t g_141 = 2UL;
static int32_t g_178 = 3L;
static uint32_t g_179 = 4294967295UL;
static uint32_t g_190 = 0x2F00CAAAL;
static uint16_t *g_204[1][5][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_102,&g_102,&g_102,&g_102,&g_102},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
static struct S1 g_213 = {0xEAD068D1L};
static union U5 g_217 = {0xEAD15EB0L};
static uint8_t g_237 = 254UL;
static uint16_t g_248 = 65535UL;
static struct S2 *g_261 = (void*)0;
static struct S2 g_263 = {-1L,0x2AF84197L,1L};
static uint8_t g_288 = 255UL;
static int16_t g_325[3][3][3] = {{{1L,(-1L),(-1L)},{(-9L),(-9L),0xB431L},{1L,(-1L),(-1L)}},{{(-9L),(-9L),0xB431L},{1L,(-1L),(-1L)},{(-9L),(-9L),0xB431L}},{{1L,(-1L),(-1L)},{(-9L),(-9L),0xB431L},{1L,(-1L),(-1L)}}};
static union U4 g_335 = {0x37L};
static union U4 *g_334 = &g_335;
static union U4 **g_333 = &g_334;
static uint8_t *g_358[5][4][1] = {{{(void*)0},{&g_141},{(void*)0},{&g_141}},{{(void*)0},{&g_141},{(void*)0},{&g_141}},{{(void*)0},{&g_141},{(void*)0},{&g_141}},{{(void*)0},{&g_141},{(void*)0},{&g_141}},{{(void*)0},{&g_141},{(void*)0},{&g_141}}};
static uint8_t ** const g_357 = &g_358[0][1][0];
static uint8_t ** const *g_356 = &g_357;
static uint16_t g_377 = 0UL;
static int32_t g_389 = 0xD0CB3F64L;
static int16_t g_392 = 2L;
static int8_t g_393 = (-1L);
static uint16_t g_394 = 65531UL;
static const uint32_t g_425 = 0UL;
static const uint32_t g_427 = 4294967286UL;
static const uint32_t *g_426 = &g_427;
static uint8_t g_441 = 0x27L;
static uint64_t g_453 = 18446744073709551606UL;
static uint64_t *g_452 = &g_453;
static const union U3 g_477[1][3] = {{{-1L},{-1L},{-1L}}};
static struct S0 g_482 = {0x68L,-4L,0x946A8EDBL,-2L};
static int32_t g_510 = 9L;
static uint32_t g_511 = 18446744073709551615UL;
static uint64_t g_529 = 0x6E4F0F1AD99F7709LL;
static struct S0 g_546[5][4][5] = {{{{0x96L,-8L,0xA999311BL,0x3E41FC95L},{0xCAL,0x4D16CBC2643333EALL,4294967290UL,0xBE1F7FABL},{0x05L,0xE1873707056FC082LL,4294967288UL,0x12D110BCL},{8L,0x6E282D16277DAA5FLL,5UL,-1L},{0L,-2L,4UL,0L}},{{0xACL,0xDE871DBE1186687DLL,0x76E0CA82L,0x3B43DE7FL},{-5L,0xA022EDB7039A31A2LL,0x8E1978DEL,-2L},{0x67L,0L,0xDB5351A6L,0L},{0x43L,-1L,0x2AD45302L,0x4ED09013L},{0L,0x7D5204E2C4A6525FLL,0x0D09310CL,0x4BFB1699L}},{{3L,0x7E522FB15A638DE7LL,0x27DE0AE3L,0x0946BB51L},{1L,6L,4294967291UL,0xD2C66E92L},{0L,-7L,0xF2150038L,1L},{0x43L,-1L,0x2AD45302L,0x4ED09013L},{9L,0x76CE6FB6BC49F3CDLL,4294967295UL,1L}},{{0x3AL,-1L,5UL,1L},{0L,0x7D5204E2C4A6525FLL,0x0D09310CL,0x4BFB1699L},{0x32L,0xC6BDB93289E1DFD7LL,0x2E3EBE48L,0xE08B3ED9L},{8L,0x6E282D16277DAA5FLL,5UL,-1L},{0x37L,-1L,0xDEB2BAB7L,-1L}}},{{{0x7CL,1L,0x923C0A80L,1L},{1L,0xD698F9D58D211D77LL,0UL,0x63C49262L},{0x09L,0x59ED6A1995E711A9LL,4294967287UL,-1L},{1L,0xD698F9D58D211D77LL,0UL,0x63C49262L},{0x7CL,1L,0x923C0A80L,1L}},{{0x05L,0xE1873707056FC082LL,4294967288UL,0x12D110BCL},{-1L,0x18A1B861DB024C4ALL,0xF24C7BE3L,0x9FE0B815L},{0xD8L,0x7BF354BF82385BE5LL,0xBE993A4DL,1L},{0L,-7L,0xF2150038L,1L},{0xEEL,0x53622543C3A60B36LL,0x640CEBCFL,-1L}},{{0L,0x7D5204E2C4A6525FLL,0x0D09310CL,0x4BFB1699L},{-1L,0xE9B7F564847A6DD7LL,0x2B05BA6BL,0xA46E389DL},{0xC9L,0L,0x8766B66EL,0x9CA67752L},{-2L,0x9D7967F707F69FEBLL,0x960DF413L,0xC637AD3BL},{1L,0xD698F9D58D211D77LL,0UL,0x63C49262L}},{{0xC9L,0L,0x8766B66EL,0x9CA67752L},{-7L,0xD8DBAA1DA9DD24D5LL,0xF2C3F61AL,-1L},{-5L,0xA022EDB7039A31A2LL,0x8E1978DEL,-2L},{-1L,0x18A1B861DB024C4ALL,0xF24C7BE3L,0x9FE0B815L},{0xEEL,0x53622543C3A60B36LL,0x640CEBCFL,-1L}}},{{{1L,0L,0xB2C49F17L,0xDF0CABE6L},{-2L,0x9D7967F707F69FEBLL,0x960DF413L,0xC637AD3BL},{-8L,0x6DC7A6227AAD933DLL,0x857A8683L,0x93A0259EL},{0L,-2L,4UL,0L},{0x7CL,1L,0x923C0A80L,1L}},{{0xEEL,0x53622543C3A60B36LL,0x640CEBCFL,-1L},{0xC6L,0xABFC6BC9F32A5538LL,0x40D90A08L,-1L},{-7L,0xD8DBAA1DA9DD24D5LL,0xF2C3F61AL,-1L},{-1L,0xE9B7F564847A6DD7LL,0x2B05BA6BL,0xA46E389DL},{0x37L,-1L,0xDEB2BAB7L,-1L}},{{0x67L,0L,0xDB5351A6L,0L},{0x96L,-8L,0xA999311BL,0x3E41FC95L},{0x37L,-1L,0xDEB2BAB7L,-1L},{3L,0xC1BF2CFC2F8AD916LL,0x93E9D81EL,0L},{9L,0x76CE6FB6BC49F3CDLL,4294967295UL,1L}},{{1L,0L,4294967293UL,1L},{0xB6L,0xE599353283B95BE7LL,0x276C7E57L,1L},{0L,-2L,4UL,0L},{0x05L,0xE1873707056FC082LL,4294967288UL,0x12D110BCL},{0L,0x7D5204E2C4A6525FLL,0x0D09310CL,0x4BFB1699L}}},{{{1L,0L,4294967293UL,1L},{0x19L,1L,0x2B09D20AL,0xF9302789L},{0xCAL,0x4D16CBC2643333EALL,4294967290UL,0xBE1F7FABL},{-1L,1L,0x3EB7830CL,-1L},{0L,-2L,4UL,0L}},{{0x67L,0L,0xDB5351A6L,0L},{0L,-7L,0xF2150038L,1L},{0x22L,0x3D30E0754B226926LL,0x60CEE153L,1L},{-9L,0x05649F48F3944D38LL,0xD43FC32EL,0x06E84136L},{0x22L,0x3D30E0754B226926LL,0x60CEE153L,1L}},{{0xEEL,0x53622543C3A60B36LL,0x640CEBCFL,-1L},{0xEEL,0x53622543C3A60B36LL,0x640CEBCFL,-1L},{2L,0L,0x84C2F172L,0L},{0x37L,-1L,0xDEB2BAB7L,-1L},{0x32L,0xC6BDB93289E1DFD7LL,0x2E3EBE48L,0xE08B3ED9L}},{{1L,0L,0xB2C49F17L,0xDF0CABE6L},{0xD8L,0x7BF354BF82385BE5LL,0xBE993A4DL,1L},{0xB7L,0x0F2C445097D32711LL,0x536F7F8EL,0L},{2L,0L,0x84C2F172L,0L},{-5L,0xA022EDB7039A31A2LL,0x8E1978DEL,-2L}}},{{{0xC9L,0L,0x8766B66EL,0x9CA67752L},{0x67L,0L,0xDB5351A6L,0L},{0x19L,1L,0x2B09D20AL,0xF9302789L},{9L,0x76CE6FB6BC49F3CDLL,4294967295UL,1L},{0L,-7L,0xF2150038L,1L}},{{0L,0x7D5204E2C4A6525FLL,0x0D09310CL,0x4BFB1699L},{0xD8L,0x7BF354BF82385BE5LL,0xBE993A4DL,1L},{1L,6L,4294967291UL,0xD2C66E92L},{0xC6L,0xABFC6BC9F32A5538LL,0x40D90A08L,-1L},{0x97L,-7L,0UL,2L}},{{0x05L,0xE1873707056FC082LL,4294967288UL,0x12D110BCL},{0xEEL,0x53622543C3A60B36LL,0x640CEBCFL,-1L},{0xC6L,0xABFC6BC9F32A5538LL,0x40D90A08L,-1L},{-7L,0xD8DBAA1DA9DD24D5LL,0xF2C3F61AL,-1L},{-1L,0xE9B7F564847A6DD7LL,0x2B05BA6BL,0xA46E389DL}},{{0x7CL,1L,0x923C0A80L,1L},{0L,-7L,0xF2150038L,1L},{1L,0L,4294967293UL,1L},{0xCAL,0x4D16CBC2643333EALL,4294967290UL,0xBE1F7FABL},{0x6AL,0xBF6452C3AAD6D039LL,8UL,0x157AAED6L}}}};
static struct S0 *g_545 = &g_546[4][0][0];
static uint64_t **g_589[5] = {&g_452,&g_452,&g_452,&g_452,&g_452};
static uint64_t ***g_588 = &g_589[0];
static uint64_t g_687 = 0x46E65CF40CAFB698LL;
static uint8_t g_690 = 0UL;
static int8_t g_717 = 0x6DL;
static int32_t g_774[1][7] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
static uint32_t g_783[4][2][4] = {{{0x53BC1156L,0xF96B7BBEL,0xF96B7BBEL,0x53BC1156L},{0x8939649BL,0x99549FB0L,0UL,18446744073709551612UL}},{{18446744073709551615UL,0x80C5D7CBL,18446744073709551612UL,0x83B23E42L},{18446744073709551612UL,0x83B23E42L,1UL,0x83B23E42L}},{{0xF96B7BBEL,0x80C5D7CBL,0x78590E66L,18446744073709551612UL},{1UL,0x99549FB0L,0x83B23E42L,0x53BC1156L}},{{0x78590E66L,0xF96B7BBEL,0xF96B7BBEL,0xF96B7BBEL},{0x83B23E42L,0x83B23E42L,18446744073709551615UL,0x99549FB0L}}};
static const struct S1 g_870 = {0xB0D6F1B4L};
static int32_t g_928 = 0x47195057L;
static struct S1 *g_945 = &g_14;
static struct S1 **g_944 = &g_945;
static struct S1 ***g_943 = &g_944;
static struct S2 ** const g_952 = &g_261;
static struct S2 ** const *g_951 = &g_952;
static int64_t *g_994[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static uint32_t g_1005 = 0x53C2405BL;
static const union U3 g_1010 = {0x88L};
static struct S1 g_1039 = {0xDEDFF510L};
static int32_t *g_1043 = &g_178;
static const int8_t g_1060[6] = {0xF6L,0xF6L,0xF6L,0xF6L,0xF6L,0xF6L};
static int16_t g_1081 = 1L;
static union U3 g_1128 = {0xD8L};
static uint64_t g_1139 = 1UL;
static uint16_t g_1219 = 0x5B45L;
static struct S2 g_1258 = {0x6CDCL,0xF94C149DL,-1L};



static int32_t  func_1(void);
static union U4  func_2(int64_t  p_3, uint16_t  p_4, uint8_t  p_5, union U4  p_6);
static int64_t * func_10(struct S1  p_11, int64_t  p_12, int64_t * p_13);
static uint16_t  func_15(int64_t * p_16, uint32_t  p_17, int64_t * p_18);
static int32_t * func_23(uint32_t  p_24, struct S0  p_25, int64_t * p_26, const union U4  p_27, const int16_t  p_28);
static int32_t * func_52(int8_t  p_53);
static int16_t  func_59(struct S1  p_60);
static struct S2  func_61(uint64_t  p_62, int32_t  p_63, union U3  p_64, int64_t * p_65, struct S0  p_66);




static int32_t  func_1(void)
{ 
    int64_t *l_8 = (void*)0;
    int64_t *l_19 = &g_20[1][0][2];
    int32_t l_21 = (-1L);
    int64_t *l_22 = (void*)0;
    int32_t l_993 = 8L;
    int64_t **l_1169 = &l_19;
    union U4 l_1170 = {-1L};
    (*g_1043) = (func_2((g_9 = (1L >= g_7[0])), ((((*l_1169) = func_10(g_14, ((*l_19) = ((((l_21 = (func_15(l_19, l_21, l_22) > l_21)) == (-2L)) <= l_993) < 0x44FBB1B5DA52DCC1LL)), g_994[1])) != (void*)0) & l_993), g_1039.f0, l_1170) , l_993);
    return g_76;
}



static union U4  func_2(int64_t  p_3, uint16_t  p_4, uint8_t  p_5, union U4  p_6)
{ 
    uint64_t l_1178[1][5][1];
    int16_t l_1179 = 0L;
    struct S2 ***l_1182 = (void*)0;
    int32_t l_1183 = (-1L);
    int32_t **l_1218 = &g_1043;
    const struct S1 *l_1238 = &g_213;
    const struct S1 **l_1237[4][1];
    const struct S1 ***l_1236[4];
    struct S2 **l_1254 = &g_261;
    struct S0 l_1264 = {0x7EL,1L,4294967291UL,0xB8C0420DL};
    int8_t l_1272 = 0L;
    uint8_t l_1298 = 0x1CL;
    union U4 l_1335 = {3L};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
                l_1178[i][j][k] = 18446744073709551615UL;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1237[i][j] = &l_1238;
    }
    for (i = 0; i < 4; i++)
        l_1236[i] = &l_1237[0][0];
    for (g_453 = 0; (g_453 < 53); g_453 = safe_add_func_uint8_t_u_u(g_453, 1))
    { 
        const int32_t *l_1173 = &g_928;
        const int32_t **l_1174 = (void*)0;
        const int32_t **l_1175 = &l_1173;
        (*l_1175) = l_1173;
    }
    for (g_49 = 0; (g_49 >= 0); g_49 -= 1)
    { 
        struct S2 **l_1180 = &g_261;
        struct S2 ****l_1181 = (void*)0;
        uint32_t l_1184[4] = {0x8399BD82L,0x8399BD82L,0x8399BD82L,0x8399BD82L};
        int32_t l_1221 = 0L;
        int64_t *l_1226 = &g_546[4][0][0].f1;
        int32_t l_1294 = 0x41B2AA2CL;
        int32_t l_1295 = 0x146D1934L;
        int32_t l_1296 = 0xE709FD99L;
        const struct S2 l_1301 = {0xC8DEL,-1L,0xF0L};
        struct S2 l_1302 = {6L,0x450A8909L,0x7CL};
        uint8_t **l_1325 = &g_358[0][1][0];
        uint8_t ***l_1324[5];
        struct S1 *** const l_1332 = &g_944;
        int i;
        for (i = 0; i < 5; i++)
            l_1324[i] = &l_1325;
        l_1184[3] |= ((*g_1043) ^= (l_1183 = (safe_sub_func_int8_t_s_s((g_217 , (l_1178[0][1][0] <= l_1179)), (p_4 != ((((*g_951) != l_1180) && ((l_1182 = &l_1180) != &g_952)) , p_3))))));
        for (g_263.f1 = 0; (g_263.f1 >= 0); g_263.f1 -= 1)
        { 
            uint8_t l_1208 = 0x65L;
            struct S0 l_1223 = {1L,0x6E78EAA178BB622CLL,0xAC67EE5FL,0x68CBC9CBL};
            union U3 l_1225 = {0x2CL};
            int32_t l_1228 = 6L;
            union U4 l_1290 = {0x81L};
            int32_t l_1297 = 0x411C08EAL;
            struct S1 l_1312 = {0L};
            int16_t l_1328 = (-1L);
        }
    }
    return l_1335;
}



static int64_t * func_10(struct S1  p_11, int64_t  p_12, int64_t * p_13)
{ 
    int32_t *l_995 = &g_90;
    int32_t l_998 = 1L;
    int32_t l_999 = 0x77DE485CL;
    int32_t l_1001 = 0x4BC91F19L;
    int32_t l_1002[6] = {0x78F8AEC2L,0x29605EA6L,0x29605EA6L,0x78F8AEC2L,0x29605EA6L,0x29605EA6L};
    int16_t l_1004 = 0L;
    const union U3 *l_1009 = &g_1010;
    struct S2 l_1012 = {0x5B8EL,0x3CD6D119L,0xCCL};
    struct S2 *l_1013 = &g_217.f1;
    int16_t l_1029 = 1L;
    uint32_t l_1063 = 0xA99CF210L;
    int64_t *l_1085 = &g_20[0][0][1];
    int32_t ***l_1104[4];
    int i;
    for (i = 0; i < 4; i++)
        l_1104[i] = (void*)0;
    if (((*l_995) &= (g_39[0][2] && (*g_426))))
    { 
        int32_t *l_996 = &g_263.f1;
        int32_t *l_997[7][4] = {{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_263.f1,&g_49},{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_263.f1,&g_49},{&g_49,&g_49,&g_49,&g_49}};
        int8_t l_1000 = 1L;
        int32_t l_1003 = (-7L);
        int32_t **l_1008 = &l_996;
        int i, j;
        g_1005--;
        (*l_1008) = l_996;
        l_995 = &l_1002[1];
    }
    else
    { 
        uint16_t l_1011 = 0x6F7BL;
        l_1009 = &g_477[0][2];
        (*l_995) ^= l_1011;
    }
    (*l_1013) = l_1012;
    return &g_20[0][0][2];
}



static uint16_t  func_15(int64_t * p_16, uint32_t  p_17, int64_t * p_18)
{ 
    int64_t *l_33 = &g_20[1][0][2];
    int32_t l_34 = (-1L);
    int64_t *l_35 = &g_20[1][0][2];
    uint64_t l_36 = 0x2AD21DD8E181F51BLL;
    uint32_t *l_37 = (void*)0;
    uint32_t *l_38[3][4] = {{&g_39[0][2],&g_39[0][2],&g_39[1][0],&g_39[0][2]},{&g_39[0][2],&g_39[0][2],&g_39[1][0],&g_39[1][0]},{&g_39[0][2],&g_39[0][2],&g_39[0][2],&g_39[1][0]}};
    int32_t l_40 = 0x910760B9L;
    uint32_t *l_42[1];
    int32_t l_44 = 6L;
    struct S0 l_45 = {0xEAL,0x84C923F2B6367AFFLL,0x16CE65C5L,6L};
    int64_t *l_46[2];
    int32_t *l_880 = &g_49;
    int32_t **l_879 = &l_880;
    int16_t *l_890 = &g_217.f1.f0;
    int32_t *l_891 = &g_263.f1;
    union U4 l_897 = {0x46L};
    int32_t l_973[1][7][7] = {{{0x3790E29BL,(-3L),0x35D0CE15L,0x35D0CE15L,(-3L),0x3790E29BL,0x03D70C1EL},{0xECE95443L,1L,0x6B9F1AFFL,0xB5ED980CL,0xB5ED980CL,0x6B9F1AFFL,1L},{(-3L),0x03D70C1EL,0x3790E29BL,(-3L),0x35D0CE15L,0x35D0CE15L,(-3L)},{1L,1L,1L,(-7L),1L,(-3L),(-3L)},{0x7D4DB357L,(-3L),0x53547D55L,(-3L),0x7D4DB357L,0x53547D55L,0L},{0xB5ED980CL,(-3L),(-7L),0xB5ED980CL,(-7L),(-3L),0xB5ED980CL},{0x3790E29BL,0L,0x03D70C1EL,0x35D0CE15L,0L,0x35D0CE15L,0x03D70C1EL}}};
    int32_t l_985 = 0x50FC08A7L;
    int16_t l_987 = 1L;
    int16_t l_989 = 0L;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_42[i] = &g_43;
    for (i = 0; i < 2; i++)
        l_46[i] = &l_45.f1;
    (*l_879) = func_23((l_44 ^= (safe_rshift_func_uint8_t_u_u(((-1L) <= ((l_33 = p_18) == (void*)0)), ((g_41 ^= ((l_40 = ((p_17 >= ((l_34 = l_34) & ((p_16 == l_35) , l_36))) & g_7[0])) <= g_7[0])) < g_39[0][2])))), l_45, l_46[1], g_47, g_43);
    (*l_891) |= (4294967295UL < (((safe_add_func_int16_t_s_s(((*l_890) = (p_17 < (((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_uint64_t_u(18446744073709551608UL)), (safe_add_func_uint8_t_u_u((*l_880), ((&g_248 == (void*)0) , ((safe_div_func_int16_t_s_s(((0x119637E178CC4540LL <= (*l_880)) <= (-1L)), 0x66B0L)) >= p_17)))))) <= 0x1732L) ^ 255UL))), p_17)) || (**l_879)) < 9UL));
    if (g_335.f0)
    { 
        int32_t l_902 = (-5L);
        const int16_t *l_923 = (void*)0;
        int32_t l_930 = 0xB6E709B7L;
        int32_t l_931 = 0x4FC1562FL;
        union U4 l_937 = {0xEFL};
        struct S1 ***l_946[2];
        int32_t l_963[1][6] = {{5L,5L,5L,5L,5L,5L}};
        int i, j;
        for (i = 0; i < 2; i++)
            l_946[i] = &g_944;
        for (g_529 = 0; (g_529 <= 2); g_529 += 1)
        { 
            uint16_t *l_892 = (void*)0;
            int32_t l_936 = 0xCC1A2D35L;
            struct S0 l_941 = {1L,0L,4294967295UL,0x79AE30D4L};
            union U3 l_948 = {0x2AL};
            union U5 l_960 = {-10L};
            int32_t l_969 = 0x67C0DAA9L;
            int32_t l_970 = 1L;
            int32_t l_972 = 0x3CA381D4L;
            int32_t l_975 = 0x9F4856F1L;
            int32_t l_978 = 1L;
            int32_t l_980 = (-1L);
            int32_t l_981[6][1][6] = {{{0L,(-5L),0x1C6BE2CEL,4L,1L,(-1L)}},{{0xB2B86278L,4L,0x0DF7BBE9L,0x0DF7BBE9L,4L,0xB2B86278L}},{{0x0DF7BBE9L,4L,0xB2B86278L,1L,1L,0x1C6BE2CEL}},{{0x1C6BE2CEL,(-5L),0L,(-5L),0x1C6BE2CEL,4L}},{{0x1C6BE2CEL,0x0DF7BBE9L,(-5L),1L,0x2236D09BL,0x2236D09BL}},{{0x0DF7BBE9L,1L,1L,0x0DF7BBE9L,0L,0x2236D09BL}}};
            int64_t l_986 = 0xF867B98D81CCCA1CLL;
            uint32_t l_990 = 4294967295UL;
            int i, j, k;
        }
    }
    else
    { 
        return p_17;
    }
    return p_17;
}



static int32_t * func_23(uint32_t  p_24, struct S0  p_25, int64_t * p_26, const union U4  p_27, const int16_t  p_28)
{ 
    int32_t *l_48 = &g_49;
    uint8_t **l_840 = &g_358[0][1][0];
    const struct S1 *l_843 = &g_14;
    struct S2 **l_858[6][5][3] = {{{(void*)0,(void*)0,&g_261},{&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261},{&g_261,(void*)0,&g_261},{&g_261,&g_261,&g_261}},{{(void*)0,(void*)0,&g_261},{&g_261,&g_261,&g_261},{&g_261,(void*)0,&g_261},{&g_261,&g_261,&g_261},{(void*)0,&g_261,&g_261}},{{&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261},{&g_261,&g_261,(void*)0},{&g_261,&g_261,&g_261},{&g_261,&g_261,(void*)0}},{{&g_261,&g_261,&g_261},{&g_261,(void*)0,&g_261},{&g_261,(void*)0,(void*)0},{&g_261,&g_261,&g_261},{&g_261,(void*)0,(void*)0}},{{&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261},{(void*)0,&g_261,(void*)0},{&g_261,(void*)0,&g_261},{&g_261,&g_261,(void*)0}},{{&g_261,&g_261,&g_261},{&g_261,&g_261,&g_261},{&g_261,&g_261,(void*)0},{&g_261,&g_261,&g_261},{&g_261,&g_261,(void*)0}}};
    struct S2 ***l_878 = &l_858[5][4][1];
    int i, j, k;
lbl_855:
    (*l_48) = g_39[0][2];
    for (g_43 = 0; (g_43 == 5); g_43 = safe_add_func_uint16_t_u_u(g_43, 9))
    { 
        int8_t l_54 = 0L;
        int32_t **l_816 = &l_48;
        int32_t l_828 = (-1L);
        int32_t l_831 = 0L;
        int32_t l_834 = 0xD3D7BB8EL;
        int32_t l_835 = 0L;
        uint64_t **l_839[5] = {&g_452,&g_452,&g_452,&g_452,&g_452};
        struct S1 ** const l_842[3] = {(void*)0,(void*)0,(void*)0};
        int i;
        (*l_816) = func_52(l_54);
        (*l_48) = g_39[1][4];
        for (g_687 = 0; (g_687 != 8); g_687 = safe_add_func_int32_t_s_s(g_687, 8))
        { 
            uint32_t *l_821[4];
            int32_t l_824 = 0x89FA6FC7L;
            uint16_t *l_825 = (void*)0;
            uint16_t *l_826[4][1][4];
            int32_t l_827 = 3L;
            int32_t l_829 = (-1L);
            int32_t l_830 = 0xE05D8903L;
            int32_t l_832 = 0L;
            int32_t l_833 = 0xC2D9A4B0L;
            uint32_t l_836 = 0UL;
            int32_t l_841 = (-1L);
            const struct S1 **l_868 = (void*)0;
            const struct S1 *l_869 = &g_870;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_821[i] = &g_39[1][1];
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_826[i][j][k] = &g_102;
                }
            }
            if ((safe_sub_func_uint32_t_u_u((g_179 = 4294967290UL), (safe_mod_func_uint16_t_u_u((l_836--), 0x0E22L)))))
            { 
                struct S1 l_847 = {0x759A5606L};
                int32_t l_848 = 1L;
                if (((*l_48) ^= g_529))
                { 
                    (*l_48) |= (((0x7E40357A5B89C6B3LL & ((0xF54E98D42A2A5BA6LL <= (l_839[4] != (void*)0)) & (l_841 = (((void*)0 != l_840) >= (p_27 , 0xFADFL))))) , l_842[2]) != l_842[2]);
                }
                else
                { 
                    const struct S1 **l_844 = &l_843;
                    (*l_844) = l_843;
                    l_848 |= ((((((void*)0 == &l_54) >= 0x8909E47E0A1EE474LL) && (p_25.f1 & ((safe_sub_func_int8_t_s_s(0L, p_27.f0)) == (0xA3702A588834598BLL & (*g_452))))) , l_847) , p_24);
                }
            }
            else
            { 
                int32_t *l_849 = &g_774[0][2];
                int32_t l_850 = 0x5FBED003L;
                for (p_25.f0 = 3; (p_25.f0 >= 0); p_25.f0 -= 1)
                { 
                    int32_t *l_851 = &l_824;
                    int32_t **l_852 = &l_851;
                    (*l_816) = l_849;
                    if (l_850)
                        break;
                    (*l_852) = ((*l_816) = l_851);
                }
                return &g_49;
            }
            for (l_835 = 21; (l_835 >= 4); l_835 = safe_sub_func_int32_t_s_s(l_835, 5))
            { 
                return l_48;
            }
            if (g_263.f0)
            { 
                uint8_t **l_860 = &g_358[0][1][0];
                int32_t *l_865[1][7][6] = {{{&g_389,&l_833,&l_832,(void*)0,&l_835,&l_835},{&l_833,&l_827,&l_827,&l_833,&l_832,&l_835},{&g_774[0][2],&l_835,&l_832,&g_178,(void*)0,&g_178},{&l_832,(void*)0,&l_832,&l_827,(void*)0,&g_389},{&l_832,&l_835,&g_774[0][2],&l_832,&l_832,&g_774[0][2]},{&l_827,&l_827,&l_833,&l_832,&l_835,&l_827},{&l_832,&l_833,&g_389,&l_827,&g_389,&l_833}}};
                int i, j, k;
                for (g_392 = 0; (g_392 >= 0); g_392 -= 1)
                { 
                    uint32_t l_856 = 0x2996981DL;
                    struct S2 ***l_859 = &l_858[1][4][0];
                    uint8_t ***l_861 = (void*)0;
                    uint8_t ***l_862 = (void*)0;
                    uint8_t ***l_863 = (void*)0;
                    uint8_t ***l_864 = &l_860;
                    int i, j;
                    if (g_529)
                        goto lbl_855;
                    g_774[g_392][(g_392 + 4)] = (((g_774[g_392][g_392] | (func_61(l_856, (!(-1L)), g_477[0][2], p_26, p_25) , (-8L))) <= g_482.f1) , (-10L));
                    if (p_28)
                        break;
                    (*l_859) = l_858[5][4][1];
                    (*l_864) = l_860;
                }
                return l_48;
            }
            else
            { 
                (*l_816) = (*l_816);
                for (g_217.f2 = 0; (g_217.f2 >= (-8)); g_217.f2--)
                { 
                    return &g_90;
                }
            }
            l_869 = l_843;
        }
    }
    (*l_48) = (safe_div_func_uint32_t_u_u((((**g_588) = p_26) == p_26), (safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_int64_t_s(((safe_add_func_uint32_t_u_u(0x07722AA4L, (((void*)0 != l_878) , ((&g_20[0][0][0] == (void*)0) , (-2L))))) & p_25.f1))) || 3UL), (*g_426)))));
    return l_48;
}



static int32_t * func_52(int8_t  p_53)
{ 
    uint64_t l_254 = 0xA8AB661E312FF3A2LL;
    struct S2 *l_262[4] = {&g_263,&g_263,&g_263,&g_263};
    int64_t l_264 = 0x18909AFE77DB0D6ELL;
    int32_t l_273 = 0x2D6315E0L;
    union U4 l_322 = {-3L};
    union U4 **l_336[6];
    uint8_t *l_344 = &g_237;
    uint8_t **l_343 = &l_344;
    int32_t l_370 = (-1L);
    int32_t l_373 = 0x052F1D85L;
    const uint64_t *l_381[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    const uint64_t **l_380 = &l_381[1];
    struct S1 l_421 = {-1L};
    const uint32_t *l_424 = &g_425;
    int32_t l_435 = 0xF0CCDED4L;
    int32_t l_436 = 0L;
    int32_t l_437 = 0x644F6611L;
    int32_t l_440 = 0x8865AB44L;
    uint64_t l_474 = 0x7764C1D55329C41CLL;
    int32_t *l_476 = &g_49;
    int32_t ** const l_475 = &l_476;
    union U5 l_554 = {-7L};
    uint32_t **l_556 = (void*)0;
    int32_t l_793 = (-1L);
    int32_t l_794 = 0xD0196728L;
    int32_t l_795 = 0L;
    uint8_t l_796 = 0UL;
    int i;
    for (i = 0; i < 6; i++)
        l_336[i] = &g_334;
    for (g_49 = (-19); (g_49 == (-2)); g_49 = safe_add_func_uint8_t_u_u(g_49, 1))
    { 
        int32_t *l_253 = &g_178;
        l_254 = ((*l_253) = (safe_rshift_func_int16_t_s_s(1L, func_59(g_14))));
    }
    if ((p_53 | ((safe_mod_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s(p_53, (((safe_add_func_uint16_t_u_u(l_254, p_53)) <= (((((g_237 ^= ((g_20[1][0][2] , g_261) == l_262[0])) ^ l_254) , p_53) != l_264) < p_53)) , l_254))) , (-5L)) && 0xC6C6E832L) , 0xB01C497EL), 0x7CF922F5L)) != 0x9BC2L)))
    { 
        uint8_t l_279 = 1UL;
        int32_t l_285 = 0x810F85DEL;
        int32_t *l_292 = &g_178;
        int32_t **l_291 = &l_292;
        uint32_t l_317 = 0x39D3A471L;
        const int32_t *l_365 = &l_273;
        int32_t l_371[6];
        union U4 l_419 = {-1L};
        struct S2 l_430 = {-3L,0x6CFBF002L,1L};
        uint8_t **l_508 = (void*)0;
        int i;
        for (i = 0; i < 6; i++)
            l_371[i] = 0xCED22EAFL;
        for (g_190 = (-20); (g_190 > 13); ++g_190)
        { 
            int32_t l_284 = 0x66945350L;
            int32_t l_286 = 0xD6E0D3A3L;
            for (g_49 = 7; (g_49 < 16); g_49 = safe_add_func_int16_t_s_s(g_49, 4))
            { 
                int8_t l_271 = (-4L);
                int32_t *l_272 = &g_263.f1;
                int32_t *l_274 = (void*)0;
                int32_t *l_275 = &g_263.f1;
                int32_t *l_276 = (void*)0;
                int32_t *l_277 = &l_273;
                int32_t *l_278 = (void*)0;
                int32_t *l_282 = &g_263.f1;
                int32_t *l_283[5][5][2] = {{{&g_263.f1,&l_273},{&g_263.f1,&g_263.f1},{&g_263.f1,&l_273},{&g_263.f1,&g_49},{&l_273,&g_49}},{{&g_263.f1,&l_273},{&g_263.f1,&g_263.f1},{&g_263.f1,&l_273},{&g_263.f1,&g_49},{&l_273,&g_49}},{{&g_263.f1,&l_273},{&g_263.f1,&g_263.f1},{&g_263.f1,&l_273},{&g_263.f1,&g_49},{&l_273,&g_49}},{{&g_263.f1,&l_273},{&g_263.f1,&g_263.f1},{&g_263.f1,&l_273},{&g_263.f1,&g_49},{&l_273,&g_49}},{{&g_263.f1,&l_273},{&g_263.f1,&g_263.f1},{&g_263.f1,&l_273},{&g_263.f1,&g_49},{&l_273,&g_49}}};
                int16_t l_287 = 0x6389L;
                int i, j, k;
                (*l_272) ^= (safe_div_func_uint16_t_u_u((g_20[1][0][2] | 1L), l_271));
                ++l_279;
                g_288++;
                if (p_53)
                    break;
                for (g_263.f0 = 0; g_263.f0 < 2; g_263.f0 += 1)
                {
                    for (g_217.f0 = 0; g_217.f0 < 1; g_217.f0 += 1)
                    {
                        for (l_285 = 0; l_285 < 3; l_285 += 1)
                        {
                            g_20[g_263.f0][g_217.f0][l_285] = 0L;
                        }
                    }
                }
            }
        }
        (*l_291) = &g_49;
        for (g_237 = 0; (g_237 <= 3); g_237 += 1)
        { 
            uint16_t *l_298 = &g_102;
            int32_t l_305[5][1];
            int32_t *l_306 = &l_285;
            uint64_t l_342[7] = {0x3E28EC3E9EDABCF0LL,0x3E28EC3E9EDABCF0LL,0x3E28EC3E9EDABCF0LL,0x3E28EC3E9EDABCF0LL,0x3E28EC3E9EDABCF0LL,0x3E28EC3E9EDABCF0LL,0x3E28EC3E9EDABCF0LL};
            uint8_t ***l_359 = &l_343;
            int16_t l_374[3][6][5] = {{{0x38B3L,(-1L),0x2763L,6L,6L},{(-1L),0xDD96L,3L,0x6852L,3L},{0xFAF5L,0xFAF5L,3L,(-1L),(-1L)},{1L,4L,0x2763L,0L,0xBF43L},{0xD2FFL,0L,3L,3L,(-1L)},{0x38B3L,(-7L),(-6L),0x2763L,3L}},{{4L,6L,3L,6L,4L},{4L,0x38B3L,0xD2FFL,(-1L),6L},{0x38B3L,(-1L),1L,0xD2FFL,3L},{0xD2FFL,1L,(-1L),0x38B3L,6L},{(-1L),0xD2FFL,0x38B3L,4L,4L},{6L,3L,6L,4L,3L}},{{0x2763L,(-6L),(-7L),0x38B3L,(-1L)},{3L,3L,0L,0xD2FFL,0xBF43L},{1L,6L,(-7L),(-1L),(-1L)},{0xFAF5L,1L,6L,6L,1L},{0xBF43L,1L,0x38B3L,0x2763L,1L},{1L,6L,(-1L),3L,0xDD96L}}};
            int8_t *l_409[2][5][2] = {{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}}};
            int64_t l_420 = 0xA4E6059952D4A453LL;
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_305[i][j] = (-1L);
            }
        }
        for (g_335.f0 = 5; (g_335.f0 >= 0); g_335.f0 -= 1)
        { 
            int32_t *l_509[2][7] = {{&g_389,&g_389,&l_436,&g_389,&g_389,&l_436,&g_389},{&l_285,&l_371[3],&l_371[3],&l_285,&l_371[3],&l_371[3],&l_285}};
            int i, j;
            l_371[g_335.f0] = ((**l_475) && 0x2FL);
            (*l_291) = ((((*g_452) |= 0xD83F40E07BC25F3DLL) < (safe_add_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u((l_508 == (*g_356)), (**l_291))) < (**l_475)), (((l_371[g_335.f0] > g_248) <= 247UL) >= p_53)))) , (*l_291));
            g_511++;
        }
    }
    else
    { 
        int16_t l_514 = 0L;
        int32_t *l_516 = &l_273;
        int32_t **l_515 = &l_516;
        struct S2 l_566 = {1L,0x3EA0B92AL,-7L};
        uint64_t *l_567[7] = {&l_254,&l_474,&l_254,&l_254,&l_474,&l_254,&l_254};
        uint32_t l_570 = 1UL;
        uint64_t **l_579 = &g_452;
        uint64_t *** const l_578 = &l_579;
        uint16_t *l_652 = &g_248;
        int16_t l_662 = 0x27FAL;
        uint32_t *l_663[7] = {(void*)0,(void*)0,&g_39[0][2],(void*)0,(void*)0,&g_39[0][2],(void*)0};
        uint16_t l_666 = 65531UL;
        union U5 l_710 = {0xC1B61C34L};
        int32_t l_716[2];
        int i;
        for (i = 0; i < 2; i++)
            l_716[i] = 0x5F620887L;
        l_514 = g_20[0][0][0];
        (*l_515) = ((*l_475) = &g_90);
        for (g_393 = 0; (g_393 <= 0); g_393 += 1)
        { 
            uint32_t l_517 = 0UL;
            int32_t l_519 = 0x0CF095F5L;
            int32_t l_520[5] = {0x86AE0492L,0x86AE0492L,0x86AE0492L,0x86AE0492L,0x86AE0492L};
            int8_t l_534 = (-9L);
            struct S1 l_555 = {0x9ED41A62L};
            struct S2 *l_593 = &g_263;
            int i;
            for (g_335.f1 = 0; (g_335.f1 <= 0); g_335.f1 += 1)
            { 
                int8_t l_518 = 0xD4L;
                int32_t *l_521 = &l_273;
                int32_t *l_522 = &g_90;
                int32_t *l_523 = &l_436;
                int32_t *l_524 = (void*)0;
                int32_t *l_525 = &g_263.f1;
                int32_t *l_526 = &l_273;
                int32_t *l_527 = &g_90;
                int32_t *l_528[2];
                const struct S2 *l_571 = (void*)0;
                struct S1 *l_584[1];
                int i;
                for (i = 0; i < 2; i++)
                    l_528[i] = &g_263.f1;
                for (i = 0; i < 1; i++)
                    l_584[i] = &g_213;
                (*l_476) |= l_517;
                ++g_529;
                if ((safe_rshift_func_uint16_t_u_s(l_534, 2)))
                { 
                    uint16_t l_539 = 65534UL;
                    (*l_521) &= (p_53 == (safe_lshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(l_539, (**l_515))), (safe_sub_func_uint64_t_u_u((((*g_426) <= g_263.f0) | (safe_unary_minus_func_uint16_t_u(((**l_515) | (safe_lshift_func_int16_t_s_u((*l_516), 9)))))), l_539)))));
                    g_545 = &g_482;
                    g_49 |= l_539;
                    if (g_141)
                        continue;
                    (*l_523) |= (**l_475);
                }
                else
                { 
                    uint64_t l_557 = 1UL;
                    (*l_523) &= (**l_515);
                    g_90 = (18446744073709551615UL & ((safe_unary_minus_func_int8_t_s(g_427)) >= (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u((**l_475), ((l_554 , &g_73) == (l_555 , l_556)))) < g_248), g_263.f1)), l_557))));
                }
                for (g_392 = 0; (g_392 >= 0); g_392 -= 1)
                { 
                    struct S1 **l_585 = &l_584[0];
                    uint8_t *l_586[2];
                    uint32_t l_587 = 0x551AABF1L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_586[i] = (void*)0;
                    (*l_515) = (*l_515);
                    l_520[4] &= (safe_mod_func_uint32_t_u_u(((l_421 , (safe_mul_func_uint16_t_u_u(0x92DBL, g_20[g_393][g_392][(g_393 + 1)]))) || ((((safe_div_func_int32_t_s_s((*l_476), (safe_sub_func_uint64_t_u_u((l_566 , ((&g_529 == (l_567[2] = &l_254)) > 0x230D7637503B1076LL)), p_53)))) , 1L) <= p_53) , 0x8CF0BF98L)), (*g_426)));
                    (*l_516) = (l_570 > (((g_335.f1 <= (l_262[0] != l_571)) , &g_358[g_392][(g_392 + 1)][g_335.f1]) == &g_358[(g_392 + 1)][(g_392 + 3)][g_393]));
                    (*l_516) = g_7[0];
                    (*l_526) |= ((g_217.f1.f2 = (((((safe_add_func_uint8_t_u_u(((**l_515) != (*l_476)), (safe_lshift_func_uint8_t_u_u((--(**l_343)), (1UL && (l_578 == ((((safe_add_func_int8_t_s_s(0x3CL, (safe_add_func_uint8_t_u_u((l_519 = (((*l_585) = l_584[0]) == &g_213)), l_587)))) && 18446744073709551615UL) || p_53) , g_588))))))) > l_587) , p_53) && p_53) >= p_53)) , g_20[g_393][g_392][(g_393 + 1)]);
                }
            }
            for (g_102 = 0; (g_102 <= 0); g_102 += 1)
            { 
                uint8_t l_590 = 0xEFL;
                if (p_53)
                    break;
                for (g_179 = 0; (g_179 <= 0); g_179 += 1)
                { 
                    struct S2 **l_594 = &l_262[0];
                    int32_t l_599 = (-8L);
                    uint32_t *l_600 = (void*)0;
                    uint32_t *l_601 = (void*)0;
                    uint64_t *l_602 = &g_453;
                    struct S1 l_605 = {0x6E25F6F3L};
                    int i, j, k;
                    ++l_590;
                    if (l_555.f0)
                        break;
                    (*l_594) = l_593;
                    g_389 |= (((safe_mul_func_int8_t_s_s((-9L), l_599)) >= (-1L)) == ((l_520[1] ^= (*g_426)) == ((((**l_578) = l_602) == ((((((safe_rshift_func_int8_t_s_u((*l_516), 5)) > ((p_53 , l_605) , p_53)) , (-6L)) , p_53) != 0x5ACBL) , (*l_380))) || p_53)));
                    if ((*l_476))
                        break;
                }
            }
            for (g_217.f2 = 0; (g_217.f2 <= 0); g_217.f2 += 1)
            { 
                struct S2 l_606[2][6] = {{{1L,1L,3L},{1L,1L,3L},{1L,1L,3L},{1L,1L,3L},{1L,1L,3L},{1L,1L,3L}},{{1L,1L,3L},{1L,1L,3L},{1L,1L,3L},{1L,1L,3L},{1L,1L,3L},{1L,1L,3L}}};
                int8_t *l_615 = &l_566.f2;
                uint16_t *l_616 = &g_377;
                int64_t *l_617 = &g_20[1][0][2];
                int32_t l_622 = 0L;
                uint64_t l_623 = 0UL;
                int i, j;
                if (((((*l_617) ^= (l_519 != (p_53 >= ((l_606[0][1] , ((*g_452) = (0xEA46L < ((*l_616) = ((*g_545) , (safe_div_func_int8_t_s_s(((*l_615) = ((safe_add_func_uint64_t_u_u((((**l_475) = (safe_lshift_func_uint8_t_u_u((**l_475), 6))) >= (safe_mul_func_uint16_t_u_u((((*g_452) ^ (-1L)) >= p_53), p_53))), l_520[1])) ^ l_519)), p_53))))))) || 0x1FC00C7DBB01A1E7LL)))) >= p_53) != 0x7EL))
                { 
                    int32_t *l_618 = &l_370;
                    int32_t *l_619 = &l_435;
                    int32_t *l_620 = &l_373;
                    int32_t *l_621[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    struct S2 **l_643[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_643[i] = &l_262[2];
                    ++l_623;
                    (**l_475) &= (~(g_102 <= ((-1L) & ((((safe_rshift_func_uint8_t_u_u((((safe_add_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((g_511 || ((*l_617) = (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_s(((**l_343) = (safe_mod_func_int64_t_s_s(((l_622 = ((l_262[3] = l_262[0]) == &l_566)) || (l_555.f0 | 0x1641CC77L)), p_53))), 6)) < 0x141E0165L), 0x0BL)))), 3)), 1)) != p_53) > 9UL), p_53)) < p_53) , (*l_620)), 0)) | 0UL) != p_53) <= 0x13L))));
                    (*l_516) = l_519;
                }
                else
                { 
                    int16_t *l_647[6][6][5] = {{{&g_263.f0,&l_606[0][1].f0,&l_566.f0,&l_566.f0,&l_606[0][1].f0},{&g_263.f0,&l_514,(void*)0,&g_263.f0,&g_325[1][2][1]},{&g_392,&g_392,&g_325[0][2][0],&l_606[0][1].f0,&l_566.f0},{&g_325[2][2][2],&l_514,&g_392,&g_392,&l_514},{&g_392,&l_606[0][1].f0,&g_325[2][1][1],&l_606[0][1].f0,&l_566.f0},{&g_263.f0,&l_566.f0,&g_392,&l_566.f0,&g_263.f0}},{{&g_263.f0,&g_392,&l_606[0][1].f0,&g_392,&g_263.f0},{&g_325[1][2][1],&g_263.f0,&l_566.f0,&g_325[1][0][2],(void*)0},{&g_392,&l_606[0][1].f0,&l_514,&l_606[0][1].f0,&g_325[2][1][1]},{&g_325[2][1][1],&l_514,&l_514,&g_263.f0,(void*)0},{&g_325[2][0][2],&g_392,&g_325[2][1][1],&l_606[0][1].f0,&g_325[2][1][1]},{&g_325[1][0][2],&g_325[2][1][1],&g_325[1][2][1],&l_514,&l_514}},{{&g_392,&g_325[1][1][2],&g_325[1][1][2],&g_392,&g_392},{&g_392,&l_514,&l_566.f0,&g_392,&g_263.f0},{&g_263.f0,&g_325[2][1][1],&l_514,&g_325[0][2][0],&g_263.f0},{&l_514,&g_392,&l_514,&g_392,&g_325[2][2][2]},{&g_325[1][1][2],&l_606[0][1].f0,&g_263.f0,&g_392,(void*)0},{&l_606[0][1].f0,&g_325[2][2][2],(void*)0,&l_514,&l_514}},{{&l_606[0][1].f0,&l_566.f0,&l_606[0][1].f0,&l_606[0][1].f0,&l_606[0][1].f0},{&g_325[2][1][1],&l_606[0][1].f0,&l_514,&g_325[2][0][1],&g_263.f0},{&l_606[0][1].f0,&g_325[2][1][1],&l_606[0][1].f0,&g_392,&g_325[2][1][1]},{&l_514,(void*)0,&l_514,&g_263.f0,&g_263.f0},{&l_514,&l_606[0][1].f0,&l_606[0][1].f0,&l_514,&l_606[0][1].f0},{&g_263.f0,&g_263.f0,(void*)0,&g_392,(void*)0}},{{&l_606[0][1].f0,&l_606[0][1].f0,&g_263.f0,&l_606[0][1].f0,&g_325[1][2][2]},{&g_392,&g_325[2][1][1],&l_514,&g_325[2][1][1],&l_566.f0},{&l_606[0][1].f0,&g_325[2][1][1],&l_514,&l_606[0][1].f0,&l_514},{&g_325[2][2][2],&g_325[2][1][1],&l_566.f0,&l_514,&g_392},{&l_566.f0,&l_606[0][1].f0,&g_325[1][1][2],&g_263.f0,&l_606[0][1].f0},{&l_566.f0,&g_263.f0,&g_325[1][2][1],&g_325[1][2][1],&g_263.f0}},{{&g_325[2][1][1],&l_606[0][1].f0,&g_325[2][1][1],&l_606[0][1].f0,&l_514},{&g_263.f0,(void*)0,&g_263.f0,&g_392,&g_325[1][2][1]},{&g_325[1][2][2],&g_325[2][1][1],&l_566.f0,&g_325[1][1][2],&g_325[2][1][1]},{&g_263.f0,&l_606[0][1].f0,&g_392,&g_325[2][1][1],&g_325[1][2][1]},{&g_325[2][1][1],&l_566.f0,(void*)0,&l_514,&l_606[0][1].f0},{&l_566.f0,&g_325[2][2][2],&g_263.f0,&g_325[2][2][2],&l_566.f0}}};
                    int i, j, k;
                    g_178 |= (0x1D5D50F0L >= (safe_mod_func_int16_t_s_s((g_325[2][1][1] &= ((**l_515) = (+g_14.f0))), 0x06E8L)));
                }
                for (l_437 = 0; (l_437 <= 0); l_437 += 1)
                { 
                    (**l_515) |= l_534;
                }
                for (g_136 = 0; (g_136 >= 0); g_136 -= 1)
                { 
                    l_520[0] = ((*l_476) = (p_53 ^ 0xEE083C3DL));
                }
            }
        }
        g_263.f1 &= (safe_div_func_int64_t_s_s(((((*g_426) && (((0x60B3L | (((safe_div_func_uint16_t_u_u(((*l_652) ^= p_53), (g_393 ^ ((safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((!l_662) || ((g_179 = ((**l_515) |= p_53)) | (safe_mul_func_uint8_t_u_u(l_666, l_373)))), g_141)), (*g_426))) >= p_53), p_53)) && (*l_516)), 0x02B8L)) & g_482.f1)))) & p_53) != p_53)) , (**l_475)) < 0UL)) , (void*)0) != (void*)0), g_546[4][0][0].f2));
        for (g_237 = (-1); (g_237 >= 54); g_237 = safe_add_func_int8_t_s_s(g_237, 4))
        { 
            int8_t l_671 = 8L;
            int32_t l_682 = 5L;
            int32_t l_683 = 8L;
            int32_t l_686 = (-10L);
            union U5 l_697 = {0x57CEE99FL};
            int64_t l_715[7][4] = {{7L,0xB63F6EE024DF543CLL,0x8794066C48FBAFE1LL,(-2L)},{(-1L),1L,(-10L),1L},{1L,0x8794066C48FBAFE1LL,7L,1L},{7L,1L,(-2L),(-2L)},{0xB63F6EE024DF543CLL,0xB63F6EE024DF543CLL,(-10L),(-1L)},{0xB63F6EE024DF543CLL,0x8794066C48FBAFE1LL,(-2L),0xB63F6EE024DF543CLL},{7L,(-1L),7L,(-2L)}};
            int i, j;
            for (l_273 = 3; (l_273 >= 0); l_273 -= 1)
            { 
                int16_t l_684 = 0x7FFCL;
                int32_t l_685 = 0x4BE1E28EL;
                uint16_t l_709 = 0x48B9L;
                int32_t l_713[7] = {0L,0L,0L,0L,0L,0L,0L};
                int i;
                for (g_392 = 0; (g_392 <= 3); g_392 += 1)
                { 
                    int32_t *l_669 = &g_263.f1;
                    int32_t *l_670 = &l_554.f1.f1;
                    int32_t *l_672 = (void*)0;
                    int32_t *l_673 = (void*)0;
                    int32_t *l_674 = &g_178;
                    int32_t *l_675 = &l_440;
                    int32_t l_676[3];
                    int32_t *l_677 = &l_435;
                    int32_t *l_678 = &g_90;
                    int32_t *l_679 = &l_676[2];
                    int32_t *l_680 = &g_178;
                    int32_t *l_681[1][4][4] = {{{&l_676[2],&l_373,&l_676[2],&l_676[1]},{&l_676[2],&l_566.f1,&l_676[1],&l_676[1]},{&l_373,&l_373,(void*)0,&l_566.f1},{&l_566.f1,&l_676[2],(void*)0,&l_676[2]}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_676[i] = 0xA431E129L;
                    (**l_515) ^= g_7[0];
                    g_687++;
                    g_690++;
                }
            }
            (**l_515) = 0x160619A0L;
        }
    }
    for (g_217.f1.f2 = 8; (g_217.f1.f2 == (-8)); g_217.f1.f2--)
    { 
        const union U4 *l_726 = (void*)0;
        const union U4 **l_725 = &l_726;
        int32_t l_736 = 0L;
        int32_t l_776 = (-1L);
        int32_t l_777 = 0xF8BA47D6L;
        int32_t l_778 = 0L;
        int32_t l_781 = 0x26A7003AL;
        int32_t l_792[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_792[i][j] = 0xF574519EL;
        }
        for (l_474 = 0; (l_474 <= 13); l_474 = safe_add_func_int16_t_s_s(l_474, 4))
        { 
            (*l_476) ^= ((((*g_545) , (-3L)) , l_725) == (void*)0);
            (*l_476) ^= 5L;
        }
        if ((((*g_357) = (void*)0) != (void*)0))
        { 
            int64_t l_742 = 0L;
            int32_t l_773 = 1L;
            int32_t l_775 = 0x9F93307EL;
            int32_t l_779 = (-3L);
            int32_t l_780 = 0L;
            int32_t l_782 = 0x477A8388L;
            int32_t l_787 = 0xB7F31491L;
            int32_t l_788 = 0x724C6594L;
            int32_t l_789 = 0L;
            int32_t l_790 = 0L;
            int32_t l_791[2][6][3] = {{{0L,1L,(-7L)},{6L,(-1L),0L},{0L,0L,0L},{(-1L),(-7L),0L},{6L,0x12A76763L,6L},{6L,1L,0x12A76763L}},{{1L,6L,6L},{0x12A76763L,6L,0L},{(-7L),1L,0L},{0x12A76763L,0x12A76763L,0L},{1L,(-7L),0L},{6L,0x12A76763L,6L}}};
            int i, j, k;
            g_389 |= ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(g_393, (p_53 , (((~(safe_lshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s(g_335.f0, l_736)), ((((safe_sub_func_uint64_t_u_u((p_53 != (+0x0E968BB24BF1EA12LL)), ((((safe_div_func_int8_t_s_s(((l_742 || p_53) >= l_736), 0xEEL)) && (*l_476)) ^ (-1L)) , p_53))) != p_53) | 4294967295UL) , p_53)))) && 0L) , 0x0FE9L)))), (**l_475))) && 0x87L);
            (*l_476) ^= p_53;
            for (g_263.f0 = 0; (g_263.f0 <= (-21)); g_263.f0 = safe_sub_func_int32_t_s_s(g_263.f0, 9))
            { 
                uint8_t l_759 = 0UL;
                int32_t l_762 = 0x34F85D48L;
                int32_t l_771 = 0L;
                int32_t l_772[1][1][3];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 3; k++)
                            l_772[i][j][k] = (-1L);
                    }
                }
                if (((*l_476) |= g_237))
                { 
                    uint16_t *l_751[6][3] = {{&g_377,&g_377,&g_377},{(void*)0,&g_377,(void*)0},{&g_377,&g_377,&g_377},{(void*)0,&g_377,(void*)0},{&g_377,&g_377,&g_377},{(void*)0,&g_377,(void*)0}};
                    int32_t l_758 = 0xD6292A58L;
                    int32_t *l_760 = &l_554.f1.f1;
                    int32_t *l_761 = &g_178;
                    int32_t *l_763 = (void*)0;
                    int32_t *l_764 = &g_389;
                    int32_t *l_765 = &l_440;
                    int32_t *l_766 = &g_49;
                    int32_t *l_767 = (void*)0;
                    int32_t *l_768 = &l_437;
                    int32_t *l_769 = (void*)0;
                    int32_t *l_770[6] = {&l_273,&l_554.f1.f1,&l_273,&l_273,&l_554.f1.f1,&l_273};
                    int i, j;
                    (*l_761) &= (0L != (((l_759 = (g_482.f1 = (((safe_div_func_uint8_t_u_u((!((((((~((void*)0 == &l_421)) >= 1L) ^ g_102) || ((safe_mod_func_uint16_t_u_u(((**l_475) &= 0x3490L), (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((g_325[1][0][2] = (safe_mul_func_uint8_t_u_u((p_53 >= g_288), 0x79L))), 1)), p_53)))) && 0x1F54L)) && l_758) ^ p_53)), g_690)) <= p_53) >= (*g_426)))) || 0x192F86314CC8675CLL) | l_736));
                    if (p_53)
                        break;
                    g_783[1][0][1]--;
                    (*l_765) &= 4L;
                    return &g_774[0][2];
                }
                else
                { 
                    int32_t *l_786[4] = {&l_777,&l_777,&l_777,&l_777};
                    int i;
                    --l_796;
                    return &g_90;
                }
            }
        }
        else
        { 
            for (l_370 = 0; (l_370 >= 0); l_370 -= 1)
            { 
                if (g_325[2][1][1])
                    break;
                return &g_389;
            }
        }
    }
    for (p_53 = 23; (p_53 >= 29); p_53 = safe_add_func_uint8_t_u_u(p_53, 3))
    { 
        struct S2 l_801[5][2][7] = {{{{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L},{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L}},{{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L}}},{{{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L},{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L}},{{-1L,0L,1L},{0x6A3AL,-1L,0L},{-1L,0L,1L},{0x6A3AL,-1L,0L},{-1L,0L,1L},{0x6A3AL,-1L,0L},{-1L,0L,1L}}},{{{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L},{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L}},{{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L}}},{{{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L},{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L}},{{-1L,0L,1L},{0x6A3AL,-1L,0L},{-1L,0L,1L},{0x6A3AL,-1L,0L},{-1L,0L,1L},{0x6A3AL,-1L,0L},{-1L,0L,1L}}},{{{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L},{1L,-1L,5L},{0x76DCL,-2L,-1L},{0x76DCL,-2L,-1L},{1L,-1L,5L}},{{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L},{0x6A3AL,-1L,0L},{-3L,1L,3L}}}};
        int8_t *l_812 = &g_217.f1.f2;
        int16_t *l_813 = (void*)0;
        int16_t *l_814 = &g_263.f0;
        int32_t *l_815 = (void*)0;
        int i, j, k;
        g_217.f1 = l_801[2][0][4];
        if (g_482.f1)
            break;
    }
    return &g_774[0][2];
}



static int16_t  func_59(struct S1  p_60)
{ 
    uint32_t *l_72[6] = {&g_7[0],(void*)0,(void*)0,&g_7[0],(void*)0,(void*)0};
    uint32_t **l_71[6][5] = {{&l_72[5],&l_72[4],&l_72[4],&l_72[4],&l_72[4]},{&l_72[4],&l_72[5],&l_72[4],&l_72[4],&l_72[4]},{&l_72[5],&l_72[4],&l_72[4],&l_72[4],&l_72[5]},{&l_72[4],&l_72[4],&l_72[5],&l_72[5],&l_72[5]},{&l_72[5],&l_72[5],&l_72[4],&l_72[5],&l_72[4]},{&l_72[4],&l_72[4],&l_72[4],&l_72[4],&l_72[5]}};
    const uint32_t *l_75 = &g_76;
    const uint32_t **l_74 = &l_75;
    union U5 l_85 = {0L};
    union U3 l_86 = {-5L};
    int64_t *l_87 = &g_20[1][0][2];
    struct S0 l_88 = {1L,0x31B0F8279224A3AALL,0x95405D21L,2L};
    struct S2 *l_252 = &l_85.f1;
    int i, j;
    (*l_252) = func_61(g_7[2], ((safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((((g_73 = (void*)0) != ((*l_74) = &g_7[1])) > ((p_60.f0 <= ((safe_div_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(7L, 1)), (p_60.f0 , (l_85 , 0L)))) & p_60.f0) & 6UL) || 0x72L), 0xEAFEL)) | p_60.f0), g_20[1][0][2])) <= 9L)) == g_7[0])) == 0xC032L) ^ g_39[0][4]), p_60.f0)), 0xA8L)) <= p_60.f0), l_86, l_87, l_88);
    return p_60.f0;
}



static struct S2  func_61(uint64_t  p_62, int32_t  p_63, union U3  p_64, int64_t * p_65, struct S0  p_66)
{ 
    int32_t *l_89 = &g_90;
    union U4 l_118 = {0x93L};
    int16_t l_130 = 0x3125L;
    int32_t l_177 = 0x513462E2L;
    struct S1 *l_212 = &g_213;
    int64_t l_230 = 9L;
    struct S2 l_251 = {1L,2L,0L};
lbl_175:
    (*l_89) |= p_64.f0;
    for (g_41 = 18; (g_41 != 26); g_41++)
    { 
        uint32_t *l_144 = &g_7[0];
        int32_t l_173[6][3][2] = {{{0xE986691DL,0L},{0x3BA3285CL,0xE986691DL},{0x78726BC3L,(-8L)}},{{(-8L),0xF393513AL},{0x3BA3285CL,0x34DB89AEL},{0xF393513AL,0x34DB89AEL}},{{0x3BA3285CL,0xF393513AL},{(-8L),(-8L)},{0x78726BC3L,0xE986691DL}},{{0x3BA3285CL,0L},{0xE986691DL,0x34DB89AEL},{0xBCB459ADL,0xE986691DL}},{{(-8L),0x78726BC3L},{(-8L),0xE986691DL},{0xBCB459ADL,0x34DB89AEL}},{{0xBCB459ADL,2L},{0x0693EAE9L,0xBCB459ADL},{0xB3A0AE14L,0xF393513AL}}};
        struct S2 l_235[6][4] = {{{0x7BC8L,1L,0xC4L},{0xA1D9L,0x3A2BCBE6L,0xDDL},{0xA1D9L,0x3A2BCBE6L,0xDDL},{0x7BC8L,1L,0xC4L}},{{0xA1D9L,0x3A2BCBE6L,0xDDL},{0x7BC8L,1L,0xC4L},{0xA1D9L,0x3A2BCBE6L,0xDDL},{0xA1D9L,0x3A2BCBE6L,0xDDL}},{{0x7BC8L,1L,0xC4L},{0x7BC8L,1L,0xC4L},{0x4101L,0xC7054000L,-5L},{0x7BC8L,1L,0xC4L}},{{0x7BC8L,1L,0xC4L},{0xA1D9L,0x3A2BCBE6L,0xDDL},{0xA1D9L,0x3A2BCBE6L,0xDDL},{0x7BC8L,1L,0xC4L}},{{0xA1D9L,0x3A2BCBE6L,0xDDL},{0x7BC8L,1L,0xC4L},{0xA1D9L,0x3A2BCBE6L,0xDDL},{0xA1D9L,0x3A2BCBE6L,0xDDL}},{{0x7BC8L,1L,0xC4L},{0x7BC8L,1L,0xC4L},{0x4101L,0xC7054000L,-5L},{0x7BC8L,1L,0xC4L}}};
        int32_t *l_236 = &l_173[5][0][1];
        int32_t *l_240 = &l_173[5][1][1];
        int32_t *l_241 = (void*)0;
        int32_t *l_242 = (void*)0;
        int32_t *l_243 = (void*)0;
        int32_t *l_244 = &l_173[5][0][1];
        int32_t *l_245 = (void*)0;
        int32_t *l_246 = &g_90;
        int32_t *l_247[3];
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_247[i] = &g_90;
        for (p_64.f0 = 0; (p_64.f0 == (-8)); --p_64.f0)
        { 
            int8_t l_105 = 0x73L;
            int64_t *l_119 = &g_20[0][0][1];
            int32_t l_139 = 0xE956D33DL;
            int32_t l_140 = 9L;
            int32_t l_172 = 0x4A6601A5L;
            uint64_t l_174[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            uint32_t *l_209 = &g_7[2];
            uint8_t *l_231 = &g_141;
            struct S2 l_232 = {0xA1E8L,-1L,0x6AL};
            int i;
            if (g_20[1][0][0])
            { 
                (*l_89) &= (-1L);
            }
            else
            { 
                uint32_t l_99 = 0x4047E605L;
                uint32_t *l_100 = &g_39[0][2];
                uint16_t *l_101 = &g_102;
                uint16_t l_120 = 4UL;
                int32_t l_153 = 0x801E7C2DL;
                int32_t *l_176[2][5][4] = {{{&l_173[4][2][0],&l_140,&l_173[4][2][0],&l_140},{&l_140,&l_173[5][2][1],&l_153,(void*)0},{(void*)0,&l_140,&l_173[5][2][0],&l_173[5][2][1]},{&l_173[5][0][1],&l_173[5][2][0],&l_173[5][2][0],&l_173[5][0][1]},{(void*)0,&l_140,&l_153,&l_173[4][2][0]}},{{&l_140,&l_153,&l_173[4][2][0],(void*)0},{&l_173[4][2][0],(void*)0,&g_49,(void*)0},{&l_173[5][2][0],&l_153,&l_140,&l_173[4][2][0]},{&l_173[0][1][0],&l_140,(void*)0,&l_173[5][0][1]},{&l_140,&l_173[5][2][0],&l_173[5][2][1],&l_173[5][2][1]}}};
                struct S1 **l_216 = &l_212;
                struct S2 l_218 = {0x5E88L,5L,-6L};
                int i, j, k;
                (*l_89) = p_64.f0;
                if ((safe_mod_func_uint8_t_u_u(p_63, (((*l_101) = (g_7[2] == (p_62 >= (((*l_100) &= l_99) ^ (*l_89))))) & (safe_mul_func_int8_t_s_s(p_63, l_105))))))
                { 
                    (*l_89) &= (l_99 || l_99);
                    (*l_89) = ((~(safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_64.f0, ((*l_101) = ((safe_rshift_func_uint8_t_u_u(g_14.f0, 6)) , ((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u((+((g_39[2][0] && (l_118 , (((g_76 && 4UL) , l_119) != p_65))) > p_64.f0)), 0UL)), p_66.f0)) > g_49))))), 14))) || l_120);
                    (*l_89) = l_120;
                }
                else
                { 
                    int32_t *l_121 = &g_90;
                    int32_t *l_122 = &g_90;
                    int32_t *l_123 = &g_90;
                    int32_t *l_124 = &g_90;
                    int32_t *l_125 = (void*)0;
                    int32_t *l_126 = &g_90;
                    int32_t *l_127 = &g_90;
                    int32_t *l_128 = &g_90;
                    int32_t *l_129 = (void*)0;
                    int32_t *l_131 = &g_90;
                    int32_t *l_132 = &g_90;
                    int32_t *l_133 = &g_90;
                    int32_t *l_134 = &g_90;
                    int32_t *l_135 = &g_90;
                    int32_t *l_137 = &g_90;
                    int32_t *l_138[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_138[i] = &g_90;
                    g_141--;
                    p_63 ^= (((((*l_101) = g_47.f0) | (l_140 |= ((((l_144 != l_121) > (safe_div_func_uint64_t_u_u(((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(((((g_47.f0 <= g_47.f0) , 0UL) & (safe_add_func_int8_t_s_s(g_90, 0x7AL))) == (*p_65)), p_66.f3)), p_66.f3)) && 0UL) & g_14.f0) , g_20[1][0][2]), g_20[1][0][1]))) || l_153) , 0x3E5AL))) != p_64.f0) > g_20[1][0][0]);
                    l_174[2] ^= ((*l_123) = (safe_lshift_func_uint8_t_u_u((p_66.f1 & ((safe_div_func_int16_t_s_s(((-4L) ^ g_39[0][2]), (safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((g_7[0] >= (safe_add_func_int64_t_s_s(((*l_119) = (safe_div_func_uint32_t_u_u(p_66.f0, (((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u((-1L), ((l_140 | g_41) >= 1UL))) , l_153), g_20[0][0][1])), p_66.f3)) || l_172) ^ (-2L))))), 1L))), 13)), l_173[5][0][1])))) < 0xA330EBA2CB814C84LL)), 2)));
                    if (l_173[5][0][1])
                        continue;
                    if (l_120)
                        goto lbl_175;
                }
                g_179++;
                for (l_120 = 0; (l_120 < 9); l_120++)
                { 
                    const int32_t *l_185 = &l_140;
                    const int32_t **l_184 = &l_185;
                    uint64_t *l_197[1][2];
                    uint32_t **l_198 = &g_73;
                    uint16_t *l_203[7][7][5] = {{{&l_120,(void*)0,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,(void*)0,(void*)0},{(void*)0,&g_102,&l_120,(void*)0,(void*)0},{&l_120,&l_120,&l_120,&g_102,&l_120},{&g_102,&l_120,&g_102,&l_120,&g_102},{&l_120,&g_102,&l_120,&g_102,(void*)0},{&g_102,&g_102,(void*)0,&l_120,&l_120}},{{&l_120,&l_120,&l_120,&l_120,&l_120},{&l_120,(void*)0,&l_120,&g_102,&g_102},{&l_120,&l_120,(void*)0,&g_102,&l_120},{&g_102,&l_120,&l_120,&g_102,&g_102},{&g_102,&g_102,&l_120,(void*)0,(void*)0},{&g_102,&l_120,(void*)0,&l_120,(void*)0},{&g_102,(void*)0,&l_120,&g_102,&l_120}},{{&g_102,&g_102,&g_102,(void*)0,&l_120},{&g_102,&l_120,&l_120,&g_102,&g_102},{&g_102,&g_102,&l_120,&l_120,&l_120},{(void*)0,&g_102,&g_102,&l_120,&l_120},{&g_102,&l_120,&g_102,&l_120,&l_120},{&g_102,&g_102,&l_120,&l_120,&l_120},{&l_120,(void*)0,&g_102,&g_102,(void*)0}},{{&l_120,&l_120,&g_102,&g_102,&l_120},{&l_120,&g_102,&l_120,(void*)0,&l_120},{&g_102,&l_120,(void*)0,&g_102,&g_102},{&g_102,&l_120,&l_120,&l_120,(void*)0},{&g_102,&g_102,&l_120,&l_120,&g_102},{&l_120,&l_120,&g_102,(void*)0,&g_102},{&g_102,&l_120,&g_102,&l_120,(void*)0}},{{&g_102,&g_102,&g_102,(void*)0,&l_120},{&g_102,&g_102,&l_120,&g_102,&g_102},{&g_102,&g_102,&l_120,&l_120,&g_102},{&g_102,(void*)0,&g_102,(void*)0,&g_102},{&l_120,&g_102,&g_102,&l_120,&g_102},{&l_120,&l_120,&l_120,&l_120,&l_120},{&l_120,&l_120,(void*)0,&g_102,(void*)0}},{{&l_120,&l_120,&l_120,&g_102,&g_102},{&g_102,(void*)0,(void*)0,&g_102,&g_102},{&g_102,&g_102,&g_102,&l_120,(void*)0},{(void*)0,&g_102,&g_102,&l_120,&g_102},{(void*)0,&l_120,&l_120,&l_120,&l_120},{(void*)0,&g_102,(void*)0,&g_102,(void*)0},{(void*)0,&g_102,&l_120,&g_102,&l_120}},{{&g_102,(void*)0,&g_102,&g_102,&g_102},{&l_120,(void*)0,&l_120,&l_120,&g_102},{&l_120,&g_102,(void*)0,&l_120,&g_102},{&g_102,&l_120,&l_120,(void*)0,&l_120},{&g_102,&l_120,&l_120,&l_120,&g_102},{&g_102,&g_102,(void*)0,&g_102,&l_120},{(void*)0,&l_120,&l_120,(void*)0,&l_120}}};
                    int8_t *l_205 = &l_105;
                    int16_t *l_207 = (void*)0;
                    int16_t *l_208 = &l_130;
                    const struct S1 **l_210 = (void*)0;
                    struct S1 **l_211[3];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_197[i][j] = &l_174[2];
                    }
                    for (i = 0; i < 3; i++)
                        l_211[i] = (void*)0;
                    (*l_184) = (void*)0;
                    l_177 ^= (l_140 = ((g_43 <= g_39[2][0]) && (((l_173[0][2][0] != (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(g_20[1][0][2], ((g_190 ^ (safe_div_func_uint64_t_u_u((p_62 &= ((safe_mod_func_int64_t_s_s((-8L), (safe_lshift_func_int8_t_s_u((p_65 == p_65), 4)))) | (*l_89))), g_7[0]))) >= p_63))), p_63))) > 0xBF8528BDE8087EC7LL) && g_49)));
                    (*l_184) = &l_177;
                    (*l_89) = ((((*l_198) = l_144) != ((safe_lshift_func_int16_t_s_s(p_62, ((*l_208) = (safe_mul_func_int8_t_s_s((g_47 , ((*l_205) |= ((g_204[0][1][3] = l_203[4][2][2]) != (void*)0))), (safe_unary_minus_func_int64_t_s(((0x00AC53F83550C489LL & 18446744073709551611UL) & 0L)))))))) , l_209)) || 0UL);
                    l_212 = (void*)0;
                }
                for (p_62 = 0; (p_62 >= 52); p_62++)
                { 
                    (*l_89) = (l_216 != (g_217 , (void*)0));
                    return l_218;
                }
            }
            (*l_89) ^= (safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u((safe_rshift_func_int8_t_s_u(g_179, 1)))), (safe_rshift_func_int8_t_s_s(0x5CL, (safe_mod_func_int8_t_s_s((g_14 , ((safe_sub_func_int32_t_s_s(p_66.f3, 0xAAAB65A9L)) != g_190)), ((*l_231) = l_230)))))));
            l_232 = l_232;
            for (g_102 = 0; (g_102 <= 2); g_102 += 1)
            { 
                for (l_139 = 0; (l_139 <= 0); l_139 += 1)
                { 
                    const union U4 *l_234 = &g_47;
                    const union U4 **l_233 = &l_234;
                    int i, j, k;
                    (*l_233) = &g_47;
                    if (g_20[(l_139 + 1)][l_139][l_139])
                        break;
                }
            }
            return l_235[5][3];
        }
        (*l_89) |= p_63;
        ++g_237;
        --g_248;
    }
    return l_251;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_7[i], "g_7[i]", print_hash_value);

    }
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_20[i][j][k], "g_20[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_39[i][j], "g_39[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_47.f0, "g_47.f0", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_190, "g_190", print_hash_value);
    transparent_crc(g_213.f0, "g_213.f0", print_hash_value);
    transparent_crc(g_217.f1.f0, "g_217.f1.f0", print_hash_value);
    transparent_crc(g_217.f1.f1, "g_217.f1.f1", print_hash_value);
    transparent_crc(g_217.f1.f2, "g_217.f1.f2", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_263.f0, "g_263.f0", print_hash_value);
    transparent_crc(g_263.f1, "g_263.f1", print_hash_value);
    transparent_crc(g_263.f2, "g_263.f2", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_325[i][j][k], "g_325[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_335.f0, "g_335.f0", print_hash_value);
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_453, "g_453", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_477[i][j].f0, "g_477[i][j].f0", print_hash_value);

        }
    }
    transparent_crc(g_482.f0, "g_482.f0", print_hash_value);
    transparent_crc(g_482.f1, "g_482.f1", print_hash_value);
    transparent_crc(g_482.f2, "g_482.f2", print_hash_value);
    transparent_crc(g_482.f3, "g_482.f3", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_546[i][j][k].f0, "g_546[i][j][k].f0", print_hash_value);
                transparent_crc(g_546[i][j][k].f1, "g_546[i][j][k].f1", print_hash_value);
                transparent_crc(g_546[i][j][k].f2, "g_546[i][j][k].f2", print_hash_value);
                transparent_crc(g_546[i][j][k].f3, "g_546[i][j][k].f3", print_hash_value);

            }
        }
    }
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_717, "g_717", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_774[i][j], "g_774[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_783[i][j][k], "g_783[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_870.f0, "g_870.f0", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1010.f0, "g_1010.f0", print_hash_value);
    transparent_crc(g_1039.f0, "g_1039.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1060[i], "g_1060[i]", print_hash_value);

    }
    transparent_crc(g_1081, "g_1081", print_hash_value);
    transparent_crc(g_1128.f0, "g_1128.f0", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1219, "g_1219", print_hash_value);
    transparent_crc(g_1258.f0, "g_1258.f0", print_hash_value);
    transparent_crc(g_1258.f1, "g_1258.f1", print_hash_value);
    transparent_crc(g_1258.f2, "g_1258.f2", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
