// SPDX-License-Identifier: MIT
// cctest_csmith_f5da4f71.c --- cctest case csmith_f5da4f71 (csmith seed 4124725105)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x4cdcadb2 */
/* @exp_ticks 0x4d6b */

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

// Options:   -s 4124725105 -o /tmp/csmith_gen_b6izs0x1/csmith.c --concise --no-pointers --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5 --max-struct-fields 6 --max-union-fields 4

static long __undefined;


struct S0 {
   int32_t  f0;
   int32_t  f1;
   int8_t  f2;
   const int32_t  f3;
   const int8_t  f4;
   int8_t  f5;
};

struct S1 {
   uint32_t  f0;
   uint8_t  f1;
   const int16_t  f2;
};

union U2 {
   struct S1  f0;
   uint64_t  f1;
};


static union U2 g_21 = {{0UL,0x3EL,0L}};
static int16_t g_32 = (-1L);
static uint32_t g_33 = 0xD2570D97L;
static uint32_t g_34 = 0x84B6D700L;
static int64_t g_35 = 0x360ABED9978317D2LL;
static uint32_t g_36 = 0xD8A0F839L;
static int16_t g_39[3][3][5] = {{{0xEC76L,1L,0x3604L,(-6L),0x3604L},{(-5L),(-5L),0xAD3FL,0xBB21L,0xFBC7L},{0xEC76L,0xCA8EL,3L,(-3L),(-3L)}},{{0xBB21L,(-1L),0xBB21L,0L,0x4FA7L},{3L,0xCA8EL,0xEC76L,4L,(-9L)},{0xAD3FL,(-5L),(-5L),0xAD3FL,0xBB21L}},{{0x3604L,1L,0xEC76L,(-9L),0xCA8EL},{2L,(-2L),0xBB21L,(-2L),2L},{1L,4L,3L,(-9L),0x5584L}}};
static uint64_t g_66[1][2] = {{0x009A6D6C577B3F78LL,0x009A6D6C577B3F78LL}};
static uint8_t g_67 = 0x1EL;
static int32_t g_72 = (-1L);
static uint32_t g_73 = 1UL;
static uint16_t g_82 = 0UL;
static int8_t g_103[5] = {1L,1L,1L,1L,1L};
static int8_t g_120[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
static int64_t g_121 = (-4L);
static int64_t g_141[1] = {0L};
static int32_t g_148 = 0x6BB63F96L;
static uint8_t g_169[3][3] = {{0UL,0UL,0UL},{2UL,2UL,2UL},{0UL,0UL,0UL}};
static int32_t g_188[5][4] = {{0x99871A79L,0L,0L,0x99871A79L},{0xF28E98AEL,0L,(-1L),0L},{0L,0x797E1D41L,(-1L),(-1L)},{0xF28E98AEL,0xF28E98AEL,0L,(-1L)},{0x99871A79L,0x797E1D41L,0x99871A79L,0L}};



static union U2  func_1(void);
static int8_t  func_5(union U2  p_6, uint64_t  p_7, uint64_t  p_8);
static union U2  func_9(const uint8_t  p_10, int64_t  p_11);
static uint64_t  func_16(uint64_t  p_17);




static union U2  func_1(void)
{ 
    uint32_t l_2 = 0x4438BEA1L;
    int32_t l_83 = (-10L);
    int32_t l_84 = 0x8DB521C1L;
    int32_t l_271 = (-4L);
    union U2 l_272 = {{4294967295UL,0x98L,-1L}};
    l_2++;
    l_271 ^= ((g_120[1] = func_5(func_9((l_84 = (safe_sub_func_int16_t_s_s((l_83 = (((safe_mul_func_int8_t_s_s((((l_2 & func_16(((safe_unary_minus_func_uint8_t_u((((g_21 , l_2) ^ (g_21.f0.f1 || l_2)) && 0xDD2CC910L))) || 0L))) , g_73) , g_32), 0xF1L)) > l_2) & g_35)), g_35))), l_2), l_2, l_2)) , 1L);
    return l_272;
}



static int8_t  func_5(union U2  p_6, uint64_t  p_7, uint64_t  p_8)
{ 
    uint64_t l_134[1];
    int32_t l_168 = 0xEF0FED55L;
    union U2 l_181 = {{0xD8020B3EL,0UL,-1L}};
    int8_t l_202[5];
    int32_t l_211 = 0x12A715A3L;
    int32_t l_213[5] = {0x869A76FBL,0x869A76FBL,0x869A76FBL,0x869A76FBL,0x869A76FBL};
    int32_t l_225[2];
    int16_t l_226 = 6L;
    uint32_t l_244 = 0xF52318AFL;
    int16_t l_261 = (-5L);
    int i;
    for (i = 0; i < 1; i++)
        l_134[i] = 0xD74882178CD30398LL;
    for (i = 0; i < 5; i++)
        l_202[i] = (-1L);
    for (i = 0; i < 2; i++)
        l_225[i] = 0x5B589D5DL;
    if (g_103[0])
    { 
        uint64_t l_133 = 18446744073709551608UL;
        struct S1 l_140[5] = {{0x81CDD84EL,0x98L,-2L},{0x81CDD84EL,0x98L,-2L},{0x81CDD84EL,0x98L,-2L},{0x81CDD84EL,0x98L,-2L},{0x81CDD84EL,0x98L,-2L}};
        uint64_t l_147 = 18446744073709551615UL;
        int32_t l_167 = (-1L);
        int i;
        if ((safe_mod_func_int8_t_s_s((0xB809ED89L ^ 0x5344A4BFL), 1UL)))
        { 
            int32_t l_130 = (-1L);
            for (p_6.f0.f0 = (-23); (p_6.f0.f0 != 3); p_6.f0.f0++)
            { 
                uint8_t l_135[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_135[i] = 2UL;
                l_135[2] = ((safe_rshift_func_uint16_t_u_s(0UL, ((safe_lshift_func_int8_t_s_u(p_7, 6)) >= (l_130 == ((g_39[2][1][1] ^= ((safe_sub_func_uint64_t_u_u(18446744073709551610UL, l_133)) & 0x6EF34DD4F9EB425ELL)) || g_34))))) > l_134[0]);
                return l_134[0];
            }
            g_141[0] = (safe_lshift_func_int16_t_s_s((g_39[2][1][0] ^ ((safe_mul_func_int8_t_s_s(((g_21 , l_140[1]) , ((0xD30B64A6L <= g_82) | 0x7A6FL)), 0x98L)) || 0x5E2BL)), 8));
        }
        else
        { 
            int64_t l_166 = 2L;
            if (g_120[1])
            { 
                uint8_t l_146 = 1UL;
                g_148 = (safe_mod_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s(((g_32 <= (((g_121 = g_39[0][0][2]) && 0x40B4FC89CDC83B1ELL) >= p_6.f1)) || p_6.f1), l_146)) < l_140[1].f0), l_147));
                l_168 &= (~(safe_div_func_int32_t_s_s(((safe_add_func_int64_t_s_s(((g_67 = (l_134[0] || (((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_add_func_int16_t_s_s((p_8 & (l_167 = ((safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(((0x6FL < ((((safe_rshift_func_int16_t_s_s(g_32, l_166)) == g_103[1]) && g_121) || g_36)) >= l_140[1].f0), 0)) >= g_73) != l_146), 255UL)) & p_6.f1))), 0xF148L)) != 0x25L), g_120[2])) == 0UL), l_166)) >= g_120[1]) || 1L))) != l_146), 18446744073709551615UL)) >= g_32), p_6.f1)));
                return p_6.f1;
            }
            else
            { 
                uint8_t l_172 = 6UL;
                int32_t l_186 = 0x22B24768L;
                int32_t l_187 = 2L;
                ++g_169[0][0];
                l_187 |= (l_172 <= ((((safe_add_func_uint32_t_u_u(((((l_167 = (safe_mul_func_int8_t_s_s(((safe_div_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((l_181 , ((safe_sub_func_int16_t_s_s(((((l_186 = ((g_35 >= (safe_add_func_uint16_t_u_u((g_33 < p_8), l_168))) || 0x889F70B1L)) == 1L) | p_8) <= p_8), p_6.f1)) <= 255UL)), p_8)), g_67)) ^ p_7), 0x6AL))) > g_103[4]) && p_7) < l_181.f0.f0), p_8)) | g_66[0][0]) >= l_181.f0.f1) && l_168));
                g_188[1][3] = l_134[0];
            }
        }
        if ((g_36 || p_7))
        { 
            uint32_t l_203 = 4294967295UL;
            l_167 = ((l_181.f0 , ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(((((safe_mod_func_int64_t_s_s(0L, ((safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((safe_div_func_uint32_t_u_u((p_8 > (!l_202[1])), l_133)), (-1L))), p_6.f1)) || g_148))) || 0x76L) ^ g_66[0][1]) || p_8), 2)), l_203)) | 0xCF22L)) == p_8);
            for (g_34 = 0; (g_34 <= 0); g_34 += 1)
            { 
                int i;
                g_188[1][3] = g_141[g_34];
            }
        }
        else
        { 
            l_167 = p_7;
        }
    }
    else
    { 
        int64_t l_209 = 0x0E0025C80A1DA366LL;
        int32_t l_210 = (-3L);
        int32_t l_212 = (-1L);
        int16_t l_245 = 1L;
        int32_t l_265 = 0xB76A276CL;
        for (g_21.f1 = 0; (g_21.f1 <= 0); g_21.f1 += 1)
        { 
            int32_t l_204 = 0xECCD6428L;
            int32_t l_243 = (-2L);
            int i;
            if (g_141[g_21.f1])
            { 
                return g_72;
            }
            else
            { 
                int16_t l_208 = (-10L);
                uint16_t l_214 = 65532UL;
                l_204 = (-1L);
                l_208 = (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint64_t_u(g_169[0][0])), 2));
                l_214--;
            }
            l_213[0] = ((safe_add_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_u(((g_67 = (safe_mod_func_uint16_t_u_u((g_33 , (safe_mul_func_int8_t_s_s((l_204 &= (((l_245 = (((--g_36) >= (safe_sub_func_uint16_t_u_u(0x2FD1L, p_8))) , (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s((l_168 = ((((g_188[4][0] = ((safe_sub_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((safe_mul_func_int16_t_s_s(((l_243 || p_8) && p_7), 0x682AL)) != 0xEBB6L) > g_39[0][0][2]), p_6.f1)), p_8)) && g_34)) > 0L) && 0x0C65E12BL) & 0x52L)), p_6.f1)), p_8)), l_244)))) | 0xB5313487L) & p_8)), l_243))), 0x8486L))) && 0xA6L), 9)) != g_32), l_134[0])) ^ p_8);
            if (p_7)
            { 
                int16_t l_246 = 0L;
                g_188[0][0] = (6L <= 0x2FL);
                return l_246;
            }
            else
            { 
                int32_t l_262 = 0x8023FC29L;
                int64_t l_268 = (-1L);
                int i;
                l_262 = (safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s(((safe_add_func_uint8_t_u_u((g_169[0][0] |= (safe_add_func_int32_t_s_s(((g_141[g_21.f1] ^= (safe_add_func_uint32_t_u_u(g_73, (0xFE1AL & (safe_rshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(6UL, (g_120[3] = g_148))) && p_8), l_134[0])))))) , 0L), 0L))), 0xE1L)) < p_8), g_67)), l_261));
                l_268 = ((safe_div_func_int32_t_s_s((((g_188[1][3] = l_265) || ((((g_141[0] <= 18446744073709551615UL) , (safe_rshift_func_uint8_t_u_u((p_6.f0.f1 = (g_67 = ((g_141[0] || 0xF7L) <= 0xE482L))), l_262))) , p_6.f1) ^ p_7)) >= 0L), p_7)) || p_8);
            }
            for (l_244 = 0; (l_244 <= 3); l_244 += 1)
            { 
                int i, j;
                g_188[(g_21.f1 + 2)][(g_21.f1 + 1)] = g_73;
            }
        }
    }
    for (g_121 = 0; (g_121 < 8); g_121 = safe_add_func_int32_t_s_s(g_121, 4))
    { 
        return l_261;
    }
    return g_141[0];
}



