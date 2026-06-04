// SPDX-License-Identifier: MIT
// cctest_csmith_7726b42c.c --- cctest case csmith_7726b42c (csmith seed 1999025196)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xc8f14d60 */
/* @exp_ticks 0x137e */

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

// Options:   -s 1999025196 -o /home/agent1/fast_data/tmp/csmith_gen_f85re8hj/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
};

union U1 {
   int16_t  f0;
};


static uint32_t g_14 = 1UL;
static int64_t g_15 = 0xFC3938DD44AD3740LL;
static uint64_t g_16 = 18446744073709551610UL;
static int8_t g_30 = 0x1DL;
static union U1 g_32 = {0xE24BL};
static int32_t g_43 = 0x47A0585CL;
static uint8_t g_44[4][4][5] = {{{1UL,0x92L,0x7EL,0x92L,1UL},{250UL,0x2BL,0x3DL,0x04L,6UL},{3UL,0x2BL,0x28L,0x93L,0x4BL},{250UL,0x3DL,6UL,0x2BL,6UL}},{{0x93L,0x93L,0x9FL,0x28L,1UL},{6UL,1UL,0UL,0x4EL,0x68L},{0x7EL,9UL,0x4BL,1UL,0x92L},{255UL,1UL,1UL,255UL,9UL}},{{0x2BL,0x93L,0UL,1UL,0x8AL},{0UL,9UL,0x4EL,0x2BL,255UL},{0x92L,0UL,1UL,1UL,0UL},{0x54L,255UL,2UL,0x68L,1UL}},{{255UL,0x93L,0x7EL,9UL,0x4BL},{255UL,0x53L,250UL,0UL,0UL},{255UL,1UL,255UL,0x2BL,0x9FL},{0x54L,2UL,0x2BL,255UL,6UL}}};
static uint64_t g_50 = 0xB45490A9DAEE1D35LL;
static int32_t g_66 = 1L;
static struct S0 g_68 = {0x0EEEF661L};
static int32_t g_109 = 0x3AFC3C34L;
static int16_t g_129 = 0x0882L;
static int32_t g_159 = 0x14ADC3B9L;
static uint32_t g_212 = 0x2DCA3039L;
static int32_t g_254 = 0L;
static uint32_t g_255 = 8UL;
static uint8_t g_256 = 0x88L;
static int64_t g_270[1] = {(-4L)};
static int8_t g_330 = 0x7BL;
static uint16_t g_368 = 0xFE62L;
static uint64_t g_371[2][3] = {{6UL,0UL,6UL},{6UL,0UL,6UL}};



static int8_t  func_1(void);
static int32_t  func_3(uint8_t  p_4, int32_t  p_5, uint8_t  p_6, int16_t  p_7);
static const int16_t  func_12(uint64_t  p_13);
static int8_t  func_22(uint16_t  p_23);




