// SPDX-License-Identifier: MIT
// cctest_csmith_9c0a37e7.c --- cctest case csmith_9c0a37e7 (csmith seed 2617915367)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4de8c997 */
/* @exp_ticks 0x3d4b */

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

// Options:   -s 2617915367 -o /tmp/csmith_gen_6k0s8wlw/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   int16_t  f1;
   int8_t  f2;
   const int32_t  f3;
   uint8_t  f4;
};

union U1 {
   const int16_t  f0;
   struct S0  f1;
   int64_t  f2;
   int32_t  f3;
};


static int32_t g_2 = 1L;
static int32_t g_5 = 0x15E1ABE8L;
static int64_t g_11 = 0x60A421E0BEC0351ALL;
static struct S0 g_36 = {0x70FEL,0xA382L,5L,-1L,1UL};
static uint16_t g_42 = 65530UL;
static uint8_t g_48[5][1][1] = {{{0x22L}},{{0xE2L}},{{0x22L}},{{0xE2L}},{{0x22L}}};
static uint32_t g_56 = 0xDF38E70EL;
static uint64_t g_57 = 0xA5798870B3783EA6LL;
static uint32_t g_66 = 0x0F9CF50EL;
static int8_t g_71 = 0x19L;
static uint16_t g_72 = 0xAB5AL;
static uint16_t g_94[4][4] = {{0x5332L,0xF5D9L,5UL,5UL},{65530UL,65530UL,0x7C2AL,0xF5D9L},{0xF5D9L,0x5332L,0x7C2AL,0x5332L},{65530UL,0UL,5UL,0x7C2AL}};
static union U1 g_107[1][2] = {{{0L},{0L}}};
static int32_t g_134[2][1][4] = {{{(-1L),(-1L),(-1L),(-1L)}},{{(-1L),(-1L),(-1L),(-1L)}}};
static uint32_t g_141 = 4294967295UL;
static uint8_t g_199[4][2][1] = {{{0x55L},{0x55L}},{{0x75L},{0x55L}},{{0x55L},{0x75L}},{{0x55L},{0x55L}}};



static struct S0  func_1(void);
static uint8_t  func_24(const uint32_t  p_25, uint16_t  p_26, uint64_t  p_27);
static int32_t  func_29(uint32_t  p_30, int32_t  p_31, struct S0  p_32, int16_t  p_33);
static uint32_t  func_82(int8_t  p_83);




