// SPDX-License-Identifier: MIT
// cctest_csmith_4baf4514.c --- cctest case csmith_4baf4514 (csmith seed 1269777684)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd80f3c28 */
/* @exp_ticks 0xc5b0 */

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

// Options:   -s 1269777684 -o /tmp/csmith_gen_0lzdtecx/csmith.c --concise --no-volatiles --no-volatile-pointers --no-bitfields --max-funcs 8 --max-block-size 5 --max-block-depth 4 --max-expr-complexity 8 --max-array-dim 3 --max-array-len-per-dim 7 --max-struct-fields 8 --max-union-fields 5

static long __undefined;


struct S0 {
   uint8_t  f0;
   const uint16_t  f1;
   int64_t  f2;
};

union U1 {
   uint8_t  f0;
   const int8_t  f1;
};


static int32_t g_3 = 0x3248C66FL;
static int16_t g_49 = 0x9E6AL;
static uint32_t g_51 = 0UL;
static uint32_t g_54 = 0xEF13550EL;
static int32_t g_59[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static uint16_t g_74 = 1UL;
static int16_t g_90 = 5L;
static int32_t g_107[6][6][6] = {{{(-1L),(-7L),(-7L),(-1L),(-7L),(-9L)},{(-1L),(-7L),(-9L),(-10L),(-10L),(-9L)},{0xF394C470L,0xF394C470L,(-7L),6L,(-7L),0xC840D7AAL},{0xB33D27CFL,1L,1L,0xBAD55379L,(-7L),(-7L)},{0xC33ADB54L,0xB33D27CFL,1L,(-10L),0xF394C470L,0xC840D7AAL},{(-1L),(-10L),(-7L),(-1L),1L,(-9L)}},{{(-1L),1L,(-9L),(-1L),4L,(-7L)},{0x7E01DFB5L,0xF92971DFL,(-1L),(-10L),0x2332F7F6L,(-10L)},{0x2332F7F6L,0x9D6A3610L,0x0E846833L,0L,1L,(-1L)},{0xF92971DFL,(-1L),0x0E846833L,(-1L),0xF92971DFL,(-10L)},{0x7CE1196BL,4L,(-1L),0x74060984L,0x9D6A3610L,(-7L)},{0x74060984L,0x9D6A3610L,(-7L),4L,(-1L),(-7L)}},{{0xF92971DFL,0x7E01DFB5L,(-1L),(-1L),4L,(-10L)},{(-1L),0x077F077BL,0x0E846833L,(-10L),0x9D6A3610L,(-1L)},{0x811D2751L,0x2332F7F6L,0x0E846833L,4L,0x7E01DFB5L,(-10L)},{0L,(-1L),(-1L),0x7CE1196BL,0x077F077BL,(-7L)},{0x7CE1196BL,0x077F077BL,(-7L),0x2332F7F6L,0x2332F7F6L,(-7L)},{0x811D2751L,0x811D2751L,(-1L),0L,(-1L),(-10L)}},{{4L,1L,0x0E846833L,(-1L),0x077F077BL,(-1L)},{0x7E01DFB5L,4L,0x0E846833L,0x2332F7F6L,0x811D2751L,(-10L)},{0x74060984L,0x2332F7F6L,(-1L),0L,1L,(-7L)},{0L,1L,(-7L),(-1L),4L,(-7L)},{0x7E01DFB5L,0xF92971DFL,(-1L),(-10L),0x2332F7F6L,(-10L)},{0x2332F7F6L,0x9D6A3610L,0x0E846833L,0L,1L,(-1L)}},{{0xF92971DFL,(-1L),0x0E846833L,(-1L),0xF92971DFL,(-10L)},{0x7CE1196BL,4L,(-1L),0x74060984L,0x9D6A3610L,(-7L)},{0x74060984L,0x9D6A3610L,(-7L),4L,(-1L),(-7L)},{0xF92971DFL,0x7E01DFB5L,(-1L),(-1L),4L,(-10L)},{(-1L),0x077F077BL,0x0E846833L,(-10L),0x9D6A3610L,(-1L)},{0x811D2751L,0x2332F7F6L,0x0E846833L,4L,0x7E01DFB5L,(-10L)}},{{0L,(-1L),(-1L),0x7CE1196BL,0x077F077BL,(-7L)},{0x7CE1196BL,0x077F077BL,(-7L),0x2332F7F6L,0x2332F7F6L,(-7L)},{0x811D2751L,0x811D2751L,(-1L),0L,(-1L),(-10L)},{4L,1L,0x0E846833L,(-1L),0x077F077BL,(-1L)},{0x7E01DFB5L,4L,0x0E846833L,0x2332F7F6L,0x811D2751L,(-10L)},{0x74060984L,0x2332F7F6L,(-1L),0L,1L,(-7L)}}};
static int16_t g_108 = (-1L);
static struct S0 *g_121 = (void*)0;
static struct S0 g_123 = {0x9CL,0xD7FAL,-1L};
static int64_t g_207 = 0x311A1F4821EC3EBDLL;
static int8_t g_209 = 0x1EL;
static uint16_t g_211 = 1UL;
static union U1 g_242 = {0xE3L};
static union U1 *g_244 = (void*)0;
static int32_t *g_246[4] = {&g_59[3],&g_59[3],&g_59[3],&g_59[3]};
static int64_t g_256[2][5][1] = {{{0xD96E35F7F73C6342LL},{7L},{0xD96E35F7F73C6342LL},{0xD96E35F7F73C6342LL},{7L}},{{0xD96E35F7F73C6342LL},{0xD96E35F7F73C6342LL},{7L},{0xD96E35F7F73C6342LL},{0xD96E35F7F73C6342LL}}};
static int32_t *g_267[3] = {&g_107[5][2][2],&g_107[5][2][2],&g_107[5][2][2]};
static int16_t *g_276 = (void*)0;
static int16_t * const *g_275 = &g_276;
static const union U1 g_303[1] = {{0xE2L}};
static const union U1 *g_302 = &g_303[0];
static int16_t **g_496 = &g_276;
static int16_t ***g_495[5] = {&g_496,&g_496,&g_496,&g_496,&g_496};
static int16_t g_505 = 0x7912L;
static int32_t **g_529 = &g_267[1];
static int64_t g_559 = 0x0D81A690E520B533LL;
static uint32_t *g_580 = &g_54;
static uint32_t **g_579 = &g_580;
static uint8_t *g_606 = (void*)0;
static uint16_t *g_656 = (void*)0;
static uint16_t **g_655 = &g_656;
static uint16_t g_694 = 65526UL;
static uint64_t g_704 = 0xA80BFCA566079040LL;
static uint64_t g_757 = 18446744073709551615UL;
static uint64_t g_768 = 0UL;
static int8_t g_835 = 2L;
static const struct S0 *g_863 = (void*)0;
static const struct S0 **g_862 = &g_863;
static const struct S0 ***g_861[3] = {&g_862,&g_862,&g_862};
static const struct S0 ****g_860 = &g_861[1];
static const uint16_t **g_1034 = (void*)0;
static const uint16_t ***g_1033 = &g_1034;
static int32_t *g_1142 = &g_59[1];
static uint64_t *g_1254[7][6] = {{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0},{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0},{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0},{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0},{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0},{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0},{(void*)0,&g_757,(void*)0,(void*)0,&g_757,(void*)0}};
static uint64_t **g_1253 = &g_1254[4][2];
static uint32_t g_1282 = 0x99F0E3ABL;
static int32_t g_1298 = 1L;
static int8_t *g_1327 = &g_209;
static int8_t **g_1326 = &g_1327;
static struct S0 **g_1435[3][5][6] = {{{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121,(void*)0,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121,&g_121,&g_121}},{{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121},{&g_121,(void*)0,(void*)0,&g_121,&g_121,&g_121},{(void*)0,&g_121,&g_121,&g_121,(void*)0,(void*)0},{&g_121,(void*)0,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,(void*)0,&g_121,&g_121}},{{&g_121,&g_121,&g_121,&g_121,&g_121,(void*)0},{&g_121,&g_121,&g_121,&g_121,(void*)0,&g_121},{&g_121,(void*)0,(void*)0,&g_121,&g_121,&g_121},{&g_121,(void*)0,&g_121,&g_121,&g_121,&g_121},{&g_121,&g_121,&g_121,&g_121,&g_121,&g_121}}};
static uint32_t g_1447 = 18446744073709551606UL;
static uint16_t *g_1463 = &g_694;
static uint32_t g_1468[1] = {18446744073709551609UL};
static int32_t g_1556[3][6] = {{0x59B6741BL,0x59B6741BL,0xD7CC90FBL,0x59B6741BL,0x59B6741BL,0xD7CC90FBL},{0x59B6741BL,0x59B6741BL,0xD7CC90FBL,0x59B6741BL,0x59B6741BL,0xD7CC90FBL},{0x59B6741BL,0x59B6741BL,0xD7CC90FBL,0x59B6741BL,0x59B6741BL,0xD7CC90FBL}};
static int64_t g_1559 = 0x876DF60AF3D3C386LL;
static int16_t g_1623 = 0x240DL;
static const int16_t *g_1652[2] = {&g_108,&g_108};
static const int16_t **g_1651 = &g_1652[1];
static const int16_t ***g_1650 = &g_1651;
static const int16_t ****g_1649 = &g_1650;
static const int16_t *****g_1648[4][2][7] = {{{(void*)0,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649},{&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649}},{{&g_1649,&g_1649,(void*)0,&g_1649,(void*)0,&g_1649,&g_1649},{&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649}},{{(void*)0,(void*)0,&g_1649,&g_1649,(void*)0,(void*)0,&g_1649},{&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649}},{{&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,(void*)0},{&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649,&g_1649}}};
static uint32_t ***g_1787[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U1 g_1913[3] = {{0x1CL},{0x1CL},{0x1CL}};
static uint8_t g_2030 = 0x7EL;
static uint64_t ***g_2073 = &g_1253;
static uint64_t ****g_2072 = &g_2073;
static union U1 g_2106 = {0x11L};
static int32_t * const *g_2143[7] = {&g_246[2],&g_246[2],&g_246[2],&g_246[2],&g_246[2],&g_246[2],&g_246[2]};
static int32_t * const **g_2142 = &g_2143[0];
static uint32_t g_2203 = 4294967291UL;
static struct S0 *g_2230 = &g_123;
static uint16_t g_2242 = 0x48FBL;
static int8_t g_2399 = 0xF8L;
static union U1 g_2427 = {0xB0L};
static const int32_t g_2468 = 0x4869833CL;
static const int32_t *g_2469[7] = {&g_107[1][2][0],&g_107[1][2][0],&g_107[1][2][0],&g_107[1][2][0],&g_107[1][2][0],&g_107[1][2][0],&g_107[1][2][0]};
static uint32_t *g_2539 = &g_2203;
static int16_t g_2575 = 0x9F50L;
static int64_t g_2652[2][2][6] = {{{0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL,0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL},{0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL,0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL}},{{0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL,0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL},{0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL,0x5DEAA51D8D6D7341LL,0xEBC928E963823F27LL,0x5DEAA51D8D6D7341LL}}};
static uint16_t ** const **g_2702 = (void*)0;
static int32_t * const g_2719 = &g_1556[1][2];
static int32_t * const *g_2718[4] = {&g_2719,&g_2719,&g_2719,&g_2719};
static uint64_t *****g_2721 = &g_2072;
static int8_t g_2726 = 0xE9L;
static int8_t ***g_2732 = (void*)0;
static int8_t ****g_2731 = &g_2732;
static int8_t *****g_2730 = &g_2731;
static const int32_t g_2800 = 0x85DBD533L;
static const uint32_t g_2887 = 1UL;
static const int32_t g_2940 = 0x8313D40CL;
static int16_t *****g_2948[3] = {(void*)0,(void*)0,(void*)0};
static uint32_t *g_3141 = &g_1282;
static uint64_t g_3146[6] = {0x28EC58F047789425LL,0x28EC58F047789425LL,0x28EC58F047789425LL,0x28EC58F047789425LL,0x28EC58F047789425LL,0x28EC58F047789425LL};
static uint32_t ****g_3166 = &g_1787[1];
static uint32_t *****g_3165 = &g_3166;
static uint32_t * const * const *g_3397 = (void*)0;
static uint32_t * const * const **g_3396 = &g_3397;
static int16_t * const **g_3425 = &g_275;
static int16_t * const ***g_3424 = &g_3425;
static int16_t * const ****g_3423[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int32_t g_3435[6][5][6] = {{{0xC475BDE2L,(-5L),0L,0L,(-9L),(-1L)},{0L,0xCA3B0056L,0x36783C08L,(-10L),0x44F3BE2FL,4L},{1L,0xA62F0761L,(-3L),0xCCA0ACE4L,0L,1L},{0x50957A11L,9L,1L,0L,0x12E395D0L,0x0E005648L},{(-10L),0xC7FFB10FL,4L,1L,0x699FDE71L,0L}},{{0xD8D6B246L,1L,(-5L),(-1L),0xA62F0761L,0xA62F0761L},{(-1L),0x9B845872L,0x9B845872L,(-1L),0L,0L},{8L,0x0FEFAA09L,(-1L),0x6646CBF0L,0xC4F14ABDL,(-9L)},{(-5L),0x8AB043DCL,0x122A3834L,0L,0xC4F14ABDL,0x8AB5A108L},{0xF61A4E1CL,0x0FEFAA09L,(-4L),(-3L),0L,0L}},{{0x4A4B23DFL,0x9B845872L,1L,0xC7FFB10FL,0xA62F0761L,8L},{0x44F3BE2FL,1L,0L,0x0E005648L,0x699FDE71L,0xD58CCE17L},{0x84DEA1EBL,0xC7FFB10FL,1L,7L,0x12E395D0L,9L},{0L,9L,(-10L),(-1L),0L,(-1L)},{0xCCA0ACE4L,0xA62F0761L,0x6646CBF0L,(-6L),0x44F3BE2FL,0x36783C08L}},{{0x8AB043DCL,0xCA3B0056L,0xEE3F53C7L,1L,(-9L),1L},{0x0FEFAA09L,(-10L),(-10L),0x6646CBF0L,1L,1L},{(-1L),0x4A4B23DFL,0x1FE3178CL,0x0FEFAA09L,0x84DEA1EBL,(-10L)},{(-5L),0x8AB5A108L,(-1L),4L,0x1FE3178CL,0xC475BDE2L},{7L,0xEE3F53C7L,0x0FEFAA09L,0x75B2B36EL,8L,0x75B2B36EL}},{{0xEE3F53C7L,0x36783C08L,0xEE3F53C7L,0L,1L,(-1L)},{0xCA3B0056L,1L,0xE85FCDAFL,(-5L),0L,8L},{0xE338EE20L,0xD58CCE17L,0x0E005648L,(-5L),(-1L),0L},{0xCA3B0056L,(-1L),0x84DEA1EBL,0L,(-1L),(-1L)},{0xEE3F53C7L,(-1L),0xCA6B9E18L,0x75B2B36EL,(-1L),1L}},{{7L,0x13FBCDB0L,(-1L),4L,1L,9L},{(-5L),0x27215511L,0x7F8E7D1EL,0x0FEFAA09L,0x13FBCDB0L,0L},{(-1L),4L,0x12E395D0L,0x6646CBF0L,1L,0xD58CCE17L},{0x0FEFAA09L,0xF5F3B653L,1L,(-6L),0xCA3B0056L,(-1L)},{0L,(-3L),0xC475BDE2L,0xF61A4E1CL,(-3L),0xC7FFB10FL}}};
static int64_t *g_3447 = &g_256[1][4][0];
static int64_t **g_3446 = &g_3447;
static int64_t ***g_3445[1][1][7] = {{{&g_3446,&g_3446,&g_3446,&g_3446,&g_3446,&g_3446,&g_3446}}};
static int8_t *****g_3502[6][1][4] = {{{&g_2731,&g_2731,&g_2731,&g_2731}},{{&g_2731,&g_2731,&g_2731,&g_2731}},{{&g_2731,&g_2731,&g_2731,&g_2731}},{{&g_2731,&g_2731,&g_2731,&g_2731}},{{&g_2731,&g_2731,&g_2731,&g_2731}},{{&g_2731,&g_2731,&g_2731,&g_2731}}};



static uint32_t  func_1(void);
static int32_t  func_4(int32_t  p_5, int8_t  p_6);
static uint8_t  func_9(uint16_t  p_10, int32_t * p_11);
static union U1  func_16(uint32_t  p_17, const union U1  p_18, union U1  p_19, int32_t  p_20);
static uint8_t  func_21(int32_t * p_22, int32_t * p_23, int32_t * p_24);
static int32_t * func_25(uint32_t  p_26, uint16_t  p_27, int32_t * p_28);
static uint32_t  func_29(int32_t * p_30, int32_t * p_31);
static int32_t * func_38(uint32_t  p_39, int32_t * p_40, int32_t  p_41, struct S0  p_42);




static uint32_t  func_1(void)
{ 
    int32_t *l_2 = &g_3;
    int32_t *l_33 = (void*)0;
    int32_t **l_32 = &l_33;
    int32_t *l_35 = &g_3;
    int32_t **l_34 = &l_35;
    int32_t *l_37[4];
    int32_t **l_36 = &l_37[2];
    int16_t *l_47 = (void*)0;
    int16_t *l_48 = &g_49;
    uint32_t *l_50 = &g_51;
    int64_t l_52 = 0L;
    struct S0 l_53 = {255UL,0UL,2L};
    const union U1 l_2890 = {0xCCL};
    uint32_t l_3104 = 4UL;
    uint32_t l_3149 = 0x05B7BD18L;
    int8_t *l_3150 = &g_2726;
    int8_t l_3199 = (-1L);
    int32_t l_3212[5][5][7] = {{{0x6DB41FA9L,1L,6L,(-7L),1L,(-1L),0xE849A50AL},{0x6DB41FA9L,1L,1L,0x72C98EB7L,0x01C645C5L,0x8478A7D7L,0x9E758E11L},{1L,0xF94340D7L,6L,3L,0x01C645C5L,(-1L),9L},{0x8BF67D5FL,(-7L),0x8D88E0E6L,0xF5A5794DL,1L,0xF69FC01BL,0x9E758E11L},{(-1L),(-7L),3L,(-2L),0L,9L,0xE849A50AL}},{{(-1L),0xF94340D7L,(-2L),0xF5A5794DL,0xEB5E8872L,9L,0x8D5EB614L},{0x5F60FABDL,1L,0x72C98EB7L,3L,0xF94340D7L,0xF69FC01BL,(-1L)},{(-1L),1L,0x72C98EB7L,0x72C98EB7L,1L,(-1L),(-1L)},{(-1L),0xA3C5B955L,(-2L),(-7L),0xF94340D7L,0x8478A7D7L,(-1L)},{0x8BF67D5FL,0x5569C255L,3L,(-1L),0xEB5E8872L,(-1L),(-1L)}},{{1L,0xA3C5B955L,0x8D88E0E6L,(-1L),0L,0x6DB41FA9L,8L},{0xD1028660L,0x72C98EB7L,0x3EF97C9EL,9L,(-1L),0x0FB4BC39L,0x8CEEF02FL},{0xD1028660L,(-1L),0x9E758E11L,0xE849A50AL,0xF5A5794DL,0xB1E33BB5L,(-1L)},{1L,0x8D88E0E6L,0x3EF97C9EL,(-4L),0xF5A5794DL,1L,0x493EC0BEL},{0x4C9784C2L,0x85C7396FL,(-1L),0x9F7AC488L,(-1L),0L,(-1L)}},{{0x0FB4BC39L,0x85C7396FL,(-4L),(-1L),6L,0xD536ADEAL,0x8CEEF02FL},{1L,0x8D88E0E6L,(-1L),0x9F7AC488L,0x3409BC3BL,0xD536ADEAL,8L},{(-4L),(-1L),0xE849A50AL,(-4L),0x8D88E0E6L,0L,(-10L)},{1L,0x72C98EB7L,0xE849A50AL,0xE849A50AL,0x72C98EB7L,1L,(-2L)},{0x0FB4BC39L,1L,(-1L),9L,0x8D88E0E6L,0xB1E33BB5L,(-2L)}},{{0x4C9784C2L,(-7L),(-4L),0x8D5EB614L,0x3409BC3BL,0x0FB4BC39L,(-10L)},{1L,1L,(-1L),0x8D5EB614L,6L,0xD1028660L,8L},{0xD1028660L,0x72C98EB7L,0x3EF97C9EL,9L,(-1L),0x0FB4BC39L,0x8CEEF02FL},{0xD1028660L,(-1L),0x9E758E11L,0xE849A50AL,0xF5A5794DL,0xB1E33BB5L,(-1L)},{1L,0x8D88E0E6L,0x3EF97C9EL,(-4L),0xF5A5794DL,1L,0x493EC0BEL}}};
    struct S0 ** const * const l_3223 = &g_1435[2][0][1];
    struct S0 ** const * const *l_3222 = &l_3223;
    struct S0 ** const * const **l_3221 = &l_3222;
    int8_t l_3228 = (-1L);
    uint16_t **l_3239 = &g_1463;
    const int16_t l_3265[5][6][5] = {{{(-5L),7L,(-1L),(-7L),0xF9D4L},{0x15AFL,0L,0xF9D4L,0x9E85L,0x07BAL},{0xFA08L,0x15AFL,0xCB1FL,(-5L),0x3606L},{0xA019L,0xEB1CL,0x07BAL,0L,(-1L)},{0xA019L,0xD477L,0xD477L,0xA019L,7L},{0xFA08L,(-7L),1L,0L,0xD67CL}},{{0x15AFL,1L,0xA019L,0xF9D4L,(-5L)},{(-5L),0xAB42L,(-4L),0L,(-7L)},{1L,0x3606L,0L,0xA019L,0xEB1CL},{0xCB1FL,(-5L),0x3606L,0L,0xF6F4L},{0xD477L,(-5L),0xFA08L,(-5L),0xD477L},{0xD67CL,0x3606L,0xEB1CL,0x9E85L,0x0D0BL}},{{0xCC0EL,0xAB42L,0x0B5EL,(-7L),5L},{0L,1L,7L,0x3606L,0x0D0BL},{(-8L),(-7L),0L,1L,0xD477L},{0x0D0BL,0xD477L,(-1L),0x0B5EL,0xF6F4L},{(-7L),0xEB1CL,(-1L),(-1L),0xEB1CL},{0xF9D4L,0x15AFL,0L,1L,(-7L)}},{{1L,0L,1L,0xF9D4L,0xEB1CL},{(-1L),1L,(-1L),0x9E85L,0L},{0x07BAL,7L,(-1L),(-8L),1L},{5L,0xA019L,(-4L),0x0B5EL,0x15AFL},{(-5L),1L,0xD67CL,0x0B5EL,0xD67CL},{0xF97FL,0xF97FL,0x0D0BL,(-8L),0x0B5EL}},{{0L,0xF6F4L,1L,0x9E85L,5L},{0x0D0BL,0x0B5EL,0xD477L,0xF9D4L,(-7L)},{0x9E85L,0xF6F4L,0xA019L,0x07BAL,0L},{0L,0xF97FL,0L,0x3606L,(-1L)},{0L,1L,0x0B5EL,(-1L),(-1L)},{0xCC0EL,0xA019L,0xCC0EL,7L,0L}}};
    const uint32_t ***l_3292 = (void*)0;
    int16_t ***l_3338[7];
    int16_t * const **l_3422 = &g_275;
    int16_t * const ***l_3421[7] = {&l_3422,&l_3422,&l_3422,&l_3422,&l_3422,&l_3422,&l_3422};
    int16_t * const ****l_3420 = &l_3421[1];
    uint32_t l_3438 = 4294967294UL;
    int64_t ***l_3448 = &g_3446;
    uint64_t l_3472 = 0x8B4736DDD98D882DLL;
    uint64_t l_3503 = 18446744073709551615UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_37[i] = &g_3;
    for (i = 0; i < 7; i++)
        l_3338[i] = &g_496;
    (*l_2) ^= 0xE97EEDE0L;
    return (**l_36);
}



static int32_t  func_4(int32_t  p_5, int8_t  p_6)
{ 
    int16_t l_3160[7];
    uint32_t ****l_3164 = &g_1787[3];
    uint32_t *****l_3163 = &l_3164;
    int32_t l_3167 = 3L;
    int32_t l_3168[7][2] = {{0x8DA4B08EL,0x6AE1816AL},{0L,0x8DA4B08EL},{0L,0L},{0L,0x8DA4B08EL},{0L,0x6AE1816AL},{0x8DA4B08EL,0x6AE1816AL},{0L,0x8DA4B08EL}};
    int i, j;
    for (i = 0; i < 7; i++)
        l_3160[i] = 0xE169L;
    for (g_2203 = 7; (g_2203 == 1); g_2203 = safe_sub_func_uint32_t_u_u(g_2203, 1))
    { 
        int16_t *l_3157 = &g_90;
        uint32_t ****l_3162 = &g_1787[2];
        uint32_t *****l_3161 = &l_3162;
        l_3167 &= ((((((safe_add_func_uint32_t_u_u((p_5 | (&g_580 != (void*)0)), (safe_unary_minus_func_int8_t_s((!((*l_3157) &= 0x7662L)))))) & (l_3160[5] >= ((l_3163 = l_3161) == (g_3165 = &l_3164)))) & 1L) > l_3160[5]) <= l_3160[1]) || p_5);
        return p_5;
    }
    return l_3168[4][1];
}



static uint8_t  func_9(uint16_t  p_10, int32_t * p_11)
{ 
    uint32_t l_3120 = 0xB5CFF1C5L;
    uint32_t *l_3139 = &g_1468[0];
    uint32_t *l_3140 = &g_1447;
    for (g_242.f0 = (-11); (g_242.f0 != 4); g_242.f0 = safe_add_func_int8_t_s_s(g_242.f0, 5))
    { 
        int32_t l_3114[7][1][7] = {{{(-1L),0xBC050002L,0xEC7C6CF6L,(-1L),(-2L),0x973ACECEL,0x5B58DD29L}},{{(-1L),(-6L),0xBC050002L,0xBE3A9104L,(-2L),0x09A8965EL,0xEC7C6CF6L}},{{3L,0xA55FB0FFL,(-1L),(-1L),0xA55FB0FFL,3L,(-1L)}},{{0xBC050002L,0xEC7C6CF6L,(-1L),(-2L),0x973ACECEL,0x5B58DD29L,0xA55FB0FFL}},{{0x5B58DD29L,(-2L),0xBC050002L,3L,(-1L),0xA55FB0FFL,(-1L)}},{{0x973ACECEL,0xEC7C6CF6L,0xEC7C6CF6L,0x973ACECEL,(-6L),(-2L),0x09A8965EL}},{{0x973ACECEL,0xA55FB0FFL,0x19298FDCL,(-2L),(-1L),0xBE3A9104L,(-1L)}}};
        int32_t *l_3115 = &g_107[5][2][2];
        int32_t *l_3116 = (void*)0;
        int32_t *l_3117 = &g_107[5][3][4];
        int32_t *l_3118 = &l_3114[1][0][2];
        int32_t *l_3119[3][7] = {{&g_59[5],(void*)0,&g_59[5],(void*)0,(void*)0,&g_59[5],(void*)0},{(void*)0,(void*)0,&g_107[5][2][2],&g_107[5][2][2],(void*)0,(void*)0,(void*)0},{&g_59[5],(void*)0,(void*)0,&g_59[5],(void*)0,&g_59[5],(void*)0}};
        uint32_t *l_3138 = &g_1468[0];
        uint32_t **l_3137[2][2][3];
        int8_t *l_3142 = &g_835;
        int16_t *l_3147[6][6] = {{(void*)0,(void*)0,(void*)0,&g_2575,&g_2575,&g_2575},{(void*)0,(void*)0,(void*)0,&g_2575,&g_2575,&g_2575},{(void*)0,(void*)0,(void*)0,&g_2575,&g_2575,&g_2575},{(void*)0,(void*)0,(void*)0,&g_2575,&g_2575,&g_2575},{(void*)0,(void*)0,(void*)0,&g_2575,&g_2575,&g_2575},{(void*)0,(void*)0,(void*)0,&g_2575,&g_2575,&g_2575}};
        int32_t *l_3148[7];
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 3; k++)
                    l_3137[i][j][k] = &l_3138;
            }
        }
        for (i = 0; i < 7; i++)
            l_3148[i] = &l_3114[3][0][1];
        for (g_1447 = 0; g_1447 < 3; g_1447 += 1)
        {
            for (g_1298 = 0; g_1298 < 5; g_1298 += 1)
            {
                for (g_1282 = 0; g_1282 < 6; g_1282 += 1)
                {
                    g_1435[g_1447][g_1298][g_1282] = (void*)0;
                }
            }
        }
        for (g_108 = 0; (g_108 >= (-2)); g_108 = safe_sub_func_int16_t_s_s(g_108, 6))
        { 
            uint32_t l_3109[5];
            int i;
            for (i = 0; i < 5; i++)
                l_3109[i] = 4294967286UL;
            l_3109[4] = (-1L);
            (*g_1142) = (safe_rshift_func_uint16_t_u_u(0x0BD7L, (p_10--)));
            return l_3109[1];
        }
        l_3120--;
        (*g_529) = (void*)0;
        (*g_529) = l_3148[3];
    }
    return p_10;
}



