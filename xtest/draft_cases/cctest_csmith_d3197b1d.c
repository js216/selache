// SPDX-License-Identifier: MIT
// cctest_csmith_d3197b1d.c --- cctest case csmith_d3197b1d (csmith seed 3541662493)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x9a90554b */

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

// Options:   -s 3541662493 -o /tmp/csmith_gen_m99sgwu3/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint16_t g_4[1] = {65530UL};
static uint64_t g_16 = 0UL;
static int8_t g_22 = 0x91L;
static int32_t g_23 = 5L;
static uint8_t g_25 = 0xEBL;
static int32_t g_38 = 0x05D9C727L;
static int32_t g_98[3][3] = {{2L,0x84459954L,2L},{(-1L),(-1L),(-1L)},{2L,0x84459954L,2L}};
static int16_t g_114 = 0x0DA2L;
static uint64_t g_115 = 18446744073709551613UL;
static uint32_t g_140 = 0x3CB375AFL;
static uint16_t g_165 = 0xC759L;
static uint8_t g_224 = 0xD2L;
static int32_t g_232 = 4L;
static uint16_t g_233 = 0x4E42L;
static uint8_t g_247 = 255UL;
static uint32_t g_256 = 4UL;
static uint32_t g_267[2] = {18446744073709551615UL,18446744073709551615UL};
static int16_t g_270[3] = {0xA116L,0xA116L,0xA116L};
static uint64_t g_271 = 0x944C1F9D7F6DF05FLL;



static int8_t  func_1(void);
static int8_t  func_5(int8_t  p_6, uint8_t  p_7);
static uint8_t  func_12(uint32_t  p_13, uint32_t  p_14, uint32_t  p_15);