static struct S0  func_1(void)
{ 
    int16_t l_10 = 0xF246L;
    int32_t l_13 = 0x8651162FL;
    int32_t l_112 = 0x5A62595BL;
    int64_t l_183[4] = {3L,3L,3L,3L};
    int i;
    for (g_2 = 14; (g_2 > 19); ++g_2)
    { 
        uint16_t l_19[3];
        uint32_t l_117 = 0x08A2E4B1L;
        int64_t l_140[4][3] = {{0xB48C2824128E3505LL,0xB48C2824128E3505LL,0xB48C2824128E3505LL},{0x12FC398B08B8FBAELL,0x12FC398B08B8FBAELL,0x12FC398B08B8FBAELL},{0xB48C2824128E3505LL,0xB48C2824128E3505LL,0xB48C2824128E3505LL},{0x12FC398B08B8FBAELL,0x12FC398B08B8FBAELL,0x12FC398B08B8FBAELL}};
        int32_t l_188 = 0xDC146C1EL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_19[i] = 65526UL;
        for (g_5 = 8; (g_5 == 27); g_5 = safe_add_func_uint8_t_u_u(g_5, 9))
        { 
            uint8_t l_8 = 255UL;
            uint8_t l_12 = 0x6EL;
            int32_t l_14[5] = {0xD562B994L,0xD562B994L,0xD562B994L,0xD562B994L,0xD562B994L};
            const int8_t l_28[1][5] = {{0x0EL,0x0EL,0x0EL,0x0EL,0x0EL}};
            int16_t l_105 = (-1L);
            int32_t l_106[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_106[i] = 0x679D6528L;
            if (l_8)
            { 
                int32_t l_9[3][1][3] = {{{3L,0x33880E03L,3L}},{{1L,1L,1L}},{{3L,0x33880E03L,3L}}};
                int i, j, k;
                l_9[0][0][1] &= g_2;
                l_12 |= (g_11 |= l_10);
            }
            else
            { 
                int8_t l_61[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_61[i] = (-5L);
                l_14[4] = (l_13 = 0x359B504DL);
                l_13 = (((safe_mul_func_int8_t_s_s((-10L), (safe_mod_func_uint64_t_u_u((++l_19[0]), ((safe_mul_func_int8_t_s_s((l_14[4] & func_24(l_28[0][2], (func_29((safe_unary_minus_func_int32_t_s(((!l_10) == 0x7618DE0F4C9FF750LL))), g_5, g_36, g_36.f0) , 0xCF57L), l_61[0])), 0x3AL)) && 0x833775BA80B3897ELL))))) <= g_11) , l_61[0]);
                if (g_36.f4)
                    continue;
            }
            g_94[2][1]++;
            l_106[3] = ((safe_mod_func_uint16_t_u_u(((l_19[2] , g_5) && (((l_19[2] == (safe_mod_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((((g_48[3][0][0] = (l_105 | g_42)) & 0x39L) == g_66) >= l_14[4]), l_19[2])), l_8)), l_19[0]))) <= g_2) , g_94[2][1])), (-5L))) & l_19[1]);
        }
        if ((l_112 = (g_56 <= ((((((l_13 = (g_107[0][1] , (safe_mul_func_int64_t_s_s(l_19[2], ((safe_lshift_func_uint8_t_u_u(g_2, l_19[2])) < (-1L)))))) & 0x23711835L) ^ l_19[2]) <= 0L) < g_36.f3) < g_2))))
        { 
            int16_t l_118[1];
            int32_t l_136 = 0x6357ED5DL;
            int i;
            for (i = 0; i < 1; i++)
                l_118[i] = 1L;
            if ((((+((0x66FFL >= l_10) > g_48[2][0][0])) == g_36.f1) && g_36.f3))
            { 
                g_5 = 0x27DF68D3L;
                return g_36;
            }
            else
            { 
                int8_t l_114[4][4][3] = {{{1L,0x2CL,0L},{0xEBL,0x2CL,0x4AL},{0x6FL,0x2CL,0x2CL},{1L,0x2CL,0L}},{{0xEBL,0x2CL,0x4AL},{0x6FL,0x2CL,0x2CL},{1L,0x2CL,0L},{0xEBL,0x2CL,0x4AL}},{{0x6FL,0x2CL,0x2CL},{1L,0x2CL,0L},{0xEBL,0x2CL,0x4AL},{0x6FL,0x2CL,0x2CL}},{{1L,0x2CL,0L},{0xEBL,0x2CL,0x4AL},{0x6FL,0x2CL,0x2CL},{1L,0x2CL,0L}}};
                int i, j, k;
                l_118[0] = ((g_48[0][0][0] | ((l_114[1][3][0] != 0xD2F63B64L) != (safe_mul_func_int16_t_s_s(((l_117 = (((l_13 = l_114[1][3][0]) <= g_56) , l_19[0])) , g_48[1][0][0]), 0xEAACL)))) && l_114[0][1][1]);
                g_5 = l_112;
                if (g_11)
                    continue;
            }
            for (g_56 = 0; (g_56 <= 2); g_56 += 1)
            { 
                int32_t l_123 = 8L;
                int32_t l_131 = 6L;
                g_5 ^= (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(l_123, 2)), l_13));
                g_134[0][0][0] &= ((!(safe_mod_func_int8_t_s_s(((g_36 , (l_123 < (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_131 = g_36.f1), (safe_lshift_func_int16_t_s_u(0x5DA9L, l_123)))), g_36.f4)))) == l_117), g_2))) && g_72);
                l_13 = (-1L);
            }
            for (g_36.f4 = 0; (g_36.f4 <= 0); g_36.f4 += 1)
            { 
                uint8_t l_135 = 0x32L;
                union U1 l_142 = {0xEE45L};
                int i, j;
                l_135 = (g_5 = (-2L));
                g_141 ^= (((g_5 = (l_118[g_36.f4] || ((l_136 = 0x51B9L) & l_118[g_36.f4]))) < ((+(safe_rshift_func_int16_t_s_s(((g_36 , g_94[g_36.f4][(g_36.f4 + 1)]) && 0x2F37L), l_140[3][2]))) == l_118[g_36.f4])) , g_36.f4);
                g_5 = (l_142 , l_117);
            }
        }
        else
        { 
            uint16_t l_159 = 0xCA32L;
            uint16_t l_170 = 6UL;
            l_112 = g_11;
            for (g_141 = 0; (g_141 == 53); g_141 = safe_add_func_int8_t_s_s(g_141, 9))
            { 
                g_5 |= (g_48[0][0][0] == l_13);
            }
            if (g_36.f2)
            { 
                uint64_t l_164 = 0x347B2A022FCF300BLL;
                int32_t l_169 = 0x9F913A68L;
                g_5 = (safe_add_func_uint64_t_u_u(g_94[2][1], 18446744073709551613UL));
                g_5 = ((safe_mul_func_int8_t_s_s((l_19[2] || ((safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((safe_rshift_func_uint8_t_u_u(0x7AL, 4)) && (safe_sub_func_int8_t_s_s(l_140[3][2], (safe_div_func_uint16_t_u_u(l_112, g_94[3][0]))))) || g_107[0][1].f0), 0x4EL)), g_36.f4)) , 0L)), l_159)) ^ 0x6351L);
                l_170 = (safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((l_169 = ((l_164 && ((safe_mod_func_uint8_t_u_u(6UL, (-2L))) , ((((safe_add_func_int8_t_s_s(g_94[2][1], 0xB7L)) == l_112) || g_57) , g_5))) >= g_72)), 0x01E6285BD8C45169LL)), 2UL));
            }
            else
            { 
                uint32_t l_181 = 0xCF5B4EFAL;
                int32_t l_182 = (-1L);
                g_5 = ((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_s((safe_add_func_int64_t_s_s((-6L), (((l_170 | 0x3209L) || (safe_mod_func_uint8_t_u_u((g_36.f4 &= (l_182 ^= (((safe_lshift_func_uint16_t_u_s(l_159, 7)) , g_36.f3) >= l_181))), 0x84L))) >= g_107[0][1].f0))), l_181)) & l_183[2]), 6)) == l_117);
            }
        }
        for (g_66 = 0; (g_66 <= 34); g_66 = safe_add_func_uint16_t_u_u(g_66, 9))
        { 
            int8_t l_191 = 0xD7L;
            int32_t l_197[5];
            int32_t l_198 = 0xCA9B584FL;
            int i;
            for (i = 0; i < 5; i++)
                l_197[i] = 0x01D3DC7AL;
            for (l_112 = 0; (l_112 <= 3); l_112 += 1)
            { 
                struct S0 l_192 = {8L,0x8727L,-1L,0x97B07068L,0xA5L};
                int i;
                l_191 = (safe_mul_func_uint16_t_u_u(((1UL != (l_188 = l_183[l_112])) ^ (safe_div_func_uint16_t_u_u(l_183[l_112], g_72))), l_183[l_112]));
                g_5 = 0x1E00D0B8L;
                l_198 = ((l_192 , ((0x4F3CL >= (safe_mod_func_uint8_t_u_u(((((l_197[1] = ((safe_mod_func_uint8_t_u_u((g_94[2][1] > g_36.f4), 4L)) , l_140[3][2])) != 0xBF8092ABL) >= 0x02L) , l_197[4]), l_19[0]))) == 0L)) & (-2L));
            }
            g_199[0][0][0]--;
            for (g_5 = 6; (g_5 != (-16)); g_5 = safe_sub_func_int16_t_s_s(g_5, 1))
            { 
                int32_t l_212 = (-8L);
                l_212 = (safe_mul_func_int16_t_s_s(l_188, (safe_add_func_int32_t_s_s(((((safe_lshift_func_int8_t_s_u((g_107[0][1].f1.f2 = (4UL >= ((((((safe_mul_func_uint8_t_u_u((0x0C13L >= ((((0x455545A2L >= 1L) ^ l_112) && l_197[1]) || g_48[2][0][0])), g_72)) < (-1L)) < g_5) , g_11) > 0x3C79E369C8CF9179LL) != g_134[0][0][0]))), 2)) , 1L) && 0x3DL) ^ g_66), l_183[2]))));
            }
        }
    }
    return g_36;
}