static union U2  func_9(const uint8_t  p_10, int64_t  p_11)
{ 
    uint32_t l_87[1][2];
    int32_t l_102 = 0xD5AD653CL;
    uint32_t l_119 = 0x62CEE249L;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_87[i][j] = 0xAAAA3896L;
    }
    g_103[3] = (((safe_div_func_uint64_t_u_u(((((l_87[0][1] ^ (safe_mod_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((safe_lshift_func_uint8_t_u_u((g_67 | (safe_sub_func_int32_t_s_s(((safe_lshift_func_uint8_t_u_u(l_87[0][1], (safe_mod_func_int64_t_s_s((l_87[0][0] == l_102), g_82)))) & 0xA66F312D9EA3BD3CLL), g_66[0][1]))), l_87[0][1])) || 1L) || 18446744073709551615UL) , g_32), l_87[0][1])), g_82)) >= g_35), p_11))) && 0xA79BCA12L) != 0x40E8EEE9D000C4EELL) && l_87[0][1]), (-2L))) || p_10) | l_102);
    g_120[1] ^= (0x3E95E56FL ^ (safe_sub_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s((g_21.f0.f1 = 0UL), 3)), 0)) != ((safe_add_func_uint32_t_u_u(((safe_div_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint32_t_u((((safe_add_func_uint8_t_u_u(((g_34 <= (((g_103[4] ^ 4294967290UL) | 0UL) > l_87[0][1])) && p_11), g_35)) <= (-2L)) < p_11))), 15)) & p_10) | l_119), g_32)) <= 5L), 1L)) | 0xEAL)), g_67)));
    g_121 = 0L;
    return g_21;
}