static union U1  func_16(uint32_t  p_17, const union U1  p_18, union U1  p_19, int32_t  p_20)
{ 
    int16_t l_2891 = 0xEB15L;
    int16_t **l_2894 = &g_276;
    const int16_t **l_2895 = (void*)0;
    int8_t **l_2902 = &g_1327;
    struct S0 **l_2903 = &g_121;
    uint64_t *l_2919 = &g_757;
    union U1 **l_2936[7] = {&g_244,&g_244,&g_244,&g_244,&g_244,&g_244,&g_244};
    int32_t *l_2941 = &g_107[3][2][0];
    const int16_t **** const *l_2946 = (void*)0;
    int32_t l_2947 = 0x42147077L;
    int32_t l_2959 = 0xA4C09FA2L;
    int32_t l_2965 = 0L;
    int32_t l_2966 = 3L;
    int32_t l_2967 = 0x06E00502L;
    int32_t l_2968 = 0xAED5F160L;
    int32_t l_2972 = 0x5DBDE5CFL;
    int32_t l_2974 = 0x70CCF570L;
    int32_t l_2975 = 0xBFE7EE19L;
    union U1 l_2991 = {248UL};
    uint8_t l_3036 = 6UL;
    uint64_t *****l_3053 = (void*)0;
    uint32_t *l_3069[4][7][3] = {{{&g_1447,&g_1468[0],&g_1468[0]},{&g_1468[0],&g_1447,&g_1447},{&g_1447,&g_1468[0],&g_1468[0]},{&g_1282,&g_1282,&g_1282},{(void*)0,&g_1468[0],&g_1468[0]},{&g_1468[0],&g_1282,&g_1468[0]},{&g_1468[0],&g_1468[0],&g_1447}},{{&g_1468[0],&g_1447,&g_1468[0]},{(void*)0,&g_1468[0],&g_1447},{&g_1282,&g_1282,&g_1468[0]},{&g_1447,&g_1468[0],&g_1468[0]},{&g_1282,&g_1447,&g_1282},{&g_1447,&g_1447,&g_1468[0]},{&g_1282,&g_1282,&g_1447}},{{(void*)0,(void*)0,&g_1468[0]},{&g_1468[0],&g_1282,&g_1282},{&g_1468[0],&g_1447,&g_1447},{&g_1468[0],&g_1447,&g_1468[0]},{(void*)0,&g_1468[0],&g_1447},{&g_1282,&g_1282,&g_1282},{&g_1447,&g_1468[0],&g_1468[0]}},{{&g_1468[0],&g_1447,&g_1447},{&g_1447,&g_1468[0],&g_1468[0]},{&g_1282,&g_1282,&g_1282},{(void*)0,&g_1468[0],&g_1468[0]},{&g_1468[0],&g_1282,&g_1468[0]},{&g_1468[0],&g_1468[0],&g_1447},{&g_1468[0],&g_1447,&g_1468[0]}}};
    uint32_t **l_3068 = &l_3069[0][1][0];
    union U1 l_3103 = {0x45L};
    int i, j, k;
lbl_3092:
    (*g_1142) |= p_19.f1;
    (*g_1142) |= (l_2891 ^ (safe_div_func_uint8_t_u_u((p_19.f0 = (l_2894 != (l_2895 = ((*g_1650) = (**g_1649))))), (safe_rshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((p_18.f0 & (l_2902 == l_2902)), (g_1556[1][3] | 0x24L))), p_17)), 15)))));
    if (((void*)0 == l_2903))
    { 
        uint8_t l_2904 = 0xC4L;
        uint8_t *l_2907 = &g_242.f0;
        uint64_t *l_2918 = &g_757;
        uint16_t l_2938 = 1UL;
        int32_t l_2956 = 0L;
        int32_t l_2958 = 0xB165566AL;
        int32_t l_2960 = 0x58A9AEB8L;
        int32_t l_2961 = (-1L);
        int32_t l_2962 = 0xC9FC5378L;
        int32_t l_2970[5][1][7] = {{{0L,0L,8L,0L,0L,0L,0L}},{{0xDD114D4BL,0xA546CCF9L,0xDD114D4BL,0L,0L,0xDD114D4BL,0xA546CCF9L}},{{0L,0xA546CCF9L,8L,8L,0xA546CCF9L,0L,0xA546CCF9L}},{{0xDD114D4BL,0L,0L,0xDD114D4BL,0xA546CCF9L,0xDD114D4BL,0L}},{{0L,0L,0L,8L,0L,0L,0L}}};
        int64_t l_3010 = 0L;
        struct S0 *l_3052[6];
        uint16_t l_3054 = 65535UL;
        uint32_t *l_3058 = &g_1282;
        uint32_t **l_3057[3][3] = {{(void*)0,&l_3058,(void*)0},{(void*)0,&l_3058,(void*)0},{(void*)0,&l_3058,(void*)0}};
        uint32_t ** const *l_3056 = &l_3057[0][2];
        uint32_t ** const **l_3055 = &l_3056;
        uint8_t l_3067[6] = {1UL,1UL,1UL,1UL,1UL,1UL};
        uint64_t l_3074 = 18446744073709551613UL;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_3052[i] = &g_123;
        if ((l_2904 , ((safe_rshift_func_uint8_t_u_s((++(*l_2907)), 6)) & (((p_20 ^ ((safe_lshift_func_uint8_t_u_s((l_2904 , (safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_18.f1, (((****g_2721) = l_2918) != l_2919))), 0x6CL)), 10))), p_19.f0)) < l_2904)) , (*g_1142)) , 250UL))))
        { 
            int16_t l_2932 = 2L;
            union U1 **l_2934[5] = {&g_244,&g_244,&g_244,&g_244,&g_244};
            union U1 ***l_2935 = &l_2934[4];
            int8_t l_2937[1][5][5] = {{{3L,0x0BL,(-1L),0x0BL,3L},{3L,0x0BL,(-1L),0x0BL,3L},{3L,0x0BL,(-1L),0x0BL,3L},{3L,0x0BL,(-1L),0x0BL,3L},{3L,0x0BL,(-1L),0x0BL,3L}}};
            int32_t l_2939 = (-1L);
            struct S0 l_2942 = {0UL,1UL,1L};
            int32_t l_2969 = 0xBA8E47C9L;
            int32_t l_2971 = 9L;
            int32_t l_2973 = (-9L);
            int32_t l_2976 = 0xFF0DD4B1L;
            uint32_t l_2977[4] = {4294967290UL,4294967290UL,4294967290UL,4294967290UL};
            int32_t *l_2980 = &l_2970[0][0][1];
            uint64_t ***** const l_3043 = &g_2072;
            int i, j, k;
            (*g_529) = func_38(((p_17 , l_2891) != (safe_lshift_func_int8_t_s_u((5L < ((safe_div_func_int32_t_s_s((l_2939 = (safe_mod_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((p_20 , (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(0xE0L, (l_2932 , ((+((((((*l_2935) = l_2934[0]) == l_2936[4]) > p_20) & l_2937[0][2][3]) | p_18.f1)) && l_2938)))), 0))), (*g_1142))), p_18.f1))), 1L)) , p_20)), g_2940))), l_2941, (*l_2941), l_2942);
            (*g_529) = &l_2939;
            for (g_211 = 1; (g_211 <= 5); g_211 += 1)
            { 
                int64_t l_2950 = 0x1783775D0EA6AD5DLL;
                int32_t l_2957[7][3][6] = {{{0xE38E1D25L,1L,(-1L),0xEDB17440L,1L,(-1L)},{0L,0xE38E1D25L,(-1L),(-1L),0L,0L},{1L,(-1L),(-1L),1L,1L,0x8C925A24L}},{{1L,1L,0x8C925A24L,0x8C925A24L,1L,0xEDB17440L},{0xE38E1D25L,(-1L),0x8C925A24L,1L,1L,(-1L)},{1L,0L,1L,1L,0L,1L}},{{0xE38E1D25L,0x8C925A24L,1L,1L,0xE38E1D25L,(-1L)},{0xEDB17440L,1L,0x8C925A24L,(-1L),0L,0xEDB17440L},{0xEDB17440L,(-5L),(-1L),1L,1L,(-1L)}},{{0xE38E1D25L,0xE38E1D25L,0x8C925A24L,1L,1L,0xE38E1D25L},{1L,(-5L),1L,1L,0L,0x8C925A24L},{0xE38E1D25L,1L,1L,0x8C925A24L,0xE38E1D25L,0xE38E1D25L}},{{0xEDB17440L,0x8C925A24L,0x8C925A24L,0xEDB17440L,0L,(-1L)},{0xEDB17440L,0L,(-1L),0x8C925A24L,1L,0xEDB17440L},{0xE38E1D25L,(-1L),0x8C925A24L,1L,1L,(-1L)}},{{1L,0L,1L,1L,0L,1L},{0xE38E1D25L,0x8C925A24L,1L,1L,0xE38E1D25L,(-1L)},{0xEDB17440L,1L,0x8C925A24L,(-1L),0L,0xEDB17440L}},{{0xEDB17440L,(-5L),(-1L),1L,1L,(-1L)},{0xE38E1D25L,0xE38E1D25L,0x8C925A24L,1L,1L,0xE38E1D25L},{1L,(-5L),1L,1L,0L,0x8C925A24L}}};
                int32_t l_2964 = 9L;
                const int64_t l_2992 = 0x84957F8944395BA0LL;
                struct S0 l_2997 = {0xA0L,0x6868L,0x4B07C398DD6C63CALL};
                uint32_t l_3012 = 0UL;
                int i, j, k;
                if ((((*l_2919) = (((l_2938 | (safe_unary_minus_func_int32_t_s(0x633C3450L))) != l_2937[0][3][3]) & ((((safe_div_func_uint32_t_u_u((((l_2946 = &g_1649) == (l_2947 , (g_2948[0] = g_2948[2]))) < 0x7DL), (*g_2539))) , (*g_302)) , p_19.f1) == 0xC65FL))) | p_17))
                { 
                    int32_t *l_2949 = &l_2947;
                    int32_t *l_2951 = &g_107[2][5][2];
                    int32_t *l_2952 = &l_2939;
                    int32_t *l_2953 = (void*)0;
                    int32_t *l_2954 = (void*)0;
                    int32_t *l_2955[4];
                    int32_t l_2963 = (-5L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2955[i] = &g_107[2][5][1];
                    --l_2977[2];
                    (*l_2903) = &l_2942;
                    l_2980 = (void*)0;
                    if (l_2977[1])
                        continue;
                    (*l_2952) = (p_19.f1 >= ((!(safe_mul_func_int16_t_s_s(p_19.f1, (safe_mul_func_uint16_t_u_u(p_18.f1, l_2957[6][2][3]))))) , l_2957[6][2][3]));
                }
                else
                { 
                    uint32_t *l_2988 = &g_1282;
                    uint32_t **l_2987 = &l_2988;
                    uint32_t ***l_2986 = &l_2987;
                    uint32_t ****l_2989 = &g_1787[3];
                    if (p_20)
                        break;
                    (*l_2989) = l_2986;
                }
                for (l_2958 = 5; (l_2958 >= 0); l_2958 -= 1)
                { 
                    int32_t l_2990[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2990[i] = 0x50C7FCD6L;
                    (*l_2941) = p_20;
                    if (l_2990[1])
                        break;
                    return l_2991;
                }
                (*g_1142) ^= l_2992;
                for (g_1623 = 5; (g_1623 >= 1); g_1623 -= 1)
                { 
                    const uint64_t l_3011 = 7UL;
                    int64_t *l_3037 = &g_123.f2;
                    uint8_t l_3038 = 0x3BL;
                    (*l_2941) |= ((((safe_mod_func_uint8_t_u_u(g_2940, ((safe_sub_func_uint8_t_u_u(0xCDL, ((l_2997 , (((safe_rshift_func_uint8_t_u_s(0UL, (safe_add_func_int32_t_s_s((((safe_sub_func_int8_t_s_s((((safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(p_18.f0, p_19.f0)), (safe_mod_func_int64_t_s_s(((((p_18.f1 ^ l_3010) < 0xA0A8L) ^ l_3011) >= l_3010), p_19.f0)))) , 0UL) > l_3011), 1L)) && p_18.f1) , p_18.f1), l_3012)))) != p_19.f1) >= p_17)) != p_17))) , 247UL))) & p_17) == p_18.f0) && l_2970[2][0][1]);
                    l_2956 = (((***g_1650) >= (safe_add_func_uint64_t_u_u((l_3011 ^ ((safe_sub_func_uint8_t_u_u(g_123.f0, ((safe_add_func_int32_t_s_s(l_2964, (safe_div_func_int64_t_s_s(((*l_3037) = (((((safe_div_func_int64_t_s_s((safe_sub_func_int16_t_s_s((+(((+(safe_add_func_int64_t_s_s((p_19 , (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u(p_19.f0, (!((0x819ECE6A8CC7B125LL < p_19.f1) || (*l_2941))))), p_19.f0)), 0))), 1L))) , l_2997.f1) == p_19.f1)), p_20)), l_3036)) < 255UL) >= l_2997.f1) && 0x0902BB6DL) > g_242.f0)), l_3038)))) ^ (*l_2941)))) && (*g_1463))), g_303[0].f0))) > (*l_2941));
                    (*g_1142) = (*l_2941);
                }
            }
            for (g_90 = 4; (g_90 == (-22)); g_90 = safe_sub_func_int16_t_s_s(g_90, 5))
            { 
                uint8_t l_3050[2];
                struct S0 *l_3051 = &l_2942;
                uint32_t **l_3061[6] = {&l_3058,&l_3058,&l_3058,&l_3058,&l_3058,&l_3058};
                int32_t l_3080 = (-10L);
                int i;
                for (i = 0; i < 2; i++)
                    l_3050[i] = 5UL;
                (*g_529) = &l_2969;
                (*g_529) = (void*)0;
                if (p_19.f0)
                    break;
                l_3054 = ((((safe_mul_func_int8_t_s_s(l_2904, g_1282)) , l_3043) == (((((safe_sub_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(g_107[5][2][2], 0UL)), (((safe_mul_func_int16_t_s_s((p_19.f0 != 0x79885A638F439B8ELL), l_3050[0])) , l_3051) != l_3052[3]))) <= p_18.f1) <= (*g_1463)) <= g_757) , l_3053)) , l_2956);
                if (((*l_2941) |= (*g_1142)))
                { 
                    uint32_t ** const ***l_3059 = (void*)0;
                    uint32_t ** const ***l_3060 = &l_3055;
                    uint32_t ***l_3062 = &l_3057[0][2];
                    int32_t l_3070 = (-9L);
                    int32_t *l_3071 = (void*)0;
                    int32_t *l_3072 = &l_2970[0][0][1];
                    int32_t *l_3073[5][1][2] = {{{&l_2970[1][0][4],&l_2970[1][0][4]}},{{&l_2970[1][0][4],&l_2970[1][0][4]}},{{&l_2970[1][0][4],&l_2970[1][0][4]}},{{&l_2970[1][0][4],&l_2970[1][0][4]}},{{&l_2970[1][0][4],&l_2970[1][0][4]}}};
                    int i, j, k;
                    (*g_1142) |= (((l_3052[5] != (void*)0) && ((*l_2941) >= ((l_2970[0][0][1] &= (((((*l_3060) = l_3055) != ((((*l_3062) = l_3061[0]) != ((safe_sub_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(((p_18.f1 || ((((g_107[5][2][4] & l_3067[1]) || l_3050[1]) && p_17) , p_19.f0)) && 1UL), 13)) < l_2938), p_19.f1)) , l_3068)) , (void*)0)) < 1L) <= l_3070)) >= 0L))) >= p_18.f1);
                    (*g_529) = &l_3070;
                    (*g_529) = &l_2947;
                    l_3074++;
                }
                else
                { 
                    int32_t *l_3077 = &g_59[2];
                    int64_t *l_3088 = (void*)0;
                    int64_t *l_3089 = (void*)0;
                    int64_t *l_3090 = (void*)0;
                    int64_t *l_3091[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_3091[i] = &g_2652[0][1][0];
                    (*g_529) = l_3077;
                    (*l_3077) = 0xF11417B8L;
                    (*l_2941) &= (safe_sub_func_int8_t_s_s(p_20, ((l_3080 = 0xDA9BL) , ((*l_3077) & (~(g_256[1][4][0] = (safe_div_func_int64_t_s_s((((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(255UL, 7)) , p_19.f1), ((*l_2907) = ((p_17 <= (0UL >= p_18.f1)) && 0x24B788F6FFA3F0BBLL)))) < p_19.f1) < l_3050[0]), p_18.f0))))))));
                }
            }
        }
        else
        { 
            int32_t **l_3093 = &l_2941;
            if (g_242.f0)
                goto lbl_3092;
            (*l_3093) = ((*g_529) = &l_2956);
        }
    }
    else
    { 
        uint16_t l_3094 = 0UL;
        struct S0 l_3095 = {1UL,0x38DFL,-6L};
        int32_t *l_3096 = &g_59[2];
        (*g_529) = (l_3096 = func_38((*g_2539), &g_3, l_3094, l_3095));
    }
    (*g_1142) = l_2975;
    (*g_1142) = (l_2959 < ((safe_unary_minus_func_uint64_t_u(((-1L) <= (!(safe_add_func_uint32_t_u_u(((*g_580) = 0xF4AA9338L), (*g_2539))))))) , l_2967));
    return l_3103;
}



