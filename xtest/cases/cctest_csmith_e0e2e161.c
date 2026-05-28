// SPDX-License-Identifier: MIT
// cctest_csmith_e0e2e161.c --- cctest case csmith_e0e2e161 (csmith seed 3772965217)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x39ab3b1c */
/* @exp_ticks 0x3e85 */

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

// Options:   -s 3772965217 -o /tmp/csmith_gen_vo29lcd4/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   uint64_t  f0;
   uint32_t  f1;
};

struct S1 {
   int8_t  f0;
};

#pragma pack(push)
#pragma pack(1)
struct S2 {
   int16_t  f0;
   uint32_t  f1;
   struct S1  f2;
   uint64_t  f3;
   int8_t  f4;
};
#pragma pack(pop)

union U3 {
   const uint64_t  f0;
   uint64_t  f1;
};


static int16_t g_3[3][1] = {{0x29AAL},{0x29AAL},{0x29AAL}};
static int32_t g_7 = (-5L);
static int32_t g_31 = (-2L);
static uint64_t g_32 = 0x1BD53D2AE45661C4LL;
static struct S2 g_34[4] = {{0x74BFL,18446744073709551614UL,{0x23L},18446744073709551609UL,0xE5L},{0x74BFL,18446744073709551614UL,{0x23L},18446744073709551609UL,0xE5L},{0x74BFL,18446744073709551614UL,{0x23L},18446744073709551609UL,0xE5L},{0x74BFL,18446744073709551614UL,{0x23L},18446744073709551609UL,0xE5L}};
static uint8_t g_41 = 0xE3L;
static uint32_t g_79 = 1UL;
static int8_t g_90 = 0xFCL;
static struct S0 g_105 = {0xBAA844380E064424LL,0xFB0C79A4L};
static struct S2 g_111[1] = {{0L,0x7AA26087L,{0x67L},1UL,0x71L}};
static struct S1 g_138 = {0x20L};
static struct S2 g_139 = {8L,0xD2B40C0EL,{-1L},18446744073709551613UL,0L};
static uint64_t g_141[2][2][4] = {{{0x54E5FB264BA2F5D3LL,3UL,3UL,0x54E5FB264BA2F5D3LL},{3UL,0x54E5FB264BA2F5D3LL,3UL,3UL}},{{0x54E5FB264BA2F5D3LL,0x54E5FB264BA2F5D3LL,0xE30894340C134DC7LL,0x54E5FB264BA2F5D3LL},{0x54E5FB264BA2F5D3LL,3UL,3UL,0x54E5FB264BA2F5D3LL}}};
static int64_t g_168 = 0x163CAD6C9FEA8EEELL;
static uint64_t g_170 = 0xF5FC00A9F045B8B1LL;



static uint8_t  func_1(void);
static int32_t  func_8(int32_t  p_9, struct S0  p_10, int32_t  p_11, struct S1  p_12, struct S2  p_13);
static uint32_t  func_20(const uint16_t  p_21, uint32_t  p_22, uint16_t  p_23);
static const int32_t  func_39(union U3  p_40);




static uint8_t  func_1(void)
{ 
    int32_t l_2 = (-8L);
    uint32_t l_4 = 4294967295UL;
    int8_t l_155[2];
    uint8_t l_158 = 254UL;
    int i;
    for (i = 0; i < 2; i++)
        l_155[i] = 1L;
    --l_4;
    g_7 = (l_2 > l_4);
    if (g_7)
    { 
        uint16_t l_24[5] = {0xEB38L,0xEB38L,0xEB38L,0xEB38L,0xEB38L};
        struct S0 l_137 = {2UL,6UL};
        int32_t l_156 = 6L;
        int32_t l_157 = 0L;
        int i;
        g_141[1][0][1] = func_8((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u(func_20(((g_7 = l_24[1]) > (safe_div_func_int8_t_s_s(l_24[1], (safe_mod_func_uint32_t_u_u((g_3[0][0] ^ (g_32 |= ((((g_31 = (safe_div_func_int32_t_s_s(0x6B7BE2D3L, l_4))) , g_3[2][0]) , (-4L)) <= l_24[1]))), g_3[0][0]))))), g_3[0][0], l_24[0]), g_3[0][0])), g_105.f1)) >= 0xCADF514A7B4A8554LL), g_3[2][0])), l_137, g_3[2][0], g_138, g_139);
        for (g_79 = (-27); (g_79 == 9); g_79 = safe_add_func_uint64_t_u_u(g_79, 1))
        { 
            g_7 = (safe_add_func_int64_t_s_s((-3L), (!((safe_div_func_int16_t_s_s(((((safe_add_func_uint64_t_u_u(g_79, (safe_add_func_uint32_t_u_u(g_141[0][0][2], (l_2 = (safe_mul_func_uint8_t_u_u((l_4 ^ g_139.f1), l_137.f0))))))) < l_137.f1) <= (-4L)) , 0xF75DL), 0xF815L)) , g_34[1].f1))));
            return l_155[1];
        }
        l_158++;
    }
    else
    { 
        struct S1 l_161 = {0L};
        int32_t l_164 = 2L;
        int32_t l_165 = 0x583ED9FAL;
        int32_t l_166 = (-9L);
        int32_t l_169 = (-8L);
        g_34[1].f2 = l_161;
        for (l_4 = 0; (l_4 > 23); l_4 = safe_add_func_uint64_t_u_u(l_4, 5))
        { 
            int32_t l_167 = 0x484DF502L;
            --g_170;
        }
    }
    return g_41;
}