static uint64_t  func_16(uint64_t  p_17)
{ 
    int32_t l_22[4];
    const struct S0 l_30 = {0xE94CCB09L,-4L,0L,-2L,0xE3L,-6L};
    int16_t l_57 = 0x7EA5L;
    struct S1 l_70 = {0x693E630EL,252UL,0x97ADL};
    int32_t l_74[4] = {0xAB3BAA24L,0xAB3BAA24L,0xAB3BAA24L,0xAB3BAA24L};
    int32_t l_75[2][3][4] = {{{0x6850E27EL,0xA55E9D0FL,(-7L),0x20CCB086L},{0xBDB4A0C6L,0xA55E9D0FL,0xA55E9D0FL,0xBDB4A0C6L},{0xA55E9D0FL,0xBDB4A0C6L,0x6850E27EL,0x84F12CA1L}},{{0xA55E9D0FL,0x6850E27EL,0xA55E9D0FL,(-7L)},{0xBDB4A0C6L,0x84F12CA1L,(-7L),(-7L)},{0x6850E27EL,0x6850E27EL,0x20CCB086L,0x84F12CA1L}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_22[i] = (-1L);
    for (g_21.f1 = 0; (g_21.f1 <= 3); g_21.f1 += 1)
    { 
        int16_t l_31 = (-2L);
        int i;
        l_22[g_21.f1] = 0xFC80AE7BL;
        l_22[g_21.f1] = l_22[g_21.f1];
        for (p_17 = 0; (p_17 <= 3); p_17 += 1)
        { 
            const uint16_t l_25 = 0x5965L;
            int i;
            if (l_22[g_21.f1])
                break;
            g_34 = (safe_lshift_func_uint16_t_u_u((g_33 = (l_25 && ((g_32 = (l_31 ^= ((safe_mod_func_int8_t_s_s(0x46L, (safe_lshift_func_uint16_t_u_s(((0xF5CBF793L >= (l_30 , (-5L))) != l_22[g_21.f1]), 3)))) & 0xC6DCL))) | g_21.f1))), 0));
        }
    }
    for (g_32 = 3; (g_32 >= 0); g_32 -= 1)
    { 
        int32_t l_56[5][1][5] = {{{0L,0x62993103L,0L,0x62993103L,0L}},{{0x012CFB79L,0x012CFB79L,5L,5L,0x012CFB79L}},{{3L,0x62993103L,3L,0x62993103L,3L}},{{0x012CFB79L,5L,5L,0x012CFB79L,0x012CFB79L}},{{0L,0x62993103L,0L,0x62993103L,0L}}};
        int i, j, k;
        ++g_36;
        g_39[0][0][2] = l_22[g_32];
        for (g_21.f0.f0 = 0; (g_21.f0.f0 > 40); g_21.f0.f0++)
        { 
            uint64_t l_53[5][5] = {{18446744073709551613UL,0xD2BB399D6DB78960LL,18446744073709551613UL,18446744073709551613UL,0xD2BB399D6DB78960LL},{1UL,0x6ABE926F5D9AEB8ELL,0xD7081DC493A78091LL,18446744073709551607UL,0xD7081DC493A78091LL},{0xD2BB399D6DB78960LL,0xD2BB399D6DB78960LL,0xFF5F6F594A39B7B3LL,0xD2BB399D6DB78960LL,0xD2BB399D6DB78960LL},{0xD7081DC493A78091LL,18446744073709551607UL,0xD7081DC493A78091LL,0x6ABE926F5D9AEB8ELL,1UL},{0xD2BB399D6DB78960LL,18446744073709551613UL,18446744073709551613UL,0xD2BB399D6DB78960LL,18446744073709551613UL}};
            uint64_t l_65 = 0UL;
            int i, j;
            l_22[g_32] = ((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s(l_30.f1, ((((((((safe_mod_func_uint64_t_u_u((((((((((((safe_mod_func_int8_t_s_s(((((~(safe_mul_func_int16_t_s_s((l_53[2][0] < (1UL ^ (l_56[0][0][2] ^= (((safe_add_func_int16_t_s_s((l_53[2][0] , p_17), l_22[g_32])) & p_17) == p_17)))), g_39[0][2][2]))) & l_53[4][0]) , l_53[2][3]) == l_30.f2), l_53[3][2])) == 0L) ^ 0x492E769E88CDAF70LL) ^ 1L) && l_22[2]) >= l_53[0][3]) , 2UL) < g_33) , p_17) , 0L) != l_57), 0x450074354AF31781LL)) < p_17) <= g_35) != p_17) ^ 0x6E73L) , 0xDFL) & g_34) | 1L))), 1L)) , g_39[1][1][2]);
            for (g_36 = 17; (g_36 < 7); g_36 = safe_sub_func_int16_t_s_s(g_36, 3))
            { 
                uint32_t l_60 = 18446744073709551613UL;
                l_22[3] = l_60;
                g_66[0][1] |= (g_21 , (((l_65 = ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_17, 4)), g_33)) > p_17)) != p_17) || l_53[2][0]));
                g_67 |= p_17;
            }
        }
    }
    for (g_67 = 0; (g_67 != 12); g_67 = safe_add_func_uint32_t_u_u(g_67, 4))
    { 
        const int64_t l_71 = (-3L);
        g_72 = ((l_70 , (g_36 > g_33)) , (p_17 || l_71));
        for (l_70.f1 = 0; (l_70.f1 <= 3); l_70.f1 += 1)
        { 
            struct S1 l_78 = {0xE1962FF4L,0UL,0x794CL};
            int i;
            l_75[0][0][3] = ((g_33 , p_17) < ((g_21.f0.f1 = (g_73 &= 1UL)) ^ ((((l_74[1] = (l_22[l_70.f1] |= l_57)) | g_66[0][0]) != p_17) ^ g_67)));
            for (g_72 = 2; (g_72 >= 0); g_72 -= 1)
            { 
                struct S1 l_81 = {1UL,0x26L,0xC403L};
                int i, j, k;
                if (g_39[g_72][g_72][l_70.f1])
                    break;
                g_82 |= (((((g_21 , ((((safe_sub_func_uint16_t_u_u((g_39[g_72][g_72][(g_72 + 1)] < (((l_78 , ((safe_rshift_func_uint16_t_u_u((l_81 , g_39[g_72][g_72][(l_70.f1 + 1)]), l_78.f1)) , g_33)) & g_39[g_72][g_72][(l_70.f1 + 1)]) | l_71)), g_32)) && g_33) > p_17) & p_17)) , 0xADL) || 7L) >= l_71) || 0x9B81L);
            }
        }
    }
    return p_17;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_21.f1, "g_21.f1", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_36, "g_36", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_39[i][j][k], "g_39[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_66[i][j], "g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_120[i], "g_120[i]", print_hash_value);

    }
    transparent_crc(g_121, "g_121", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    transparent_crc(g_148, "g_148", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_169[i][j], "g_169[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_188[i][j], "g_188[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
