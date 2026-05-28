// SPDX-License-Identifier: MIT
// cctest_csmith_3871080c.c --- cctest case csmith_3871080c (csmith seed 946931724)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x27c542b7 */
/* @exp_ticks 0x3812 */

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

// Options:   -s 946931724 -o /tmp/csmith_gen_jlgmgzf7/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint16_t  f0;
   uint32_t  f1;
   int16_t  f2;
   int64_t  f3;
   const int64_t  f4;
};

union U2 {
   struct S0  f0;
   int8_t  f1;
   struct S0  f2;
   int32_t  f3;
};

union U3 {
   const uint8_t  f0;
};


static int32_t g_2 = 0L;
static int32_t g_5 = 0xABFC3938L;
static uint16_t g_9[4][3][1] = {{{0xA927L},{8UL},{0x52F6L}},{{0x52F6L},{8UL},{0xA927L}},{{8UL},{0x52F6L},{0x52F6L}},{{8UL},{0xA927L},{8UL}}};
static int16_t g_26 = 0L;
static uint32_t g_34 = 4294967292UL;
static int32_t g_45 = 1L;
static uint16_t g_63 = 0x4433L;
static uint8_t g_64 = 1UL;
static uint16_t g_102[1] = {0xC936L};
static uint32_t g_128 = 0xC446C13AL;
static union U3 g_141 = {252UL};
static uint8_t g_154 = 0xA4L;
static uint32_t g_165[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
static uint8_t g_179 = 9UL;
static uint64_t g_191 = 0xDBC5227D837D6E89LL;
static int32_t g_194[3] = {(-1L),(-1L),(-1L)};



static union U2  func_1(void);
static uint32_t  func_16(struct S0  p_17, int32_t  p_18);
static struct S0  func_19(uint8_t  p_20);
static int16_t  func_29(int64_t  p_30, uint16_t  p_31, uint32_t  p_32);




static union U2  func_1(void)
{ 
    int8_t l_189 = 1L;
    uint64_t l_197 = 0UL;
    uint16_t l_204 = 65534UL;
    int32_t l_213 = (-1L);
    int64_t l_214 = 0x7660C2B2746C7578LL;
    union U2 l_215 = {{65533UL,1UL,0L,0xD07749A3EB63C3F2LL,0L}};
    for (g_2 = 20; (g_2 == (-12)); g_2--)
    { 
        int16_t l_8 = 0x0D19L;
        int32_t l_190 = 0L;
        int32_t l_192[3];
        uint32_t l_193 = 0x1ADF2D24L;
        int32_t l_195 = 0L;
        int32_t l_196 = 0x312D827AL;
        int i;
        for (i = 0; i < 3; i++)
            l_192[i] = (-10L);
        for (g_5 = 3; (g_5 < (-2)); g_5 = safe_sub_func_uint64_t_u_u(g_5, 1))
        { 
            g_9[2][0][0]++;
            for (l_8 = 0; (l_8 >= 0); l_8 -= 1)
            { 
                uint32_t l_21 = 0UL;
                int i, j, k;
                g_194[2] = (safe_sub_func_uint16_t_u_u((safe_mod_func_int64_t_s_s(((g_9[(l_8 + 2)][l_8][l_8] && (((g_165[2][0] = func_16(func_19(l_21), (g_194[2] = (((l_192[1] = ((g_191 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((safe_mul_func_uint16_t_u_u(((l_190 ^= (safe_lshift_func_uint16_t_u_s(65535UL, l_189))) , g_9[0][1][0]), g_2)) != g_141.f0), g_141.f0)), 0))) < g_9[1][0][0])) == l_21) <= l_193)))) ^ 0x6EF48D87L) && l_195)) < 0UL), g_9[0][0][0])), l_196));
            }
        }
        l_197 |= g_102[0];
    }
    g_194[2] = (0x75F21B87L == (safe_mul_func_uint16_t_u_u(((((((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(((l_204 <= ((safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_179 >= ((safe_rshift_func_uint8_t_u_u((l_213 = ((safe_lshift_func_int8_t_s_s(0L, 7)) ^ l_204)), g_141.f0)) <= g_165[1][1])), g_165[1][1])), g_191)) , 0L)) < g_179), g_165[1][1])), g_194[2])) && g_194[2]) < g_102[0]) <= 18446744073709551615UL) , 0UL) || l_214), l_197)));
    return l_215;
}



static uint32_t  func_16(struct S0  p_17, int32_t  p_18)
{ 
    g_194[2] = 0xA8D5B538L;
    return g_191;
}