static int32_t  func_8(int32_t  p_9, struct S0  p_10, int32_t  p_11, struct S1  p_12, struct S2  p_13)
{ 
    struct S1 l_140 = {0xC8L};
    p_13.f2 = (l_140 = p_12);
    return p_13.f0;
}



static uint32_t  func_20(const uint16_t  p_21, uint32_t  p_22, uint16_t  p_23)
{ 
    struct S2 l_33[3][1] = {{{0x323FL,0UL,{0xEEL},0UL,0xDEL}},{{0x323FL,0UL,{0xEEL},0UL,0xDEL}},{{0x323FL,0UL,{0xEEL},0UL,0xDEL}}};
    union U3 l_45 = {0x99275A8055A5481FLL};
    int32_t l_133[3][5];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            l_133[i][j] = 1L;
    }
    g_34[1] = l_33[2][0];
    for (p_23 = 0; (p_23 == 56); p_23 = safe_add_func_uint64_t_u_u(p_23, 2))
    { 
        int32_t l_44 = 0x191B8600L;
        struct S1 l_136 = {-2L};
        g_7 = ((safe_add_func_int8_t_s_s(g_34[1].f3, (func_39((((++g_41) , l_44) , l_45)) || p_23))) | 0L);
        l_133[2][2] = 0L;
        for (g_105.f0 = (-23); (g_105.f0 < 54); g_105.f0 = safe_add_func_int8_t_s_s(g_105.f0, 1))
        { 
            g_7 = g_34[1].f2.f0;
            g_111[0].f2 = l_136;
        }
    }
    return l_33[2][0].f2.f0;
}