static int8_t  func_1(void)
{ 
    int32_t l_19 = (-4L);
    int16_t l_222 = (-1L);
    int32_t l_269[3][2] = {{(-9L),(-9L)},{(-9L),(-9L)},{(-9L),(-9L)}};
    uint64_t l_297 = 0xF3894C1F6BFF471ALL;
    int32_t l_400[4];
    int i, j;
    for (i = 0; i < 4; i++)
        l_400[i] = 0L;
    if ((safe_rshift_func_int8_t_s_s(g_4[0], (g_4[0] , func_5((((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_s(func_12((--g_16), (0x95751CFD1F2E9667LL == l_19), g_4[0]), l_19)) , (-5L)), 0xBA863D3FL)) > g_4[0]) , 0x9FL), g_4[0])))))
    { 
        uint32_t l_200[1];
        int i;
        for (i = 0; i < 1; i++)
            l_200[i] = 0UL;
        g_38 = (safe_add_func_uint64_t_u_u((safe_div_func_int64_t_s_s(g_38, g_165)), ((safe_sub_func_uint16_t_u_u(((((!g_22) > g_4[0]) , l_200[0]) < l_200[0]), g_23)) || l_19)));
    }
    else
    { 
        int16_t l_223 = 6L;
        int32_t l_246 = 6L;
        for (g_165 = 0; (g_165 < 13); g_165++)
        { 
            int64_t l_205[2];
            int64_t l_225 = 0xA1E438FE63D49D56LL;
            int i;
            for (i = 0; i < 2; i++)
                l_205[i] = (-9L);
            for (l_19 = 0; (l_19 > (-14)); --l_19)
            { 
                uint16_t l_221 = 0xE2DEL;
                if (l_205[0])
                    break;
                g_224 &= (safe_mod_func_int32_t_s_s((safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u((g_4[0] || (g_38 = (safe_unary_minus_func_int32_t_s((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((((((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_s(l_221, (g_114 = ((0xAA038293169C2045LL && g_98[1][2]) & 0x8CDCC97EL)))), l_205[0])) < g_140) , l_19) , l_222) , 255UL), l_221)), g_140)))))), g_98[2][2])) ^ l_223), l_223)), l_221));
                if (l_225)
                    break;
            }
            g_233 |= ((safe_rshift_func_int16_t_s_s((((((safe_add_func_int8_t_s_s((0x04L < (g_98[1][2] > ((g_232 |= (((safe_div_func_uint16_t_u_u(((g_4[0] ^ 7L) , g_4[0]), 1UL)) >= 0x03E4D4EBL) >= g_38)) || l_222))), g_16)) < g_98[1][2]) != l_19) <= 65529UL) , (-1L)), 2)) , g_232);
        }
        for (g_38 = 9; (g_38 < 13); g_38++)
        { 
            uint32_t l_236 = 1UL;
            int32_t l_237 = 1L;
            g_232 ^= (l_19 = ((l_236 = g_16) <= l_237));
            l_246 &= (((safe_rshift_func_int16_t_s_s(g_114, l_223)) <= (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((safe_div_func_int8_t_s_s((l_223 > g_224), l_19)), g_4[0])), g_224))) ^ g_140);
        }
    }
    g_247--;
    if ((safe_lshift_func_uint8_t_u_s(((g_256 = ((((safe_sub_func_int8_t_s_s((((l_19 = (safe_mod_func_uint64_t_u_u((1UL >= 251UL), ((0x54C0L < (-9L)) | (-1L))))) | (-4L)) , 0x1DL), l_222)) , l_19) <= 0x89615D4BL) >= g_232)) == l_222), 0)))
    { 
        uint8_t l_268 = 0x24L;
        int32_t l_319 = 0x29295381L;
        int32_t l_390 = 7L;
        if (((((~(safe_sub_func_int16_t_s_s(g_38, (l_269[2][1] &= (safe_add_func_uint64_t_u_u(5UL, (safe_add_func_int8_t_s_s((((safe_mod_func_int8_t_s_s(((g_267[0] &= ((!g_38) == g_140)) , g_115), l_268)) <= 0x49F34086FE4CD9D4LL) | g_224), l_19)))))))) && g_224) < g_4[0]) , l_268))
        { 
            --g_271;
        }
        else
        { 
            uint32_t l_282 = 1UL;
            if ((safe_mul_func_uint8_t_u_u((g_256 == (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_282 = (g_22 <= (((g_140 = 0x8BFD2D81L) && 4294967290UL) & 0L))) && 65527UL), g_114)), g_256))), 7L)))
            { 
                int32_t l_288 = 0x5F4284F8L;
                g_38 = (l_288 = ((g_267[0] == l_282) < ((safe_div_func_int64_t_s_s(((safe_div_func_uint64_t_u_u((((!((((l_19 = ((g_256 , g_98[0][2]) && l_269[2][1])) || 0L) > 0x1316L) <= l_222)) <= g_233) ^ g_267[0]), g_98[1][2])) != 0x70L), g_233)) <= g_270[2])));
                return g_267[0];
            }
            else
            { 
                int32_t l_298 = 1L;
                g_38 = (safe_mul_func_int16_t_s_s((((safe_add_func_int16_t_s_s((((safe_mod_func_int32_t_s_s(l_297, g_16)) == (0x3C70L <= 0x7301L)) , g_140), g_22)) , g_114) | l_298), l_268));
            }
            if ((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((!0xD68E3BD1L), (l_268 == ((~(l_19 ^= (((g_115 ^= ((((safe_rshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(0L, 15)), 5)) ^ g_270[0]) == l_268) && g_267[0])) >= g_4[0]) >= 0x6A42E51AL))) & 9UL)))), 0x17EE1CDBL)))
            { 
                return l_282;
            }
            else
            { 
                uint32_t l_309 = 0xB08BCFCFL;
                l_309 = g_270[0];
                return l_269[0][1];
            }
        }