static uint8_t  func_21(int32_t * p_22, int32_t * p_23, int32_t * p_24)
{ 
    uint8_t l_1805 = 0x66L;
    uint64_t **l_1811[3][6][5] = {{{&g_1254[4][2],&g_1254[5][2],&g_1254[4][2],&g_1254[4][2],(void*)0},{&g_1254[4][2],&g_1254[4][2],&g_1254[2][1],&g_1254[0][4],&g_1254[1][5]},{&g_1254[4][2],&g_1254[4][2],(void*)0,&g_1254[3][0],&g_1254[4][2]},{&g_1254[4][2],&g_1254[4][2],&g_1254[4][2],&g_1254[4][2],&g_1254[0][0]},{&g_1254[4][2],&g_1254[4][2],&g_1254[2][1],&g_1254[0][0],&g_1254[4][1]},{&g_1254[4][2],&g_1254[4][2],&g_1254[4][2],&g_1254[4][2],&g_1254[0][4]}},{{&g_1254[0][4],(void*)0,&g_1254[4][2],&g_1254[0][0],&g_1254[4][2]},{&g_1254[2][1],&g_1254[1][5],&g_1254[0][0],&g_1254[4][2],&g_1254[4][2]},{&g_1254[2][1],&g_1254[0][4],&g_1254[1][5],&g_1254[3][0],&g_1254[3][4]},{&g_1254[4][2],&g_1254[0][4],&g_1254[4][2],&g_1254[0][4],&g_1254[4][2]},{&g_1254[4][1],&g_1254[1][5],&g_1254[4][2],&g_1254[4][2],&g_1254[4][2]},{&g_1254[3][2],(void*)0,&g_1254[4][2],&g_1254[4][2],&g_1254[1][2]}},{{&g_1254[0][0],&g_1254[4][2],&g_1254[0][0],&g_1254[1][5],&g_1254[4][2]},{&g_1254[4][2],&g_1254[4][2],&g_1254[3][0],&g_1254[1][5],&g_1254[4][2]},{&g_1254[1][1],&g_1254[5][2],&g_1254[1][5],&g_1254[4][2],&g_1254[4][2]},{&g_1254[0][4],(void*)0,&g_1254[1][5],&g_1254[1][5],(void*)0},{&g_1254[1][2],&g_1254[4][2],&g_1254[3][4],(void*)0,&g_1254[0][4]},{(void*)0,&g_1254[4][2],&g_1254[2][1],&g_1254[4][2],&g_1254[4][2]}}};
    int32_t l_1819[3];
    uint32_t l_1842[3][2] = {{1UL,1UL},{1UL,1UL},{1UL,1UL}};
    int32_t l_1909 = 0L;
    int64_t l_1923 = 0x32B793457781E943LL;
    int16_t *l_2018 = &g_505;
    union U1 l_2035[6][7] = {{{0xB0L},{249UL},{249UL},{249UL},{0xB0L},{0xE2L},{0xC3L}},{{255UL},{255UL},{249UL},{252UL},{249UL},{0xD6L},{0UL}},{{252UL},{0x53L},{0x85L},{0xD6L},{0xD6L},{0x85L},{0x53L}},{{255UL},{252UL},{255UL},{0xC3L},{3UL},{0x85L},{0xE2L}},{{0xB0L},{0xC8L},{246UL},{249UL},{255UL},{0xD6L},{255UL}},{{0xC3L},{255UL},{255UL},{0xC3L},{1UL},{0xE2L},{249UL}}};
    uint16_t ***l_2096 = &g_655;
    uint16_t ****l_2095[4][5][5] = {{{&l_2096,&l_2096,&l_2096,(void*)0,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096},{(void*)0,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096}},{{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,(void*)0,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,(void*)0},{&l_2096,&l_2096,&l_2096,(void*)0,(void*)0},{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096}},{{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,(void*)0,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,(void*)0,&l_2096}},{{&l_2096,(void*)0,&l_2096,(void*)0,&l_2096},{(void*)0,&l_2096,&l_2096,&l_2096,&l_2096},{&l_2096,&l_2096,&l_2096,&l_2096,(void*)0},{&l_2096,(void*)0,&l_2096,(void*)0,(void*)0},{&l_2096,&l_2096,&l_2096,(void*)0,&l_2096}}};
    union U1 *l_2105 = &g_2106;
    int32_t *l_2107[7][4] = {{(void*)0,&l_1819[1],(void*)0,(void*)0},{&l_1819[1],&l_1819[1],&l_1819[1],&l_1819[1]},{&l_1819[1],(void*)0,(void*)0,&l_1819[1]},{(void*)0,&l_1819[1],(void*)0,(void*)0},{&l_1819[1],&l_1819[1],&l_1819[1],&l_1819[1]},{&l_1819[1],(void*)0,&l_1819[1],(void*)0},{&l_1819[1],(void*)0,&l_1819[1],&l_1819[1]}};
    uint32_t *l_2113 = &g_1447;
    uint32_t **l_2112[5] = {&l_2113,&l_2113,&l_2113,&l_2113,&l_2113};
    uint32_t ***l_2111 = &l_2112[3];
    uint64_t *l_2153 = &g_757;
    uint64_t l_2161 = 0x85D11EB618804051LL;
    uint16_t l_2172 = 0x573AL;
    struct S0 *** const **l_2173 = (void*)0;
    int8_t ***l_2199 = &g_1326;
    int32_t l_2229[1];
    uint64_t ****l_2259 = (void*)0;
    int32_t l_2274[7][1][7] = {{{(-1L),0x256894C6L,(-1L),0xD2A2360EL,0x256894C6L,0x1B1C8B13L,0x1B1C8B13L}},{{0x256894C6L,0x2626DBABL,0x5332A938L,0x2626DBABL,0x256894C6L,0x5332A938L,8L}},{{8L,0x1B1C8B13L,0xD2A2360EL,8L,0xD2A2360EL,0x1B1C8B13L,8L}},{{(-1L),8L,0x1B1C8B13L,0xD2A2360EL,8L,0xD2A2360EL,0x1B1C8B13L}},{{8L,8L,0x5332A938L,0x256894C6L,0x2626DBABL,0x5332A938L,0x2626DBABL}},{{0x256894C6L,0x1B1C8B13L,0x1B1C8B13L,0x256894C6L,0xD2A2360EL,(-1L),0x256894C6L}},{{(-1L),0x2626DBABL,0xD2A2360EL,0xD2A2360EL,0x2626DBABL,(-1L),0x1B1C8B13L}}};
    int32_t l_2290 = 0x77BD7251L;
    int16_t l_2325 = 0x8C57L;
    struct S0 * const *l_2332 = (void*)0;
    struct S0 * const **l_2331 = &l_2332;
    struct S0 * const ** const *l_2330 = &l_2331;
    struct S0 * const ** const ** const l_2329 = &l_2330;
    uint16_t l_2351 = 0UL;
    uint64_t l_2388[4][4][6] = {{{1UL,18446744073709551611UL,0x39FB57FBEEC94030LL,1UL,0x4BF5009F4590FB8FLL,0xD1D9E5E4C15ED001LL},{1UL,0x7AFA0DB851076CB7LL,1UL,0xC55755A7F1D6DDF1LL,0x39FB57FBEEC94030LL,0x8FA5B6913A91EC12LL},{1UL,18446744073709551615UL,5UL,0xD5D988E7C59EC68BLL,5UL,18446744073709551615UL},{18446744073709551611UL,3UL,0xCBC052F4E06555FDLL,0UL,0x69E8D7BE8B8EB469LL,18446744073709551611UL}},{{0xBED1CCF4612B5FDALL,0xC55755A7F1D6DDF1LL,0xDA46E2B63FD903DDLL,0x39FB57FBEEC94030LL,18446744073709551615UL,0xA2C2A40DF2292564LL},{0xD1D9E5E4C15ED001LL,0xC55755A7F1D6DDF1LL,0x258D9813287D0FBBLL,1UL,0x69E8D7BE8B8EB469LL,0x9182367B82785BFELL},{0x8FA5B6913A91EC12LL,3UL,1UL,5UL,5UL,1UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551611UL,0xCBC052F4E06555FDLL,0x39FB57FBEEC94030LL,0UL}},{{18446744073709551611UL,0x7AFA0DB851076CB7LL,0x11F490C95C6C4CDDLL,0xDA46E2B63FD903DDLL,0x4BF5009F4590FB8FLL,18446744073709551611UL},{0xA2C2A40DF2292564LL,18446744073709551611UL,0x11F490C95C6C4CDDLL,0x258D9813287D0FBBLL,18446744073709551615UL,0UL},{0x9182367B82785BFELL,0x258D9813287D0FBBLL,18446744073709551611UL,1UL,0xFCE34533ADC3EEC6LL,1UL},{1UL,0xFCE34533ADC3EEC6LL,1UL,18446744073709551611UL,0x258D9813287D0FBBLL,0x9182367B82785BFELL}},{{0UL,18446744073709551615UL,0x258D9813287D0FBBLL,0x11F490C95C6C4CDDLL,18446744073709551611UL,0xA2C2A40DF2292564LL},{18446744073709551611UL,0x4BF5009F4590FB8FLL,0xDA46E2B63FD903DDLL,0x11F490C95C6C4CDDLL,0x7AFA0DB851076CB7LL,18446744073709551611UL},{0UL,0x39FB57FBEEC94030LL,0xCBC052F4E06555FDLL,18446744073709551611UL,18446744073709551615UL,18446744073709551615UL},{1UL,5UL,5UL,1UL,3UL,0x8FA5B6913A91EC12LL}}};
    const int32_t *l_2467 = &g_2468;
    int64_t l_2491[2][2][1];
    uint32_t l_2495 = 0x8E5E65AFL;
    int8_t l_2496 = 4L;
    uint32_t l_2537 = 0xB292A4DDL;
    int32_t *l_2538 = &l_2290;
    uint32_t l_2654 = 18446744073709551615UL;
    const int8_t l_2689 = 1L;
    uint32_t l_2691 = 0xA7DAEE27L;
    uint16_t l_2693 = 0x12CBL;
    uint16_t ** const *l_2701 = (void*)0;
    uint16_t ** const **l_2700[2];
    struct S0 l_2798 = {255UL,0UL,1L};
    int8_t l_2868 = 1L;
    uint32_t l_2870 = 1UL;
    int32_t ***l_2885 = (void*)0;
    int64_t l_2889 = 0xE337A01B97173EC7LL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1819[i] = 0xB1F46567L;
    for (i = 0; i < 1; i++)
        l_2229[i] = 0xC8A71C66L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_2491[i][j][k] = 0L;
        }
    }
    for (i = 0; i < 2; i++)
        l_2700[i] = &l_2701;
    return (*l_2467);
}