static uint8_t  func_24(const uint32_t  p_25, uint16_t  p_26, uint64_t  p_27)
{ 
    int8_t l_67 = 0x76L;
    int32_t l_68 = (-1L);
    int32_t l_69 = (-3L);
    int32_t l_70[4][1] = {{1L},{(-10L)},{1L},{(-10L)}};
    int i, j;
    for (g_42 = (-24); (g_42 == 4); ++g_42)
    { 
        for (g_36.f2 = (-14); (g_36.f2 == (-14)); g_36.f2 = safe_add_func_int32_t_s_s(g_36.f2, 7))
        { 
            if (g_66)
                break;
            if (p_25)
                break;
        }
        if (g_5)
            continue;
        if (l_67)
            continue;
    }
    g_72--;
    for (g_56 = 10; (g_56 != 55); g_56 = safe_add_func_uint8_t_u_u(g_56, 9))
    { 
        uint16_t l_91 = 0UL;
        int32_t l_92 = 0xAD11CF51L;
        int32_t l_93[1][5] = {{0xFF85525CL,0xFF85525CL,0xFF85525CL,0xFF85525CL,0xFF85525CL}};
        int i, j;
        for (g_36.f0 = 3; (g_36.f0 >= 9); g_36.f0 = safe_add_func_int16_t_s_s(g_36.f0, 2))
        { 
            for (l_67 = 0; (l_67 == (-9)); l_67--)
            { 
                l_93[0][3] |= (((safe_unary_minus_func_uint32_t_u(func_82(p_25))) , ((safe_mod_func_int32_t_s_s(((((safe_div_func_int8_t_s_s(g_11, ((l_92 &= (((0x15EAL && l_91) <= 0xE720F54F738DB222LL) < l_70[0][0])) , 0xFCL))) >= 0x5D6BL) || p_26) || g_56), p_27)) != p_25)) != 5L);
            }
        }
        for (l_68 = 0; (l_68 <= 0); l_68 += 1)
        { 
            int i, j;
            return l_70[l_68][l_68];
        }
    }
    return g_71;
}



