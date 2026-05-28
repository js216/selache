// SPDX-License-Identifier: MIT
// cctest_csmith_209b3935.c --- cctest case csmith_209b3935 (csmith seed 547043637)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x6efee3b0 */
/* @exp_ticks 0x6ac1 */

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

// Options:   -s 547043637 -o /tmp/csmith_gen_ja_1r6ec/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int16_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int32_t  f3;
};

union U1 {
   uint32_t  f0;
   const uint32_t  f1;
};


static int32_t g_2 = 0x1E42A43DL;
static int16_t g_5 = 3L;
static uint32_t g_6 = 0x0E3580D4L;
static int8_t g_24 = 0x75L;
static uint32_t g_58 = 1UL;
static uint32_t g_59[5][4] = {{6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL},{6UL,6UL,6UL,6UL}};
static uint32_t g_63 = 0x3D064616L;
static int32_t g_77[1] = {1L};
static int16_t g_78[3] = {0x7622L,0x7622L,0x7622L};
static int32_t g_111[4][5][3] = {{{0L,5L,(-2L)},{0x0A8E6C66L,6L,(-2L)},{(-2L),0xEBBFAC55L,0xAC1EF8B3L},{0x0A8E6C66L,0xEBBFAC55L,0x0A8E6C66L},{0L,6L,0xAC1EF8B3L}},{{0L,5L,(-2L)},{0x0A8E6C66L,6L,(-2L)},{(-2L),0L,0x93CE431CL},{(-8L),0L,(-8L)},{0x5C4AE6DAL,0x0A8E6C66L,0x93CE431CL}},{{0x5C4AE6DAL,(-2L),0xED7233D1L},{(-8L),0x0A8E6C66L,0xED7233D1L},{0xED7233D1L,0L,0x93CE431CL},{(-8L),0L,(-8L)},{0x5C4AE6DAL,0x0A8E6C66L,0x93CE431CL}},{{0x5C4AE6DAL,(-2L),0xED7233D1L},{(-8L),0x0A8E6C66L,0xED7233D1L},{0xED7233D1L,0L,0x93CE431CL},{(-8L),0L,(-8L)},{0x5C4AE6DAL,0x0A8E6C66L,0x93CE431CL}}};
static int8_t g_122 = 1L;
static uint32_t g_125 = 0x8AEE2D86L;
static int64_t g_140[1] = {0x917A0EAAE7D9AD9CLL};
static uint32_t g_141 = 1UL;
static struct S0 g_153 = {-7L,0UL,-10L,-7L};
static union U1 g_158 = {0x7552BDADL};



static int32_t  func_1(void);
static uint64_t  func_15(int16_t  p_16, uint8_t  p_17, uint32_t  p_18, uint8_t  p_19);
static int16_t  func_35(int32_t  p_36, int16_t  p_37, union U1  p_38, int16_t  p_39);
static uint16_t  func_45(uint64_t  p_46, uint64_t  p_47, int32_t  p_48, uint8_t  p_49);