static int32_t * func_25(uint32_t  p_26, uint16_t  p_27, int32_t * p_28)
{ 
    int16_t *l_1023 = &g_49;
    const int16_t *l_1024 = &g_505;
    uint16_t * const *l_1029 = &g_656;
    uint16_t * const **l_1028[1][5] = {{&l_1029,&l_1029,&l_1029,&l_1029,&l_1029}};
    uint64_t *l_1030 = &g_768;
    const uint16_t ***l_1032 = (void*)0;
    const uint16_t ****l_1031[3][7][2] = {{{&l_1032,(void*)0},{(void*)0,&l_1032},{(void*)0,(void*)0},{&l_1032,(void*)0},{(void*)0,&l_1032},{(void*)0,(void*)0},{&l_1032,(void*)0}},{{(void*)0,&l_1032},{(void*)0,(void*)0},{&l_1032,(void*)0},{(void*)0,&l_1032},{(void*)0,(void*)0},{&l_1032,(void*)0},{(void*)0,&l_1032}},{{(void*)0,(void*)0},{&l_1032,&l_1032},{&l_1032,&l_1032},{&l_1032,&l_1032},{&l_1032,&l_1032},{&l_1032,&l_1032},{&l_1032,&l_1032}}};
    int32_t l_1035 = (-1L);
    int32_t l_1036 = (-1L);
    union U1 l_1055 = {0x8DL};
    uint8_t l_1076 = 0xCAL;
    uint64_t l_1089 = 0xC997D8DF2B8A6471LL;
    int16_t l_1154 = 0x1ED7L;
    int32_t l_1162 = (-8L);
    int32_t l_1163 = (-1L);
    uint32_t l_1164 = 4294967289UL;
    int16_t ***l_1167 = &g_496;
    struct S0 *l_1199[7] = {(void*)0,&g_123,(void*)0,(void*)0,&g_123,(void*)0,(void*)0};
    uint8_t **l_1283 = &g_606;
    int8_t *l_1325 = &g_835;
    int8_t * const * const l_1324[4] = {&l_1325,&l_1325,&l_1325,&l_1325};
    int32_t l_1353 = 0x1D00C213L;
    int32_t l_1356 = (-1L);
    int32_t l_1358 = 0x5F017679L;
    int32_t l_1363[1][3][4];
    uint32_t l_1365 = 0x8A2604FCL;
    int16_t ****l_1480 = &g_495[0];
    uint32_t l_1506 = 18446744073709551611UL;
    uint32_t l_1560[6] = {18446744073709551615UL,0xBA87D7B6L,0xBA87D7B6L,18446744073709551615UL,0xBA87D7B6L,0xBA87D7B6L};
    uint32_t l_1581 = 6UL;
    const int8_t l_1595 = (-1L);
    int32_t l_1661[5];
    uint32_t l_1688 = 0UL;
    uint32_t *l_1692 = (void*)0;
    uint32_t **l_1691 = &l_1692;
    uint64_t ***l_1791[2];
    struct S0 l_1802[5] = {{252UL,0x7A4DL,0x2ADF97EC7A0CB2B3LL},{252UL,0x7A4DL,0x2ADF97EC7A0CB2B3LL},{252UL,0x7A4DL,0x2ADF97EC7A0CB2B3LL},{252UL,0x7A4DL,0x2ADF97EC7A0CB2B3LL},{252UL,0x7A4DL,0x2ADF97EC7A0CB2B3LL}};
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
                l_1363[i][j][k] = 0L;
        }
    }
    for (i = 0; i < 5; i++)
        l_1661[i] = 0x50470709L;
    for (i = 0; i < 2; i++)
        l_1791[i] = &g_1253;