lbl_364:
        for (g_232 = 0; (g_232 >= 27); g_232++)
        { 
            uint32_t l_326[4][1] = {{0UL},{0x0882143EL},{0UL},{0x0882143EL}};
            int32_t l_363[3];
            int i, j;
            for (i = 0; i < 3; i++)
                l_363[i] = 0x00E6E42AL;
            for (g_224 = 0; (g_224 < 20); g_224 = safe_add_func_uint16_t_u_u(g_224, 8))
            { 
                uint32_t l_327 = 0x91B169CCL;
                l_19 = (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s(0xBE3C6FCBL, (~((((g_256 , (0xB2B27AC2L > 0xE39F24ECL)) & l_268) , 0xC34FL) < 0UL)))), 7L));
                if (l_319)
                    continue;
                l_19 = (g_232 || ((((safe_sub_func_uint8_t_u_u((((((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s((g_98[0][2] | l_326[0][0]), 0x53L)), g_270[2])) & g_38) & g_98[1][1]) && l_327) >= l_327), g_247)) , g_16) && 3L) < g_16));
            }
            if (l_319)
            { 
                uint32_t l_328[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_328[i] = 0xFAD0D5CCL;
                g_38 = ((g_233 > (l_268 & (0x7C68L <= l_328[0]))) != l_19);
                if (g_22)
                    goto lbl_364;
            }
            else
            { 
                const int32_t l_350 = 0xD013F6FBL;
                int32_t l_361 = (-9L);
                int32_t l_362 = 0xAB85A483L;
                g_38 = (g_233 < (safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s((+(safe_rshift_func_uint8_t_u_u(0x96L, (safe_mul_func_uint16_t_u_u((((0x71L < 255UL) || g_23) & 0xA236898EL), g_270[2]))))), 13)), 7)) >= 4294967294UL) || 1L) == 9L), g_38)), g_140)), l_326[1][0])) || g_114), (-5L))), l_350)), 0UL)));
                l_319 &= ((safe_lshift_func_uint8_t_u_u(((l_363[1] = (((l_362 ^= ((l_269[2][1] & g_267[0]) >= (((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((((l_361 = (g_256 >= 18446744073709551610UL)) >= 0x3DEEA01B200F8A82LL) || 4294967295UL), 6)) || 0x04912DCDL), 0xBEL)), g_38)) || (-3L)) | g_247))) , g_4[0]) <= 0UL)) < g_98[1][2]), 2)) != l_326[0][0]);
            }
        }
        for (g_224 = 6; (g_224 <= 10); g_224 = safe_add_func_uint64_t_u_u(g_224, 9))
        { 
            uint64_t l_368 = 0x7E1D0457A44D734ALL;
            const uint32_t l_389 = 0UL;
            l_390 |= (~((((l_368 = l_269[2][1]) , ((((safe_div_func_int32_t_s_s((((~(l_319 ^= (safe_mul_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u(4294967294UL, ((safe_lshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((!0L), 1)), g_165)), g_232)), 4)) != l_368))), l_268)) , l_389), l_368)), g_115)))) != 0x5C0386A1L) , 0x6F2A36DCL), g_270[2])) != 5L) || g_98[1][2]) != 4UL)) > 0x6670F88B6B8BDBB9LL) | g_247));
        }
    }
    else
    { 
        uint64_t l_393 = 0xD67EFAB8290221D2LL;
        l_19 |= (g_232 ^= (0xD5A1B0B8L ^ ((safe_rshift_func_uint8_t_u_s((l_393 , g_267[0]), 5)) <= g_98[1][2])));
        l_400[0] = ((safe_lshift_func_int16_t_s_s((!g_4[0]), (l_19 = (safe_rshift_func_uint16_t_u_s((+0x89L), 5))))) < ((((0xC2E93F13L <= 0x761CE2FEL) > 0UL) | l_269[1][0]) , l_393));
    }
    return l_269[2][1];
}



