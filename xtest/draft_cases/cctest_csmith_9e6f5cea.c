// SPDX-License-Identifier: MIT
// cctest_csmith_9e6f5cea.c --- cctest case csmith_9e6f5cea (csmith seed 2658098410)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x602198da */

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

// Options:   -s 2658098410 -o /tmp/csmith_gen_5y53re_5/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_3 = 0x4643CDF9L;
static int32_t g_4[2] = {0L,0L};
static int32_t g_5 = 0xE31551DAL;
static uint32_t g_12 = 18446744073709551612UL;
static int8_t g_14 = (-1L);
static uint32_t g_136[4] = {0x90B54F4EL,0x90B54F4EL,0x90B54F4EL,0x90B54F4EL};
static int64_t g_158[3][3] = {{7L,7L,7L},{(-1L),(-1L),(-1L)},{7L,7L,7L}};
static uint32_t g_159 = 0x508D56E0L;
static int32_t g_196 = 1L;
static uint16_t g_209 = 0xE8A2L;
static uint64_t g_217 = 1UL;



static int8_t  func_1(void);
static uint8_t  func_25(int32_t  p_26, uint16_t  p_27, int64_t  p_28, uint8_t  p_29, uint64_t  p_30);
static int8_t  func_35(uint32_t  p_36, const uint32_t  p_37, int32_t  p_38);




static int8_t  func_1(void)
{ 
    uint32_t l_2[4][3];
    int16_t l_229 = (-5L);
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_2[i][j] = 0x0C93B4E1L;
    }
    for (g_3 = 2; (g_3 >= 0); g_3 -= 1)
    { 
        const uint64_t l_49 = 0UL;
        uint64_t l_51 = 0UL;
        uint32_t l_225 = 0xB2CB753EL;
        for (g_4[1] = 2; (g_4[1] >= 0); g_4[1] -= 1)
        { 
            int32_t l_13[4][4] = {{(-3L),8L,0xCF592758L,0xCF592758L},{0xDA8ED40AL,0xDA8ED40AL,(-3L),0xCF592758L},{0x008FB0B4L,8L,0x008FB0B4L,(-3L)},{0x008FB0B4L,(-3L),(-3L),0x008FB0B4L}};
            int32_t l_22 = 0x6095DBC2L;
            int i, j;
            for (g_5 = 0; (g_5 <= 2); g_5 += 1)
            { 
                int i, j;
                g_14 = (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s(0xADF1ADB2L, (safe_mod_func_int8_t_s_s((l_2[(g_3 + 1)][g_5] >= (g_12 = 0L)), l_2[(g_3 + 1)][g_4[1]])))), l_13[1][2]));
                if (l_13[0][0])
                    break;
            }
            if (g_4[1])
                continue;
            for (g_12 = 0; (g_12 <= 2); g_12 += 1)
            { 
                uint32_t l_21[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_21[i][j] = 7UL;
                }
                l_22 = (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((((safe_mod_func_uint32_t_u_u(g_14, l_2[0][0])) != l_21[0][0]) > l_13[1][2]), l_2[2][2])), 3UL));
                return g_5;
            }
        }
        for (g_5 = 2; (g_5 >= 0); g_5 -= 1)
        { 
            int32_t l_50[3][3] = {{0xD71021F5L,(-7L),0xD71021F5L},{0L,0L,0L},{0xD71021F5L,(-7L),0xD71021F5L}};
            uint64_t l_222 = 0xD0A975BA9DFC485CLL;
            int32_t l_228 = (-3L);
            int i, j;
            g_217 |= (safe_sub_func_uint8_t_u_u(((func_25(((((safe_rshift_func_uint8_t_u_u(l_2[g_3][g_3], ((safe_rshift_func_int8_t_s_s(func_35((((safe_div_func_int64_t_s_s((l_50[1][0] ^= (safe_rshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((safe_lshift_func_uint8_t_u_u(l_2[0][0], ((safe_rshift_func_int16_t_s_s((-1L), 7)) || l_2[g_3][g_3]))) > g_3) < l_49) && l_49), 0L)), g_3))), g_12)) >= l_51) >= g_12), l_2[0][2], l_2[2][2]), 1)) > l_2[g_3][g_3]))) <= g_12) , g_4[1]) | (-7L)), l_51, l_2[2][2], l_49, g_5) >= l_51) , l_2[g_3][g_3]), 0x36L));
            for (g_12 = 0; (g_12 <= 2); g_12 += 1)
            { 
                l_222 = (g_4[1] != (safe_mod_func_int16_t_s_s((safe_add_func_uint32_t_u_u(3UL, ((g_12 | 255UL) > l_2[3][1]))), g_136[3])));
                l_228 |= ((safe_add_func_int32_t_s_s(((l_225 && l_222) <= (safe_div_func_uint32_t_u_u(4294967287UL, 0x29F83BD3L))), l_2[2][2])) ^ l_2[g_3][g_3]);
            }
        }
    }
    return l_229;
}