lbl_1086:
    l_1036 ^= (((*p_28) ^ ((((l_1023 != (l_1024 = l_1024)) != 0x114EL) && (!(((safe_mul_func_int8_t_s_s((g_3 , (l_1028[0][0] != (g_1033 = ((((*l_1030) = g_59[2]) != g_123.f2) , (void*)0)))), l_1035)) , (*p_28)) , l_1035))) && 0xB09F29E30197B396LL)) && g_256[1][4][0]);
    (*g_529) = &l_1036;
lbl_1171:
    for (g_54 = 0; (g_54 <= 4); g_54 += 1)
    { 
        int32_t l_1044 = 0xEC061133L;
        uint64_t **l_1045 = &l_1030;
        uint32_t *l_1046 = &g_51;
        int64_t *l_1047 = (void*)0;
        uint16_t **l_1048 = (void*)0;
        uint64_t l_1050 = 9UL;
        int64_t l_1054 = 0xAABA0FF21E4E5600LL;
        uint32_t l_1058 = 0xB5D0F7DEL;
        int32_t *l_1085 = (void*)0;
        uint16_t l_1123 = 0xF368L;
        uint8_t l_1135 = 255UL;
        int i;
    }
    if ((safe_lshift_func_uint16_t_u_s(p_26, ((*l_1023) ^= 0x3864L))))
    { 
        int8_t l_1148 = 0L;
        int32_t l_1152 = 1L;
        int32_t l_1161 = 6L;
        uint32_t l_1203 = 0xCDB18B9AL;
        struct S0 l_1214[3] = {{246UL,1UL,1L},{246UL,1UL,1L},{246UL,1UL,1L}};
        int i;
        for (g_54 = 0; (g_54 < 44); g_54 = safe_add_func_int8_t_s_s(g_54, 3))
        { 
            int16_t l_1147 = 6L;
            int32_t *l_1149 = &g_107[5][4][3];
            int32_t *l_1150 = &l_1035;
            int32_t *l_1151 = &g_59[5];
            int32_t *l_1153 = &l_1036;
            int32_t *l_1155 = (void*)0;
            int32_t *l_1156 = &l_1036;
            int32_t *l_1157 = &g_107[1][1][4];
            int32_t *l_1158 = &l_1036;
            int32_t *l_1159 = &l_1036;
            int32_t *l_1160[3];
            int16_t ****l_1168 = &g_495[0];
            int16_t ***l_1170 = &g_496;
            int16_t ****l_1169 = &l_1170;
            uint32_t *l_1196 = &g_51;
            uint64_t *l_1215 = &g_768;
            uint32_t l_1236 = 0UL;
            uint64_t l_1237 = 8UL;
            struct S0 *l_1250[4][7] = {{&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123},{&l_1214[0],(void*)0,&l_1214[0],(void*)0,&l_1214[0],(void*)0,&l_1214[0]},{&g_123,&g_123,&g_123,&g_123,&g_123,&g_123,&g_123},{&g_123,(void*)0,&g_123,(void*)0,&g_123,(void*)0,&g_123}};
            uint8_t l_1257 = 255UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1160[i] = &l_1152;
            ++l_1164;
            if ((0x6EL <= (((*l_1149) = (p_27 ^ (((*l_1030) = g_123.f1) , (l_1167 == ((*l_1169) = ((*l_1168) = &g_496)))))) != 0x48L)))
            { 
                uint8_t *l_1172 = &l_1055.f0;
                int32_t l_1184 = 2L;
                int32_t l_1185 = 0x4308D1A8L;
                if (g_49)
                    goto lbl_1171;
                if (((void*)0 != l_1172))
                { 
                    int16_t **l_1183 = &g_276;
                    (*l_1151) = (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_1148, (g_59[1] == 0x1F61027A107C2D6ELL))), (((l_1184 = (safe_mul_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((l_1183 == l_1183), (p_27 ^ (**g_529)))) | (*p_28)), l_1152))) >= (*g_1142)) == l_1185))), (*g_580)));
                    return p_28;
                }
                else
                { 
                    if ((**g_529))
                        break;
                    (*l_1149) = 2L;
                }
            }
            else
            { 
                int16_t ***l_1190 = &g_496;
                int32_t l_1191[3];
                int64_t l_1201 = 0x5247F96B2282BEB1LL;
                int16_t l_1216 = 0xD2EBL;
                int32_t l_1235 = (-1L);
                int8_t *l_1238 = &g_209;
                int i;
                for (i = 0; i < 3; i++)
                    l_1191[i] = 0L;
                for (g_123.f2 = 9; (g_123.f2 > (-21)); g_123.f2--)
                { 
                    int32_t l_1192[7];
                    uint8_t *l_1197 = &l_1055.f0;
                    int8_t l_1198[2][7][1] = {{{0x4DL},{0x4DL},{1L},{0x5CL},{0x5CL},{0x5CL},{1L}},{{0x4DL},{0x4DL},{1L},{0x5CL},{0x5CL},{0x5CL},{1L}}};
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_1192[i] = 0x18459C95L;
                    if ((*p_28))
                        break;
                    (*l_1156) = ((safe_mul_func_uint8_t_u_u((((*l_1168) == l_1190) && (l_1191[2] && (l_1192[3] & ((safe_div_func_uint8_t_u_u(((*l_1197) = (l_1192[1] != ((~((l_1196 = ((g_123.f0 < p_26) , p_28)) != l_1156)) <= (*g_580)))), 0xE9L)) , l_1198[0][6][0])))), l_1191[1])) || 247UL);
                    return l_1149;
                }
                if ((*p_28))
                { 
                    int32_t l_1200 = 0xD4F568CFL;
                    int32_t l_1202[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1202[i] = 0xD71AB5FEL;
                    (***g_860) = l_1199[5];
                    --l_1203;
                }
                else
                { 
                    (*l_1168) = (void*)0;
                }
                l_1035 &= ((&p_26 != &p_26) | (((((((((-4L) <= (safe_add_func_uint64_t_u_u(((*l_1215) = (safe_mul_func_int8_t_s_s((p_26 >= ((safe_mod_func_int64_t_s_s(((p_27 >= (safe_mul_func_uint16_t_u_u(((l_1214[0] , &g_768) != l_1215), l_1164))) , l_1163), l_1162)) > p_27)), p_27))), 0xD889BC73CAE72521LL))) , p_26) ^ l_1216) & l_1191[2]) & l_1036) , (**l_1190)) == (void*)0) , g_107[5][2][2]));
                (*l_1159) = (safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s(((l_1191[2] ^= (safe_mod_func_uint8_t_u_u(l_1201, ((*l_1238) = (safe_add_func_uint64_t_u_u(((**g_579) && (((safe_rshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s((safe_mul_func_int8_t_s_s(((0xF355BE10L && (((safe_unary_minus_func_uint32_t_u((safe_sub_func_int64_t_s_s(l_1201, ((65535UL && ((l_1235 >= (g_505 , l_1236)) & g_123.f1)) , p_27))))) && p_27) , (-3L))) < p_26), l_1152)))), l_1237)) , (*l_1157)) , p_26)), (-2L))))))) , p_26), l_1201)) , l_1235) , (-1L)), 1)) <= 0x5E365E45L), 0x7A4AL));
            }
            for (g_694 = 0; (g_694 > 56); g_694 = safe_add_func_int16_t_s_s(g_694, 7))
            { 
                const uint32_t l_1245 = 0UL;
                int32_t l_1246 = 3L;
                int32_t l_1247 = (-10L);
                l_1247 = ((*l_1149) = (g_3 , ((safe_lshift_func_int16_t_s_u((((*l_1156) = (safe_sub_func_int32_t_s_s(l_1245, (g_267[1] == &l_1236)))) , ((l_1246 = ((l_1161 | ((g_303[0].f1 & g_303[0].f0) ^ 0x9BL)) != (*l_1157))) || l_1055.f0)), 8)) ^ 0UL)));
                for (g_74 = 0; (g_74 >= 54); ++g_74)
                { 
                    (***g_860) = l_1250[2][2];
                    (*g_529) = (*g_529);
                    if (p_27)
                        goto lbl_1086;
                    if ((*p_28))
                        continue;
                }
                if ((**g_529))
                    continue;
                for (l_1154 = (-18); (l_1154 <= 24); l_1154 = safe_add_func_int8_t_s_s(l_1154, 6))
                { 
                    (*l_1159) = (l_1247 = (l_1214[2] , ((*l_1157) = ((*l_1150) |= ((p_26 == ((*l_1023) &= (((g_1253 != &l_1215) == ((safe_lshift_func_uint8_t_u_u(g_54, 3)) || ((0x9DL < p_27) || 255UL))) ^ 6L))) , (*p_28))))));
                    return p_28;
                }
                for (g_51 = 0; (g_51 <= 2); g_51 += 1)
                { 
                    int i;
                    return p_28;
                }
            }
            --l_1257;
        }
    }
    else
    { 
        uint16_t l_1276 = 0x3BF2L;
        uint32_t *l_1280 = (void*)0;
        uint32_t *l_1281 = &g_1282;
        union U1 l_1284 = {0xBFL};
        int32_t l_1292 = 0x376472E0L;
        uint16_t *** const l_1323 = &g_655;
        uint16_t *** const *l_1322 = &l_1323;
        int32_t l_1347 = 8L;
        int32_t l_1349 = 0x4DA752AAL;
        int32_t l_1352 = (-3L);
        int32_t l_1354 = 0L;
        int32_t l_1355 = 0L;
        int32_t l_1364 = (-10L);
        int8_t *l_1405 = (void*)0;
        uint32_t l_1419[4];
        struct S0 l_1431 = {0xDFL,8UL,0x9C294EFC54203B08LL};
        uint32_t l_1469 = 0xA2EEC87FL;
        int8_t l_1505[7][4][5] = {{{0L,0xE2L,0xD2L,0xDCL,0xCFL},{0xC2L,0x21L,0x21L,0xC2L,7L},{0x3CL,0x57L,(-3L),(-1L),0x5CL},{0x27L,0x21L,0xEBL,(-3L),(-10L)}},{{5L,0xE2L,0x4AL,(-1L),0x72L},{0x13L,1L,0xA2L,0xC2L,1L},{5L,(-1L),0xE2L,0xDCL,0x3CL},{0x27L,7L,0xA2L,0x13L,(-1L)}},{{0x3CL,0x4AL,0x4AL,0x3CL,0x3CL},{0xC2L,0x08L,0xEBL,(-1L),1L},{0L,0x4AL,(-3L),1L,0x72L},{0L,7L,0x21L,(-1L),(-10L)}},{{0xDCL,(-1L),0xD2L,0x3CL,0x5CL},{0L,1L,7L,0x13L,7L},{0L,0xE2L,0xD2L,0xDCL,0xCFL},{0xC2L,0x21L,0x21L,0xC2L,7L}},{{0x3CL,0x57L,(-3L),(-1L),0x5CL},{0x27L,0x21L,0xEBL,(-3L),(-10L)},{5L,0xE2L,0x4AL,(-1L),0x72L},{0x13L,1L,0xA2L,0xC2L,1L}},{{5L,(-1L),0xE2L,0xDCL,0x3CL},{0x27L,7L,0xA2L,0x13L,(-1L)},{0x3CL,0x4AL,0xDCL,0x47L,0x00L},{(-9L),(-1L),(-3L),0xEFL,1L}},{{0xCFL,0xDCL,1L,(-1L),0L},{1L,(-8L),0x13L,0xEFL,0x51L},{0x65L,5L,0L,0x47L,(-1L)},{1L,0L,(-8L),0x79L,0x8DL}}};
        int32_t l_1508 = 0xD4F6AF13L;
        int32_t l_1553[6][2] = {{0x1B65F3FCL,0x1B65F3FCL},{0x1B65F3FCL,0x1B65F3FCL},{0x1B65F3FCL,0x1B65F3FCL},{0x1B65F3FCL,0x1B65F3FCL},{0x1B65F3FCL,0x1B65F3FCL},{0x1B65F3FCL,0x1B65F3FCL}};
        int16_t l_1557 = 0x65C0L;
        int32_t l_1558 = 1L;
        int8_t l_1592 = 1L;
        int64_t l_1596 = (-1L);
        union U1 **l_1620 = &g_244;
        int64_t l_1628 = 0L;
        int8_t l_1641 = 0xBCL;
        int16_t *****l_1647 = &l_1480;
        int32_t l_1673 = 1L;
        int32_t l_1735 = 0xF70ACED5L;
        int8_t l_1736[1];
        int64_t l_1753[3][3][3] = {{{4L,(-7L),0x6BB5E9B99878CB73LL},{0x13A10E02782B5B57LL,0x75C923CCB7A84F3BLL,(-7L)},{0x13A10E02782B5B57LL,0x0B509E960AC65F6ELL,0xE34FA25F062B6619LL}},{{4L,0x9AC01D5B7B1F3077LL,4L},{0xE34FA25F062B6619LL,0x0B509E960AC65F6ELL,0x13A10E02782B5B57LL},{(-7L),0x75C923CCB7A84F3BLL,0x13A10E02782B5B57LL}},{{0x6BB5E9B99878CB73LL,(-7L),4L},{0x0B954951137C7515LL,0x0B954951137C7515LL,0xE34FA25F062B6619LL},{0x6BB5E9B99878CB73LL,0xE34FA25F062B6619LL,(-7L)}}};
        uint64_t l_1763 = 0x7F4B072334120A00LL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1419[i] = 0x560672B6L;
        for (i = 0; i < 1; i++)
            l_1736[i] = (-9L);
        for (g_704 = 0; (g_704 == 22); ++g_704)
        { 
            int32_t *l_1262 = &l_1163;
            int32_t *l_1263 = &l_1035;
            int32_t *l_1264 = &g_59[1];
            int32_t *l_1265 = &l_1162;
            int32_t *l_1266 = &g_107[1][0][2];
            int32_t *l_1267 = &g_59[2];
            int32_t l_1268 = (-1L);
            int32_t *l_1269 = &g_59[6];
            int32_t *l_1270 = &g_59[3];
            int32_t *l_1271 = &g_59[2];
            int32_t *l_1272 = &g_59[0];
            int32_t *l_1273 = &l_1036;
            int32_t *l_1274 = &l_1035;
            int32_t *l_1275[2][7];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 7; j++)
                    l_1275[i][j] = &l_1163;
            }
            --l_1276;
            return p_28;
        }
        (*g_1142) &= (((*l_1281) &= (!(p_26 | p_27))) , (*p_28));
        (*g_1142) &= ((void*)0 != l_1283);
        for (g_211 = 0; (g_211 <= 5); g_211 += 1)
        { 
            const int64_t l_1285 = 0x379603637901838CLL;
            struct S0 l_1295 = {0xF9L,65531UL,0x5EBBAB7FDC400469LL};
            int32_t *l_1297[5][5][6] = {{{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,(void*)0,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298}},{{&g_1298,&g_1298,&g_1298,&g_1298,(void*)0,&g_1298},{&g_1298,(void*)0,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,(void*)0,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298}},{{&g_1298,&g_1298,&g_1298,&g_1298,(void*)0,&g_1298},{&g_1298,&g_1298,(void*)0,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,(void*)0},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,(void*)0,&g_1298,&g_1298,&g_1298}},{{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,(void*)0,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,(void*)0,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,(void*)0,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,(void*)0,&g_1298}},{{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,(void*)0},{&g_1298,&g_1298,&g_1298,(void*)0,&g_1298,&g_1298},{&g_1298,&g_1298,&g_1298,&g_1298,&g_1298,&g_1298},{&g_1298,&g_1298,(void*)0,&g_1298,&g_1298,(void*)0}}};
            int32_t **l_1296 = &l_1297[3][1][5];
            int32_t *l_1299 = &g_1298;
            int32_t l_1330 = 0x872287B1L;
            int32_t l_1332 = 0xFF1BAF8AL;
            int32_t l_1346 = 0xAE51E481L;
            int32_t l_1350 = (-4L);
            int32_t l_1351 = 0x232656C5L;
            int32_t l_1357 = 0x1FD30C00L;
            uint16_t *l_1464 = (void*)0;
            uint16_t l_1467 = 1UL;
            uint32_t **l_1529 = &g_580;
            int32_t l_1554 = (-1L);
            int32_t l_1555[2];
            uint64_t *l_1569 = &g_757;
            union U1 l_1599 = {7UL};
            int32_t *l_1608 = &l_1330;
            int32_t *l_1609[5];
            int32_t l_1610 = 0x31BACF41L;
            uint32_t l_1611 = 0x16D0CAD4L;
            int64_t l_1622 = 3L;
            int8_t **l_1636 = &l_1405;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1555[i] = (-1L);
            for (i = 0; i < 5; i++)
                l_1609[i] = (void*)0;
        }
        for (g_209 = 0; (g_209 > (-6)); g_209--)
        { 
            uint8_t l_1642[1][1][7];
            struct S0 l_1660 = {0x85L,1UL,0xB29257235E28DEB5LL};
            int64_t *l_1662 = &l_1431.f2;
            int32_t l_1700 = 0x9EE920F4L;
            int32_t *l_1759[7] = {&l_1558,&l_1558,&l_1558,&l_1558,&l_1558,&l_1558,&l_1558};
            struct S0 ***l_1786 = &g_1435[1][1][0];
            struct S0 *** const *l_1785[3][6] = {{(void*)0,(void*)0,&l_1786,(void*)0,&l_1786,&l_1786},{(void*)0,&l_1786,&l_1786,&l_1786,(void*)0,&l_1786},{&l_1786,(void*)0,&l_1786,(void*)0,(void*)0,&l_1786}};
            uint16_t l_1788 = 0x744AL;
            int i, j, k;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 7; k++)
                        l_1642[i][j][k] = 0x34L;
                }
            }
            l_1642[0][0][5] &= ((*g_1142) = (safe_rshift_func_uint16_t_u_s(((l_1553[2][1] = l_1055.f0) , ((*g_1463) = l_1641)), 7)));
            l_1356 = (safe_add_func_uint64_t_u_u(((*l_1030) |= (safe_mod_func_int64_t_s_s((l_1642[0][0][6] || l_1276), ((*l_1662) = (((l_1647 != g_1648[0][1][6]) >= ((*g_1463) ^= 1UL)) , (p_26 && (safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((((~((safe_mod_func_int64_t_s_s((l_1660 , g_209), p_26)) == p_27)) | (*p_28)) == l_1661[2]), 0xCBL)), (*g_1463))))))))), 5L));
            for (g_768 = (-26); (g_768 > 27); g_768++)
            { 
                int8_t *l_1672 = (void*)0;
                int32_t l_1693 = 8L;
                for (l_1469 = (-9); (l_1469 != 21); l_1469 = safe_add_func_uint16_t_u_u(l_1469, 3))
                { 
                    uint64_t l_1686[6];
                    uint8_t *l_1687 = &l_1055.f0;
                    uint32_t ***l_1689 = (void*)0;
                    uint32_t ***l_1690 = (void*)0;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1686[i] = 0xD2732D95BEC38967LL;
                    l_1691 = ((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u(p_26, 5)) ^ (~((*l_1687) = (((((*g_1326) = l_1672) != &l_1505[1][0][1]) && l_1673) , (safe_sub_func_uint16_t_u_u((((((g_835 | (safe_rshift_func_uint16_t_u_s((l_1560[4] != (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u((l_1349 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(p_26, (*g_1142))), 5))), 6)), 1L))), 9))) <= (*p_28)) , p_27) , p_26) && 7L), l_1686[1])))))) && l_1688), p_26)) , &l_1280);
                    if (l_1693)
                        break;
                }
            }
        }
    }
    (*g_529) = func_38(((0x2FFF86857D207A00LL & ((safe_sub_func_uint64_t_u_u((&g_1034 == (g_1033 = &g_1034)), (!((safe_add_func_int16_t_s_s((****g_1649), ((~(safe_mul_func_uint16_t_u_u((*g_1463), (safe_add_func_int8_t_s_s(((((void*)0 == g_1787[3]) > 1UL) == p_27), 1UL))))) | 4294967295UL))) <= 0x8C62L)))) , 0x5F544AE759843C82LL)) && 0x76F414A6061BF59FLL), (*g_529), (*p_28), l_1802[3]);
    return p_28;
}



