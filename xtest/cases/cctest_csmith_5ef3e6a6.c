// SPDX-License-Identifier: MIT
// cctest_csmith_5ef3e6a6.c --- cctest case csmith_5ef3e6a6 (csmith seed 1593042598)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x15f26e2a */
/* @exp_ticks 0xd2a6 */

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

// Options:   -s 1593042598 -o /tmp/csmith_gen_lafkqk13/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   int32_t  f1;
   int16_t  f2;
   uint32_t  f3;
};

union U1 {
   const struct S0  f0;
   struct S0  f1;
   uint16_t  f2;
   struct S0  f3;
   const int8_t  f4;
};


static int32_t g_2 = 0xEDC7555BL;
static int32_t g_7 = 0x4AD744D0L;
static int8_t g_25 = 5L;
static uint32_t g_28 = 0xBBB66EFEL;
static union U1 g_36 = {{0UL,0L,0xCF7AL,0x211E9A9DL}};
static uint32_t g_37[6][5][7] = {{{0x5AA7F794L,18446744073709551615UL,0x485BDF60L,0x5AA7F794L,18446744073709551612UL,0xBF39352AL,9UL},{0x165AAE70L,0x5CCBD95DL,7UL,9UL,0x277F141CL,0x2D45AB60L,0x277F141CL},{0x27F44FB6L,0x485BDF60L,0x485BDF60L,0x27F44FB6L,9UL,0xBF39352AL,18446744073709551612UL},{0x84ADDBFDL,0x5CCBD95DL,18446744073709551610UL,0x25701832L,0x277F141CL,18446744073709551607UL,18446744073709551606UL},{0x27F44FB6L,18446744073709551615UL,0x71CF717CL,0x27F44FB6L,18446744073709551612UL,9UL,18446744073709551612UL}},{{0x165AAE70L,5UL,18446744073709551610UL,9UL,18446744073709551606UL,18446744073709551607UL,0x277F141CL},{0x5AA7F794L,18446744073709551615UL,0x485BDF60L,0x5AA7F794L,0x84B0F4F2L,0x8962600BL,0x30F141BDL},{18446744073709551610UL,18446744073709551607UL,0xC2A4E630L,5UL,18446744073709551606UL,0x758A8CE9L,18446744073709551606UL},{0x485BDF60L,9UL,9UL,0x485BDF60L,0x30F141BDL,0x8962600BL,0x84B0F4F2L},{7UL,18446744073709551607UL,18446744073709551610UL,0xA4575F7FL,18446744073709551606UL,4UL,0xD45EB447L}},{{0x485BDF60L,0xBF39352AL,18446744073709551608UL,0x485BDF60L,0x84B0F4F2L,0x3D9D76C1L,0x84B0F4F2L},{18446744073709551610UL,0x2D45AB60L,18446744073709551610UL,5UL,0xD45EB447L,4UL,18446744073709551606UL},{0x71CF717CL,0xBF39352AL,9UL,0x71CF717CL,0x84B0F4F2L,0x8962600BL,0x30F141BDL},{18446744073709551610UL,18446744073709551607UL,0xC2A4E630L,5UL,18446744073709551606UL,0x758A8CE9L,18446744073709551606UL},{0x485BDF60L,9UL,9UL,0x485BDF60L,0x30F141BDL,0x8962600BL,0x84B0F4F2L}},{{7UL,18446744073709551607UL,18446744073709551610UL,0xA4575F7FL,18446744073709551606UL,4UL,0xD45EB447L},{0x485BDF60L,0xBF39352AL,18446744073709551608UL,0x485BDF60L,0x84B0F4F2L,0x3D9D76C1L,0x84B0F4F2L},{18446744073709551610UL,0x2D45AB60L,18446744073709551610UL,5UL,0xD45EB447L,4UL,18446744073709551606UL},{0x71CF717CL,0xBF39352AL,9UL,0x71CF717CL,0x84B0F4F2L,0x8962600BL,0x30F141BDL},{18446744073709551610UL,18446744073709551607UL,0xC2A4E630L,5UL,18446744073709551606UL,0x758A8CE9L,18446744073709551606UL}},{{0x485BDF60L,9UL,9UL,0x485BDF60L,0x30F141BDL,0x8962600BL,0x84B0F4F2L},{7UL,18446744073709551607UL,18446744073709551610UL,0xA4575F7FL,18446744073709551606UL,4UL,0xD45EB447L},{0x485BDF60L,0xBF39352AL,18446744073709551608UL,0x485BDF60L,0x84B0F4F2L,0x3D9D76C1L,0x84B0F4F2L},{18446744073709551610UL,0x2D45AB60L,18446744073709551610UL,5UL,0xD45EB447L,4UL,18446744073709551606UL},{0x71CF717CL,0xBF39352AL,9UL,0x71CF717CL,0x84B0F4F2L,0x8962600BL,0x30F141BDL}},{{18446744073709551610UL,18446744073709551607UL,0xC2A4E630L,5UL,18446744073709551606UL,0x758A8CE9L,18446744073709551606UL},{0x485BDF60L,9UL,9UL,0x485BDF60L,0x30F141BDL,0x8962600BL,0x84B0F4F2L},{7UL,18446744073709551607UL,18446744073709551610UL,0xA4575F7FL,18446744073709551606UL,4UL,0xD45EB447L},{0x485BDF60L,0xBF39352AL,18446744073709551608UL,0x485BDF60L,0x84B0F4F2L,0x3D9D76C1L,0x84B0F4F2L},{18446744073709551610UL,0x2D45AB60L,18446744073709551610UL,5UL,0xD45EB447L,4UL,18446744073709551606UL}}};
static uint32_t g_50[4][5][3] = {{{0x10019492L,0x9F0A6C5FL,0xEF9AD357L},{1UL,1UL,1UL},{0xF2A96A4AL,18446744073709551615UL,0xEF9AD357L},{0x872AF409L,0x94EB44D5L,6UL},{0x348F9E47L,18446744073709551615UL,0x10019492L}},{{6UL,1UL,0x35737360L},{0x348F9E47L,0x9F0A6C5FL,0x348F9E47L},{0x872AF409L,0x1292777EL,0x35737360L},{0xF2A96A4AL,0xF381B91FL,0x10019492L},{0xCB426AB7L,1UL,18446744073709551613UL}},{{1UL,0xF2A96A4AL,0x71DA8844L},{0xCB426AB7L,0x872AF409L,0xCB426AB7L},{0x81D84798L,0x348F9E47L,0x71DA8844L},{0x0AC15C25L,6UL,18446744073709551613UL},{0UL,0x348F9E47L,1UL}},{{18446744073709551613UL,0x872AF409L,1UL},{0UL,0xF2A96A4AL,0UL},{0x0AC15C25L,1UL,1UL},{0x81D84798L,0x10019492L,1UL},{0xCB426AB7L,1UL,18446744073709551613UL}}};
static uint32_t g_73[7][1][7] = {{{0x6C3AAFF4L,9UL,0UL,4294967295UL,0x72592CB3L,0UL,0UL}},{{4294967295UL,0xFE17DD59L,5UL,0xFE17DD59L,4294967295UL,0xBE6313C7L,0UL}},{{0x5528475AL,0UL,9UL,4294967295UL,0x26F05796L,4294967295UL,9UL}},{{0UL,0UL,0x8B96EC4AL,5UL,0x0029D105L,1UL,1UL}},{{0x5528475AL,4294967295UL,0x7ACE7FEFL,0x7ACE7FEFL,4294967295UL,0x5528475AL,0x26F05796L}},{{4294967295UL,0x8B96EC4AL,0xFE17DD59L,0xA563CFC5L,0x0029D105L,0x0029D105L,0xA563CFC5L}},{{0x6C3AAFF4L,0x64248A5EL,0x6C3AAFF4L,0UL,0x26F05796L,0UL,0x5528475AL}}};
static int32_t g_76 = 0x62ABC6E4L;
static int8_t g_80 = (-8L);
static uint8_t g_82[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
static const uint32_t g_89 = 0xE28E030EL;
static const uint32_t *g_88 = &g_89;
static int8_t *g_98 = (void*)0;
static int8_t **g_97 = &g_98;
static struct S0 g_102 = {7UL,0L,8L,1UL};
static int32_t * const g_118 = &g_2;
static int32_t * const *g_117 = &g_118;
static int32_t * const g_120 = &g_2;
static struct S0 g_121 = {0x5FL,-3L,0L,0xCE1991DEL};
static uint64_t g_123 = 18446744073709551614UL;
static union U1 g_132 = {{0x41L,0x26AC7A9AL,-1L,0x4EA75E2CL}};
static union U1 g_134[6] = {{{0xE4L,0x99D6885CL,1L,18446744073709551608UL}},{{0xE4L,0x99D6885CL,1L,18446744073709551608UL}},{{0xE4L,0x99D6885CL,1L,18446744073709551608UL}},{{0xE4L,0x99D6885CL,1L,18446744073709551608UL}},{{0xE4L,0x99D6885CL,1L,18446744073709551608UL}},{{0xE4L,0x99D6885CL,1L,18446744073709551608UL}}};
static int32_t *g_160 = &g_76;
static int8_t g_176[1] = {(-1L)};
static int64_t g_177 = 0x42B6AA6990C9B8F6LL;
static int64_t g_179[3] = {(-6L),(-6L),(-6L)};
static uint32_t g_186 = 0x3732750AL;
static uint8_t g_206 = 251UL;
static uint32_t g_235 = 0xD45198B6L;
static uint16_t g_251 = 1UL;
static uint8_t g_292 = 0UL;
static struct S0 *g_300 = &g_102;
static struct S0 **g_299 = &g_300;
static uint64_t g_329[6] = {0x3C934C4DA238A6FDLL,0x196BDB23A2BF0E48LL,0x196BDB23A2BF0E48LL,0x3C934C4DA238A6FDLL,0x196BDB23A2BF0E48LL,0x196BDB23A2BF0E48LL};
static struct S0 g_365 = {0x0BL,6L,0x0CE5L,18446744073709551615UL};
static union U1 g_368 = {{0x53L,-3L,1L,0x1E9F3B93L}};
static uint8_t g_407 = 0x33L;
static struct S0 ***g_424 = &g_299;
static struct S0 ****g_423[5][4][4] = {{{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424}},{{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424},{&g_424,&g_424,&g_424,&g_424}}};
static struct S0 *****g_422 = &g_423[1][3][2];
static const uint16_t g_430 = 65534UL;
static int32_t **g_474[7] = {&g_160,&g_160,&g_160,&g_160,&g_160,&g_160,&g_160};
static int32_t ***g_473[7][5] = {{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[1],&g_474[5],&g_474[6],&g_474[6]},{&g_474[6],&g_474[1],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[1],&g_474[5],&g_474[6],&g_474[6]},{&g_474[6],&g_474[1],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]}};
static uint64_t g_601 = 0x78D735DD1BB5C426LL;
static uint64_t g_618[6][5] = {{0xB08666BFF22C34FDLL,0x2E117B0CCCDA98A1LL,0xB08666BFF22C34FDLL,0UL,0UL},{0xB08666BFF22C34FDLL,0x2E117B0CCCDA98A1LL,0xB08666BFF22C34FDLL,0UL,0UL},{0xB08666BFF22C34FDLL,0x2E117B0CCCDA98A1LL,0xB08666BFF22C34FDLL,0UL,0UL},{0xB08666BFF22C34FDLL,0x2E117B0CCCDA98A1LL,0xB08666BFF22C34FDLL,0UL,0UL},{0xB08666BFF22C34FDLL,0x2E117B0CCCDA98A1LL,0xB08666BFF22C34FDLL,0UL,0UL},{0xB08666BFF22C34FDLL,0x2E117B0CCCDA98A1LL,0xB08666BFF22C34FDLL,0UL,0UL}};
static uint16_t g_656 = 0xE04EL;
static uint8_t g_709 = 249UL;
static uint64_t **g_734 = (void*)0;
static uint32_t *g_744[6][5][3] = {{{(void*)0,&g_235,&g_102.f3},{&g_28,(void*)0,&g_121.f3},{&g_235,&g_365.f3,&g_102.f3},{&g_365.f3,&g_37[2][2][1],&g_102.f3},{&g_28,&g_28,&g_121.f3}},{{(void*)0,(void*)0,&g_102.f3},{&g_121.f3,(void*)0,&g_102.f3},{(void*)0,&g_28,&g_121.f3},{&g_37[2][2][1],&g_121.f3,&g_102.f3},{(void*)0,&g_235,&g_102.f3}},{{&g_28,(void*)0,&g_121.f3},{&g_235,&g_365.f3,&g_102.f3},{&g_365.f3,&g_37[2][2][1],&g_102.f3},{&g_28,&g_28,&g_121.f3},{(void*)0,(void*)0,&g_102.f3}},{{&g_121.f3,(void*)0,&g_102.f3},{(void*)0,&g_28,&g_121.f3},{&g_37[2][2][1],&g_121.f3,&g_102.f3},{(void*)0,&g_235,&g_102.f3},{&g_28,(void*)0,&g_121.f3}},{{&g_235,&g_365.f3,&g_102.f3},{&g_365.f3,&g_37[2][2][1],&g_102.f3},{&g_28,&g_28,&g_121.f3},{(void*)0,(void*)0,&g_102.f3},{&g_121.f3,(void*)0,&g_102.f3}},{{(void*)0,&g_28,&g_121.f3},{&g_37[2][2][1],&g_121.f3,&g_102.f3},{(void*)0,&g_235,&g_102.f3},{&g_28,(void*)0,&g_121.f3},{&g_235,&g_365.f3,&g_102.f3}}};
static uint32_t **g_743[5] = {&g_744[3][4][2],&g_744[3][4][2],&g_744[3][4][2],&g_744[3][4][2],&g_744[3][4][2]};
static uint32_t ***g_742 = &g_743[3];
static int8_t ****g_752 = (void*)0;
static int32_t *g_755 = &g_2;
static int32_t g_771[6][2] = {{0x370FDCE7L,0x370FDCE7L},{0x370FDCE7L,0x370FDCE7L},{0x370FDCE7L,0x370FDCE7L},{0x370FDCE7L,0x370FDCE7L},{0x370FDCE7L,0x370FDCE7L},{0x370FDCE7L,0x370FDCE7L}};
static int16_t *g_790[2] = {&g_121.f2,&g_121.f2};
static int16_t * const *g_789[4] = {&g_790[1],&g_790[1],&g_790[1],&g_790[1]};
static const uint8_t g_818 = 1UL;
static uint16_t g_822[7][3][4] = {{{0x5DC5L,65528UL,0UL,5UL},{0x6BBBL,0x2375L,1UL,0x2375L},{0x2375L,0UL,0x5DC5L,0x2375L}},{{0x8D96L,5UL,65535UL,65535UL},{0x5DC5L,0x5DC5L,65528UL,0UL},{0x5DC5L,1UL,65535UL,0x5DC5L}},{{0x8D96L,0UL,0x8D96L,65535UL},{5UL,0UL,65528UL,0x5DC5L},{0UL,1UL,1UL,0UL}},{{0x8D96L,0x5DC5L,1UL,65535UL},{0UL,5UL,65528UL,5UL},{5UL,1UL,0x8D96L,5UL}},{{0x8D96L,5UL,65535UL,65535UL},{0x5DC5L,0x5DC5L,65528UL,0UL},{0x5DC5L,1UL,65535UL,0x5DC5L}},{{0x8D96L,0UL,0x8D96L,65535UL},{5UL,0UL,65528UL,0x5DC5L},{0UL,1UL,1UL,0UL}},{{0x8D96L,0x5DC5L,1UL,65535UL},{0UL,5UL,65528UL,5UL},{5UL,1UL,0x8D96L,5UL}}};