static struct S0  func_19(uint8_t  p_20)
{ 
    int64_t l_22 = 0x9F4864854668DACBLL;
    int32_t l_25 = (-1L);
    struct S0 l_33 = {0UL,7UL,0L,9L,0xCC3592E7BAA9D707LL};
    int16_t l_174 = (-7L);
    int64_t l_178 = (-1L);
    l_22 = g_5;
    g_26 |= ((g_5 > (((-8L) > g_9[1][2][0]) == (l_25 = g_2))) == p_20);
    if (((safe_div_func_uint16_t_u_u(0xCECBL, func_29(g_9[2][0][0], (g_34 = (p_20 && (l_33 , p_20))), g_9[2][0][0]))) && 0xE61EL))
    { 
        int32_t l_149[3];
        struct S0 l_160 = {0x4033L,0x2A3A725CL,0xA702L,0xAF5ADCE77D404005LL,-1L};
        int i;
        for (i = 0; i < 3; i++)
            l_149[i] = (-2L);
        for (l_33.f3 = (-9); (l_33.f3 < 13); ++l_33.f3)
        { 
            struct S0 l_150 = {65529UL,8UL,-1L,-10L,1L};
            if ((((safe_mul_func_uint16_t_u_u((((safe_add_func_int32_t_s_s(p_20, (0xCAL <= l_149[2]))) ^ ((p_20 > p_20) , g_141.f0)) >= p_20), g_34)) == p_20) == g_141.f0))
            { 
                uint16_t l_153 = 0x2773L;
                g_154 &= (l_150 , ((((((0x1478L != (safe_lshift_func_int8_t_s_s(g_9[2][0][0], 4))) < l_153) ^ g_34) || g_63) <= p_20) && g_45));
                return l_150;
            }
            else
            { 
                return l_150;
            }
        }
        l_149[2] = (!(safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((l_160 , (((g_64 , ((((g_165[1][1] |= (safe_add_func_int16_t_s_s(p_20, ((((safe_mul_func_uint8_t_u_u(0x9DL, l_25)) , p_20) >= g_34) & g_102[0])))) || l_25) | 0x45D4FDDE0D53B311LL) , p_20)) , p_20) , p_20)), 0x39F9920BL)) >= 0xC085BF0B686D89AFLL), p_20)));
    }
    else
    { 
        uint16_t l_177 = 65530UL;
        int32_t l_180 = (-1L);
        l_180 = ((safe_lshift_func_int8_t_s_s(g_63, (safe_rshift_func_uint16_t_u_u((((g_179 = (safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s((l_174 > (((((((g_154 = (g_64 = ((~(+(l_25 = (l_25 & l_174)))) >= g_165[3][1]))) >= l_33.f1) , 0UL) >= 0x7604L) <= p_20) ^ l_177) != l_33.f3)), g_34)) || (-1L)) > p_20), l_178))) == l_33.f3) ^ 0x2C952AE489F4295DLL), g_63)))) > g_63);
    }
    return l_33;
}



static int16_t  func_29(int64_t  p_30, uint16_t  p_31, uint32_t  p_32)
{ 
    struct S0 l_60 = {65535UL,4294967288UL,-1L,0L,0x27FB601BA2AAC5DALL};
    const union U3 l_61[4][5] = {{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}},{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}},{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}},{{0x12L},{0x12L},{0x12L},{0x12L},{0x12L}}};
    int32_t l_62 = 0x9AC7196AL;
    const int64_t l_108 = 0x438E4B99A09347D9LL;
    uint8_t l_142 = 0xAFL;
    int i, j;