static int8_t  func_5(int8_t  p_6, uint8_t  p_7)
{ 
    int16_t l_160 = 0xA11BL;
    int32_t l_163[2][4] = {{0x5CE33710L,0x5CE33710L,0x5E376B26L,0x5CE33710L},{0x5CE33710L,0x71753070L,0x71753070L,0x5CE33710L}};
    int i, j;
    for (g_23 = 2; (g_23 >= 0); g_23 -= 1)
    { 
        int32_t l_146 = 0x8F6180BEL;
        int32_t l_147 = 0x66BBB0B7L;
        if (p_7)
        { 
            return p_7;
        }
        else
        { 
            uint32_t l_164 = 0x55268D47L;
            uint8_t l_172 = 0UL;
            int32_t l_178 = 0x426BEBBAL;
            if ((((l_147 = (l_146 = 0xE7L)) , (p_6 | (safe_mod_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((~(safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(((~g_140) ^ 1L), p_6)), 7))) != g_4[0]), l_160)), 0xC285L)) , 0xD7298C4F2CD8C260LL) , 0x26L), p_6)))) == 0x6F4AL))
            { 
                int64_t l_166 = 0x1A3DBB834B12E908LL;
                l_166 = (((safe_mod_func_int64_t_s_s((g_165 |= ((l_163[0][1] = p_6) & l_164)), g_4[0])) < p_7) , p_7);
                if (g_165)
                    break;
            }
            else
            { 
                int8_t l_171 = 0xD7L;
                g_38 ^= ((((0xEAL || (l_172 = (safe_mod_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((g_16 == (l_171 = g_114)), g_4[0])), 0xE7L)))) != 1L) | p_7) & g_16);
                l_178 = ((safe_rshift_func_uint8_t_u_s((~(p_6 & (((0xE0L < ((safe_mul_func_uint16_t_u_u(((p_6 || g_4[0]) && g_4[0]), 0x6CC7L)) | g_38)) && l_172) <= (-2L)))), 4)) >= 0x9C40L);
            }
            if (p_7)
                break;
            l_178 = g_4[0];
        }
        g_38 = (+1UL);
        for (p_7 = 0; (p_7 <= 2); p_7 += 1)
        { 
            uint32_t l_180[3];
            int32_t l_190 = 0L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_180[i] = 0xE7527B81L;
            --l_180[2];
            l_190 = (((((safe_sub_func_uint64_t_u_u((+(safe_mul_func_uint16_t_u_u(((g_22 ^= (-3L)) < ((safe_mul_func_int8_t_s_s((g_98[g_23][g_23] , g_98[p_7][g_23]), g_98[p_7][p_7])) > g_98[1][2])), l_146))), 2UL)) , p_6) || 0x30744347L) == 0x330705DEFB49F989LL) > p_6);
            for (g_38 = 0; (g_38 <= 2); g_38 += 1)
            { 
                l_190 = (safe_rshift_func_uint16_t_u_u((255UL & g_4[0]), p_7));
            }
        }
    }
    return l_160;
}