static union U1  func_1(void);
static int8_t  func_9(uint64_t  p_10, int32_t * p_11);
static uint64_t  func_12(int32_t * p_13, struct S0  p_14, uint32_t  p_15, int64_t  p_16, union U1  p_17);
static int32_t * func_18(uint32_t  p_19, uint32_t  p_20, int32_t * const  p_21, int32_t * const  p_22, struct S0  p_23);
static uint64_t  func_30(uint32_t  p_31, int8_t * p_32, union U1  p_33);
static int32_t * const * func_38(uint32_t * p_39, union U1  p_40, const int64_t  p_41, uint32_t * p_42);
static struct S0  func_47(const uint64_t  p_48);
static int32_t  func_58(uint16_t  p_59, uint32_t  p_60, uint64_t  p_61);




static union U1  func_1(void)
{ 
    uint32_t l_26 = 4294967295UL;
    int32_t l_29 = 0x467BB1A8L;
    int64_t l_367[1];
    int32_t *l_602 = (void*)0;
    int8_t l_625 = (-7L);
    union U1 l_671[2] = {{{0x5DL,0xACA5AAECL,0x5B50L,0x80DD9520L}},{{0x5DL,0xACA5AAECL,0x5B50L,0x80DD9520L}}};
    struct S0 *l_679 = &g_102;
    int32_t l_697 = 0xB8A3C272L;
    int32_t l_699[5][4][5] = {{{(-1L),0x9842511AL,0xF50217A7L,0x9842511AL,(-1L)},{0xE197F4FBL,0L,1L,0L,1L},{0L,0L,0xF50217A7L,(-1L),0L},{0L,0xE197F4FBL,0xE197F4FBL,0L,1L}},{{0x9842511AL,(-1L),0x1E371A2EL,0x1E371A2EL,(-1L)},{1L,0xE197F4FBL,1L,0x54E20B2CL,0x54E20B2CL},{(-5L),0L,(-5L),0x1E371A2EL,0xF50217A7L},{0L,0L,0x54E20B2CL,0L,0L}},{{(-5L),0x9842511AL,0L,(-1L),0L},{1L,1L,0x54E20B2CL,0L,0x793FA9E7L},{0x9842511AL,(-5L),(-5L),0x9842511AL,0L},{0L,0L,1L,1L,0L}},{{0L,(-5L),0x1E371A2EL,0xF50217A7L,0xF50217A7L},{0xE197F4FBL,1L,0xE197F4FBL,1L,0x54E20B2CL},{(-1L),0x9842511AL,0xF50217A7L,0x9842511AL,(-1L)},{0xE197F4FBL,0L,1L,0L,1L}},{{0L,0L,0xF50217A7L,(-1L),0L},{0L,0xE197F4FBL,0xE197F4FBL,0L,1L},{0x9842511AL,(-1L),0x1E371A2EL,0x1E371A2EL,(-1L)},{1L,0xE197F4FBL,1L,0x54E20B2CL,0x54E20B2CL}}};
    int8_t l_702[3];
    uint32_t *l_741 = &g_50[2][0][1];
    uint32_t **l_740 = &l_741;
    uint32_t ***l_739[4];
    int32_t ****l_794 = &g_473[3][0];
    int32_t *l_825 = &g_771[1][1];
    int32_t *l_826 = &l_699[0][2][2];
    uint16_t l_835 = 0x3E16L;
    int16_t l_850 = 0xF90FL;
    struct S0 l_858 = {8UL,0xAC3D216DL,0xE5E3L,18446744073709551615UL};
    int8_t l_865 = 0L;
    uint32_t l_873 = 0UL;
    uint64_t l_874 = 0x75521B965B4EFB30LL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_367[i] = 3L;
    for (i = 0; i < 3; i++)
        l_702[i] = 0x26L;
    for (i = 0; i < 4; i++)
        l_739[i] = &l_740;
    for (g_2 = 6; (g_2 != 24); ++g_2)
    { 
        int32_t l_5 = 0x73BF38C0L;
        int32_t *l_6 = &g_7;
        int8_t *l_24[2][2];
        uint32_t *l_27[6][7][5] = {{{(void*)0,&g_28,(void*)0,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28},{(void*)0,&g_28,&g_28,&g_28,&g_28},{(void*)0,(void*)0,(void*)0,&g_28,&g_28},{(void*)0,&g_28,&g_28,(void*)0,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28}},{{&g_28,(void*)0,&g_28,&g_28,(void*)0},{&g_28,(void*)0,&g_28,(void*)0,&g_28},{&g_28,&g_28,(void*)0,&g_28,(void*)0},{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,(void*)0},{(void*)0,&g_28,&g_28,&g_28,&g_28},{(void*)0,&g_28,&g_28,(void*)0,(void*)0}},{{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,(void*)0,&g_28,&g_28},{&g_28,(void*)0,&g_28,&g_28,&g_28},{(void*)0,(void*)0,(void*)0,&g_28,&g_28},{(void*)0,&g_28,&g_28,(void*)0,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28}},{{&g_28,(void*)0,&g_28,&g_28,(void*)0},{&g_28,(void*)0,&g_28,(void*)0,&g_28},{&g_28,&g_28,(void*)0,&g_28,(void*)0},{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,(void*)0},{(void*)0,&g_28,&g_28,&g_28,&g_28},{(void*)0,&g_28,&g_28,(void*)0,(void*)0}},{{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,(void*)0,&g_28,&g_28},{&g_28,(void*)0,&g_28,&g_28,&g_28},{(void*)0,(void*)0,(void*)0,&g_28,&g_28},{(void*)0,&g_28,&g_28,(void*)0,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,&g_28}},{{&g_28,(void*)0,&g_28,&g_28,(void*)0},{&g_28,(void*)0,&g_28,(void*)0,&g_28},{&g_28,&g_28,(void*)0,&g_28,(void*)0},{&g_28,&g_28,&g_28,&g_28,&g_28},{&g_28,&g_28,&g_28,&g_28,(void*)0},{(void*)0,&g_28,&g_28,&g_28,&g_28},{(void*)0,&g_28,&g_28,(void*)0,(void*)0}}};
        uint32_t l_366[2];
        uint64_t *l_600 = &g_601;
        uint64_t l_614 = 4UL;
        int32_t ***l_635 = &g_474[6];
        const int8_t *l_652[4] = {&l_625,&l_625,&l_625,&l_625};
        const int8_t **l_651 = &l_652[3];
        int32_t l_659 = 0L;
        int32_t l_696 = 0xAADE27DFL;
        int32_t l_698 = (-1L);
        int32_t l_701 = 0xB76F890AL;
        int32_t l_703 = 0x139B30BEL;
        int32_t l_704 = 1L;
        int64_t l_705 = 0x1CEE372B43B19E5BLL;
        const struct S0 *l_746 = (void*)0;
        struct S0 **l_766 = &g_300;
        int32_t ****l_795 = (void*)0;
        int32_t **l_805 = (void*)0;
        uint32_t l_849[3];
        int8_t l_851[4][6][1] = {{{1L},{0xF0L},{1L},{0xD9L},{0x04L},{0x04L}},{{0xD9L},{1L},{0xF0L},{1L},{0xD9L},{0x04L}},{{0x04L},{0xD9L},{1L},{0xF0L},{1L},{0xD9L}},{{0x04L},{0x04L},{0xD9L},{1L},{0xF0L},{1L}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_24[i][j] = &g_25;
        }
        for (i = 0; i < 2; i++)
            l_366[i] = 0xC40EB8F3L;
        for (i = 0; i < 3; i++)
            l_849[i] = 1UL;
        (*l_6) |= l_5;
    }
    (*g_755) = (safe_lshift_func_uint8_t_u_u(((*g_120) | (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((0x7FE87C7AA2D94C6ELL >= l_865), 0)), ((((((safe_lshift_func_uint16_t_u_u(65534UL, (~((0x154D8CE0AF58C896LL && ((((((safe_add_func_uint64_t_u_u(((safe_lshift_func_int8_t_s_u((*l_826), (*l_826))) || (*l_825)), 0x1D58A26FCEE3658ALL)) == 249UL) & g_73[5][0][4]) , 0x0D0CEAF3L) & g_368.f0.f3) <= (*g_118))) != l_873)))) , 0L) || l_874) , (void*)0) == (void*)0) , (****l_794))))), 3));
    return l_671[1];
}



