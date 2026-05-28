// SPDX-License-Identifier: MIT
// cctest_csmith_fec4d6d9.c --- cctest case csmith_fec4d6d9 (csmith seed 4274312921)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf633bb01 */
/* @exp_ticks 0x45f1 */

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

// Options:   -s 4274312921 -o /tmp/csmith_gen_r46sh4o8/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint8_t  f1;
   int32_t  f2;
   const uint32_t  f3;
   const int8_t  f4;
   int8_t  f5;
};

#pragma pack(push)
#pragma pack(1)
struct S1 {
   int16_t  f0;
   int32_t  f1;
   struct S0  f2;
   uint32_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U2 {
   struct S1  f0;
   int32_t  f1;
   int32_t  f2;
   int64_t  f3;
};

union U3 {
   const uint32_t  f0;
   uint32_t  f1;
   int64_t  f2;
   const uint8_t  f3;
};

union U4 {
   int32_t  f0;
};

union U6 {
   struct S0  f0;
   struct S1  f1;
   const uint64_t  f2;
};

union U7 {
   int16_t  f0;
   int16_t  f1;
   struct S1  f2;
};


static int32_t g_2 = 0xC8959310L;
static union U7 g_3 = {0x662DL};
static union U3 g_34 = {2UL};
static int64_t g_41 = 0xD127A4EF21DDBC75LL;
static union U4 g_52 = {7L};
static union U7 g_75 = {0x88D3L};
static union U6 g_86[3][2][2] = {{{{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}},{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}}},{{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}},{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}}}},{{{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}},{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}}},{{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}},{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}}}},{{{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}},{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}}},{{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}},{{65535UL,0x39L,0xBCFCC2E1L,18446744073709551615UL,5L,0x78L}}}}};
static int16_t g_96[3][1] = {{0xBF67L},{0xBF67L},{0xBF67L}};
static uint32_t g_97 = 1UL;



static union U7  func_1(void);
static struct S0  func_13(int64_t  p_14, uint32_t  p_15, uint16_t  p_16, uint16_t  p_17, const uint16_t  p_18);
static int16_t  func_23(int32_t  p_24, uint16_t  p_25, union U4  p_26, union U3  p_27, int64_t  p_28);
static const uint16_t  func_31(union U3  p_32, int8_t  p_33);