static int8_t  func_1(void)
{ 
    int16_t l_2 = 0L;
    int32_t l_155 = 0xD5A12BEBL;
    const struct S0 l_179 = {1L};
    struct S0 l_180 = {0x7604D3D9L};
    int64_t l_203[2];
    int16_t l_302 = 0xD7F6L;
    uint32_t l_306 = 0xCB81C1D8L;
    const int32_t l_432 = 0L;
    int32_t l_470[3][3][1] = {{{(-1L)},{0L},{(-1L)}},{{0L},{(-1L)},{0L}},{{(-1L)},{0L},{(-1L)}}};
    int8_t l_471 = 0xC7L;
    int16_t l_472 = 0x1014L;
    int16_t l_473 = 0x32DAL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_203[i] = 0L;
    if (l_2)
    { 
        int16_t l_24 = 0L;
        int32_t l_154 = 0xCAF5ADCEL;
        l_154 = func_3((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(func_12(g_14), 15)), 9)), (func_22(l_24) , 0xD2E80B3EL), g_32.f0, l_24);
        l_155 &= l_2;
        l_155 = (g_30 == (((safe_mul_func_uint8_t_u_u((g_159 = ((~0x228E054CL) , (g_44[1][2][3] = l_24))), ((((+((safe_sub_func_int64_t_s_s(((g_43 || g_109) == 0x87F9883EL), l_155)) < l_2)) == g_30) > l_2) != g_66))) , 0x20B58E85L) ^ g_50));
    }
    else
    { 
        const int16_t l_178 = 0L;
        int32_t l_184[5] = {0x295DAE69L,0x295DAE69L,0x295DAE69L,0x295DAE69L,0x295DAE69L};
        int16_t l_202 = (-4L);
        uint32_t l_252 = 0x795F43D3L;
        struct S0 l_303 = {0L};
        uint64_t l_332 = 9UL;
        uint32_t l_333 = 0x4765F59FL;
        int i;
        for (g_159 = 0; (g_159 <= 3); g_159 += 1)
        { 
            int32_t l_169 = 1L;
            const uint16_t l_183 = 6UL;
            g_43 = (safe_sub_func_uint64_t_u_u((safe_div_func_uint32_t_u_u(0xC3766656L, ((l_169 && (((safe_div_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((~(!((g_44[1][2][3] || g_14) & l_178))), g_50)), l_169)), g_44[1][1][3])) | l_178) != g_30)) , g_32.f0))), g_32.f0));
            l_180 = l_179;
            for (g_15 = 3; (g_15 >= 0); g_15 -= 1)
            { 
                int8_t l_191 = 0x37L;
                int32_t l_204 = 1L;
                g_43 ^= (safe_lshift_func_int8_t_s_s((((0L <= l_178) ^ (l_184[1] &= (g_32 , (l_183 >= 0L)))) ^ g_44[3][2][0]), 3));
                l_180.f0 = (((safe_rshift_func_uint8_t_u_u(0xC4L, (safe_add_func_int32_t_s_s(((g_44[0][3][0] &= (safe_mul_func_uint16_t_u_u(((-4L) ^ l_184[1]), g_16))) == l_184[4]), l_191)))) != 6L) < l_169);
                l_204 |= ((((safe_lshift_func_int16_t_s_s(((g_129 > (safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s(((safe_mod_func_int32_t_s_s(0xD4EC0B72L, 0xD6FB8A8DL)) >= (safe_sub_func_int16_t_s_s(((g_109 , 1L) <= l_202), g_43))), g_66)) , g_109), l_178))) , g_30), 6)) | g_68.f0) > 4294967294UL) && l_203[0]);
            }
        }
        g_68.f0 |= (safe_mul_func_uint16_t_u_u(((safe_unary_minus_func_uint16_t_u((l_203[0] >= (g_43 = ((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((g_212++), (~l_203[1]))), 6)) , 0x3F4ACB36L))))) < (l_184[1] , 4294967295UL)), l_184[3]));
        if (g_159)
        { 
            uint32_t l_240 = 7UL;
            int32_t l_250 = 0L;
            uint8_t l_251 = 0x35L;
            int32_t l_253[4] = {0x0487F143L,0x0487F143L,0x0487F143L,0x0487F143L};
            int i;
            if (l_155)
            { 
                return l_184[4];
            }
            else
            { 
                uint16_t l_216[5] = {1UL,1UL,1UL,1UL,1UL};
                int32_t l_229[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_229[i] = 0x9A3EB63CL;
                l_216[2] |= g_66;
                if (g_43)
                    goto lbl_259;
                l_180.f0 = ((((safe_lshift_func_int16_t_s_s(6L, (safe_mul_func_uint8_t_u_u((l_229[3] = (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x1C95L, g_129)), (safe_mod_func_uint64_t_u_u(0x46C75788D5B51C37LL, l_216[2])))) <= l_184[1]), 2))), 0x5BL)))) , g_129) || 0xE6941C90L) != 5UL);
                g_43 &= (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u((l_155 = (safe_mul_func_int8_t_s_s(g_109, (safe_div_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(g_66, (((((g_159 > g_44[1][2][3]) , g_50) & g_14) >= 1L) || l_2))), l_178))))), g_109)) || l_240), 0));
            }
            if ((safe_lshift_func_int16_t_s_s(((g_255 = ((l_155 = (safe_sub_func_uint8_t_u_u((((((safe_sub_func_int32_t_s_s(((+(safe_div_func_int8_t_s_s((0x2882L <= (l_250 |= 0xBA80L)), ((l_253[0] ^= ((g_15 | l_251) && l_252)) ^ g_44[3][2][2])))) & g_159), g_44[1][2][3])) ^ g_50) && 0x936F0B847CEFB775LL) >= l_155) <= l_203[1]), g_254))) != 0x7951L)) && 4UL), 9)))
            { 
lbl_259:
                g_256++;
                return g_159;
            }
            else
            { 
                uint32_t l_279 = 1UL;
                int32_t l_290 = 0x02C53580L;
                g_68.f0 = (safe_sub_func_uint64_t_u_u(4UL, (safe_div_func_uint16_t_u_u((((((safe_mod_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(g_270[0], (safe_mod_func_int64_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_279 <= ((safe_mul_func_int16_t_s_s(0L, 9UL)) <= 0xACBAL)), l_279)), l_279)), 0x16B7DE68C300E812LL)))), g_43)), l_2)) == (-5L)) == 7L) && g_255) , g_129), g_15))));
                l_184[1] = ((0x40CFL && (safe_sub_func_uint8_t_u_u(0x94L, g_32.f0))) >= ((safe_lshift_func_uint8_t_u_u(((l_180.f0 = ((safe_mod_func_uint64_t_u_u((l_290 = ((safe_add_func_int8_t_s_s((0xB481F414L ^ 0x2CC38E0EL), 0xD8L)) , l_203[0])), g_68.f0)) , l_155)) != 1L), l_253[0])) < g_129));
                g_159 = ((((((g_15 ^= (g_270[0] = ((((!g_43) > (safe_div_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((safe_mod_func_uint64_t_u_u(g_44[3][1][1], ((safe_rshift_func_int16_t_s_u((l_180.f0 = g_16), 13)) | ((safe_mul_func_int16_t_s_s(l_203[1], g_43)) , l_252)))) && l_203[1]) , l_302), 0UL)), l_253[0]))) >= g_212) >= 0x7177AA3E9DAC5E5DLL))) ^ l_203[0]) , g_44[1][2][3]) , 0xD567L) > g_32.f0) | (-7L));
            }
        }
        else
        { 
            int8_t l_331 = 0xB6L;
            int32_t l_334 = 9L;
            l_180 = l_303;
            for (g_159 = 0; (g_159 != 18); ++g_159)
            { 
                int32_t l_327 = (-7L);
                l_306--;
                if (g_30)
                    break;
                l_334 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint32_t_u_u(((safe_add_func_uint32_t_u_u(4294967295UL, (safe_rshift_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((g_44[0][1][1] = (((((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(((l_333 = ((l_327 < ((safe_mul_func_uint16_t_u_u((g_330 = ((g_68 = g_68) , g_16)), l_331)) < l_332)) <= g_43)) ^ l_184[1]), l_202)) & g_212), l_202)) < g_43) , g_30) && g_66) , g_270[0])) == g_15) > 0UL), g_43)), 0)))) || 0x9124L), l_184[1])), g_66)) < 0xBC11570353347AF6LL), 5)), g_270[0])) && l_203[0]);
            }
            g_68 = l_179;
        }
    }
    for (g_30 = 3; (g_30 >= 0); g_30 -= 1)
    { 
        int16_t l_337 = 1L;
        int32_t l_342 = 0xF7D0461CL;
        int64_t l_343 = 0xA51D1B7C7B12A1AFLL;
        uint32_t l_387 = 0x387FDDEAL;
        int64_t l_440 = 0xE5849BD4E4870632LL;
        g_159 |= 0x57BF4523L;
        if (((l_343 = ((((safe_sub_func_uint32_t_u_u(((l_337 = g_32.f0) & ((l_203[0] , (safe_rshift_func_uint16_t_u_s(0UL, (safe_rshift_func_uint8_t_u_s(l_342, l_342))))) && l_302)), g_330)) , 0x0EL) || l_2) <= 0x3F5139A7L)) != l_342))
        { 
            return l_203[0];
        }
        else
        { 
            uint8_t l_353 = 1UL;
            int32_t l_360 = 0xA8A8730BL;
            for (l_2 = 0; (l_2 >= 0); l_2 -= 1)
            { 
                int32_t l_361[2][1][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_361[i][j][k] = (-10L);
                    }
                }
                l_155 = (safe_mul_func_int16_t_s_s((~(safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s((((g_129 | (l_353 | (safe_rshift_func_int16_t_s_u((g_68 , g_129), 14)))) != 0UL) , g_255), 0x8FBAA2C0L)), 4)), g_30))), 0x51E5L));
                g_68.f0 = (safe_div_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0xE671L, 5)), (g_44[2][0][0]++)));
                return l_179.f0;
            }
            l_180.f0 = 2L;
        }
        for (g_16 = 0; (g_16 <= 0); g_16 += 1)
        { 
            int32_t l_366 = (-1L);
            int32_t l_367 = 0x0FCD6BA3L;
            if ((safe_mod_func_uint16_t_u_u((l_367 = l_366), (g_368 &= g_159))))
            { 
                int8_t l_370 = 1L;
                l_367 = (safe_unary_minus_func_int16_t_s(l_306));
                g_371[1][1]--;
                g_159 = ((safe_div_func_uint16_t_u_u((g_368 = (safe_lshift_func_int8_t_s_s(((g_50 = (+(l_343 , l_342))) < (0x592A202FL != (+(l_366 = (g_330 = g_270[0]))))), 4))), g_32.f0)) || 0x78L);
            }
            else
            { 
                return g_15;
            }
            if (g_109)
            { 
                int8_t l_386 = 0L;
                int32_t l_388 = 0xAB84D604L;
                g_159 |= 0x82215A0CL;
                l_388 ^= ((safe_mul_func_uint16_t_u_u(l_180.f0, g_43)) && (safe_div_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_386 | ((l_367 &= ((l_387 = l_366) == g_43)) , g_368)), g_15)), 1UL)));
            }
            else
            { 
                int16_t l_407[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_407[i] = (-4L);
                g_159 = ((g_330 = (safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(((-1L) <= (safe_div_func_uint16_t_u_u(((+(safe_add_func_uint32_t_u_u(0xA482D9A3L, (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((l_155 | ((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint16_t_u(((18446744073709551610UL ^ 0xB404AB996700F83CLL) <= g_254))), g_16)) == g_371[1][2])), l_337)), (-7L))) && g_254) & g_371[1][1])))) == 0x62L), l_407[0]))), g_371[1][2])), l_342))) != 0L);
                if (g_32.f0)
                    break;
            }
            for (g_255 = 0; (g_255 <= 0); g_255 += 1)
            { 
                int32_t l_431[3][1][3] = {{{8L,8L,8L}},{{0x4FD85A1BL,0x895A3996L,0x4FD85A1BL}},{{8L,8L,8L}}};
                int32_t l_433 = 0x0E0FF557L;
                int i, j, k;
                l_433 = ((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((g_44[(g_255 + 1)][(g_16 + 1)][(g_30 + 1)] > ((safe_mul_func_int16_t_s_s(0x7965L, ((safe_mod_func_uint32_t_u_u(((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((~((safe_mod_func_uint32_t_u_u((l_431[0][0][0] ^= (safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_44[g_30][(g_255 + 2)][g_30], 2L)), 0UL)), g_109))), g_129)) != g_44[3][1][2])), l_367)), g_44[g_30][(g_255 + 2)][g_30])) != 0x36L), l_337)) >= g_368), 0x9D4712D9L)) & l_155))) != l_432)) | g_371[1][1]) <= l_2) , g_330), 1UL)), l_366)) == l_387);
            }
        }
        for (g_109 = 0; (g_109 <= 0); g_109 += 1)
        { 
            uint64_t l_450 = 18446744073709551615UL;
            int32_t l_452 = 0xF6A0F1A0L;
            for (g_212 = 0; (g_212 <= 0); g_212 += 1)
            { 
                uint32_t l_449[4][4] = {{0x4A687B62L,0x3748A7D6L,0x4A687B62L,0x3748A7D6L},{0x4A687B62L,0x3748A7D6L,0x4A687B62L,0x3748A7D6L},{0x4A687B62L,0x3748A7D6L,0x4A687B62L,0x3748A7D6L},{0x4A687B62L,0x3748A7D6L,0x4A687B62L,0x3748A7D6L}};
                int i, j, k;
                g_68.f0 &= (((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((g_44[(g_109 + 1)][g_212][g_30] ^= ((safe_sub_func_uint64_t_u_u(18446744073709551615UL, l_440)) && (safe_mul_func_uint16_t_u_u(g_50, (safe_div_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_s(((-7L) >= l_203[0]), 6)) != 18446744073709551610UL) && g_15) & g_371[1][1]), l_449[0][1])) , g_371[1][1]) , g_255), l_450)))))), g_270[0])), l_180.f0)) != 0UL) , g_44[(g_109 + 1)][g_212][g_30]);
            }
            if (l_450)
                continue;
            for (g_16 = 0; (g_16 <= 0); g_16 += 1)
            { 
                int32_t l_451 = (-3L);
                int i, j, k;
                l_452 = (l_451 = g_44[(g_16 + 1)][g_30][(g_109 + 2)]);
                g_68.f0 |= (l_451 = 1L);
            }
        }
    }
    l_472 &= (0x7DL > (safe_mul_func_uint16_t_u_u(((safe_mod_func_int64_t_s_s((-6L), (safe_lshift_func_int8_t_s_u((((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((!g_68.f0), (safe_sub_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((((safe_div_func_int16_t_s_s((g_66 & 0xC35AC691L), 0xDE53L)) , l_470[0][2][0]) , 0x5AC9E4394CAB0024LL), g_50)), l_306)))), l_432)) , 7UL) , g_330), g_330)))) & l_471), g_368)));
    return l_473;
}