static int8_t  func_9(uint64_t  p_10, int32_t * p_11)
{ 
    uint32_t l_605[1];
    uint8_t *l_606[6][2][2] = {{{&g_407,&g_407},{&g_407,&g_407}},{{&g_407,&g_407},{&g_407,&g_407}},{{&g_407,&g_407},{&g_407,&g_407}},{{&g_407,&g_407},{&g_407,&g_407}},{{&g_407,&g_407},{&g_407,&g_407}},{{&g_407,&g_407},{&g_407,&g_407}}};
    int32_t l_607 = 0x91E9D5BCL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_605[i] = 4294967288UL;
    (***g_424) = (*****g_422);
    if (((safe_div_func_uint16_t_u_u(0x7569L, 1UL)) >= ((((l_607 = l_605[0]) , (p_10 , (((safe_rshift_func_int16_t_s_u((l_605[0] != (l_607 |= ((*g_118) , l_605[0]))), 8)) || 1UL) , (void*)0))) == (void*)0) > l_605[0])))
    { 
        int32_t **l_612 = &g_160;
        for (g_102.f1 = 19; (g_102.f1 < (-9)); g_102.f1 = safe_sub_func_uint16_t_u_u(g_102.f1, 2))
        { 
            return g_206;
        }
        (*l_612) = p_11;
    }
    else
    { 
        int32_t **l_613 = &g_160;
        (*l_613) = (*g_117);
    }
    return p_10;
}



