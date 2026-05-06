// SPDX-License-Identifier: MIT
// cctest_csmith_78106e41.c --- cctest case csmith_78106e41 (csmith seed 2014342721)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x96391be3 */

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

// Options:   -s 2014342721 -o /tmp/csmith_gen_zeucaax5/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int64_t g_11 = 0x27439CB61D2250DBLL;
static int8_t g_13 = (-1L);
static uint64_t g_15[5] = {0x187110E6B6CD3335LL,0x187110E6B6CD3335LL,0x187110E6B6CD3335LL,0x187110E6B6CD3335LL,0x187110E6B6CD3335LL};
static int32_t g_41[4][3][3] = {{{0x5477A75EL,8L,0xC1C73B01L},{(-4L),0x290B1C5AL,(-4L)},{(-6L),0x5477A75EL,0xC1C73B01L}},{{0L,0L,8L},{(-4L),0x5477A75EL,0x5477A75EL},{8L,0x290B1C5AL,0x83ADEB94L}},{{(-4L),8L,(-4L)},{0L,8L,0x83ADEB94L},{(-6L),(-6L),0x5477A75EL}},{{(-4L),8L,8L},{0x5477A75EL,8L,0xC1C73B01L},{(-4L),0x290B1C5AL,(-4L)}}};
static int32_t g_69 = 5L;
static int64_t g_70[4][4][4] = {{{0x2EC3887D17319F56LL,0L,0xAF0CFC2012663943LL,0x90218FCD19708E63LL},{0xAF0CFC2012663943LL,0L,(-1L),0x1D410A02D5285618LL},{0xAF0CFC2012663943LL,0L,0x2EC3887D17319F56LL,0L},{0xAF0CFC2012663943LL,0x1D410A02D5285618LL,(-1L),0L}},{{(-1L),0L,(-1L),0x1D410A02D5285618LL},{0xAF0CFC2012663943LL,0L,0x2EC3887D17319F56LL,0L},{0xAF0CFC2012663943LL,0x1D410A02D5285618LL,(-1L),0L},{(-1L),0L,(-1L),0x1D410A02D5285618LL}},{{0xAF0CFC2012663943LL,0L,0x2EC3887D17319F56LL,0L},{0xAF0CFC2012663943LL,0x1D410A02D5285618LL,(-1L),0L},{(-1L),0L,(-1L),0x1D410A02D5285618LL},{0xAF0CFC2012663943LL,0L,0x2EC3887D17319F56LL,0L}},{{0xAF0CFC2012663943LL,0x1D410A02D5285618LL,(-1L),0L},{(-1L),0L,(-1L),0x1D410A02D5285618LL},{0xAF0CFC2012663943LL,0L,0x2EC3887D17319F56LL,0L},{0xAF0CFC2012663943LL,0x1D410A02D5285618LL,(-1L),0L}}};
static uint8_t g_71[5][2] = {{0xF5L,254UL},{0x95L,0xF5L},{0xFBL,0xFBL},{0xFBL,0xF5L},{0x95L,254UL}};
static uint64_t g_95 = 0xA57AA2608706703CLL;
static int8_t g_102[1][1][2] = {{{0x07L,0x07L}}};
static uint8_t g_119 = 0xE7L;
static uint16_t g_132 = 0xF665L;
static int8_t g_134 = 1L;
static uint64_t g_135[3][4][1] = {{{18446744073709551613UL},{0xA31308165012FDBCLL},{18446744073709551613UL},{0xA31308165012FDBCLL}},{{18446744073709551613UL},{0xA31308165012FDBCLL},{18446744073709551613UL},{0xA31308165012FDBCLL}},{{18446744073709551613UL},{0xA31308165012FDBCLL},{18446744073709551613UL},{0xA31308165012FDBCLL}}};
static int32_t g_140 = (-2L);
static uint16_t g_141[1] = {0xAA1BL};



static int32_t  func_1(void);
static int16_t  func_4(int32_t  p_5, uint8_t  p_6, uint64_t  p_7);
static int8_t  func_22(int8_t  p_23, uint64_t  p_24);
static int8_t  func_25(uint32_t  p_26, int16_t  p_27, uint8_t  p_28);