static const int32_t  func_39(union U3  p_40)
{ 
    int64_t l_52 = 0xAED967AAC3BC5F26LL;
    struct S1 l_69 = {0x91L};
    int8_t l_74 = 0L;
    int32_t l_76[1][1][4];
    int16_t l_78 = (-1L);
    int32_t l_99 = 5L;
    struct S0 l_102[3][3][2] = {{{{18446744073709551615UL,0xFD6B89D5L},{18446744073709551607UL,0x88BF30E8L}},{{18446744073709551615UL,0xFD6B89D5L},{18446744073709551615UL,0xFD6B89D5L}},{{18446744073709551607UL,0x88BF30E8L},{18446744073709551615UL,0xFD6B89D5L}}},{{{18446744073709551615UL,0xFD6B89D5L},{18446744073709551607UL,0x88BF30E8L}},{{18446744073709551615UL,0xFD6B89D5L},{18446744073709551615UL,0xFD6B89D5L}},{{18446744073709551607UL,0x88BF30E8L},{18446744073709551615UL,0xFD6B89D5L}}},{{{18446744073709551615UL,0xFD6B89D5L},{18446744073709551607UL,0x88BF30E8L}},{{18446744073709551607UL,0x88BF30E8L},{18446744073709551607UL,0x88BF30E8L}},{{0x350633388499A8E0LL,4294967293UL},{18446744073709551607UL,0x88BF30E8L}}}};
    int8_t l_129 = (-1L);
    uint8_t l_130[3][4] = {{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL},{1UL,1UL,1UL,1UL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
                l_76[i][j][k] = 1L;
        }
    }
    if ((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((((safe_mod_func_uint32_t_u_u((l_52 && (safe_add_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(65526UL, ((safe_mul_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(g_34[1].f3, 3)), (((safe_mul_func_uint16_t_u_u((~g_34[1].f1), g_3[2][0])) >= p_40.f0) , g_3[2][0]))) >= 0x30L), g_3[2][0])) || l_52), 0x64A4L)) >= p_40.f1))) >= g_34[1].f0), l_52))), l_52)) & l_52) ^ p_40.f0) && 0x80954C1BL), g_41)), l_52)))
    { 
        struct S1 l_68[5] = {{0x19L},{0x19L},{0x19L},{0x19L},{0x19L}};
        int i;
        l_69 = l_68[0];
        if ((l_68[0].f0 , (0xFF7D1D41L == (safe_mod_func_int32_t_s_s(g_7, (safe_lshift_func_uint8_t_u_s(((g_34[1].f0 == l_74) , 0x5DL), 2)))))))
        { 
            int8_t l_75[3][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
            int32_t l_77 = 0xAF0CFC20L;
            struct S1 l_82 = {1L};
            int i, j;
            --g_79;
            l_82 = g_34[1].f2;
        }
        else
        { 
            return g_32;
        }
    }
    else
    { 
        uint32_t l_97 = 0x2CC17BCFL;
        uint32_t l_98 = 0x3E57ECD0L;
        int32_t l_100[2][2];
        struct S0 l_101 = {18446744073709551615UL,0x6EB866B6L};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_100[i][j] = 0x71C77DD3L;
        }
        l_100[0][0] = ((((safe_sub_func_uint8_t_u_u((l_99 &= (g_41 = (safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u((l_76[0][0][0] <= (((!(g_90 = 65532UL)) > (safe_mul_func_int16_t_s_s((((((safe_mul_func_uint8_t_u_u((g_34[1].f3 ^ (safe_div_func_int32_t_s_s((l_97 != l_76[0][0][2]), 4294967295UL))), l_98)) ^ 0xC530L) > 0x01429742485FC019LL) < 0xAFL) > p_40.f1), l_74))) | (-2L))), 0x38A8L)), 1)))), p_40.f1)) | l_98) != g_7) , p_40.f1);
        l_100[0][0] &= ((l_101 = (l_102[0][0][0] = l_101)) , (((safe_rshift_func_int8_t_s_s((g_105 , (p_40.f0 <= ((safe_rshift_func_uint16_t_u_s(((~(safe_lshift_func_int16_t_s_s(p_40.f1, g_34[1].f3))) || p_40.f1), g_7)) < 0xB71FL))), p_40.f0)) < g_34[1].f0) <= g_105.f1));
        g_111[0] = g_34[1];
    }
    for (g_79 = 0; (g_79 <= 34); g_79 = safe_add_func_int32_t_s_s(g_79, 5))
    { 
        if ((g_3[0][0] & (0x61L <= ((safe_div_func_int32_t_s_s(g_34[1].f1, 0x18E0D0DAL)) , l_76[0][0][1]))))
        { 
            int32_t l_127 = 0x94094222L;
            for (g_90 = (-22); (g_90 > (-13)); g_90 = safe_add_func_int64_t_s_s(g_90, 2))
            { 
                g_111[0].f2 = (l_69 = ((((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_sub_func_int64_t_s_s(((~((safe_add_func_uint16_t_u_u((0x41L | p_40.f0), (g_34[1].f3 && 0xA81BD54BL))) > (-2L))) < 248UL), g_105.f0)) <= l_127) < 0x01ECF65DL), g_79)), p_40.f1)) | 0xAAL) < g_34[1].f1) , g_111[0].f2));
            }
            return p_40.f1;
        }
        else
        { 
            const uint32_t l_128[4][3] = {{1UL,0x8CF327FFL,1UL},{0UL,0UL,0UL},{1UL,0x8CF327FFL,1UL},{0UL,0UL,0UL}};
            int i, j;
            return l_128[2][2];
        }
    }
    l_130[1][2]--;
    return l_76[0][0][0];
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
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_34[i].f0, "g_34[i].f0", print_hash_value);
        transparent_crc(g_34[i].f1, "g_34[i].f1", print_hash_value);
        transparent_crc(g_34[i].f2.f0, "g_34[i].f2.f0", print_hash_value);
        transparent_crc(g_34[i].f3, "g_34[i].f3", print_hash_value);
        transparent_crc(g_34[i].f4, "g_34[i].f4", print_hash_value);

    }
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_105.f0, "g_105.f0", print_hash_value);
    transparent_crc(g_105.f1, "g_105.f1", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_111[i].f0, "g_111[i].f0", print_hash_value);
        transparent_crc(g_111[i].f1, "g_111[i].f1", print_hash_value);
        transparent_crc(g_111[i].f2.f0, "g_111[i].f2.f0", print_hash_value);
        transparent_crc(g_111[i].f3, "g_111[i].f3", print_hash_value);
        transparent_crc(g_111[i].f4, "g_111[i].f4", print_hash_value);

    }
    transparent_crc(g_138.f0, "g_138.f0", print_hash_value);
    transparent_crc(g_139.f0, "g_139.f0", print_hash_value);
    transparent_crc(g_139.f1, "g_139.f1", print_hash_value);
    transparent_crc(g_139.f2.f0, "g_139.f2.f0", print_hash_value);
    transparent_crc(g_139.f3, "g_139.f3", print_hash_value);
    transparent_crc(g_139.f4, "g_139.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_141[i][j][k], "g_141[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