static uint8_t  func_12(uint32_t  p_13, uint32_t  p_14, uint32_t  p_15)
{ 
    uint32_t l_20 = 0x2F38D927L;
    int32_t l_24 = 0x92280643L;
    int32_t l_89 = (-4L);
    int64_t l_92 = 0L;
    if (((l_20 || l_20) ^ 1UL))
    { 
        int64_t l_21 = (-1L);
        l_21 = g_4[0];
    }
    else
    { 
        uint64_t l_52 = 0UL;
        int32_t l_69 = 0x109D40F6L;
        g_25++;
        for (p_14 = 0; (p_14 == 10); p_14 = safe_add_func_int64_t_s_s(p_14, 1))
        { 
            uint16_t l_32 = 65527UL;
            int32_t l_37 = 0x7AB6CE1AL;
            if ((l_32 = (safe_sub_func_int16_t_s_s(p_14, (p_15 , p_13)))))
            { 
                int64_t l_33 = (-5L);
                return l_33;
            }
            else
            { 
                int16_t l_50 = 0xDE37L;
                int32_t l_51 = 0L;
                g_38 &= (l_37 = ((g_22 <= (safe_add_func_int32_t_s_s((!l_32), (p_15 | g_22)))) ^ 4L));
                l_51 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((~l_20), ((0L != ((safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((l_50 = ((l_37 = (-1L)) || g_4[0])), 0x81L)), p_15)), p_14)) && g_25)) | 0xCBFB41CEL))), 9));
                if (g_38)
                    break;
            }
            if (l_52)
                break;
            if (((l_37 = (l_24 = (safe_rshift_func_int8_t_s_u(0xA3L, (g_22 , (safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u(((g_16 || g_4[0]) , g_22), g_38))))))))) == l_32))
            { 
                uint8_t l_60 = 0xBEL;
                l_69 = (safe_rshift_func_uint8_t_u_s((--l_60), (safe_unary_minus_func_uint8_t_u((safe_unary_minus_func_uint16_t_u((safe_div_func_int8_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551612UL, p_15)), 0x4AL))))))));
                g_38 = ((safe_sub_func_uint16_t_u_u(l_69, ((safe_mod_func_uint32_t_u_u((l_24 >= ((+p_14) > g_16)), g_38)) != 0x2CBD72F548F9F0ACLL))) >= g_38);
            }
            else
            { 
                int8_t l_75 = 0L;
                l_37 &= g_22;
                g_38 = l_75;
            }
        }
        l_69 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(g_25, (safe_mul_func_int16_t_s_s(((0xA5L | g_4[0]) , p_15), g_38)))), 2)) > p_15);
    }
    if ((safe_mul_func_int16_t_s_s(((l_89 ^= ((((p_15 <= 0UL) , ((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((l_24 = (safe_unary_minus_func_int64_t_s((((p_14 & 0x04L) ^ 0xE53FD177L) == l_20)))), p_13)) || g_25), 1L)) == l_20)) | p_15) == l_20)) && p_15), 0xF566L)))
    { 
        int32_t l_96 = 0L;
        int32_t l_97 = 0L;
        int32_t l_135 = 0x2A1EE4ECL;
        if ((g_98[1][2] = (safe_mul_func_int16_t_s_s(l_92, ((((safe_unary_minus_func_int16_t_s((1L < (l_96 |= (safe_sub_func_int16_t_s_s((((p_14 | p_13) & g_23) != 0x76A26825732E7CE9LL), p_14)))))) | l_97) , (-9L)) != (-1L))))))
        { 
            int32_t l_113 = 0x2E35A6FFL;
            for (g_22 = 9; (g_22 >= (-9)); g_22 = safe_sub_func_uint8_t_u_u(g_22, 7))
            { 
                uint16_t l_125[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_125[i] = 0xF5EDL;
                g_115 |= (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s(g_98[1][2], ((safe_mod_func_uint8_t_u_u((g_25 &= 0UL), (safe_rshift_func_int16_t_s_u((g_114 ^= (safe_mod_func_uint32_t_u_u(p_14, l_113))), 7)))) , g_16))) , p_13) != p_15) & 249UL), g_38)), l_89));
                l_125[0] = (safe_sub_func_int64_t_s_s((safe_div_func_uint64_t_u_u(0x88C8CF6E8DA2FB92LL, (safe_rshift_func_int8_t_s_u(((+(safe_div_func_uint64_t_u_u((l_97 = p_15), p_13))) | g_114), 4)))), 0x1480219EAC3B263CLL));
            }
            return l_97;
        }
        else
        { 
            uint16_t l_134 = 0UL;
            for (g_22 = 0; (g_22 <= 2); g_22 += 1)
            { 
                int32_t l_145 = 0x30044FF4L;
                l_97 = ((safe_add_func_uint64_t_u_u((0x1FDDL != (g_4[0] , ((l_135 = (safe_add_func_uint64_t_u_u((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(p_14, l_134)) == l_134), 0xA6L)), 0L))) , p_15))), (-8L))) && 0xBCFBL);
                g_38 = (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u((g_140 &= l_92), (safe_div_func_int16_t_s_s((g_114 |= 0xF1F7L), ((((safe_lshift_func_uint8_t_u_u(p_13, g_4[0])) & 0x98B5L) > l_89) ^ 0xECL))))) && p_15), l_145));
            }
        }
        l_97 ^= 0xF4D7AA0EL;
    }
    else
    { 
        return l_20;
    }
    return p_14;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_98[i][j], "g_98[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_165, "g_165", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_267[i], "g_267[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);

    }
    transparent_crc(g_271, "g_271", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