static int32_t  func_1(void)
{ 
    uint8_t l_10 = 1UL;
    int32_t l_12 = 0x8A062B00L;
    int32_t l_150[2][1][1];
    const uint64_t l_164 = 0x8707BADF9921E08CLL;
    int8_t l_165[2][3] = {{(-1L),(-1L),0x3AL},{(-1L),(-1L),0x3AL}};
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_150[i][j][k] = 1L;
        }
    }
    l_150[1][0][0] = ((safe_mul_func_int16_t_s_s(func_4((safe_div_func_int16_t_s_s(l_10, ((l_10 <= g_11) & (l_12 = (0UL ^ 0xD010L))))), l_10, g_11), g_15[4])) < g_15[4]);
    g_140 ^= (g_69 , (l_150[1][0][0] = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_rshift_func_uint8_t_u_s((!((safe_mul_func_uint16_t_u_u((((((0L != l_150[1][0][0]) , ((safe_mul_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(((l_10 & l_150[1][0][0]) == 0x7019L), 2)), g_11)) | l_164)) || l_12) || 252UL) > l_164), l_12)) >= l_165[0][2])), 5)) >= l_10) | (-9L)), 4)), l_150[1][0][0])) || l_150[1][0][0])));
    return l_165[1][2];
}



static int16_t  func_4(int32_t  p_5, uint8_t  p_6, uint64_t  p_7)
{ 
    uint32_t l_14 = 4294967294UL;
    uint8_t l_40 = 0xA2L;
    int16_t l_91 = 6L;
    int32_t l_121 = (-7L);
    p_5 ^= (g_13 &= p_7);
    if (p_5)
    { 
        p_5 = l_14;
        for (p_7 = 0; (p_7 <= 4); p_7 += 1)
        { 
            int i;
            g_70[3][1][3] = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((safe_div_func_int64_t_s_s(g_15[p_7], 1L)) | func_22(func_25(p_6, ((g_41[1][2][0] ^= (safe_sub_func_int16_t_s_s(((g_11 = (safe_lshift_func_int8_t_s_s(((!(safe_mul_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_sub_func_int32_t_s_s(g_15[4], 4294967291UL)), p_7)), p_7))) | l_14), l_14))) && l_40), g_13))) , p_7), g_15[p_7]), g_13)) >= g_15[1]), g_15[0])), g_15[2]));
            if (g_15[p_7])
                continue;
            g_71[3][1] = l_14;
        }
    }
    else
    { 
        uint32_t l_92 = 0x7C56116CL;
        int32_t l_93 = 0xA844380EL;
        int32_t l_94[3][4][4] = {{{0L,5L,1L,0x7F386257L},{(-4L),5L,0L,0L},{5L,(-2L),0xFEFF1982L,(-2L)},{(-5L),1L,0L,0xCFDE0D86L}},{{0xFEFF1982L,(-8L),0x35B4FB63L,0xB11E678BL},{0xCFDE0D86L,0x35B4FB63L,5L,0L},{0xCFDE0D86L,8L,0x35B4FB63L,0x83FDF714L},{0xFEFF1982L,0L,0L,0xFEFF1982L}},{{(-5L),0L,0xFEFF1982L,3L},{5L,0x83FDF714L,0L,(-4L)},{(-4L),0xB11E678BL,1L,(-4L)},{0L,0x83FDF714L,0x7F386257L,3L}}};
        int i, j, k;
        for (l_14 = 0; (l_14 != 0); l_14 = safe_add_func_int32_t_s_s(l_14, 7))
        { 
            uint8_t l_90 = 0UL;
            for (g_69 = 0; (g_69 != 27); g_69 = safe_add_func_int64_t_s_s(g_69, 1))
            { 
                int64_t l_89 = 1L;
                int32_t l_103 = 0xE5210322L;
                l_93 = (~((((safe_add_func_int16_t_s_s((((safe_mod_func_uint64_t_u_u((~(((((((safe_lshift_func_uint16_t_u_s(l_14, 11)) <= g_71[1][0]) , ((~0x0D5E47109BDD5229LL) <= (safe_div_func_uint64_t_u_u((((((safe_add_func_int32_t_s_s((p_5 = (((l_89 , 1L) , l_40) == g_11)), l_90)) >= p_6) || g_41[1][2][0]) >= l_40) | 0xB770L), 0x8BF30E8C00D659E5LL)))) == p_7) != g_15[1]) || g_70[3][1][3]) == l_91)), p_7)) >= l_14) | l_92), l_90)) ^ 0UL) , g_70[0][0][0]) || l_90));
                l_103 ^= (p_5 = ((g_95++) <= (g_102[0][0][1] ^= ((safe_sub_func_int32_t_s_s((l_14 >= 0x9D3A1594L), (safe_mul_func_int8_t_s_s(((1L == ((g_70[0][0][0] , 4294967288UL) , l_94[2][3][1])) == g_69), g_41[1][2][0])))) <= l_94[2][2][2]))));
            }
        }
    }
    for (p_5 = 4; (p_5 >= 1); p_5 -= 1)
    { 
        int32_t l_118 = 0x43C15C23L;
        int32_t l_120 = 0xB4449FB5L;
        int i;
        l_121 = (((safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((g_119 = (((((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u((g_71[3][1] ^= ((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((l_118 &= ((g_15[p_5] != (+(+l_14))) , ((g_69 > (g_95 = 1UL)) ^ p_6))) > g_70[0][1][1]) || 0x18C78518540A1317LL), 2)), g_15[p_5])) , 6UL)), p_5)) & 0xE173L), 250UL)) , (-8L)) < 0xB1B5CBCDF5D25EDBLL) >= l_40) == p_7)), l_120)), 3)) , 2UL) <= 0UL);
        for (l_14 = (-26); (l_14 != 18); l_14 = safe_add_func_uint64_t_u_u(l_14, 1))
        { 
            const int32_t l_133 = 1L;
            int32_t l_139 = 1L;
            l_120 = g_15[p_5];
            for (l_40 = 0; (l_40 <= 1); l_40 += 1)
            { 
                int32_t l_138 = 0xE1858157L;
                int i, j;
                l_120 = ((g_134 = (((safe_sub_func_int32_t_s_s(((safe_mul_func_uint16_t_u_u((!(((g_95 = (((g_132 = ((g_70[1][1][3] = ((safe_div_func_uint8_t_u_u((0x0C0E6953L < (((((!g_71[(l_40 + 2)][l_40]) >= (g_71[(l_40 + 2)][l_40] , ((0x95L > g_95) < 4UL))) < (-8L)) != p_5) ^ (-7L))), p_5)) | p_7)) != 0x0BCF91A75F86E748LL)) < g_13) ^ 4UL)) >= l_133) > p_7)), g_119)) == p_7), 0x04EE80DCL)) || (-1L)) || l_118)) & 0x216E5E9EL);
                g_135[0][0][0] = g_13;
                g_140 = (((safe_mod_func_uint32_t_u_u((g_141[0]++), ((safe_div_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((((safe_rshift_func_int16_t_s_u(((p_5 != (l_133 == (g_95 <= (l_138 = p_6)))) || 0x49FC326A3C1A26C4LL), p_5)) != p_5) >= g_70[0][2][1]), 1)), p_7)) , 0x7C7E8E6BL))) || g_41[1][2][0]) > g_102[0][0][1]);
            }
        }
        if (g_135[0][0][0])
            break;
    }
    return l_91;
}