static int32_t  func_1(void)
{ 
    int64_t l_9[3][3][3] = {{{0x223FA3A92BD42CA8LL,0xA00D0E75D5F8D9A2LL,0xAE7B79F6A715CC48LL},{0L,0x1647C2C9EBF495E3LL,0L},{0L,0x223FA3A92BD42CA8LL,0xAE7B79F6A715CC48LL}},{{0xC7AF5AF8B5131D8BLL,0xC7AF5AF8B5131D8BLL,0xBA29F58382BDB979LL},{5L,0x223FA3A92BD42CA8LL,0x223FA3A92BD42CA8LL},{0xBA29F58382BDB979LL,0x1647C2C9EBF495E3LL,(-7L)}},{{5L,0xA00D0E75D5F8D9A2LL,5L},{0xC7AF5AF8B5131D8BLL,0xBA29F58382BDB979LL,(-7L)},{0L,0L,0x223FA3A92BD42CA8LL}}};
    int64_t l_25 = 0x2589D38951FE511BLL;
    int64_t l_40[1][4][5] = {{{0L,0L,0L,0L,0L},{0x70D8AC507B3925B9LL,0xDAED0F12AFBCAE26LL,0x70D8AC507B3925B9LL,0xDAED0F12AFBCAE26LL,0x70D8AC507B3925B9LL},{0L,0L,0L,0L,0L},{0x70D8AC507B3925B9LL,0xDAED0F12AFBCAE26LL,0x70D8AC507B3925B9LL,0xDAED0F12AFBCAE26LL,0x70D8AC507B3925B9LL}}};
    union U1 l_50 = {0UL};
    int32_t l_152 = (-1L);
    struct S0 l_154 = {0x4AD7L,0xE2D9781FL,0xDE26L,0x8837D795L};
    struct S0 l_168 = {0x67FEL,0x3056C786L,-1L,2L};
    int i, j, k;
    for (g_2 = 0; (g_2 != 27); g_2 = safe_add_func_int64_t_s_s(g_2, 9))
    { 
        uint32_t l_20 = 18446744073709551615UL;
        int32_t l_34 = (-1L);
        int32_t l_142 = 0xD93E5480L;
        struct S0 l_155 = {0x42FEL,9UL,0x580CL,0xC66A0E27L};
        int32_t l_174 = 0x3EB9074BL;
        l_25 |= (((--g_6) , l_9[2][0][2]) == (safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(func_15((g_5 &= l_20), (g_2 , l_20), g_2, g_2))), g_2)) >= 0x236728ADL), l_20)));
        for (g_24 = 0; (g_24 != 18); g_24 = safe_add_func_int32_t_s_s(g_24, 6))
        { 
            const int32_t l_143 = (-1L);
            int8_t l_149[2];
            int32_t l_151 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_149[i] = 1L;
            if ((safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s((g_122 &= ((l_142 = (safe_sub_func_int16_t_s_s((l_34 |= (g_5 != g_24)), func_35(l_40[0][0][3], (safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(func_45((l_20 < g_6), l_20, g_5, l_9[2][0][2]), 6)), g_24)), l_50, l_50.f1)))) | l_9[2][2][2])), 0x4CL)), l_143)))
            { 
                return g_63;
            }
            else
            { 
                uint64_t l_150[2][2] = {{0xFDE6EB9DFCDC455ALL,0xFDE6EB9DFCDC455ALL},{0xFDE6EB9DFCDC455ALL,0xFDE6EB9DFCDC455ALL}};
                int i, j;
                l_152 &= (g_125 & (l_151 = ((((((!(g_5 && l_142)) & (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(l_149[1], l_9[2][0][2])) , l_150[1][0]), 1))) != 0L) , (-5L)) < 0x456AL) == g_111[3][2][1])));
                l_34 = 0x44D0B283L;
            }
            for (g_125 = 0; (g_125 <= 0); g_125 += 1)
            { 
                if (g_125)
                    break;
                g_153 = g_153;
            }
            l_155 = l_154;
        }
        if (((safe_mod_func_int8_t_s_s((((l_154.f1 < (((g_158 , 9UL) , (g_78[1] >= l_154.f3)) > (-6L))) || g_140[0]) >= 0xB65092C45C1CA509LL), g_158.f0)) , l_154.f2))
        { 
            uint8_t l_166 = 0x4CL;
            int32_t l_167 = (-7L);
            int16_t l_173 = 0x1020L;
            for (g_153.f0 = 0; (g_153.f0 < (-4)); g_153.f0 = safe_sub_func_int16_t_s_s(g_153.f0, 8))
            { 
                int8_t l_165 = (-1L);
                g_153.f3 |= (l_167 = (((((safe_div_func_int8_t_s_s(0x4BL, ((g_77[0] , (((0xB545B5AAB8F2B49FLL <= (0x936AL & 0UL)) && 0xD3L) , g_58)) , 0x93L))) , l_40[0][3][4]) >= g_140[0]) , l_165) , l_166));
            }
            l_174 = (((g_158.f0 ^ ((((l_155 = l_168) , (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(l_20, 0xEA5956BBL)), g_153.f0))) , l_173) , 255UL)) , 0x20F3236F7AE06B29LL) ^ 1L);
        }
        else
        { 
            int8_t l_175[2];
            int i;
            for (i = 0; i < 2; i++)
                l_175[i] = 0L;
            g_153.f3 = (g_125 >= ((l_175[0] >= (((((0xB1L != (-1L)) < g_5) > 0x4BL) & l_175[1]) > g_153.f0)) != l_175[1]));
            for (l_154.f2 = 0; (l_154.f2 > 0); l_154.f2 = safe_add_func_int64_t_s_s(l_154.f2, 4))
            { 
                struct S0 l_178 = {0xC03AL,4294967295UL,-1L,1L};
                l_178 = l_155;
                if (g_153.f1)
                    break;
            }
        }
    }
    g_153.f3 = g_153.f1;
    return l_168.f1;
}



static uint64_t  func_15(int16_t  p_16, uint8_t  p_17, uint32_t  p_18, uint8_t  p_19)
{ 
    uint32_t l_23 = 0xBC21B07FL;
    g_24 = (safe_lshift_func_uint8_t_u_u((l_23 , p_19), 0));
    return l_23;
}