lbl_106:
    for (p_32 = 0; (p_32 <= 0); p_32 += 1)
    { 
        const int8_t l_41[2] = {0xC1L,0xC1L};
        int32_t l_44[2][4][1] = {{{1L},{0xCBC59A62L},{1L},{0xCBC59A62L}},{{1L},{0xCBC59A62L},{1L},{0xCBC59A62L}}};
        int16_t l_103 = 0x3892L;
        int i, j, k;
        g_45 |= (safe_lshift_func_uint16_t_u_u(g_9[3][1][0], ((((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_41[1], (p_30 < (l_44[0][3][0] = (safe_add_func_int64_t_s_s((((((1L == p_32) < 0x624E194EL) <= p_30) || g_34) ^ g_26), 0x2E4BCB8161DBFA2FLL)))))), p_32)) <= g_26) , 0UL) != g_34)));
        if (l_44[0][3][0])
            continue;
        for (g_26 = 0; (g_26 <= 0); g_26 += 1)
        { 
            if (g_45)
                break;
            for (p_31 = 0; (p_31 <= 0); p_31 += 1)
            { 
                uint16_t l_65 = 2UL;
                int32_t l_66 = 6L;
                l_66 = (safe_mul_func_int8_t_s_s(p_32, (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_64 = ((safe_add_func_int16_t_s_s(6L, ((safe_lshift_func_uint16_t_u_s(((g_34 = ((g_63 = (safe_div_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((((g_34 ^ (l_62 = ((l_60 , l_61[1][2]) , p_30))) == (-6L)) == 4294967293UL), g_2)) != p_30), 1UL))) || 6L)) | l_44[0][3][0]), g_9[0][0][0])) , p_31))) >= p_31)), p_31)) >= l_65), 15))));
            }
        }
        for (l_60.f1 = 0; (l_60.f1 <= 0); l_60.f1 += 1)
        { 
            uint8_t l_71 = 1UL;
            int32_t l_72 = 1L;
            int32_t l_77 = (-1L);
            g_45 ^= ((l_77 |= (safe_add_func_int64_t_s_s((safe_mod_func_int8_t_s_s((l_72 = l_71), (safe_unary_minus_func_uint8_t_u((!(safe_div_func_int16_t_s_s(g_64, l_71))))))), (0x29C6L < l_62)))) ^ g_34);
            g_45 = (((safe_add_func_int8_t_s_s((safe_div_func_int64_t_s_s(g_45, ((((safe_mod_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((((((l_62 |= (((l_44[0][3][0] = (g_9[1][0][0] >= g_34)) && (safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((((1L | p_31) || l_72) || 0L) | l_72), l_61[1][2].f0)) > 255UL), g_2))) && g_9[2][0][0])) ^ g_2) == (-1L)) != g_63) < l_61[1][2].f0) != (-4L)) , g_9[2][0][0]), p_31)), p_32)) || 0x9186L) != g_64) & p_31))), 0xB9L)) | p_31) >= p_31);
            for (g_45 = 0; (g_45 <= 0); g_45 += 1)
            { 
                uint16_t l_90 = 0x2706L;
                if (l_90)
                    break;
                g_102[0] = ((((0x213B74EAL == (safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u(g_34, (safe_unary_minus_func_uint64_t_u((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xDFL, (safe_lshift_func_uint8_t_u_s(((p_32 > 0x3CL) == p_32), p_30)))), p_31)))))) | 7UL), p_31))) ^ l_44[1][0][0]) || (-1L)) || p_32);
                l_103 = (p_31 & l_77);
            }
        }
    }
    for (l_60.f1 = (-1); (l_60.f1 != 57); l_60.f1 = safe_add_func_uint32_t_u_u(l_60.f1, 2))
    { 
        uint64_t l_115 = 18446744073709551615UL;
        l_62 = p_30;
        if (p_32)
            goto lbl_106;
        l_115 = (p_30 , (((safe_unary_minus_func_uint64_t_u(l_108)) ^ 0x4FL) != (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((p_30 = (safe_rshift_func_int8_t_s_s((p_30 > l_60.f1), g_34))), g_45)), 5L))));
    }
    for (l_60.f2 = 0; (l_60.f2 == 15); ++l_60.f2)
    { 
        int8_t l_129[1];
        int32_t l_130 = 0x5EB36728L;
        int i;
        for (i = 0; i < 1; i++)
            l_129[i] = 0L;
        l_130 = (((((safe_rshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(((-1L) == (safe_sub_func_int16_t_s_s((((6UL || ((p_31 | (g_128 = 1L)) >= p_32)) || l_129[0]) && 255UL), 0xD49CL))), p_31)), 1)), 3)) && p_31) ^ l_60.f1), 14)) ^ p_30) , l_129[0]) , p_32) >= g_2);
        for (p_30 = 0; (p_30 <= 0); p_30 += 1)
        { 
            int i;
            for (l_60.f0 = 0; (l_60.f0 <= 0); l_60.f0 += 1)
            { 
                int i, j, k;
                if (g_9[(p_30 + 2)][(p_30 + 1)][l_60.f0])
                    break;
                if (l_129[l_60.f0])
                    break;
            }
            if (l_129[p_30])
                continue;
            for (l_60.f3 = 0; (l_60.f3 >= 0); l_60.f3 -= 1)
            { 
                int i, j, k;
                if (g_9[(p_30 + 3)][p_30][l_60.f3])
                    break;
                g_45 |= ((l_62 = (safe_div_func_uint8_t_u_u(g_5, ((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((0xACF3L & (((g_141 , ((g_63 || p_30) , l_129[0])) | 0x60B3L) >= 0xC2273286A6E12AA0LL)), 6UL)) ^ (-1L)), g_26)), g_9[2][0][0])), p_32)) , g_102[0])))) && p_31);
            }
        }
        g_45 = g_34;
    }
    return l_142;
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_9[i][j][k], "g_9[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_102[i], "g_102[i]", print_hash_value);

    }
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_165[i][j], "g_165[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_194[i], "g_194[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