static union U7  func_1(void)
{ 
    union U3 l_39 = {6UL};
    uint16_t l_85 = 0xAC20L;
    int32_t l_90 = 4L;
    uint32_t l_91 = 0x95B858EEL;
    const union U2 l_94[2] = {{{0xD0AFL,-10L,{0x72F3L,249UL,0xBCF61366L,0x2C43C23CL,-2L,0L},0x0BAEE16EL,0x25L}},{{0xD0AFL,-10L,{0x72F3L,249UL,0xBCF61366L,0x2C43C23CL,-2L,0L},0x0BAEE16EL,0x25L}}};
    int32_t l_95 = 0x50EB8E47L;
    uint8_t l_102 = 3UL;
    uint8_t l_105 = 0xC9L;
    union U7 l_106 = {-10L};
    int i;
    if (g_2)
    { 
        return g_3;
    }
    else
    { 
        uint16_t l_8 = 8UL;
        int32_t l_42[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        uint16_t l_51 = 0UL;
        uint8_t l_87 = 0x43L;
        int i;
        for (g_3.f2.f2.f0 = 4; (g_3.f2.f2.f0 > 49); g_3.f2.f2.f0++)
        { 
            uint32_t l_11 = 4294967294UL;
            int32_t l_12 = 0x3B4709BAL;
            union U3 l_53 = {0x5D0BC5DEL};
            for (g_2 = 18; (g_2 < (-1)); g_2 = safe_sub_func_int16_t_s_s(g_2, 5))
            { 
                --l_8;
            }
            if (l_11)
            { 
                uint16_t l_40 = 0UL;
                int32_t l_68 = 0L;
                g_2 = ((l_12 = g_3.f0) < 65531UL);
                g_2 = l_11;
                l_12 = (g_75.f2.f2.f2 = (func_13(((safe_add_func_int32_t_s_s((((safe_add_func_int8_t_s_s((l_68 = (func_23(g_3.f0, (((l_51 = (safe_div_func_uint8_t_u_u(l_11, (((func_31(g_34, (l_42[0] |= (safe_add_func_int32_t_s_s((((g_41 = (safe_add_func_int16_t_s_s(((l_39 , g_2) > l_40), l_8))) ^ g_34.f3) , l_40), g_34.f3)))) && g_41) == l_39.f3) , g_34.f3)))) || 255UL) <= l_12), g_52, l_53, g_34.f0) | 0x4F81L)), l_40)) ^ 4UL) || l_53.f3), g_3.f1)) <= l_39.f0), l_53.f1, g_34.f0, g_3.f0, g_34.f0) , g_41));
            }
            else
            { 
                l_87 |= ((g_34.f1++) ^ (safe_add_func_int16_t_s_s(((l_85 | ((g_86[0][0][1] , g_86[0][1][0]) , 0x5D766400F4CAC200LL)) & g_86[0][0][1].f0.f4), l_11)));
                if (l_51)
                    continue;
            }
        }
    }
    g_2 |= (safe_mul_func_uint8_t_u_u(((l_91--) >= (((g_86[0][0][1].f0.f3 < g_86[0][0][1].f0.f0) == (l_94[1] , ((g_97++) != ((l_95 = ((l_105 = (safe_rshift_func_uint16_t_u_u((((--l_102) > (g_34.f3 >= l_94[1].f0.f2.f4)) == g_86[0][0][1].f0.f2), 14))) & g_34.f1)) || g_41)))) == 0x6A208CA9L)), g_75.f0));
    return l_106;
}



static struct S0  func_13(int64_t  p_14, uint32_t  p_15, uint16_t  p_16, uint16_t  p_17, const uint16_t  p_18)
{ 
    uint64_t l_69[5] = {1UL,1UL,1UL,1UL,1UL};
    int32_t l_70 = 0xFA3C5B2EL;
    struct S0 l_80 = {1UL,0x72L,-10L,0x272BDBE1L,6L,0x7DL};
    int i;
    for (g_52.f0 = 3; (g_52.f0 >= 0); g_52.f0 -= 1)
    { 
        int32_t l_79 = 0x83399F16L;
        int i;
        l_79 = (((l_70 = (-8L)) == ((((safe_sub_func_int64_t_s_s((((g_34 , (((((safe_add_func_uint8_t_u_u(((g_75 , ((+((safe_lshift_func_int8_t_s_s(0xFCL, 3)) <= l_69[(g_52.f0 + 1)])) && g_34.f1)) , 0xCEL), l_69[1])) ^ p_16) != l_69[2]) ^ g_3.f0) != g_41)) || 0x045B34FEL) <= g_3.f1), 0x4644DEA1A09BBF73LL)) <= g_3.f0) , l_69[(g_52.f0 + 1)]) || p_14)) , (-1L));
    }
    g_75.f2.f1 = (-10L);
    return l_80;
}



static int16_t  func_23(int32_t  p_24, uint16_t  p_25, union U4  p_26, union U3  p_27, int64_t  p_28)
{ 
    union U7 l_57 = {0xBC4DL};
    int32_t l_60 = 0xEE15D11EL;
    int32_t l_63[2];
    int32_t l_66[3];
    uint32_t l_67 = 0xC4A2FBAAL;
    int i;
    for (i = 0; i < 2; i++)
        l_63[i] = 2L;
    for (i = 0; i < 3; i++)
        l_66[i] = 0x47197E38L;
    for (p_28 = 0; (p_28 >= 16); p_28++)
    { 
        int32_t l_56[3][2][4] = {{{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)}},{{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)}},{{1L,(-1L),1L,(-1L)},{1L,(-1L),1L,(-1L)}}};
        int i, j, k;
        l_60 = ((((p_27.f2 = p_25) || l_56[2][1][0]) , l_57) , ((safe_sub_func_int16_t_s_s((g_3.f1 , p_27.f0), 65535UL)) , 0x5B94995FL));
    }
    l_60 ^= p_24;
    g_2 = ((safe_div_func_int8_t_s_s(l_63[1], (safe_sub_func_int64_t_s_s(0L, g_34.f0)))) == (l_66[2] >= 0x03FBD5CEL));
    return l_67;
}



static const uint16_t  func_31(union U3  p_32, int8_t  p_33)
{ 
    uint16_t l_47 = 0xD5D7L;
    int32_t l_48[5] = {0L,0L,0L,0L,0L};
    int32_t l_49 = (-1L);
    int32_t l_50 = 0x1BE2FC3CL;
    int i;
    l_50 = (g_2 = (0x17C9L > (l_49 = (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((l_48[3] |= (0x883EL > (g_34.f0 ^ (((l_47 , 0x2955E3164C116104LL) <= g_41) < 0xC75DF642D9490441LL)))), (-1L))), 1UL)))));
    return p_32.f3;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3.f0, "g_3.f0", print_hash_value);
    transparent_crc(g_3.f1, "g_3.f1", print_hash_value);
    transparent_crc(g_34.f0, "g_34.f0", print_hash_value);
    transparent_crc(g_34.f1, "g_34.f1", print_hash_value);
    transparent_crc(g_34.f3, "g_34.f3", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_75.f0, "g_75.f0", print_hash_value);
    transparent_crc(g_75.f1, "g_75.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_86[i][j][k].f0.f0, "g_86[i][j][k].f0.f0", print_hash_value);
                transparent_crc(g_86[i][j][k].f0.f1, "g_86[i][j][k].f0.f1", print_hash_value);
                transparent_crc(g_86[i][j][k].f0.f2, "g_86[i][j][k].f0.f2", print_hash_value);
                transparent_crc(g_86[i][j][k].f0.f3, "g_86[i][j][k].f0.f3", print_hash_value);
                transparent_crc(g_86[i][j][k].f0.f4, "g_86[i][j][k].f0.f4", print_hash_value);
                transparent_crc(g_86[i][j][k].f0.f5, "g_86[i][j][k].f0.f5", print_hash_value);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_96[i][j], "g_96[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_97, "g_97", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
