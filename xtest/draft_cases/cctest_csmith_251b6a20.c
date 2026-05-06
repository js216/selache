// SPDX-License-Identifier: MIT
// cctest_csmith_251b6a20.c --- cctest case csmith_251b6a20 (csmith seed 622553632)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x35b70a6d */

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

// Options:   -s 622553632 -o /tmp/csmith_gen_63klfglw/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static uint32_t g_2 = 0xDA439BEBL;
static uint8_t g_17 = 247UL;
static uint16_t g_24[5][1][3] = {{{1UL,65535UL,1UL}},{{1UL,65535UL,1UL}},{{1UL,65535UL,1UL}},{{1UL,65535UL,1UL}},{{1UL,65535UL,1UL}}};
static int8_t g_50 = (-4L);
static uint64_t g_51 = 0x1D55E0ECF58A4122LL;
static int16_t g_53 = 5L;
static int64_t g_84 = (-7L);
static uint64_t g_85 = 18446744073709551609UL;
static uint64_t g_92 = 1UL;
static uint16_t g_112 = 0UL;
static uint64_t g_119 = 18446744073709551615UL;
static int8_t g_135 = 0x4AL;
static int8_t g_136 = 0xFCL;
static uint16_t g_146 = 2UL;
static int16_t g_191[1][2] = {{0L,0L}};
static int32_t g_204 = 0x3F27325EL;
static int32_t g_227 = 0xFFE45614L;
static uint8_t g_228 = 0xCCL;
static int64_t g_293 = 1L;
static uint32_t g_294 = 0UL;



static int16_t  func_1(void);
static int32_t  func_4(uint32_t  p_5, int32_t  p_6, int64_t  p_7);
static int16_t  func_15(uint32_t  p_16);
static uint64_t  func_18(int8_t  p_19);




static int16_t  func_1(void)
{ 
    int8_t l_3[5][3] = {{0x24L,0L,0x24L},{7L,7L,7L},{0x24L,0L,0x24L},{7L,7L,7L},{0x24L,0L,0x24L}};
    int32_t l_219[1][5][4] = {{{0xE4F70735L,(-1L),(-1L),0xE4F70735L},{0x37A05F2AL,(-1L),0xB598FB19L,(-1L)},{(-1L),0xAC000487L,0xB598FB19L,0xB598FB19L},{0x37A05F2AL,0x37A05F2AL,0xE4F70735L,0xAC000487L},{0xB598FB19L,0x37A05F2AL,0xB598FB19L,0xE4F70735L}}};
    int32_t l_297 = 0L;
    int64_t l_300[1][5][3] = {{{0xE41467E5DD029318LL,0xE41467E5DD029318LL,0xE41467E5DD029318LL},{0xD5596D2B076EBF33LL,0xD5596D2B076EBF33LL,0xD5596D2B076EBF33LL},{0xE41467E5DD029318LL,0xE41467E5DD029318LL,0xE41467E5DD029318LL},{0xD5596D2B076EBF33LL,0xD5596D2B076EBF33LL,0xD5596D2B076EBF33LL},{0xE41467E5DD029318LL,0xE41467E5DD029318LL,0xE41467E5DD029318LL}}};
    int i, j, k;
    g_2 = 0x8BBCA631L;
    if (l_3[2][0])
    { 
        int32_t l_8 = 0xFE4D9EDBL;
        int32_t l_301 = (-1L);
        l_297 &= (func_4(g_2, l_8, (safe_mul_func_int16_t_s_s((0xE418A527L <= (safe_mul_func_uint8_t_u_u(((l_219[0][4][3] = (safe_lshift_func_int16_t_s_u(func_15(g_2), 4))) , l_3[3][1]), 1L))), l_3[3][1]))) && g_294);
        l_301 &= ((safe_add_func_int8_t_s_s(l_297, l_8)) ^ l_300[0][4][1]);
        return l_8;
    }
    else
    { 
        return g_85;
    }
}