static uint32_t  func_29(int32_t * p_30, int32_t * p_31)
{ 
    int32_t l_64 = 0x079D62BFL;
    int32_t l_65 = (-3L);
    int32_t l_66[7][5][2] = {{{0xF725DC8FL,0x489AFFF7L},{(-1L),(-9L)},{(-9L),(-1L)},{0x489AFFF7L,0xF725DC8FL},{0x489AFFF7L,(-1L)}},{{(-9L),(-9L)},{(-1L),0x489AFFF7L},{0xF725DC8FL,0x489AFFF7L},{(-1L),(-9L)},{(-9L),(-1L)}},{{0x489AFFF7L,0xF725DC8FL},{0x489AFFF7L,(-1L)},{(-9L),(-9L)},{(-1L),0x489AFFF7L},{0xF725DC8FL,0x489AFFF7L}},{{(-1L),(-9L)},{(-9L),(-1L)},{0x489AFFF7L,0xF725DC8FL},{0x489AFFF7L,(-1L)},{(-9L),(-9L)}},{{(-1L),0x489AFFF7L},{0xF725DC8FL,0x489AFFF7L},{(-1L),(-9L)},{(-9L),(-1L)},{0x489AFFF7L,0xF725DC8FL}},{{0x489AFFF7L,(-1L)},{(-9L),(-9L)},{(-1L),0x489AFFF7L},{0xF725DC8FL,0x489AFFF7L},{(-1L),(-9L)}},{{(-9L),(-1L)},{0x489AFFF7L,0xF725DC8FL},{0x489AFFF7L,(-1L)},{(-9L),(-9L)},{(-1L),0x489AFFF7L}}};
    uint64_t l_188 = 18446744073709551615UL;
    int32_t *l_212 = &l_66[3][2][0];
    struct S0 l_221[1][6] = {{{0x19L,0x43A3L,-1L},{0x19L,0x43A3L,-1L},{0x19L,0x43A3L,-1L},{0x19L,0x43A3L,-1L},{0x19L,0x43A3L,-1L},{0x19L,0x43A3L,-1L}}};
    uint8_t l_264 = 0x51L;
    int16_t **l_279 = &g_276;
    uint32_t l_325 = 1UL;
    union U1 l_349 = {0x60L};
    int64_t l_376 = 0x3194C8E7FF3C31E1LL;
    union U1 **l_408 = &g_244;
    uint32_t l_467 = 4UL;
    uint64_t l_479[1];
    const struct S0 *l_522 = &l_221[0][2];
    const struct S0 **l_521 = &l_522;
    uint32_t l_557[3][1][2] = {{{1UL,1UL}},{{1UL,1UL}},{{1UL,1UL}}};
    uint8_t **l_627 = &g_606;
    int8_t *l_639[3][6] = {{&g_209,&g_209,&g_209,&g_209,&g_209,&g_209},{&g_209,&g_209,&g_209,&g_209,&g_209,&g_209},{&g_209,&g_209,&g_209,&g_209,&g_209,&g_209}};
    uint32_t l_708 = 18446744073709551615UL;
    int32_t *l_709 = &g_59[2];
    uint64_t *l_736 = &l_479[0];
    int32_t *l_743 = &l_64;
    int32_t *l_744 = &l_65;
    uint64_t l_745[1][2];
    uint32_t l_746 = 0UL;
    int64_t *l_747 = &l_376;
    int64_t *l_748 = (void*)0;
    int64_t *l_749[3][1][6] = {{{&g_123.f2,&l_221[0][5].f2,&l_221[0][5].f2,&g_123.f2,&l_221[0][5].f2,&l_221[0][5].f2}},{{&g_123.f2,&l_221[0][5].f2,&l_221[0][5].f2,&g_123.f2,&l_221[0][5].f2,&l_221[0][5].f2}},{{&g_123.f2,&l_221[0][5].f2,&l_221[0][5].f2,&g_123.f2,&l_221[0][5].f2,&l_221[0][5].f2}}};
    int32_t l_750[7][6][5] = {{{9L,0xC623B242L,0L,0L,(-1L)},{6L,0L,(-1L),0x8B81A3CCL,1L},{0L,0xA1338060L,0x5F13D91DL,(-4L),1L},{0x97963030L,1L,0x7F061000L,0x28113BB0L,(-1L)},{0x4D8BF19EL,0x4D8BF19EL,0xC6E17C24L,(-1L),0xC6E17C24L},{0x3CF5D1C7L,0x3CF5D1C7L,0L,0xBD0C431FL,0x5F5F126DL}},{{0x096BEC17L,0L,0xC623B242L,0L,(-6L)},{0x4D8BF19EL,0L,0x3B4CAD1AL,(-1L),1L},{0L,0L,1L,6L,0xC60F3BC4L},{(-1L),0x3CF5D1C7L,0xE5E8521DL,0x11D4479DL,6L},{(-4L),0x4D8BF19EL,0x140C83AEL,0x7B906601L,0x1648F6AEL},{0xE5E8521DL,0L,0xC6E17C24L,0L,0xF9506D04L}},{{0xF9506D04L,0x5769616AL,0x0FDFCDFAL,0L,0x5F5F126DL},{0xED1FB259L,0x97963030L,(-1L),0x7B906601L,0x5769616AL},{0L,0L,0x11D4479DL,0x11D4479DL,0L},{(-6L),0x80F9819AL,0x8B81A3CCL,6L,0x0FDFCDFAL},{(-1L),0xF9506D04L,0x80F9819AL,(-1L),0xA1338060L},{(-4L),0x5F13D91DL,0xA1338060L,0L,0L}},{{(-1L),0xED1FB259L,0xC6E17C24L,0xBD0C431FL,1L},{(-6L),0xC6E17C24L,0xC94F76ADL,(-1L),0x5F5F126DL},{0L,(-1L),0x97963030L,0x4D8BF19EL,0L},{0xED1FB259L,0L,2L,0x8B81A3CCL,0xBD0C431FL},{0xF9506D04L,0xC623B242L,2L,6L,0x140C83AEL},{0xE5E8521DL,(-6L),0x97963030L,1L,0L}},{{(-4L),0x876CE9D1L,0xC94F76ADL,0x876CE9D1L,(-4L)},{(-1L),0x096BEC17L,0xC6E17C24L,1L,0x3CF5D1C7L},{0L,1L,0xA1338060L,0L,0x5F5F126DL},{0x4D8BF19EL,(-1L),0x80F9819AL,0x096BEC17L,0x3CF5D1C7L},{0x096BEC17L,0L,0x8B81A3CCL,0x7F061000L,(-4L)},{0x3CF5D1C7L,0xE5E8521DL,0x11D4479DL,6L,0L}},{{0xC623B242L,0L,(-1L),2L,0x140C83AEL},{(-4L),0x7B906601L,0x0FDFCDFAL,0xED1FB259L,0xBD0C431FL},{0x97963030L,0x7B906601L,0xC6E17C24L,0x1648F6AEL,0L},{1L,0L,0x140C83AEL,(-4L),0x5F5F126DL},{0x5F13D91DL,0xE5E8521DL,0xE5E8521DL,0x5F13D91DL,1L},{0x7B906601L,0L,1L,0x3B4CAD1AL,0L}},{{0x5769616AL,(-1L),0x3B4CAD1AL,6L,0xA1338060L},{0x80F9819AL,1L,0xC623B242L,0x3B4CAD1AL,0x0FDFCDFAL},{(-4L),0x096BEC17L,0L,0x5F13D91DL,0L},{0L,0x876CE9D1L,0xC6E17C24L,(-4L),0x5769616AL},{0xC6E17C24L,(-6L),0xC60F3BC4L,0x1648F6AEL,0x5F5F126DL},{0x876CE9D1L,0xC623B242L,(-1L),0xED1FB259L,0xF9506D04L}}};
    int32_t *l_751 = &l_66[3][2][0];
    int16_t l_753 = 0x379DL;
    int64_t l_754 = 0x525FCBD6D570319ALL;
    uint64_t l_829 = 0xBA270D13C4051FE5LL;
    uint32_t l_912[3][3][3] = {{{0UL,0UL,4294967295UL},{0UL,4294967295UL,4294967295UL},{0UL,4294967295UL,4294967295UL}},{{0UL,4294967295UL,4294967295UL},{0UL,4294967295UL,4294967295UL},{0UL,4294967295UL,4294967295UL}},{{0UL,4294967295UL,4294967295UL},{0UL,4294967295UL,4294967295UL},{0UL,4294967295UL,4294967295UL}}};
    uint64_t **l_1021[4][7] = {{(void*)0,&l_736,&l_736,&l_736,(void*)0,(void*)0,&l_736},{&l_736,(void*)0,&l_736,(void*)0,(void*)0,&l_736,(void*)0},{&l_736,&l_736,&l_736,&l_736,&l_736,&l_736,&l_736},{&l_736,(void*)0,(void*)0,&l_736,(void*)0,&l_736,(void*)0}};
    uint64_t *l_1022 = &l_479[0];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_479[i] = 0UL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_745[i][j] = 0UL;
    }