static int16_t  func_35(int32_t  p_36, int16_t  p_37, union U1  p_38, int16_t  p_39)
{ 
    uint32_t l_55 = 0x06E71EBDL;
    int32_t l_60 = 0x59559C29L;
    int32_t l_61 = (-1L);
    int32_t l_62 = 0x405A8158L;
    int32_t l_79 = (-7L);
    const struct S0 l_82 = {0x895AL,1UL,0xDEFEL,0xEB263489L};
    struct S0 l_83[3][2] = {{{0x7123L,0x72E3E38FL,-9L,1L},{0x7123L,0x72E3E38FL,-9L,1L}},{{0x7123L,0x72E3E38FL,-9L,1L},{0x7123L,0x72E3E38FL,-9L,1L}},{{0x7123L,0x72E3E38FL,-9L,1L},{0x7123L,0x72E3E38FL,-9L,1L}}};
    int64_t l_138 = 0xE424006628F03758LL;
    int i, j;
    g_58 = ((9L != (g_5 < (safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(l_55, 5)), (safe_div_func_uint64_t_u_u((1UL != p_38.f0), p_37)))))) != 6UL);
    for (p_37 = 0; p_37 < 5; p_37 += 1)
    {
        for (p_38.f0 = 0; p_38.f0 < 4; p_38.f0 += 1)
        {
            g_59[p_37][p_38.f0] = 18446744073709551615UL;
        }
    }
    if (((((g_78[1] = (l_60 = (g_77[0] = (((((((g_63--) == (safe_unary_minus_func_int16_t_s((safe_mul_func_int8_t_s_s(p_39, p_37))))) ^ ((((safe_mod_func_int16_t_s_s(l_55, (safe_mod_func_uint32_t_u_u((safe_div_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((p_38.f1 >= g_5), 0L)) > l_60), 0x3791L)), g_24)))) >= g_2) > 0xF8BA45C3L) || l_61)) < 0L) >= 0x6BL) == 65535UL) < l_60)))) , 255UL) < l_79) || 0L))
    { 
        uint8_t l_96 = 0x85L;
        int32_t l_98 = (-1L);
        for (p_37 = 4; (p_37 > (-7)); p_37--)
        { 
            uint32_t l_97 = 18446744073709551609UL;
            const uint32_t l_108 = 18446744073709551613UL;
            int32_t l_112 = 0xF9330BF8L;
            l_83[1][1] = l_82;
            for (g_63 = 0; (g_63 <= 3); g_63 += 1)
            { 
                int i, j;
                if (g_59[(g_63 + 1)][g_63])
                    break;
                l_83[1][1].f3 ^= ((safe_add_func_int32_t_s_s((((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(p_39, (safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((((safe_div_func_int16_t_s_s(g_2, p_38.f1)) && 0xC6491A58L) & g_59[3][1]), 2L)) | p_38.f0), 0xEC96EA31L)))), l_96)) & g_24) ^ p_38.f1), l_97)) ^ 0x3D913691F75FC544LL);
                l_98 |= g_77[0];
            }
            l_112 = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((((g_111[3][4][1] = (((safe_unary_minus_func_uint8_t_u((l_108 >= (safe_lshift_func_uint8_t_u_u((g_78[2] != (l_60 = (l_108 & 0xA820L))), l_83[1][1].f2))))) == l_98) != p_36)) ^ l_96) | 0L), g_77[0])), p_39)), g_78[1]));
        }
        for (l_60 = 0; (l_60 > 19); l_60++)
        { 
            return p_39;
        }
    }
    else
    { 
        int16_t l_123 = 0x5CD9L;
        int32_t l_124 = (-1L);
        uint16_t l_139 = 65535UL;
        for (p_38.f0 = (-18); (p_38.f0 >= 5); ++p_38.f0)
        { 
            int64_t l_119[2];
            int32_t l_120[4][1][4];
            int32_t l_121[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_119[i] = 0x5471C440229A812DLL;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_120[i][j][k] = (-2L);
                }
            }
            for (i = 0; i < 2; i++)
                l_121[i] = 0x366CA3FDL;
            for (p_37 = 18; (p_37 < 9); --p_37)
            { 
                return g_78[1];
            }
            --g_125;
        }
        g_141 = ((p_39 >= ((safe_mul_func_uint8_t_u_u((p_38.f0 || (safe_div_func_int32_t_s_s((g_140[0] = (safe_mod_func_uint64_t_u_u(l_61, (safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_138, p_37)), l_139))))), g_77[0]))), 0x6BL)) && 0x4BC8L)) <= l_124);
    }
    return g_78[1];
}



static uint16_t  func_45(uint64_t  p_46, uint64_t  p_47, int32_t  p_48, uint8_t  p_49)
{ 
    return p_49;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_58, "g_58", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_59[i][j], "g_59[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_63, "g_63", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_77[i], "g_77[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_78[i], "g_78[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);

    }
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_153.f0, "g_153.f0", print_hash_value);
    transparent_crc(g_153.f1, "g_153.f1", print_hash_value);
    transparent_crc(g_153.f2, "g_153.f2", print_hash_value);
    transparent_crc(g_153.f3, "g_153.f3", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