static int32_t  func_4(uint32_t  p_5, int32_t  p_6, int64_t  p_7)
{ 
    uint64_t l_220 = 0x180988709DC6AD9CLL;
    int8_t l_230 = 0x78L;
    int32_t l_271 = 0xE8836BE3L;
    if ((l_220 | l_220))
    { 
        int16_t l_252[1][2][4] = {{{0x8814L,0x8814L,0x8814L,0x8814L},{0x8814L,0x8814L,0x8814L,0x8814L}}};
        int32_t l_253 = 0L;
        int32_t l_254 = 4L;
        int8_t l_255 = 0xA3L;
        int i, j, k;
        for (g_17 = 0; (g_17 <= 0); g_17 += 1)
        { 
            uint16_t l_221 = 0xEE31L;
            int32_t l_258 = 1L;
            if (l_221)
            { 
                uint8_t l_224 = 0x38L;
                int32_t l_256 = 0x45521639L;
                int32_t l_257 = (-2L);
                g_228 ^= (g_227 = (safe_mod_func_uint32_t_u_u(((l_224 , p_6) > 0L), (safe_mul_func_uint8_t_u_u(0xA3L, (-1L))))));
                p_6 = (~(l_230 == ((safe_div_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((l_258 = (((l_257 &= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((l_256 = (safe_div_func_int16_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(p_5, (safe_mod_func_int16_t_s_s((((safe_div_func_int8_t_s_s(((!(l_253 = (l_252[0][1][3] = g_191[0][0]))) , p_6), l_221)) <= 18446744073709551614UL) == l_254), 0x4682L)))) || g_50), l_255)), 0x31L)), p_5))) <= l_255), l_221)), p_6))) <= g_53) && l_254)), l_224)), g_136)) && g_51)));
                p_6 = ((((safe_add_func_uint32_t_u_u((((safe_lshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(l_221, l_221)), 1)) < (safe_div_func_int8_t_s_s(((p_5 | 0xD190L) == 65526UL), 255UL))) < p_6), (-2L))) < 18446744073709551610UL) == 255UL) < 0xC9L);
            }
            else
            { 
                uint64_t l_269[3][1];
                uint16_t l_277[1];
                int32_t l_278 = 1L;
                int32_t l_279[3][3][4] = {{{(-7L),1L,(-7L),1L},{(-7L),1L,(-7L),1L},{(-7L),1L,(-7L),1L}},{{(-7L),1L,(-7L),1L},{(-7L),1L,(-7L),1L},{(-7L),1L,(-7L),1L}},{{(-7L),1L,(-7L),1L},{(-7L),1L,(-7L),1L},{(-7L),1L,(-7L),1L}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_269[i][j] = 0x661D1CEF0AC7219ELL;
                }
                for (i = 0; i < 1; i++)
                    l_277[i] = 0x2656L;
                p_6 = (safe_div_func_uint32_t_u_u(l_269[0][0], (safe_unary_minus_func_uint8_t_u((l_271 &= p_7)))));
                g_227 = (~(0L && 0x6AF2F86AL));
                l_279[0][2][1] = (safe_rshift_func_uint16_t_u_u(((l_278 ^= ((l_269[0][0] , ((g_24[3][0][1] , (((safe_mod_func_int8_t_s_s(((g_85 = (p_5 >= (g_227 , p_7))) | p_7), 0x0DL)) || l_258) || l_258)) <= l_277[0])) == p_5)) > g_84), g_84));
            }
            for (g_50 = 0; (g_50 >= 0); g_50 -= 1)
            { 
                p_6 = 0xD0E2EEFEL;
                if (g_119)
                    break;
                if (g_112)
                    break;
            }
        }
        for (l_230 = 0; (l_230 >= (-19)); l_230 = safe_sub_func_uint32_t_u_u(l_230, 1))
        { 
            return p_7;
        }
    }
    else
    { 
        int32_t l_292 = 0x7DF4A3FDL;
        g_227 = 1L;
        g_227 = (65535UL | ((safe_lshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(((safe_div_func_uint16_t_u_u(g_191[0][1], ((g_135 = (g_204 != (((((0x621BL <= 1UL) < p_6) , g_85) && g_191[0][1]) < (-1L)))) , g_146))) , l_230), l_230)), 12)) >= g_53));
        for (g_228 = 0; (g_228 >= 14); g_228++)
        { 
            for (g_53 = 0; (g_53 == 13); g_53 = safe_add_func_uint32_t_u_u(g_53, 7))
            { 
                g_294--;
            }
        }
    }
    return l_220;
}