lbl_786:
    for (g_49 = 11; (g_49 <= 25); g_49++)
    { 
        int32_t *l_58 = &g_59[2];
        int32_t *l_60 = &g_59[2];
        int32_t *l_61 = &g_59[2];
        int32_t *l_62 = (void*)0;
        int32_t *l_63[6];
        uint8_t l_67[4];
        uint16_t *l_73 = &g_74;
        int16_t *l_80 = &g_49;
        int16_t **l_79 = &l_80;
        int16_t *l_82[5][6] = {{&g_49,&g_49,&g_49,(void*)0,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49},{&g_49,&g_49,&g_49,&g_49,(void*)0,&g_49},{&g_49,&g_49,&g_49,&g_49,(void*)0,&g_49},{&g_49,&g_49,&g_49,&g_49,&g_49,&g_49}};
        int16_t **l_81 = &l_82[0][1];
        int16_t *l_89 = &g_90;
        uint64_t l_91 = 9UL;
        int16_t l_157[6][2] = {{1L,0xCBDFL},{0xCBDFL,1L},{0xCBDFL,0xCBDFL},{1L,0xCBDFL},{0xCBDFL,1L},{0xCBDFL,0xCBDFL}};
        uint32_t *l_172 = &g_54;
        int32_t l_178[4];
        int16_t l_232 = 9L;
        uint32_t l_253 = 0x65D163BBL;
        int64_t l_257 = 0L;
        int32_t l_259 = 9L;
        struct S0 * const l_274 = &l_221[0][4];
        uint8_t l_296 = 0x6BL;
        uint8_t l_385 = 0xECL;
        union U1 *l_390 = &l_349;
        uint32_t l_394 = 0xB8747EB4L;
        int32_t l_451 = 8L;
        uint64_t l_541 = 0x20DECBB2BE882A0DLL;
        int16_t l_558 = 0x83ECL;
        uint64_t l_560[6] = {0xFB02DFF3840495FCLL,0xFB02DFF3840495FCLL,0xFB02DFF3840495FCLL,0xFB02DFF3840495FCLL,0xFB02DFF3840495FCLL,0xFB02DFF3840495FCLL};
        int32_t l_571 = 1L;
        uint16_t l_593 = 0x3938L;
        uint32_t *l_600 = &l_467;
        uint32_t *l_628 = &l_325;
        int i, j;
        for (i = 0; i < 6; i++)
            l_63[i] = &g_59[2];
        for (i = 0; i < 4; i++)
            l_67[i] = 7UL;
        for (i = 0; i < 4; i++)
            l_178[i] = 0xED9F9372L;
        l_67[1]--;
    }
    l_212 = ((*g_529) = func_38(l_708, l_709, (((safe_mul_func_int8_t_s_s((*l_212), ((*l_212) , (safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((safe_unary_minus_func_int64_t_s((0x132EL & (+(safe_div_func_uint32_t_u_u(((*l_709) , (*l_709)), (*p_31))))))), 6)) ^ (*l_709)), (*l_212)))))) ^ 0x7EL) < (**g_579)), (**l_521)));
    (*l_751) = (((g_107[1][2][2] ^ (l_408 != (((*l_709) = ((l_750[6][5][1] = ((*l_747) = (safe_add_func_int64_t_s_s(((+(safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((((safe_sub_func_int32_t_s_s((*l_709), ((**g_579) = ((((*l_212) != ((~(safe_rshift_func_int8_t_s_u(((((*l_709) < (safe_add_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((--(*l_736)), ((((*l_744) = ((*l_743) ^= (((*l_212) < ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((0x37C7484BD893C502LL ^ g_90), 65535UL)), 0x3749L)) | (*l_709))) <= (*l_709)))) , g_505) & 3UL))) > l_745[0][0]), (*p_31)))) == (*g_580)) < (*p_31)), 1))) , (*l_743))) ^ 0x2D3EAFA3L) == (*l_709))))) && 0UL) | (*l_709)), 0xDFBFL)), l_746))) , (*l_743)), g_123.f0)))) && (*l_212))) , l_408))) , p_31) == &l_557[1][0][1]);
    if ((((*l_627) = g_606) == (void*)0))
    { 
        int32_t *l_752[3][1][4] = {{{(void*)0,&l_65,&l_65,(void*)0}},{{&g_59[2],&l_65,&l_65,&l_65}},{{&l_65,&l_66[3][2][0],&l_65,&l_65}}};
        int8_t l_755[6][1][5] = {{{0xD3L,8L,0xD3L,0xD3L,8L}},{{0x91L,0L,0L,0x91L,0L}},{{8L,8L,9L,8L,8L}},{{0L,0x91L,0L,0L,0x91L}},{{8L,0xD3L,0xD3L,8L,0xD3L}},{{0x91L,0x91L,0x94L,0x91L,0x91L}}};
        int32_t l_756 = 0L;
        int i, j, k;
        g_757++;
        for (g_51 = 0; (g_51 != 46); ++g_51)
        { 
            uint64_t l_769 = 18446744073709551610UL;
            int32_t l_770 = 0x2A7A45A6L;
            uint32_t *l_775 = &l_557[1][0][0];
            (*l_744) = (safe_add_func_int16_t_s_s(((*l_743) == (safe_add_func_uint16_t_u_u(0xE1A7L, (safe_mod_func_uint16_t_u_u(((*l_709) ^= (*l_744)), g_768))))), (l_770 ^= l_769)));
            (*l_751) = (*p_30);
            (*l_743) |= ((safe_sub_func_uint64_t_u_u((((void*)0 == l_775) < l_769), (*l_212))) ^ ((g_209 == ((*g_302) , ((*l_709) != l_770))) <= 0x6EL));
            for (l_754 = 0; (l_754 <= 22); l_754++)
            { 
                if ((**g_529))
                    break;
                for (g_90 = 0; (g_90 == (-21)); g_90 = safe_sub_func_int8_t_s_s(g_90, 9))
                { 
                    int16_t l_780[4][7] = {{(-8L),(-5L),(-8L),(-8L),(-5L),(-8L),(-8L)},{0x507AL,0x507AL,0x5771L,0x507AL,0x507AL,0x5771L,0x507AL},{(-5L),(-8L),(-8L),(-5L),(-8L),(-8L),(-5L)},{0xF478L,0x507AL,0xF478L,0xF478L,0x507AL,0xF478L,0xF478L}};
                    int i, j;
                    (*l_743) |= (1UL <= 3L);
                    return l_780[0][3];
                }
            }
            if ((*p_30))
                continue;
        }
        return g_90;
    }
    else
    { 
        int16_t l_787 = 0x9670L;
        int32_t l_789[3];
        uint16_t l_790 = 0xFA97L;
        int32_t l_897 = 6L;
        uint16_t l_900 = 65534UL;
        int32_t l_906 = 0x624015DAL;
        int32_t l_907 = (-1L);
        uint32_t **l_928 = &g_580;
        int8_t l_999 = 0x35L;
        union U1 l_1010 = {5UL};
        int i;
        for (i = 0; i < 3; i++)
            l_789[i] = 0xD2854488L;
        for (l_264 = 0; (l_264 > 14); l_264++)
        { 
            uint64_t l_783[2][5][1] = {{{18446744073709551615UL},{18446744073709551615UL},{0xF3FF3A45F3CB588ELL},{5UL},{0xF3FF3A45F3CB588ELL}},{{18446744073709551615UL},{18446744073709551615UL},{0xF3FF3A45F3CB588ELL},{5UL},{0xF3FF3A45F3CB588ELL}}};
            int32_t *l_788[3][2][7] = {{{&g_107[0][3][0],&g_59[6],(void*)0,&g_3,&l_66[3][2][0],&l_65,(void*)0},{&l_66[3][2][0],&g_3,(void*)0,&g_107[5][2][2],&l_65,&g_3,&g_3}},{{&l_65,&l_66[3][2][0],&l_66[3][2][0],&l_66[3][2][0],&l_65,(void*)0,(void*)0},{&l_65,&g_107[5][2][2],&g_59[2],&l_66[3][2][0],(void*)0,&g_3,(void*)0}},{{(void*)0,&l_66[3][2][0],&g_59[2],&g_107[5][2][2],&l_65,&g_3,&g_3},{&l_65,&l_66[3][2][0],&l_66[3][2][0],&l_66[3][2][0],&l_65,(void*)0,(void*)0}}};
            int i, j, k;
            ++l_783[1][3][0];
            (*l_751) = (*l_212);
            if (g_51)
                goto lbl_786;
            ++l_790;
        }
        for (l_754 = 6; (l_754 >= 0); l_754 -= 1)
        { 
            int16_t *l_793 = &g_108;
            int16_t *l_795 = &g_49;
            int16_t **l_794 = &l_795;
            const uint16_t *l_801 = &g_211;
            const uint16_t ** const l_800 = &l_801;
            int i;
            if ((((l_793 = (*g_496)) == ((*l_794) = (*g_496))) && (safe_add_func_uint16_t_u_u(g_59[l_754], (((((safe_mul_func_int8_t_s_s(g_59[l_754], ((&g_275 == (void*)0) != (l_787 <= 0UL)))) ^ g_59[l_754]) || 0UL) , g_107[5][2][2]) <= (*l_751))))))
            { 
                return l_787;
            }
            else
            { 
                (*l_709) = ((void*)0 == l_800);
            }
            return g_242.f1;
        }
lbl_1018:
        for (g_242.f0 = (-24); (g_242.f0 > 28); ++g_242.f0)
        { 
            int16_t * const **l_805[6][6] = {{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275},{&g_275,&g_275,&g_275,&g_275,&g_275,&g_275}};
            int16_t * const ***l_804 = &l_805[3][3];
            int32_t l_820 = 0xFF325414L;
            int32_t l_825[6][1][1] = {{{0L}},{{0xA08F8553L}},{{0L}},{{0L}},{{0xA08F8553L}},{{0L}}};
            int16_t *l_847[7][1][7] = {{{&l_753,&g_90,&g_90,&g_108,&g_90,(void*)0,(void*)0}},{{&g_90,&g_108,&g_90,&g_90,&l_753,(void*)0,(void*)0}},{{&l_753,&g_108,&g_49,&g_108,&l_753,&g_90,(void*)0}},{{&l_753,&g_90,&g_90,&g_108,&g_90,(void*)0,(void*)0}},{{&g_90,&g_108,&g_90,&g_90,&l_753,(void*)0,(void*)0}},{{&l_753,&g_108,&g_49,&g_108,&l_753,&g_90,(void*)0}},{{&l_753,&g_90,&g_90,&g_108,&g_90,(void*)0,(void*)0}}};
            uint16_t **l_875 = &g_656;
            int32_t l_876 = 0xC5F4D2D4L;
            int32_t l_877 = 0x6B5D24EAL;
            int16_t *l_931 = &l_753;
            union U1 *l_956 = (void*)0;
            uint64_t l_996 = 0x732CC535697CDAB8LL;
            int i, j, k;
            (*l_804) = &g_275;
        }
        l_897 ^= 0xB9DDFDA1L;
        if (l_708)
            goto lbl_1018;
    }
    (*l_743) |= (((g_529 = &g_246[2]) == &l_751) < ((safe_lshift_func_int16_t_s_u((&g_757 == (l_1022 = &g_757)), 7)) & (*l_212)));
    return (*l_709);
}