static uint64_t  func_12(int32_t * p_13, struct S0  p_14, uint32_t  p_15, int64_t  p_16, union U1  p_17)
{ 
    struct S0 **l_396 = (void*)0;
    int32_t l_406 = (-2L);
    int16_t *l_438[2][7] = {{&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2},{&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2}};
    union U1 *l_466 = &g_134[5];
    union U1 ** const l_465[1][5] = {{&l_466,&l_466,&l_466,&l_466,&l_466}};
    int32_t ***l_478 = &g_474[6];
    uint8_t l_504[7][7] = {{255UL,0x97L,255UL,0x77L,0x77L,255UL,0x97L},{0x4BL,0xB7L,0xC6L,0xC6L,0xB7L,0x4BL,0xB7L},{255UL,0x77L,0x77L,255UL,0x97L,255UL,0x77L},{0x00L,0x00L,0x4BL,0xC6L,0x4BL,0x00L,0x00L},{6UL,0x77L,1UL,0x77L,6UL,6UL,0x77L},{0UL,0xB7L,0UL,0x4BL,0x4BL,0UL,0xB7L},{0x77L,0x97L,1UL,1UL,0x97L,0x77L,0x97L}};
    uint16_t l_538 = 0xD2DEL;
    int32_t l_541 = 0xBC9B87A3L;
    int32_t l_559[3];
    uint32_t *l_572 = &g_102.f3;
    uint32_t **l_571 = &l_572;
    int i, j;
    for (i = 0; i < 3; i++)
        l_559[i] = 0x2E609E4DL;
    for (g_368.f1.f0 = 8; (g_368.f1.f0 < 45); g_368.f1.f0 = safe_add_func_int16_t_s_s(g_368.f1.f0, 2))
    { 
        struct S0 l_377 = {1UL,0xA9BB82E0L,0xF311L,0xE31A3DCAL};
        int32_t l_405[4][2] = {{0xE5BE37E3L,0x96C52450L},{0x96C52450L,0xE5BE37E3L},{0x96C52450L,0x96C52450L},{0xE5BE37E3L,0x96C52450L}};
        int16_t *l_439 = &g_102.f2;
        union U1 **l_467 = &l_466;
        const uint16_t l_470 = 65535UL;
        int16_t l_479[6][3] = {{0x256AL,0x256AL,0xB4BBL},{2L,0xD7A6L,2L},{0x256AL,0xB4BBL,0xB4BBL},{7L,0xD7A6L,7L},{0x256AL,0x256AL,0xB4BBL},{2L,0xD7A6L,2L}};
        struct S0 **l_488 = &g_300;
        uint32_t *l_523 = &g_73[5][0][1];
        uint32_t **l_522[7];
        uint32_t l_542[7][1][7] = {{{0x286AC16EL,0xB5EFEC0BL,0xB5EFEC0BL,0x286AC16EL,0x286AC16EL,0xB5EFEC0BL,0xB5EFEC0BL}},{{0x84F4DD24L,18446744073709551607UL,0x84F4DD24L,18446744073709551607UL,0x84F4DD24L,18446744073709551607UL,0x84F4DD24L}},{{0x286AC16EL,0x286AC16EL,0xB5EFEC0BL,0xB5EFEC0BL,0x286AC16EL,0x286AC16EL,0xB5EFEC0BL}},{{0x62A0674CL,18446744073709551607UL,0x62A0674CL,18446744073709551607UL,0x62A0674CL,18446744073709551607UL,0x62A0674CL}},{{0x286AC16EL,0xB5EFEC0BL,0xB5EFEC0BL,0x286AC16EL,0x286AC16EL,0xB5EFEC0BL,0xB5EFEC0BL}},{{0x84F4DD24L,18446744073709551607UL,0x84F4DD24L,18446744073709551607UL,0x84F4DD24L,18446744073709551607UL,0x84F4DD24L}},{{0x286AC16EL,0x286AC16EL,0xB5EFEC0BL,0xB5EFEC0BL,0x286AC16EL,0x286AC16EL,0xB5EFEC0BL}}};
        uint32_t **l_573 = &l_572;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_522[i] = &l_523;
        for (g_132.f1.f2 = 0; (g_132.f1.f2 < (-27)); g_132.f1.f2--)
        { 
            uint32_t l_382 = 8UL;
            int32_t l_418 = 0x2F60B708L;
            int32_t l_458[3][2][1];
            int8_t *l_463 = &g_25;
            int8_t *l_464 = &g_80;
            union U1 **l_468 = &l_466;
            uint32_t *l_469[6];
            struct S0 **l_483 = &g_300;
            int32_t *l_540[6][3][6] = {{{&g_76,&g_2,&g_2,&g_2,&l_418,&g_2},{&l_406,&g_7,&l_406,&l_458[1][0][0],&l_418,&l_458[0][1][0]},{&g_2,&g_2,&g_76,&l_406,&g_2,&g_76}},{{&g_2,&l_458[1][0][0],&l_458[1][0][0],&l_406,&g_2,&l_458[1][0][0]},{&g_2,&g_7,&l_458[0][1][0],&l_458[1][0][0],&l_418,&l_458[1][0][0]},{&l_406,&l_406,&l_458[0][1][0],&g_2,&l_458[1][0][0],&l_458[1][0][0]}},{{&g_76,(void*)0,&l_458[1][0][0],&l_458[1][0][0],(void*)0,&g_76},{&l_458[1][0][0],(void*)0,&g_76,&l_406,&l_458[1][0][0],&l_458[0][1][0]},{&l_458[0][1][0],&l_406,&l_406,&g_2,&l_418,&g_2}},{{&l_458[0][1][0],&g_7,&g_2,&l_406,&g_2,(void*)0},{&l_458[1][0][0],&l_458[1][0][0],&g_2,&l_458[1][0][0],&g_2,(void*)0},{&g_76,&g_2,&g_2,&g_2,&l_418,&g_2}},{{&l_406,&g_7,&l_406,&l_458[1][0][0],&l_418,&l_458[0][1][0]},{&g_2,&g_2,&g_76,&l_406,&g_2,&g_76},{&g_2,&l_458[1][0][0],&l_458[1][0][0],&l_406,&g_2,&l_458[1][0][0]}},{{&g_2,&g_7,&l_458[0][1][0],&l_458[1][0][0],&l_418,&l_458[1][0][0]},{&l_406,&l_406,&l_458[0][1][0],&g_2,&l_458[1][0][0],&l_458[1][0][0]},{&g_76,(void*)0,&l_458[1][0][0],&l_458[1][0][0],(void*)0,&g_76}}};
            int8_t l_562 = (-1L);
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_458[i][j][k] = 0xBD085FA0L;
                }
            }
            for (i = 0; i < 6; i++)
                l_469[i] = &l_382;
            for (p_17.f3.f3 = 1; (p_17.f3.f3 < 29); p_17.f3.f3++)
            { 
                struct S0 **l_397 = &g_300;
                int32_t l_402 = (-8L);
                if ((0xBA46365F0AB91E92LL == p_17.f0.f3))
                { 
                    uint32_t *l_381[6][5][4] = {{{&g_73[5][0][4],&g_73[5][0][4],(void*)0,&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],&g_73[3][0][5],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],&g_73[5][0][4],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],&g_73[3][0][5],&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],(void*)0,&g_73[5][0][4]}},{{&g_73[5][0][4],&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{(void*)0,&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],(void*)0,&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],&g_73[3][0][5],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],&g_73[5][0][4],&g_73[5][0][4]}},{{&g_73[3][0][5],&g_73[5][0][4],&g_73[3][0][5],&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],(void*)0,&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{(void*)0,&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],(void*)0,&g_73[5][0][4]}},{{&g_73[5][0][4],&g_73[5][0][4],&g_73[3][0][5],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],&g_73[5][0][4],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],&g_73[3][0][5],&g_73[5][0][4]},{&g_73[5][0][4],&g_73[5][0][4],(void*)0,&g_73[5][0][4]},{&g_73[1][0][0],&g_73[1][0][0],&g_73[5][0][4],&g_73[5][0][4]}},{{(void*)0,&g_73[5][0][4],&g_73[5][0][4],&g_73[5][0][4]},{&g_73[1][0][0],&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],(void*)0,&g_73[5][0][4]},{(void*)0,&g_73[5][0][4],&g_73[1][0][0],&g_73[5][0][4]},{(void*)0,&g_73[1][0][0],(void*)0,&g_73[5][0][4]}},{{&g_73[3][0][5],&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{&g_73[1][0][0],&g_73[1][0][0],&g_73[5][0][4],&g_73[5][0][4]},{(void*)0,&g_73[5][0][4],&g_73[5][0][4],&g_73[5][0][4]},{&g_73[1][0][0],&g_73[5][0][4],&g_73[4][0][2],&g_73[5][0][4]},{&g_73[3][0][5],&g_73[5][0][4],(void*)0,&g_73[5][0][4]}}};
                    const struct S0 *l_399 = &g_102;
                    const struct S0 **l_398 = &l_399;
                    const struct S0 ***l_400 = &l_398;
                    int32_t l_401[2][5][6] = {{{(-2L),(-1L),0x443872AEL,0xDE15898BL,1L,0x92D0AA21L},{0x92D0AA21L,0x98C83EB4L,(-1L),(-1L),0x98C83EB4L,0x92D0AA21L},{0xDE15898BL,0x9D13D384L,0x443872AEL,0x026D4807L,0x92D0AA21L,0x5B65FB09L},{0x98C83EB4L,(-2L),(-1L),0x92D0AA21L,(-1L),(-2L)},{0x98C83EB4L,0x5B65FB09L,0x92D0AA21L,0x026D4807L,0x443872AEL,0x9D13D384L}},{{0xDE15898BL,0x92D0AA21L,0x98C83EB4L,(-1L),(-1L),0x98C83EB4L},{0x92D0AA21L,0x92D0AA21L,1L,0xDE15898BL,0x443872AEL,(-1L)},{(-2L),0x5B65FB09L,0x026D4807L,1L,(-1L),1L},{0x026D4807L,(-2L),0x026D4807L,0x9D13D384L,0x92D0AA21L,(-1L)},{(-2L),0x9D13D384L,1L,0x04758E08L,0x98C83EB4L,0x98C83EB4L}}};
                    int32_t *l_403 = &g_7;
                    int32_t *l_404[6];
                    int64_t *l_410 = &g_177;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_404[i] = (void*)0;
                    l_382 = (safe_mul_func_uint16_t_u_u((l_377 , (safe_unary_minus_func_int8_t_s((safe_add_func_uint32_t_u_u(0x7EDB1D9BL, (g_73[3][0][6] ^= p_17.f0.f3)))))), g_102.f2));
                    (*l_403) ^= (safe_sub_func_int8_t_s_s((g_80 >= (0x36EF01899CD92F0ELL >= (p_14.f0 != ((((~(safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(p_14.f2, ((((safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s(((p_17.f0.f3 > (((l_397 = l_396) == ((*l_400) = l_398)) ^ 0xCF74L)) | l_377.f0), l_382)), l_401[1][2][2])) >= p_14.f1) ^ l_402) == 1UL))), g_121.f1))) , 0x7A179866L) , (*g_118)) ^ l_402)))), (-1L)));
                    if (l_382)
                        break;
                    g_407++;
                    (*l_403) ^= (p_17 , ((0x1439523C6D49A363LL ^ 0x39C909553FF8E7BDLL) | ((*l_410) = p_17.f0.f0)));
                }
                else
                { 
                    uint16_t *l_415 = &g_134[5].f2;
                    uint16_t *l_416 = &g_36.f2;
                    uint16_t *l_417 = (void*)0;
                    uint16_t *l_419 = &g_251;
                    uint32_t *l_425 = &g_73[0][0][0];
                    int32_t **l_431 = &g_160;
                    int16_t **l_440 = &l_439;
                    int32_t l_452 = 0L;
                    uint8_t l_455 = 0UL;
                    int32_t *l_456 = &g_7;
                    int8_t *l_457[3][5] = {{(void*)0,&g_80,(void*)0,(void*)0,&g_80},{&g_80,(void*)0,(void*)0,&g_80,(void*)0},{&g_80,&g_80,&g_176[0],&g_80,&g_80}};
                    int32_t *l_459[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_459[i] = &l_418;
                    g_7 ^= ((safe_add_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((((*l_419)++) , g_368.f0.f3), (((void*)0 == g_422) & ((--(*l_425)) == p_17.f0.f2)))), ((safe_add_func_int64_t_s_s(((void*)0 != &p_13), ((void*)0 == &g_97))) & g_430))) >= p_17.f0.f1);
                    (*l_431) = (void*)0;
                    l_418 = l_402;
                    l_402 = (safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(p_14.f1, 8)) <= (safe_div_func_uint16_t_u_u((((p_17.f0.f0 & ((p_17.f0.f3 == 1UL) && ((g_36 , l_438[0][1]) == ((*l_440) = l_439)))) ^ g_121.f2) & l_377.f1), 0x8EAAL))), l_406));
                    g_76 = (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((((l_405[3][1] = (l_458[1][0][0] &= (g_176[0] = (safe_unary_minus_func_int16_t_s(((((*l_456) = ((((((l_382 == ((safe_lshift_func_uint16_t_u_u(0xCBC7L, 9)) >= (((safe_rshift_func_uint16_t_u_u(((l_406 <= (safe_lshift_func_int16_t_s_s(l_452, ((**l_440) = (safe_mod_func_int16_t_s_s(3L, ((p_15 , l_402) ^ 0UL))))))) , p_14.f2), l_402)) == p_15) | l_418))) ^ 5L) >= p_17.f0.f3) , l_455) , 0xD3F1L) != p_15)) == p_14.f3) == g_206)))))) ^ g_177) | p_14.f3) > l_377.f2), g_235)), l_377.f0));
                }
            }
            if (((((g_73[5][0][4] ^= (p_17.f0.f2 || (safe_mul_func_int8_t_s_s(((*l_464) &= ((*l_463) = (!l_458[1][0][0]))), ((((p_17.f0.f1 & p_14.f1) >= g_176[0]) & (((l_465[0][2] == (l_468 = l_467)) && l_377.f0) <= 3L)) && 1L))))) < 0x7FA248BCL) & 0xF2BAD14A264113C6LL) , l_470))
            { 
                int32_t ****l_475 = &g_473[0][3];
                int32_t ***l_477[6][6] = {{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]},{&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6],&g_474[6]}};
                int32_t ****l_476 = &l_477[1][0];
                int32_t l_480 = 0xF650CE75L;
                int i, j;
                l_418 |= (safe_lshift_func_uint8_t_u_s((((((((*l_439) = ((((*l_476) = ((*l_475) = g_473[3][0])) != l_478) >= g_430)) | (0x28L == (g_430 , (l_479[5][1] , (l_480 & g_365.f1))))) > 0x78L) < 0x946DL) , g_82[1]) , g_82[3]), l_458[1][0][0]));
                if (l_406)
                    continue;
            }
            else
            { 
                const struct S0 *l_481 = (void*)0;
                const struct S0 **l_482 = &l_481;
                int32_t l_489[4];
                uint64_t l_490 = 3UL;
                uint32_t l_511 = 0UL;
                int i;
                for (i = 0; i < 4; i++)
                    l_489[i] = 0x8E61EBABL;
                (*l_482) = ((1L | 2UL) , l_481);
                if ((((9L >= p_17.f0.f2) || ((*l_439) = (((&l_481 != ((*g_424) = l_483)) == ((9L || (safe_mul_func_uint16_t_u_u((((safe_sub_func_uint32_t_u_u(((l_488 == (func_47(g_37[1][2][4]) , &l_481)) & g_368.f0.f1), 6UL)) && l_489[1]) , g_430), p_17.f0.f0))) , l_377.f1)) <= l_490))) || 65529UL))
                { 
                    uint64_t l_497[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_497[i] = 0x5C97973129385903LL;
                    l_504[0][4] ^= (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(p_15, l_497[0])) | (safe_sub_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s((1UL != (safe_rshift_func_uint16_t_u_s(p_14.f2, 15))), (l_479[2][0] >= (5UL <= l_377.f1)))) ^ 0UL) , p_17.f0.f3), 0x176AL))), 3)), 0xF87CCE1FD8E69470LL));
                }
                else
                { 
                    int32_t *l_505 = &l_458[1][0][0];
                    int32_t *l_506 = (void*)0;
                    int32_t *l_507 = &g_7;
                    int32_t *l_508 = (void*)0;
                    int32_t *l_509 = &g_7;
                    int32_t *l_510[4];
                    int64_t l_514 = (-1L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_510[i] = (void*)0;
                    ++l_511;
                    return l_514;
                }
                for (l_377.f0 = 15; (l_377.f0 > 31); l_377.f0 = safe_add_func_uint8_t_u_u(l_377.f0, 1))
                { 
                    uint16_t l_519 = 65535UL;
                    uint32_t **l_521 = &l_469[1];
                    uint32_t ***l_520[4][7][5] = {{{&l_521,(void*)0,&l_521,&l_521,&l_521},{(void*)0,(void*)0,&l_521,&l_521,&l_521},{(void*)0,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,(void*)0,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521}},{{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,(void*)0,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,(void*)0,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521}},{{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,(void*)0},{&l_521,&l_521,&l_521,(void*)0,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,(void*)0}},{{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,(void*)0,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,(void*)0,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521},{&l_521,&l_521,&l_521,&l_521,&l_521}}};
                    uint64_t *l_539[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_539[i] = (void*)0;
                    l_519 &= (((p_15 >= 0xC46277B2L) ^ (0xFDD0641AAD813F8ELL < 0x98DFC27598A40109LL)) > (safe_rshift_func_uint16_t_u_s(g_251, g_176[0])));
                    if (p_14.f0)
                        break;
                    if (p_17.f0.f2)
                        continue;
                    l_522[4] = &l_469[3];
                    l_489[1] = ((0UL && (safe_div_func_int64_t_s_s(((4L || (safe_rshift_func_int8_t_s_u((18446744073709551615UL < (safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(1UL, 0)), (((((safe_add_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((g_123 = (l_538 == 4294967287UL)) | g_368.f0.f2), 0x7223L)), l_519)) , l_479[3][1]), g_50[0][0][2])) > p_14.f3) || l_377.f2) == 1L) , l_405[3][1])))), 5))) != 18446744073709551615UL), 0xE8350BD1CAA78B87LL))) && 0x4CL);
                }
                (**l_478) = &l_458[1][0][0];
            }
            l_542[2][0][6]++;
            for (g_123 = 22; (g_123 >= 30); g_123++)
            { 
                uint32_t **l_550 = (void*)0;
                uint32_t ***l_549[1];
                int32_t l_551 = (-7L);
                int32_t l_560[5];
                struct S0 l_569 = {2UL,0xC0D6907BL,1L,0xC5F31F38L};
                int i;
                for (i = 0; i < 1; i++)
                    l_549[i] = &l_550;
                for (i = 0; i < 5; i++)
                    l_560[i] = (-1L);
                for (g_36.f1.f3 = (-25); (g_36.f1.f3 <= 5); g_36.f1.f3++)
                { 
                    l_551 = ((void*)0 == l_549[0]);
                }
                (*l_468) = (p_17 , &g_134[5]);
                if ((safe_lshift_func_uint16_t_u_s(65528UL, 14)))
                { 
                    int32_t l_554 = 3L;
                    int32_t l_555 = 0x553FD135L;
                    int32_t l_556 = (-6L);
                    int32_t l_557 = 0xF5256D16L;
                    int32_t l_558[1];
                    int8_t l_561 = 0x7DL;
                    uint64_t l_563 = 18446744073709551609UL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_558[i] = 0xAA6DA91DL;
                    l_563++;
                }
                else
                { 
                    uint16_t l_566 = 0x3CE1L;
                    ++l_566;
                    if (l_560[3])
                        break;
                    if ((**g_117))
                        break;
                }
                (**l_488) = l_569;
            }
            l_559[0] = (((!g_102.f0) , l_571) == (l_573 = l_573));
        }
        for (l_541 = 2; (l_541 >= 0); l_541 -= 1)
        { 
            int16_t l_590 = 7L;
            struct S0 l_598 = {0x37L,0x84F0262AL,1L,2UL};
            for (p_17.f3.f3 = 0; p_17.f3.f3 < 1; p_17.f3.f3 += 1)
            {
                g_176[p_17.f3.f3] = (-1L);
            }
            for (g_132.f1.f3 = 1; (g_132.f1.f3 <= 5); g_132.f1.f3 += 1)
            { 
                uint64_t l_589 = 1UL;
                int32_t l_594 = (-9L);
                struct S0 l_599 = {0xE5L,-1L,0x8455L,0UL};
                int i, j, k;
                (**l_478) = p_13;
                if ((safe_add_func_int32_t_s_s(g_50[l_541][l_541][l_541], (((safe_mul_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(g_329[(l_541 + 2)], ((safe_unary_minus_func_int32_t_s((l_405[3][1] |= (safe_mod_func_uint16_t_u_u(g_329[l_541], p_16))))) <= (p_14.f1 & ((((-2L) > (4L & 0xC5DB2F02502A17E8LL)) >= g_329[(l_541 + 2)]) <= g_235))))) , p_17.f0.f1) >= l_589), l_590)) | p_16), 8)), 0xD0L)), l_470)) > g_368.f0.f0) ^ 0xD61302B3L))))
                { 
                    int32_t ****l_591 = &g_473[3][0];
                    int32_t *l_595 = &g_7;
                    int i;
                    (*l_595) ^= (l_594 = ((&g_177 != ((((*l_591) = (void*)0) == (void*)0) , &p_16)) <= (--g_329[(l_541 + 1)])));
                }
                else
                { 
                    if (g_50[l_541][l_541][l_541])
                        break;
                }
                for (p_14.f2 = 2; (p_14.f2 >= 0); p_14.f2 -= 1)
                { 
                    uint32_t ***l_596 = (void*)0;
                    uint32_t ***l_597 = &l_571;
                    (*l_597) = l_573;
                    l_599 = ((***g_424) = l_598);
                    (***g_424) = p_14;
                }
            }
        }
    }
    return l_504[0][4];
}