static int32_t  func_3(uint8_t  p_4, int32_t  p_5, uint8_t  p_6, int16_t  p_7)
{ 
    int8_t l_93 = (-2L);
    int32_t l_94 = (-10L);
    int32_t l_150 = 0x59C9A882L;
    int32_t l_151 = 0xB972044FL;
    int32_t l_152[5][5][4] = {{{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)},{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)}},{{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)},{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L}},{{(-1L),(-1L),0x5FCC9BDCL,(-1L)},{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)},{(-1L),0xA7A27731L,0xA7A27731L,(-1L)}},{{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)},{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)}},{{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L},{(-1L),(-1L),0x5FCC9BDCL,(-1L)},{(-1L),0xA7A27731L,0xA7A27731L,(-1L)},{0xA7A27731L,(-1L),0xA7A27731L,0xA7A27731L}}};
    int i, j, k;
    for (p_5 = 3; (p_5 >= 0); p_5 -= 1)
    { 
        uint16_t l_92 = 0xBA28L;
        int32_t l_100 = (-1L);
        for (g_16 = 0; (g_16 <= 3); g_16 += 1)
        { 
            uint8_t l_96 = 0x4CL;
            int32_t l_98 = 9L;
            for (g_30 = 0; (g_30 <= 3); g_30 += 1)
            { 
                int i, j, k;
                if (g_44[g_30][g_30][p_5])
                    break;
            }
            for (p_6 = 0; (p_6 <= 3); p_6 += 1)
            { 
                int32_t l_95 = 1L;
                int32_t l_97 = 1L;
                uint32_t l_99[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_99[i] = 18446744073709551615UL;
                l_100 ^= (safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((l_98 ^= (0x0E1BL > (safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((((safe_lshift_func_int16_t_s_s((+(g_44[p_6][g_16][(p_6 + 1)] , (+(safe_lshift_func_uint8_t_u_u(((((((safe_lshift_func_int8_t_s_s((l_96 = ((((safe_lshift_func_uint8_t_u_s(((l_95 = (l_94 = (g_16 < (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_93 = ((((-1L) >= p_5) < l_92) && g_14)), 0UL)), g_30))))) && l_92), 6)) >= g_15) > 0xB14249AAL) || p_7)), p_5)) && g_50) < 247UL) , l_94) || p_5) , l_96), g_43))))), 5)) >= l_97) < g_50), l_92)), p_7)))), l_99[0])) || p_7), 1));
            }
            g_68 = g_68;
            for (l_100 = 0; (l_100 <= 3); l_100 += 1)
            { 
                int32_t l_103 = 5L;
                uint32_t l_108 = 6UL;
                int32_t l_110 = (-1L);
                int i, j, k;
                l_110 ^= ((safe_lshift_func_int8_t_s_s(((((((((g_44[l_100][p_5][(g_16 + 1)] || (l_103 = 1L)) ^ (((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(l_96, (g_44[l_100][p_5][(g_16 + 1)] == 7L))), p_6)) <= (-1L)) > p_6)) ^ l_108) > p_4) , 0x8A9104C8L) , g_109) | g_15) != l_94), l_108)) >= 0x9DL);
                g_68.f0 = (~0UL);
                g_43 |= g_50;
            }
        }
        for (g_16 = 0; (g_16 <= 3); g_16 += 1)
        { 
            uint64_t l_130 = 0xCDDF05FF3C1E06D6LL;
            int32_t l_131 = (-3L);
            l_131 &= (~(g_30 != ((--g_14) & (((((safe_sub_func_int64_t_s_s(((safe_mul_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((((safe_rshift_func_int8_t_s_s(l_93, 1)) || g_66) < ((safe_add_func_uint32_t_u_u((l_100 = (g_129 = ((safe_mul_func_uint16_t_u_u((p_7 && 0L), 0x16DBL)) == g_15))), 0xEC59D277L)) > 0x0B3B3C507C227328LL)) & p_6), 18446744073709551611UL)), g_50)) ^ l_92), p_4)) != l_130) != g_44[2][3][3]) ^ g_16) == p_6))));
            for (g_50 = 0; (g_50 <= 3); g_50 += 1)
            { 
                int i, j, k;
                if (g_44[g_50][g_50][p_5])
                    break;
                return g_16;
            }
        }
    }
    for (g_129 = 0; (g_129 >= 3); g_129 = safe_add_func_uint32_t_u_u(g_129, 9))
    { 
        const int16_t l_138[5][1] = {{6L},{6L},{6L},{6L},{6L}};
        int32_t l_153 = 0xB62B2D3FL;
        int i, j;
        g_68.f0 = (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((l_138[3][0] <= ((!(safe_add_func_uint32_t_u_u(1UL, (safe_lshift_func_uint8_t_u_s(l_94, ((l_152[3][1][0] = ((l_151 = (l_150 = ((((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((-1L), 0L)), 0x4C00L)) > p_7), 12)) , p_4) < g_44[3][2][3]) < l_93))) <= 0xBF566147L)) > 1UL)))))) < g_129)), p_5)), l_138[3][0]));
        if (g_109)
            continue;
        l_153 ^= l_138[3][0];
    }
    g_68.f0 = l_150;
    return p_7;
}