static int32_t * func_38(uint32_t  p_39, int32_t * p_40, int32_t  p_41, struct S0  p_42)
{ 
    int32_t *l_55 = &g_3;
    g_54 = g_51;
    return l_55;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_107[i][j][k], "g_107[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_123.f0, "g_123.f0", print_hash_value);
    transparent_crc(g_123.f1, "g_123.f1", print_hash_value);
    transparent_crc(g_123.f2, "g_123.f2", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_242.f0, "g_242.f0", print_hash_value);
    transparent_crc(g_242.f1, "g_242.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_256[i][j][k], "g_256[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_303[i].f0, "g_303[i].f0", print_hash_value);
        transparent_crc(g_303[i].f1, "g_303[i].f1", print_hash_value);

    }
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_559, "g_559", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    transparent_crc(g_757, "g_757", print_hash_value);
    transparent_crc(g_768, "g_768", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_1282, "g_1282", print_hash_value);
    transparent_crc(g_1298, "g_1298", print_hash_value);
    transparent_crc(g_1447, "g_1447", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1468[i], "g_1468[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1556[i][j], "g_1556[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1623, "g_1623", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1913[i].f0, "g_1913[i].f0", print_hash_value);
        transparent_crc(g_1913[i].f1, "g_1913[i].f1", print_hash_value);

    }
    transparent_crc(g_2030, "g_2030", print_hash_value);
    transparent_crc(g_2106.f0, "g_2106.f0", print_hash_value);
    transparent_crc(g_2106.f1, "g_2106.f1", print_hash_value);
    transparent_crc(g_2203, "g_2203", print_hash_value);
    transparent_crc(g_2242, "g_2242", print_hash_value);
    transparent_crc(g_2399, "g_2399", print_hash_value);
    transparent_crc(g_2427.f0, "g_2427.f0", print_hash_value);
    transparent_crc(g_2427.f1, "g_2427.f1", print_hash_value);
    transparent_crc(g_2468, "g_2468", print_hash_value);
    transparent_crc(g_2575, "g_2575", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_2652[i][j][k], "g_2652[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_2726, "g_2726", print_hash_value);
    transparent_crc(g_2800, "g_2800", print_hash_value);
    transparent_crc(g_2887, "g_2887", print_hash_value);
    transparent_crc(g_2940, "g_2940", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_3146[i], "g_3146[i]", print_hash_value);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_3435[i][j][k], "g_3435[i][j][k]", print_hash_value);

            }
        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