static int32_t * func_18(uint32_t  p_19, uint32_t  p_20, int32_t * const  p_21, int32_t * const  p_22, struct S0  p_23)
{ 
    uint64_t *l_122 = &g_123;
    int32_t *l_124 = &g_76;
    union U1 *l_131[7][7] = {{(void*)0,&g_36,(void*)0,&g_36,&g_132,&g_36,&g_36},{(void*)0,(void*)0,&g_132,(void*)0,(void*)0,(void*)0,&g_36},{&g_36,(void*)0,&g_132,&g_36,(void*)0,&g_132,&g_132},{(void*)0,&g_36,(void*)0,&g_36,&g_132,&g_132,&g_36},{&g_36,&g_36,&g_36,&g_132,&g_132,&g_36,&g_36},{(void*)0,&g_132,&g_132,(void*)0,&g_36,&g_36,&g_132},{(void*)0,&g_36,&g_36,&g_132,&g_132,&g_36,&g_36}};
    union U1 *l_133 = &g_134[5];
    uint64_t **l_135 = (void*)0;
    uint32_t l_155 = 0x06FC5896L;
    int32_t l_166[7] = {0x60D2B78AL,0x60D2B78AL,0x60D2B78AL,0x60D2B78AL,0x60D2B78AL,0x60D2B78AL,0x60D2B78AL};
    struct S0 *l_241[5][5][3] = {{{&g_121,&g_102,&g_102},{&g_102,&g_121,&g_102},{&g_121,&g_121,&g_102},{&g_102,(void*)0,&g_102},{&g_121,&g_102,&g_121}},{{&g_102,(void*)0,&g_102},{&g_121,&g_121,&g_121},{&g_102,&g_121,&g_102},{&g_121,&g_102,&g_102},{&g_102,&g_121,&g_102}},{{&g_121,&g_121,&g_102},{&g_102,(void*)0,&g_102},{&g_121,&g_102,&g_121},{&g_102,(void*)0,&g_102},{&g_121,&g_121,&g_121}},{{&g_102,&g_121,&g_102},{&g_121,&g_102,&g_102},{&g_102,&g_121,&g_102},{&g_121,&g_121,&g_102},{&g_102,(void*)0,&g_102}},{{&g_121,&g_102,&g_121},{&g_102,(void*)0,&g_102},{&g_121,&g_121,&g_121},{&g_102,&g_121,&g_102},{&g_121,&g_102,&g_102}}};
    int8_t l_289 = 0xE7L;
    uint16_t l_290 = 0x8CC6L;
    int8_t *l_291 = &g_176[0];
    int16_t *l_293[6][2][4] = {{{&g_121.f2,&g_121.f2,&g_102.f2,&g_121.f2},{&g_121.f2,&g_121.f2,&g_102.f2,&g_121.f2}},{{&g_102.f2,&g_121.f2,&g_102.f2,&g_102.f2},{(void*)0,(void*)0,&g_102.f2,&g_121.f2}},{{(void*)0,&g_121.f2,&g_102.f2,(void*)0},{&g_102.f2,&g_121.f2,&g_102.f2,&g_102.f2}},{{&g_121.f2,&g_121.f2,&g_102.f2,(void*)0},{&g_121.f2,&g_121.f2,&g_121.f2,&g_121.f2}},{{&g_102.f2,(void*)0,&g_121.f2,&g_102.f2},{&g_121.f2,&g_121.f2,&g_102.f2,&g_121.f2}},{{&g_121.f2,&g_121.f2,&g_102.f2,&g_121.f2},{&g_102.f2,&g_121.f2,&g_102.f2,&g_102.f2}}};
    int8_t l_294[5][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
    uint32_t *l_308 = &g_50[2][2][2];
    uint32_t **l_307 = &l_308;
    struct S0 ***l_357 = (void*)0;
    struct S0 ****l_356 = &l_357;
    struct S0 *****l_355[2];
    struct S0 ***l_361 = (void*)0;
    struct S0 **** const l_360 = &l_361;
    struct S0 **** const *l_359 = &l_360;
    int32_t *l_364 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_355[i] = &l_356;
    (*l_124) = ((void*)0 != l_122);
    for (p_23.f1 = 0; (p_23.f1 < (-2)); p_23.f1 = safe_sub_func_uint32_t_u_u(p_23.f1, 1))
    { 
        union U1 *l_128[2][4] = {{&g_36,(void*)0,(void*)0,&g_36},{(void*)0,&g_36,(void*)0,(void*)0}};
        union U1 **l_127 = &l_128[1][0];
        union U1 *l_130[1];
        union U1 **l_129[1];
        int32_t l_156 = 0xA33768ACL;
        uint8_t l_213 = 6UL;
        int8_t ***l_224[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        uint64_t l_238 = 0x098A5062525884CELL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_130[i] = &g_36;
        for (i = 0; i < 1; i++)
            l_129[i] = &l_130[0];
        l_133 = (l_131[4][5] = ((*l_127) = &g_36));
        if (((void*)0 == l_135))
        { 
            struct S0 *l_157 = (void*)0;
            l_156 = ((((**g_117) == (~(*l_124))) , (g_132.f0.f2 == ((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((~0xC8L), ((1L & (((g_36.f2 = (safe_unary_minus_func_int8_t_s(p_20))) == ((safe_div_func_uint32_t_u_u(0UL, (*g_120))) || p_23.f0)) , p_23.f1)) , p_23.f0))) , p_23.f2), p_23.f2)), l_155)), (*l_124))), g_102.f1)), 4)), 0x53BDL)) , 0L))) ^ (*g_120));
            g_102 = g_134[5].f0;
        }
        else
        { 
            int32_t *l_161 = &g_7;
            int32_t l_178 = 0xD365824EL;
            struct S0 *l_242 = &g_121;
            for (g_121.f2 = 0; (g_121.f2 <= (-17)); g_121.f2 = safe_sub_func_uint8_t_u_u(g_121.f2, 1))
            { 
                uint64_t l_180 = 0UL;
                for (g_28 = 0; (g_28 <= 1); g_28 += 1)
                { 
                    g_160 = (void*)0;
                    return l_161;
                }
                for (g_102.f0 = 0; (g_102.f0 >= 41); ++g_102.f0)
                { 
                    int32_t l_164[7][1] = {{0xA8DA92CEL},{0L},{0xA8DA92CEL},{0L},{0xA8DA92CEL},{0L},{0xA8DA92CEL}};
                    int32_t *l_165 = &l_156;
                    int32_t *l_167 = &g_7;
                    int32_t *l_168 = &l_156;
                    int32_t *l_169 = (void*)0;
                    int32_t *l_170 = &l_166[1];
                    int32_t *l_171 = &g_7;
                    int32_t *l_172 = &l_166[1];
                    int32_t *l_173 = (void*)0;
                    int32_t *l_174 = &g_76;
                    int32_t *l_175[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_175[i] = &l_156;
                    --l_180;
                }
                if ((*g_118))
                    continue;
            }
            for (g_36.f1.f3 = 0; (g_36.f1.f3 <= 0); g_36.f1.f3 += 1)
            { 
                uint16_t *l_183[5] = {&g_132.f2,&g_132.f2,&g_132.f2,&g_132.f2,&g_132.f2};
                int32_t l_184 = 0x332A1925L;
                int32_t l_185[1][5];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_185[i][j] = 0x49581409L;
                }
            }
            if (((*l_124) != 4L))
            { 
                int32_t **l_212 = &l_161;
                (*l_212) = p_22;
                --l_213;
                for (g_7 = (-10); (g_7 >= (-26)); g_7--)
                { 
                    return &g_2;
                }
                return &g_76;
            }
            else
            { 
                int64_t *l_221 = &g_179[1];
                int32_t l_228 = 0x0F78E1B7L;
                int32_t l_234 = (-10L);
                int32_t **l_249 = &l_161;
                int32_t **l_250 = &l_161;
                for (p_20 = 0; (p_20 <= 2); p_20 += 1)
                { 
                    int32_t *l_218 = &l_166[2];
                    return &g_76;
                }
                if ((safe_rshift_func_uint16_t_u_s((((*l_221) = l_156) && (p_23.f1 <= 1UL)), 15)))
                { 
                    int32_t **l_222 = &l_124;
                    struct S0 *l_223 = &g_134[5].f1;
                    (*l_222) = (void*)0;
                    (*l_161) = ((*g_160) ^= (*l_161));
                    l_224[2] = (((*l_223) = p_23) , &g_97);
                }
                else
                { 
                    struct S0 *l_225 = &g_102;
                    int32_t l_226[2][1][3] = {{{0x30AE1049L,0x30AE1049L,1L}},{{0x30AE1049L,0x30AE1049L,1L}}};
                    int32_t *l_227 = &l_166[2];
                    int32_t *l_229 = &l_228;
                    int32_t *l_230 = &l_226[0][0][0];
                    int32_t *l_231 = &l_178;
                    int32_t *l_232 = (void*)0;
                    int32_t *l_233[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_233[i] = &l_166[1];
                    (*l_225) = p_23;
                    g_235--;
                    l_238--;
                    (*l_230) ^= (((*l_161) = (l_241[4][3][1] != l_242)) <= ((p_20 <= (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((((safe_add_func_int8_t_s_s((((*l_225) , l_249) != l_250), g_28)) == g_179[0]) != l_213) < (*g_118)) < (*p_22)), 0UL)) <= (*l_124)), 65535UL))) ^ (*l_124)));
                    g_251--;
                }
                (*g_160) ^= (p_23.f1 <= ((safe_div_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((*g_120), ((void*)0 == &g_82[1]))), 0L)), (safe_add_func_int64_t_s_s((-1L), g_132.f0.f3)))) < p_23.f2));
            }
            (*l_161) &= ((*g_160) = (6L > ((!(((*g_160) < (l_224[2] == (void*)0)) == 0xE9A3B20B721F5756LL)) , ((*p_22) | (((+(safe_div_func_int16_t_s_s(0x8006L, p_23.f2))) ^ p_23.f0) && g_2)))));
        }
        return &g_2;
    }
    (*g_160) = (*p_22);
    if ((p_23.f0 && (safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((0x8DDEL || 65534UL), (((safe_rshift_func_int8_t_s_s(((((p_23.f2 = ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((*l_291) = (safe_lshift_func_uint8_t_u_s(((((safe_rshift_func_int16_t_s_u((safe_sub_func_uint64_t_u_u((l_122 != (((((!(safe_mul_func_uint8_t_u_u(((safe_div_func_int32_t_s_s((l_289 = ((&l_166[1] != (*g_117)) || ((((*l_124) , (*l_124)) >= 0xA042L) && (*l_124)))), l_290)) , 254UL), g_134[5].f0.f2))) | (*l_124)) && (*g_160)) == g_73[1][0][3]) , l_122)), p_23.f3)), p_23.f2)) >= 0x25B05D60L) > (*l_124)) ^ g_102.f3), 6))), p_23.f2)) | g_292), 0)) != p_19)) ^ 0x77D3L) ^ l_294[1][0]) , p_23.f0), 3)) == (*l_124)) <= p_23.f1))), (*l_124))), g_134[5].f0.f2))))
    { 
        uint32_t l_295 = 0UL;
        for (g_102.f0 = 0; (g_102.f0 <= 2); g_102.f0 += 1)
        { 
            l_295++;
        }
        (*l_124) = (+l_295);
    }
    else
    { 
        const uint64_t l_344 = 0x48AEAB73C04D749CLL;
        int8_t *l_347 = &g_176[0];
        int8_t **l_348[6];
        struct S0 l_354[6][2][7] = {{{{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L}},{{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L}}},{{{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L}},{{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L}}},{{{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L}},{{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L}}},{{{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L}},{{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L}}},{{{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L}},{{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L}}},{{{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L},{0xA8L,7L,1L,3UL},{251UL,0x4C4648E6L,1L,0xB6863D94L}},{{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L},{255UL,7L,0x406CL,0xFBB6D185L}}}};
        uint32_t ***l_358 = &l_307;
        uint8_t *l_362[2][5][3];
        int32_t l_363 = (-1L);
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_348[i] = &g_98;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 5; j++)
            {
                for (k = 0; k < 3; k++)
                    l_362[i][j][k] = (void*)0;
            }
        }
        for (p_23.f2 = 4; (p_23.f2 >= 0); p_23.f2 -= 1)
        { 
            struct S0 ***l_301 = &g_299;
            int8_t **l_317 = &g_98;
            int32_t l_328[5][5] = {{0xAD7FB43FL,(-1L),(-1L),(-1L),(-1L)},{0x62A07FE8L,0x86A586A8L,(-2L),(-1L),0L},{0x86A586A8L,(-1L),(-2L),0x353267EAL,(-2L)},{0L,0L,(-1L),0x62A07FE8L,1L},{0x86A586A8L,1L,0xAD7FB43FL,0x62A07FE8L,0x62A07FE8L}};
            uint64_t ***l_342[7] = {&l_135,&l_135,&l_135,&l_135,&l_135,&l_135,&l_135};
            int i, j;
            (*l_301) = g_299;
            for (g_36.f1.f1 = 6; (g_36.f1.f1 >= 0); g_36.f1.f1 -= 1)
            { 
                union U1 *l_305 = &g_134[5];
                uint32_t ***l_309 = &l_307;
                for (g_132.f2 = 0; (g_132.f2 <= 6); g_132.f2 += 1)
                { 
                    struct S0 **** const l_302 = &l_301;
                    struct S0 ****l_304 = &l_301;
                    struct S0 *****l_303 = &l_304;
                    union U1 **l_306 = &l_305;
                    int i, j;
                    (*l_303) = l_302;
                    (*l_124) = (g_134[4] , 0x397DFDC9L);
                    (*l_306) = l_305;
                }
                (*l_309) = l_307;
                for (g_102.f2 = 4; (g_102.f2 >= 0); g_102.f2 -= 1)
                { 
                    int i, j, k;
                    if (g_37[g_102.f2][g_102.f2][(p_23.f2 + 2)])
                        break;
                }
            }
            for (g_36.f1.f1 = 0; (g_36.f1.f1 <= 2); g_36.f1.f1 += 1)
            { 
                int16_t l_312 = (-1L);
                uint16_t *l_313 = &g_251;
                int32_t l_323 = (-1L);
                int64_t l_337 = 0L;
            }
        }
        (*g_160) |= (((safe_mod_func_int16_t_s_s(((((g_98 = l_347) == ((l_363 = (safe_lshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((((0xD8L != (0x4A030C4BL & ((!(((func_47((l_354[5][0][5] , (l_355[1] == (g_123 , (l_359 = ((((*l_358) = &l_308) != &l_308) , &l_356)))))) , 1UL) <= g_176[0]) || 0L)) < g_102.f3))) , (*p_22)) >= (*g_120)), g_251)) < 18446744073709551614UL), 3))) , &l_289)) != g_176[0]) < (*g_118)), p_23.f2)) & 18446744073709551615UL) | (*p_22));
        (*g_299) = (*g_299);
    }
    return l_364;
}