static int8_t  func_22(int8_t  p_23, uint64_t  p_24)
{ 
    uint32_t l_51 = 0x4191B860L;
    uint32_t l_66[4] = {0x630673EEL,0x630673EEL,0x630673EEL,0x630673EEL};
    int i;
    for (p_23 = 0; (p_23 <= 2); p_23 += 1)
    { 
        return l_51;
    }
    for (g_13 = (-27); (g_13 > (-21)); ++g_13)
    { 
        int16_t l_65 = 0x0FAEL;
        int32_t l_67 = 0x55F80954L;
        uint8_t l_68[5];
        int i;
        for (i = 0; i < 5; i++)
            l_68[i] = 0xB1L;
        g_69 = (l_68[3] = ((l_67 = (safe_lshift_func_int16_t_s_u(((safe_unary_minus_func_uint16_t_u(((0x3D345464CD027BAELL > (safe_lshift_func_uint8_t_u_u(l_51, 7))) ^ (((g_13 <= ((safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(8UL, 0)) <= 0x0F07L) == g_11) > l_65), l_66[2])) == 0L)) & 5L) <= g_15[4])))) > l_66[2]), 7))) && (-10L)));
    }
    return l_66[3];
}



static int8_t  func_25(uint32_t  p_26, int16_t  p_27, uint8_t  p_28)
{ 
    uint32_t l_46 = 18446744073709551606UL;
    int32_t l_50 = 0x69719EFCL;
    l_50 = ((safe_sub_func_uint64_t_u_u(g_41[1][2][0], ((safe_add_func_uint32_t_u_u((l_46 > (~(safe_lshift_func_uint8_t_u_u(((-10L) <= (1UL < g_41[0][0][1])), 4)))), l_46)) , 0L))) , g_15[0]);
    return g_11;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_15[i], "g_15[i]", print_hash_value);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_41[i][j][k], "g_41[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_69, "g_69", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_70[i][j][k], "g_70[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_71[i][j], "g_71[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_95, "g_95", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_102[i][j][k], "g_102[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_135[i][j][k], "g_135[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_141[i], "g_141[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