static int32_t  func_29(uint32_t  p_30, int32_t  p_31, struct S0  p_32, int16_t  p_33)
{ 
    int32_t l_60 = 8L;
    for (p_32.f0 = 1; (p_32.f0 >= 25); p_32.f0 = safe_add_func_uint64_t_u_u(p_32.f0, 3))
    { 
        for (p_32.f1 = 0; (p_32.f1 < 12); p_32.f1 = safe_add_func_int64_t_s_s(p_32.f1, 3))
        { 
            int32_t l_41 = 0L;
            --g_42;
            for (p_30 = 0; (p_30 < 55); p_30 = safe_add_func_int8_t_s_s(p_30, 1))
            { 
                int8_t l_47 = (-1L);
                int32_t l_51 = 0xE903ADFEL;
                g_48[2][0][0]--;
                l_51 |= p_32.f1;
            }
            for (g_36.f4 = 0; (g_36.f4 <= 1); g_36.f4++)
            { 
                l_41 = p_32.f4;
                g_56 = ((g_42 != (p_32.f3 < (safe_sub_func_uint8_t_u_u(p_30, 0UL)))) == 1UL);
            }
        }
        ++g_57;
    }
    return l_60;
}



static uint32_t  func_82(int8_t  p_83)
{ 
    uint8_t l_84 = 0xB9L;
    --l_84;
    return p_83;
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
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_36.f0, "g_36.f0", print_hash_value);
    transparent_crc(g_36.f1, "g_36.f1", print_hash_value);
    transparent_crc(g_36.f2, "g_36.f2", print_hash_value);
    transparent_crc(g_36.f3, "g_36.f3", print_hash_value);
    transparent_crc(g_36.f4, "g_36.f4", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_48[i][j][k], "g_48[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_56, "g_56", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_94[i][j], "g_94[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_107[i][j].f0, "g_107[i][j].f0", print_hash_value);

        }
    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_134[i][j][k], "g_134[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_199[i][j][k], "g_199[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