static uint64_t  func_30(uint32_t  p_31, int8_t * p_32, union U1  p_33)
{ 
    uint64_t l_55 = 3UL;
    int32_t l_114 = 0x9620DE40L;
    for (g_36.f3.f0 = 1; (g_36.f3.f0 <= 4); g_36.f3.f0 += 1)
    { 
        uint32_t *l_43 = &g_37[4][1][5];
        union U1 l_44 = {{0x2BL,8L,4L,0xF56F60D1L}};
        uint64_t *l_56[6];
        int32_t l_57 = 0xAE6C26CFL;
        int32_t * const **l_119[7][4] = {{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117},{&g_117,&g_117,&g_117,&g_117}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_56[i] = &l_55;
        g_117 = func_38(l_43, l_44, (safe_sub_func_int16_t_s_s((func_47(p_33.f0.f1) , (g_25 == ((l_57 = l_55) && (func_58((g_50[0][2][2] || p_33.f0.f3), g_25, g_36.f0.f2) & l_55)))), l_114)), l_43);
        return g_89;
    }
    return g_102.f3;
}



static int32_t * const * func_38(uint32_t * p_39, union U1  p_40, const int64_t  p_41, uint32_t * p_42)
{ 
    int64_t l_115 = 0x98B969CE4C498B4FLL;
    int32_t *l_116[7][7][4] = {{{(void*)0,&g_76,(void*)0,&g_76},{&g_76,(void*)0,&g_76,&g_76},{&g_76,&g_76,&g_76,&g_76},{(void*)0,&g_76,&g_76,&g_2},{(void*)0,&g_76,&g_2,&g_76},{&g_7,&g_76,&g_7,&g_2},{&g_76,&g_76,(void*)0,&g_76}},{{&g_76,&g_76,&g_76,&g_76},{&g_7,(void*)0,&g_76,&g_76},{&g_2,&g_76,(void*)0,(void*)0},{(void*)0,&g_7,(void*)0,&g_76},{&g_7,&g_76,&g_2,&g_2},{&g_7,&g_7,(void*)0,&g_2},{&g_2,(void*)0,(void*)0,(void*)0}},{{&g_7,&g_2,&g_7,&g_76},{&g_76,(void*)0,&g_2,&g_76},{(void*)0,&g_76,(void*)0,&g_2},{(void*)0,&g_76,&g_2,(void*)0},{&g_76,&g_2,&g_7,(void*)0},{&g_7,&g_7,(void*)0,(void*)0},{&g_2,(void*)0,(void*)0,(void*)0}},{{&g_7,&g_7,&g_2,&g_7},{&g_7,(void*)0,(void*)0,&g_76},{(void*)0,&g_2,(void*)0,&g_7},{&g_2,&g_7,&g_76,&g_76},{&g_7,&g_76,&g_76,(void*)0},{&g_76,&g_76,(void*)0,&g_76},{&g_76,&g_7,(void*)0,&g_76}},{{&g_7,(void*)0,(void*)0,&g_76},{&g_7,&g_7,&g_76,&g_76},{&g_2,&g_76,&g_76,(void*)0},{(void*)0,(void*)0,&g_76,&g_7},{&g_7,(void*)0,(void*)0,&g_76},{&g_76,(void*)0,&g_2,&g_7},{&g_7,&g_2,&g_76,&g_2}},{{(void*)0,(void*)0,(void*)0,&g_76},{(void*)0,&g_76,&g_76,&g_2},{&g_2,&g_7,&g_2,&g_7},{&g_76,&g_7,&g_2,&g_2},{&g_2,&g_7,&g_7,&g_7},{&g_2,&g_76,&g_7,&g_76},{&g_2,(void*)0,&g_2,(void*)0}},{{&g_76,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_76,&g_7},{(void*)0,(void*)0,(void*)0,&g_2},{(void*)0,(void*)0,&g_76,&g_76},{&g_7,&g_7,&g_2,(void*)0},{&g_76,&g_2,(void*)0,&g_7},{&g_7,&g_76,&g_76,&g_76}}};
    int i, j, k;
    g_76 &= l_115;
    return g_117;
}



static struct S0  func_47(const uint64_t  p_48)
{ 
    int32_t *l_49[7] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    int8_t *l_53 = &g_25;
    struct S0 l_54 = {1UL,0x935E7B04L,1L,0x3DE95074L};
    int i;
    g_50[0][0][2]--;
    g_7 ^= ((void*)0 == l_53);
    return l_54;
}



static int32_t  func_58(uint16_t  p_59, uint32_t  p_60, uint64_t  p_61)
{ 
    int8_t *l_63 = &g_25;
    int8_t **l_62 = &l_63;
    union U1 l_71 = {{0x82L,0xFDCAA397L,1L,0xE153341CL}};
    uint32_t *l_72 = &g_73[5][0][4];
    int32_t l_74 = 0xDF947B41L;
    int32_t *l_75 = &g_76;
    int8_t *l_79 = &g_80;
    uint8_t *l_81 = &g_82[1];
    int64_t l_113[1][7][1] = {{{5L},{5L},{5L},{5L},{5L},{5L},{5L}}};
    int i, j, k;
lbl_104:
    (*l_75) ^= ((l_74 = ((((((*l_62) = &g_25) == &g_25) <= (((p_61 & ((g_36 , (g_2 ^ 0xFAL)) || ((!(safe_mul_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((((*l_72) = (l_71 , p_61)) != 0x1C69F0B4L), g_37[3][3][5])), g_36.f0.f2)) && 1UL), g_25))) || 0x8D123FB1128C1896LL))) && l_71.f0.f1) || 0x0915L)) == g_7) ^ 0UL)) < l_71.f0.f0);
    if ((safe_add_func_uint16_t_u_u(((((*l_79) = (l_71 , 0x3BL)) >= ((*l_81) = 1UL)) , (*l_75)), 0x1954L)))
    { 
        int32_t l_100 = 0xE77B9E4BL;
        int32_t **l_105 = &l_75;
lbl_106:
        for (l_71.f1.f0 = 1; (l_71.f1.f0 <= 5); l_71.f1.f0 += 1)
        { 
            uint32_t l_85[5];
            int64_t l_92[1];
            int8_t ***l_99 = &g_97;
            struct S0 *l_101 = &g_102;
            int32_t *l_103 = &g_76;
            int i;
            for (i = 0; i < 5; i++)
                l_85[i] = 0x53715829L;
            for (i = 0; i < 1; i++)
                l_92[i] = 0x9CA1EE17268510E3LL;
            l_100 &= (safe_sub_func_int16_t_s_s(l_85[3], ((safe_mul_func_uint8_t_u_u((((g_88 = &p_60) == &g_37[3][2][3]) || ((safe_mod_func_uint16_t_u_u(l_92[0], (safe_mod_func_uint8_t_u_u(((((safe_mod_func_int8_t_s_s(((((*l_99) = g_97) != (void*)0) , (&l_62 != (void*)0)), g_37[4][2][0])) <= g_73[5][0][4]) != g_37[2][4][6]) & (-3L)), p_60)))) | p_59)), l_85[1])) <= (-1L))));
            (*l_101) = l_71.f0;
            l_103 = l_103;
            if (p_61)
                goto lbl_104;
        }
        (*l_105) = &g_76;
        if (l_71.f0.f2)
            goto lbl_106;
    }
    else
    { 
        uint64_t **l_108 = (void*)0;
        uint64_t ***l_107 = &l_108;
        int8_t **l_109 = &l_79;
        int32_t *l_110 = &g_7;
        int32_t **l_111 = &l_110;
        (*l_107) = (void*)0;
        g_97 = l_109;
        (*l_111) = l_110;
        (**l_111) |= ((p_59 | 0x778E667A4CD60AC8LL) | (&p_60 != &p_60));
    }
    (*l_75) &= (!l_113[0][4][0]);
    return p_60;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_36.f0.f0, "g_36.f0.f0", print_hash_value);
    transparent_crc(g_36.f0.f1, "g_36.f0.f1", print_hash_value);
    transparent_crc(g_36.f0.f2, "g_36.f0.f2", print_hash_value);
    transparent_crc(g_36.f0.f3, "g_36.f0.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_37[i][j][k], "g_37[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_50[i][j][k], "g_50[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_82[i], "g_82[i]", print_hash_value);

    }
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_102.f0, "g_102.f0", print_hash_value);
    transparent_crc(g_102.f1, "g_102.f1", print_hash_value);
    transparent_crc(g_102.f2, "g_102.f2", print_hash_value);
    transparent_crc(g_102.f3, "g_102.f3", print_hash_value);
    transparent_crc(g_121.f0, "g_121.f0", print_hash_value);
    transparent_crc(g_121.f1, "g_121.f1", print_hash_value);
    transparent_crc(g_121.f2, "g_121.f2", print_hash_value);
    transparent_crc(g_121.f3, "g_121.f3", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_132.f0.f0, "g_132.f0.f0", print_hash_value);
    transparent_crc(g_132.f0.f1, "g_132.f0.f1", print_hash_value);
    transparent_crc(g_132.f0.f2, "g_132.f0.f2", print_hash_value);
    transparent_crc(g_132.f0.f3, "g_132.f0.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_134[i].f0.f0, "g_134[i].f0.f0", print_hash_value);
        transparent_crc(g_134[i].f0.f1, "g_134[i].f0.f1", print_hash_value);
        transparent_crc(g_134[i].f0.f2, "g_134[i].f0.f2", print_hash_value);
        transparent_crc(g_134[i].f0.f3, "g_134[i].f0.f3", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_176[i], "g_176[i]", print_hash_value);

    }
    transparent_crc(g_177, "g_177", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_179[i], "g_179[i]", print_hash_value);

    }
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_329[i], "g_329[i]", print_hash_value);

    }
    transparent_crc(g_365.f0, "g_365.f0", print_hash_value);
    transparent_crc(g_365.f1, "g_365.f1", print_hash_value);
    transparent_crc(g_365.f2, "g_365.f2", print_hash_value);
    transparent_crc(g_365.f3, "g_365.f3", print_hash_value);
    transparent_crc(g_368.f0.f0, "g_368.f0.f0", print_hash_value);
    transparent_crc(g_368.f0.f1, "g_368.f0.f1", print_hash_value);
    transparent_crc(g_368.f0.f2, "g_368.f0.f2", print_hash_value);
    transparent_crc(g_368.f0.f3, "g_368.f0.f3", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_618[i][j], "g_618[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_771[i][j], "g_771[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_818, "g_818", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_822[i][j][k], "g_822[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