static uint8_t  func_25(int32_t  p_26, uint16_t  p_27, int64_t  p_28, uint8_t  p_29, uint64_t  p_30)
{ 
    uint32_t l_84 = 9UL;
    int32_t l_103 = 1L;
    int32_t l_122 = 9L;
    int8_t l_152 = 0xAAL;
    int16_t l_186 = 0xC178L;
    uint8_t l_213 = 1UL;
    for (p_29 = 0; (p_29 >= 7); ++p_29)
    { 
        uint64_t l_75 = 0x17640197F5CE9472LL;
        ++l_75;
    }
lbl_171:
    g_4[0] = ((safe_div_func_int64_t_s_s((p_26 , (((safe_add_func_int8_t_s_s(g_4[1], ((-1L) < p_29))) , g_5) > p_29)), 3L)) > p_30);
    if ((safe_lshift_func_int8_t_s_s(g_4[0], (p_27 == ((l_84 <= (-1L)) < p_28)))))
    { 
        uint16_t l_87 = 0xD8FDL;
        int32_t l_116[2][3] = {{0x60C0ABB7L,0x60C0ABB7L,0x60C0ABB7L},{0x8C3E2E3EL,0x8C3E2E3EL,0x8C3E2E3EL}};
        int8_t l_120[3];
        int64_t l_151 = 1L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_120[i] = 0x0CL;
lbl_179:
        if (((safe_rshift_func_uint16_t_u_u((l_84 >= 3UL), 8)) & (l_87 ^ 0xE0CF2F28L)))
        { 
            uint8_t l_97 = 9UL;
            int32_t l_98 = (-1L);
            uint8_t l_99 = 0UL;
            int32_t l_100 = 0xB35339FEL;
            int32_t l_123 = 0x293F4BB6L;
            uint8_t l_127 = 0xF3L;
            int32_t l_150 = 8L;
            l_100 = (l_84 > ((safe_unary_minus_func_uint32_t_u((safe_sub_func_int8_t_s_s(((g_14 , (((((safe_mod_func_uint64_t_u_u((l_99 = (safe_div_func_uint32_t_u_u(((((l_98 &= (0xC290A7FAL < l_97)) <= (-1L)) || p_29) || l_84), p_29))), l_84)) > p_26) | 0xD115L) , 6L) , 0L)) ^ g_4[0]), l_97)))) <= 0x2B0D2C86D4C77040LL));
            if ((l_103 = ((safe_add_func_int8_t_s_s(((((0xE90203C69C835A82LL == ((l_84 >= 0x1C2983F5L) && 0x5E7E41F4L)) | 0x90401A71L) == l_84) , l_87), g_12)) == g_4[0])))
            { 
                int8_t l_112[3];
                int32_t l_119 = (-4L);
                int32_t l_121 = (-9L);
                int32_t l_124 = (-3L);
                int8_t l_125 = 0x11L;
                int32_t l_126 = 0x21648450L;
                int i;
                for (i = 0; i < 3; i++)
                    l_112[i] = 0x01L;
                g_4[1] = (safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((p_26 | ((safe_sub_func_int32_t_s_s((l_99 > (l_98 = 0x5BL)), l_112[1])) , g_4[1])), 7)) & p_30), 65535UL)), 4));
                l_103 = (safe_mul_func_int8_t_s_s((18446744073709551615UL || (l_116[0][1] = (+l_112[2]))), ((safe_mod_func_int32_t_s_s(0x1361DE36L, p_30)) != 0x67L)));
                l_127++;
            }
            else
            { 
                uint8_t l_137 = 0UL;
                uint64_t l_149 = 0xCD3A2B2265A2DF7CLL;
                l_98 |= (0x73D2L && (p_29 <= (safe_add_func_uint8_t_u_u(g_4[1], 0L))));
                l_137 |= (g_136[3] &= (safe_mod_func_uint16_t_u_u((((l_116[0][1] = g_3) > (g_4[0] & 1L)) < 5L), g_4[0])));
                l_152 = ((safe_mod_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_sub_func_int16_t_s_s(((((g_4[1] >= l_120[0]) , ((((((~(((safe_mul_func_int16_t_s_s(((((0x0A379BBFL == 0x47F09C2FL) ^ l_149) & 0x8DB39B42L) <= g_4[0]), l_150)) < l_151) == l_122)) , p_30) & 0UL) == l_149) == g_14) != 1L)) && g_12) <= g_4[1]), l_120[2])) , g_136[3]), 6)) & g_4[0]), l_97)), 0xA5B0B60EL)) > l_87);
            }
            if (l_84)
                goto lbl_179;
            for (l_103 = (-29); (l_103 < (-29)); l_103 = safe_add_func_int8_t_s_s(l_103, 8))
            { 
                int16_t l_170 = 0x7011L;
                uint16_t l_172 = 1UL;
                g_4[1] = ((safe_rshift_func_int8_t_s_u((+(++g_159)), 0)) < ((safe_lshift_func_uint16_t_u_s(((l_116[0][0] = ((safe_add_func_uint16_t_u_u(65532UL, (safe_add_func_uint16_t_u_u((p_30 , (safe_lshift_func_uint8_t_u_u(0x55L, 0))), g_3)))) & l_100)) != p_29), l_150)) == l_170));
                if (l_98)
                    goto lbl_171;
                --l_172;
            }
        }
        else
        { 
            uint8_t l_176 = 0x56L;
            g_4[1] = ((((0x13BFE599L ^ (+((l_176 && ((safe_mul_func_int16_t_s_s(p_26, p_28)) || p_26)) > p_29))) != 6UL) != (-1L)) == l_116[0][0]);
        }
        l_116[0][1] &= l_84;
        if (((l_186 = (safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s((((l_120[0] | g_136[3]) != ((safe_div_func_int32_t_s_s((p_28 || l_122), l_120[0])) > 0x628C699ED955F368LL)) == g_12), l_84)) || 0x4FE3L), g_136[3]))) > l_122))
        { 
            int64_t l_197 = 0xBCD1F5407840EC18LL;
            p_26 = ((((safe_mod_func_uint16_t_u_u((((+(safe_div_func_uint64_t_u_u((p_30 = ((18446744073709551615UL || (g_196 = ((((safe_mul_func_int8_t_s_s((((g_158[2][0] = 2L) || (safe_rshift_func_int16_t_s_u(0x3F7DL, p_29))) < 65526UL), p_26)) ^ 1UL) != g_5) & g_136[3]))) , p_26)), (-1L)))) , 0x48CAL) , 65526UL), l_197)) || g_3) | l_103) > p_29);
            for (l_152 = 0; (l_152 <= 1); l_152 += 1)
            { 
                int i;
                g_4[l_152] = g_4[l_152];
                if (g_4[l_152])
                    continue;
            }
        }
        else
        { 
            return g_136[3];
        }
    }
    else
    { 
        uint8_t l_206 = 0x8AL;
        int32_t l_216 = (-5L);
        if ((safe_mod_func_uint32_t_u_u((((g_209 = ((safe_mul_func_uint16_t_u_u(((p_28 ^= ((safe_add_func_uint8_t_u_u((g_159 > ((safe_add_func_uint8_t_u_u(((l_206 < (safe_div_func_uint32_t_u_u((p_27 , l_206), l_206))) | 0L), g_136[3])) , p_30)), 1UL)) <= p_26)) > p_26), 0xFE7FL)) >= 0L)) > p_30) > 0x53L), g_4[1])))
        { 
            int32_t l_212 = 0x2CBA2C95L;
            g_4[1] = (safe_div_func_int32_t_s_s(l_212, (-1L)));
            --l_213;
        }
        else
        { 
            l_216 = (p_26 , (g_4[1] = 0x28A0D4A1L));
        }
    }
    return g_196;
}



static int8_t  func_35(uint32_t  p_36, const uint32_t  p_37, int32_t  p_38)
{ 
    int32_t l_64 = 0x1863D476L;
    uint16_t l_72 = 0x9C14L;
    for (p_36 = 0; (p_36 <= 9); ++p_36)
    { 
        int8_t l_65[1];
        int32_t l_66[3];
        int32_t l_67 = 0x60F2F470L;
        int i;
        for (i = 0; i < 1; i++)
            l_65[i] = (-5L);
        for (i = 0; i < 3; i++)
            l_66[i] = (-1L);
        for (p_38 = 0; (p_38 != 11); p_38++)
        { 
            for (g_14 = 1; (g_14 >= 0); g_14 -= 1)
            { 
                int i;
                if (g_4[g_14])
                    break;
            }
        }
        l_67 = (((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((l_66[1] ^= ((((l_64 && 0x58ACL) , ((l_65[0] = 0xC89AED29L) != 0UL)) == 1L) & p_38)), 4)), p_37)), g_14)) >= l_64), p_37)) || l_64) , g_12);
        g_4[1] = ((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_72, 0UL)), l_65[0])) < l_65[0]);
    }
    return l_64;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_136[i], "g_136[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_158[i][j], "g_158[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