static int16_t  func_15(uint32_t  p_16)
{ 
    int8_t l_22 = 0xE9L;
    int32_t l_218 = (-1L);
    g_17 = p_16;
    l_218 = (0x3FAA32F3F6085E07LL | func_18(((g_17 >= (safe_sub_func_int8_t_s_s((p_16 != g_2), (-8L)))) , l_22)));
    return p_16;
}



static uint64_t  func_18(int8_t  p_19)
{ 
    int32_t l_23[2][3][4] = {{{0x5706B379L,1L,0x5706B379L,(-1L)},{0L,1L,0xF3813BF5L,1L},{0L,(-1L),0x5706B379L,1L}},{{0x5706B379L,1L,0x5706B379L,(-1L)},{0L,1L,0xF3813BF5L,1L},{0L,(-1L),0x5706B379L,1L}}};
    int32_t l_54 = 0x236C2177L;
    int32_t l_90 = 0xA1293870L;
    uint16_t l_104 = 5UL;
    int32_t l_188 = 1L;
    int i, j, k;
    for (p_19 = 0; (p_19 <= 1); p_19 += 1)
    { 
        return p_19;
    }
lbl_151:
    g_24[3][0][1] = p_19;
    if (g_2)
    { 
        uint64_t l_63 = 0x3BD65BDF5444FE37LL;
        int32_t l_88 = (-1L);
        int32_t l_91 = 0x349FFB2EL;
        const uint64_t l_111[5] = {0x5787DF3DEF630FE8LL,0x5787DF3DEF630FE8LL,0x5787DF3DEF630FE8LL,0x5787DF3DEF630FE8LL,0x5787DF3DEF630FE8LL};
        int32_t l_137[3];
        uint8_t l_138 = 0xDAL;
        int64_t l_145[1][1];
        const uint64_t l_147 = 0UL;
        int i, j;
        for (i = 0; i < 3; i++)
            l_137[i] = 0L;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_145[i][j] = 0x2B6A99605DBDBD1FLL;
        }
        for (p_19 = 28; (p_19 == (-17)); p_19 = safe_sub_func_uint64_t_u_u(p_19, 2))
        { 
            uint8_t l_44 = 0xFFL;
            for (g_17 = (-25); (g_17 <= 37); g_17 = safe_add_func_uint64_t_u_u(g_17, 4))
            { 
                uint32_t l_47[1];
                int32_t l_52 = (-1L);
                int i;
                for (i = 0; i < 1; i++)
                    l_47[i] = 0x4C3F121FL;
                l_54 &= (safe_lshift_func_int8_t_s_u((((safe_mod_func_uint64_t_u_u((safe_add_func_uint16_t_u_u((~(g_53 = ((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((l_52 = (l_44 & (safe_mul_func_int16_t_s_s((3L || (l_47[0] <= ((((safe_lshift_func_int16_t_s_u((g_51 = (g_50 = (((l_23[0][0][0] == g_2) || 0xB4AB19F8L) & 8UL))), 7)) && l_44) ^ 1UL) >= 0x2CFB11589A458230LL))), 0x4543L)))), 5)), 6)) || 0L), 0x5DD215CD4DCD7820LL)) && 0xDAF8D98C6833686ALL))), p_19)), p_19)) , g_24[3][0][0]) , 0x03L), 5));
            }
        }
        if ((safe_mul_func_int8_t_s_s(l_54, (l_54 != l_54))))
        { 
            uint64_t l_59 = 0x19C50ED6CA138DBELL;
            int32_t l_64 = 0L;
            uint8_t l_83 = 0x69L;
            uint64_t l_87 = 0xAD8F345D263D1F07LL;
            if ((safe_sub_func_uint32_t_u_u(0xE1EFC39FL, 0UL)))
            { 
                --l_59;
                l_54 = p_19;
                return l_59;
            }
            else
            { 
                l_64 = (!l_63);
            }
            for (l_63 = 19; (l_63 >= 38); l_63 = safe_add_func_uint8_t_u_u(l_63, 4))
            { 
                uint16_t l_86[5][4][4] = {{{2UL,0xE320L,0xE320L,2UL},{0xE320L,2UL,0x417FL,0x29AFL},{1UL,0x16C6L,0x7221L,0xBE34L},{2UL,0x29AFL,9UL,0xBE34L}},{{0x417FL,0x16C6L,0x7DF0L,0x29AFL},{0x7CC8L,2UL,0xAE89L,2UL},{0x16C6L,0xE320L,9UL,0x6C3BL},{65535UL,1UL,0xE320L,65535UL}},{{1UL,2UL,4UL,0x7CC8L},{1UL,0x417FL,0xE320L,0xBE34L},{65535UL,0x7CC8L,9UL,9UL},{0x16C6L,0x16C6L,0xAE89L,0x7CC8L}},{{0x7CC8L,65535UL,0x7DF0L,2UL},{0x417FL,1UL,9UL,0x7DF0L},{2UL,1UL,0x7221L,2UL},{1UL,65535UL,0x417FL,0x7CC8L}},{{0xE320L,0x16C6L,0xE320L,9UL},{2UL,0x7CC8L,0x4A51L,0xBE34L},{0x16C6L,0x417FL,0x7DF0L,0x7CC8L},{0x29AFL,2UL,0x7DF0L,65535UL}}};
                int32_t l_89 = (-1L);
                int i, j, k;
                l_88 = (safe_sub_func_int64_t_s_s(((!(safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u((g_24[3][0][2] && p_19), (l_86[4][0][1] = ((safe_lshift_func_uint16_t_u_u((g_85 = ((+p_19) ^ (safe_div_func_int64_t_s_s((g_84 &= (safe_lshift_func_int16_t_s_u((l_54 >= p_19), l_83))), g_17)))), g_24[3][0][1])) <= 2UL)))), 4294967295UL)) > l_87), 4))) ^ l_59), g_17));
                g_92--;
            }
        }
        else
        { 
            uint64_t l_105[2];
            int32_t l_106 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_105[i] = 18446744073709551607UL;
            g_112 = (safe_div_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((((!((l_105[0] ^= l_104) && ((l_106 , ((l_90 = ((safe_sub_func_int64_t_s_s((((safe_div_func_uint64_t_u_u(l_106, g_24[3][0][0])) <= 4UL) <= g_85), p_19)) ^ (-1L))) , p_19)) >= 0x769EL))) >= 4UL) && 1UL) <= l_104), l_88)) ^ 4294967295UL), l_111[1])) != 0xA12E2198L), p_19));
            g_119 = (l_91 = ((p_19 < ((((safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_105[0] <= 0x8F334EEA40FDB04FLL), (safe_lshift_func_uint8_t_u_u(253UL, 6)))), l_104)) > l_23[1][0][0]) & g_2) , l_111[1])) > g_17));
        }
        if ((safe_sub_func_uint8_t_u_u((((((safe_div_func_uint32_t_u_u((g_146 = (l_91 ^= (safe_mod_func_int64_t_s_s((((l_88 , ((safe_mod_func_int64_t_s_s((safe_mod_func_int16_t_s_s(((((l_23[0][2][2] < (safe_mod_func_int64_t_s_s((~((safe_rshift_func_uint8_t_u_u(((l_138++) >= (l_145[0][0] = (0xF691D68C9157731BLL ^ (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(g_119, 1UL)), g_24[4][0][0]))))), 1)) == l_90)), (-7L)))) , g_119) , p_19) ^ 0x6FBBL), 4L)), g_119)) >= l_111[3])) == 3L) , l_104), g_92)))), g_135)) & p_19) != 0xA2L) && p_19) , l_147), 0x5AL)))
        { 
            for (g_84 = 0; (g_84 < 2); g_84++)
            { 
                return l_138;
            }
        }
        else
        { 
            int16_t l_152 = 0xEAE8L;
            for (g_85 = 0; (g_85 <= 0); g_85 += 1)
            { 
                int32_t l_150[2][5];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_150[i][j] = 0x33A36175L;
                }
                if (l_150[0][4])
                    break;
                if (g_17)
                    goto lbl_151;
            }
            l_152 = ((-5L) != g_24[3][0][1]);
            l_90 |= (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(((l_91 ^= 0x7EL) , (((safe_rshift_func_uint8_t_u_u(9UL, ((safe_rshift_func_int8_t_s_s(0x11L, 6)) , (0xD0L <= (-1L))))) == g_50) & g_85)), l_145[0][0])) || p_19), 7));
        }
    }
    else
    { 
        int64_t l_167 = 0x98EA379FF8A60635LL;
        int32_t l_168[1];
        int32_t l_175 = 0L;
        int32_t l_176 = 0x736160A4L;
        int i;
        for (i = 0; i < 1; i++)
            l_168[i] = 0x7D1E39FDL;
        l_176 = (safe_sub_func_uint64_t_u_u(((g_17 ^= (safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(8UL, 2)), 3))) >= ((l_175 = ((g_51++) < (l_168[0] |= (p_19 >= ((l_90 ^= p_19) <= (((((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(0x91DEL, 0)), 0x765359DE98D40478LL)) & 1L) >= 0xEBE310A9L) <= p_19) & (-1L))))))) > l_54)), p_19));
        l_54 = p_19;
        for (l_104 = 24; (l_104 < 3); --l_104)
        { 
            uint32_t l_203 = 0xEC837B64L;
            int32_t l_205[2];
            int i;
            for (i = 0; i < 2; i++)
                l_205[i] = 0x69F70AFFL;
            g_191[0][1] = (safe_rshift_func_uint8_t_u_u((((safe_sub_func_int8_t_s_s((l_90 = (safe_mod_func_int64_t_s_s((l_188 = (safe_mul_func_int8_t_s_s((p_19 || (safe_unary_minus_func_uint32_t_u(0x1D589535L))), p_19))), ((safe_mod_func_int64_t_s_s(l_175, g_51)) , p_19)))), g_53)) < g_24[3][0][1]) && 1UL), 3));
            if ((l_205[1] &= (safe_mul_func_uint16_t_u_u((l_176 = (g_204 |= (safe_add_func_int16_t_s_s((+(((p_19 & (safe_add_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u((((g_17 |= ((safe_mul_func_uint16_t_u_u(((g_2 == g_2) , ((l_90 <= (-1L)) <= 0x06L)), 0UL)) >= g_53)) != g_136) & l_90), p_19)) || l_203), p_19))) == 0x9E8ABCB01993B904LL) >= l_168[0])), g_50)))), g_135))))
            { 
                if (p_19)
                    break;
            }
            else
            { 
                uint8_t l_216[3][5][3] = {{{251UL,0x4AL,1UL},{0x4AL,0xF7L,0xF7L},{0x59L,251UL,1UL},{0x35L,0x13L,251UL},{0x35L,1UL,0x4AL}},{{0x59L,247UL,1UL},{0xF7L,0x4AL,0x59L},{247UL,1UL,0x59L},{0x35L,247UL,1UL},{0x49L,0x49L,0xF7L}},{{0x35L,0xF7L,247UL},{247UL,0xF7L,0x35L},{0xF7L,0x49L,0x49L},{1UL,247UL,0x35L},{0x59L,1UL,247UL}}};
                int32_t l_217 = (-1L);
                int i, j, k;
                l_54 = (((safe_lshift_func_int8_t_s_s(g_119, 0)) < (safe_lshift_func_uint16_t_u_u(((p_19 && l_54) <= ((safe_mul_func_int8_t_s_s((l_216[0][0][2] = (safe_rshift_func_uint16_t_u_s((((((--g_146) || ((l_205[1] = p_19) || p_19)) ^ g_191[0][1]) & p_19) & p_19), 1))), p_19)) >= p_19)), 14))) & l_175);
                l_217 = 0L;
            }
        }
    }
    return l_90;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_24[i][j][k], "g_24[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_191[i][j], "g_191[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_204, "g_204", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_293, "g_293", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