static const int16_t  func_12(uint64_t  p_13)
{ 
    uint8_t l_19[1];
    uint64_t l_20 = 0xF67D50F82BAEF6E2LL;
    int32_t l_21[4][1];
    int i, j;
    for (i = 0; i < 1; i++)
        l_19[i] = 0xA9L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_21[i][j] = 0L;
    }
    g_16--;
    l_20 = l_19[0];
    l_21[1][0] = g_14;
    return p_13;
}



static int8_t  func_22(uint16_t  p_23)
{ 
    uint32_t l_25[3][2][3] = {{{0x63718BD8L,0UL,0UL},{0UL,0UL,0UL}},{{0x63718BD8L,0x63718BD8L,0UL},{0xDE1FC657L,0UL,0xDE1FC657L}},{{0x63718BD8L,0UL,0UL},{0UL,0UL,0UL}}};
    int32_t l_28 = 0xC1D99EA5L;
    int32_t l_31 = 6L;
    uint8_t l_40 = 0xECL;
    int i, j, k;
    for (g_15 = 0; (g_15 <= 1); g_15 += 1)
    { 
        uint16_t l_41 = 0UL;
        int32_t l_42 = 0x4BBC1846L;
        struct S0 l_67 = {0x82E5CE9EL};
        for (p_23 = 0; (p_23 <= 1); p_23 += 1)
        { 
            const int32_t l_29[3][4][3] = {{{(-1L),(-10L),(-1L)},{0L,4L,6L},{0L,(-9L),0x05807C1AL},{(-1L),4L,0x05807C1AL}},{{0x05807C1AL,(-10L),6L},{(-1L),(-10L),(-1L)},{0L,4L,6L},{0L,(-9L),0x05807C1AL}},{{(-1L),4L,0x05807C1AL},{0x05807C1AL,(-10L),6L},{(-1L),(-10L),(-1L)},{0L,4L,6L}}};
            struct S0 l_49 = {-1L};
            int32_t l_51 = 0xE808E27FL;
            int i, j, k;
            l_31 = ((g_30 = (((p_23 < (p_23 & 0x2522L)) > (safe_lshift_func_int16_t_s_u((l_28 = g_15), l_29[2][0][0]))) , 8UL)) != l_25[2][1][1]);
            for (l_31 = 0; (l_31 <= 1); l_31 += 1)
            { 
                g_44[1][2][3] &= ((g_32 , (0UL == (p_23 != (g_43 = ((safe_lshift_func_int8_t_s_s(((l_42 &= (~((((safe_div_func_uint16_t_u_u(0xD905L, l_40)) < 0x1153AA9BL) < l_41) | p_23))) , p_23), 3)) < 0xC6C2DB602708CDB5LL))))) , p_23);
            }
            l_51 |= (((g_50 = (((l_42 = (((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_32.f0, ((l_49 , p_23) ^ ((l_41 <= l_49.f0) <= g_14)))) > g_32.f0), l_29[2][0][0])) <= p_23) , 0xFBBA6F2DB44E9334LL)) ^ p_23) | g_30)) ^ 0x1B6174ED7B9758ACLL) == g_43);
            for (l_51 = 1; (l_51 >= 0); l_51 -= 1)
            { 
                const uint32_t l_57 = 0x166C0C08L;
                l_42 = (safe_lshift_func_int16_t_s_u((!(~((((((l_42 >= (+p_23)) ^ (l_57 ^ 6L)) | l_57) < 0L) == g_15) && 0xE0D08F1B1E9E5145LL))), g_30));
                g_43 = (safe_rshift_func_int16_t_s_s(p_23, 11));
                return p_23;
            }
        }
        l_31 ^= (((g_66 = (g_32.f0 , (g_44[1][3][1] &= ((-1L) && (safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((-1L), ((++g_50) <= (l_40 , g_14)))), l_42)))))) <= g_30) >= l_28);
        l_42 ^= (0x5CL | g_50);
        for (g_30 = 0; (g_30 <= 1); g_30 += 1)
        { 
            const struct S0 l_69[3][4] = {{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L}}};
            int i, j;
            g_68 = l_67;
            for (l_67.f0 = 0; (l_67.f0 <= 1); l_67.f0 += 1)
            { 
                g_68 = l_69[1][3];
                return l_42;
            }
        }
    }
    return g_14;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_32.f0, "g_32.f0", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68.f0, "g_68.f0", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);

    }
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_371[i][j], "g_371[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
