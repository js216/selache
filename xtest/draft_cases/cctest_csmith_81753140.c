// SPDX-License-Identifier: MIT
// cctest_csmith_81753140.c --- cctest case csmith_81753140 (csmith seed 2171941184)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa96484ab */

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

// Options:   -s 2171941184 -o /tmp/csmith_gen_zz78ijt4/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_37 = 2L;
static uint8_t g_41 = 1UL;
static int32_t g_69 = (-3L);
static uint16_t g_80 = 0x6B4EL;
static uint64_t g_83 = 0xAE89E6D542D3F7CCLL;
static int32_t g_125 = 4L;
static uint8_t g_133[1] = {0x94L};
static int16_t g_183 = 0x769FL;
static uint64_t g_259[2][3] = {{0x14CE292E266AF2F8LL,0x14CE292E266AF2F8LL,0x14CE292E266AF2F8LL},{0x01CB5AC61B89C927LL,0x01CB5AC61B89C927LL,0x01CB5AC61B89C927LL}};
static int64_t g_271 = 0x3FBD4D54A4C857A1LL;
static int32_t g_273 = 0x90CA2413L;
static uint64_t g_274 = 0xAAAEAED0E2EEFEA8LL;



static uint32_t  func_1(void);
static int16_t  func_4(const uint64_t  p_5);
static int8_t  func_9(const uint16_t  p_10, uint8_t  p_11, uint32_t  p_12, const uint64_t  p_13, uint8_t  p_14);
static uint8_t  func_27(uint8_t  p_28, int32_t  p_29, uint16_t  p_30, const int8_t  p_31, int32_t  p_32);




static uint32_t  func_1(void)
{ 
    int64_t l_36 = 1L;
    int32_t l_38 = 3L;
    int32_t l_39 = 0xF5452FA8L;
    int32_t l_40 = 0xF3813BF5L;
    uint8_t l_50 = 0x0BL;
    uint32_t l_54 = 0UL;
    uint8_t l_55[2];
    int16_t l_56 = (-10L);
    int32_t l_57[2][4] = {{(-3L),(-3L),(-3L),(-3L)},{(-3L),(-3L),(-3L),(-3L)}};
    const int16_t l_138 = 0x9FEBL;
    uint32_t l_180 = 0x8ABCB019L;
    const int32_t l_241 = 1L;
    const int32_t l_306 = 0xB52019D5L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_55[i] = 0x59L;
    if ((((safe_rshift_func_int16_t_s_s(func_4((safe_unary_minus_func_int32_t_s((((safe_rshift_func_int16_t_s_s(((func_9(((safe_mod_func_uint16_t_u_u((l_39 = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(func_27((l_40 = (((safe_unary_minus_func_int16_t_s(((safe_add_func_uint64_t_u_u((((((g_41++) >= ((((((((0xDBCABEBFL & (((((safe_add_func_int64_t_s_s((safe_sub_func_int16_t_s_s((l_50 | (l_38 = (((+((safe_mul_func_int8_t_s_s(l_39, g_37)) ^ l_54)) <= g_37) >= g_37))), g_37)), l_40)) , g_37) , l_54) == g_37) < 1UL)) ^ 1UL) | g_37) , l_55[0]) == l_39) & l_39) , l_38) < g_37)) != l_55[0]) , l_55[1]) && l_55[0]), (-1L))) > g_37))) <= 0xDC4BL) ^ 0x4AB19F88L)), l_56, g_37, g_37, l_57[0][3]), 4)), l_39)), 2)), 0x51L)), g_133[0]))), l_54)) , l_40), l_56, g_133[0], l_138, l_50) == 0x1BL) < g_133[0]), l_57[1][2])) , l_180) != l_54)))), g_183)) < l_55[1]) || l_56))
    { 
        int16_t l_239 = 1L;
        int64_t l_240 = 0x21B652CE760C5D1ELL;
        uint16_t l_264 = 0xE174L;
        if ((g_133[0] < ((safe_mul_func_uint8_t_u_u(((((((((safe_sub_func_int32_t_s_s(0L, (safe_sub_func_int16_t_s_s((((safe_rshift_func_uint8_t_u_s(252UL, (safe_sub_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((l_57[1][3] , g_83), l_239)), g_125)) == 6L), l_239)))) && 0x0673BC7CL) & g_133[0]), l_50)))) != l_239) != 0x521639E2L) & g_69) >= l_240) < l_55[0]) != l_241) >= l_240), g_183)) >= l_239)))
        { 
            return g_125;
        }
        else
        { 
            uint32_t l_244 = 18446744073709551610UL;
            for (g_37 = 24; (g_37 == 5); --g_37)
            { 
                ++l_244;
            }
            g_125 |= (0x7A6C11A0L == l_239);
        }
        if ((safe_lshift_func_int16_t_s_s((g_125 && (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_240, l_239)), l_39)), 4)), l_57[0][3])), l_240))), g_133[0])))
        { 
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            { 
                ++g_259[0][1];
            }
        }
        else
        { 
            g_69 = (safe_unary_minus_func_uint16_t_u(((+(l_264 ^ g_133[0])) > ((6UL & ((safe_rshift_func_uint16_t_u_u((l_36 != g_80), l_180)) | g_259[0][1])) , g_183))));
        }
    }
    else
    { 
        int16_t l_286 = 4L;
        for (g_69 = 1; (g_69 >= 0); g_69 -= 1)
        { 
            int8_t l_272 = 0xE1L;
            int32_t l_279 = 0xA85F17F0L;
            int32_t l_280 = 2L;
            l_280 = ((safe_add_func_uint64_t_u_u(18446744073709551615UL, g_133[0])) != (((safe_mul_func_uint16_t_u_u(((++g_274) , (safe_div_func_uint8_t_u_u(((l_279 ^= 65529UL) || g_183), l_272))), 3UL)) ^ 0xD013E866A5DDA629LL) != g_125));
            for (l_38 = 1; (l_38 >= 0); l_38 -= 1)
            { 
                int32_t l_281 = 0L;
                int i, j;
                l_281 = (g_259[g_69][(g_69 + 1)] >= 0x59171452L);
                if (g_259[g_69][(g_69 + 1)])
                    continue;
            }
        }
        if (g_37)
        { 
            for (l_56 = 0; (l_56 >= 0); l_56 -= 1)
            { 
                int32_t l_285 = 0x88E312AFL;
                int i;
                g_69 = 1L;
                l_285 = (safe_mod_func_uint8_t_u_u((+65535UL), g_133[l_56]));
            }
            l_286 = 0xD09D160DL;
        }
        else
        { 
            int64_t l_308 = 0xB48177611255D904LL;
            for (g_37 = 0; (g_37 == 29); g_37 = safe_add_func_uint64_t_u_u(g_37, 8))
            { 
                uint64_t l_307 = 0x7AC4E5C6B9971AD1LL;
                g_69 = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((((safe_mul_func_int16_t_s_s((~(safe_lshift_func_uint8_t_u_s((g_41 , (safe_mul_func_uint16_t_u_u(l_286, (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(l_306, (0xEBL | 0xB0L))), l_307))))), g_259[0][0]))), l_286)) , l_308) <= (-2L)) , 255UL), g_273)), g_83)), l_307));
            }
            for (g_41 = 0; (g_41 <= 1); g_41 += 1)
            { 
                g_125 = 0x78750D81L;
                return l_308;
            }
        }
        l_39 |= l_38;
    }
    return l_38;
}



static int16_t  func_4(const uint64_t  p_5)
{ 
    uint32_t l_202 = 0x41016036L;
    int32_t l_222 = 0x61BCC1DDL;
    for (g_83 = 0; (g_83 == 59); g_83++)
    { 
        uint32_t l_188 = 0xC2572027L;
        uint32_t l_203 = 0x9259ABB1L;
        int64_t l_204[4][4] = {{0x767B023839C74932LL,0x16177B4B0E1CB3E2LL,0x767B023839C74932LL,0x16177B4B0E1CB3E2LL},{0x767B023839C74932LL,0x16177B4B0E1CB3E2LL,0x767B023839C74932LL,0x16177B4B0E1CB3E2LL},{0x767B023839C74932LL,0x16177B4B0E1CB3E2LL,0x767B023839C74932LL,0x16177B4B0E1CB3E2LL},{0x767B023839C74932LL,0x16177B4B0E1CB3E2LL,0x767B023839C74932LL,0x16177B4B0E1CB3E2LL}};
        int32_t l_205 = 5L;
        int i, j;
        l_205 = (g_69 = (g_183 , ((safe_mod_func_int64_t_s_s(((safe_add_func_uint32_t_u_u((l_188 < (!(((safe_rshift_func_uint16_t_u_u(g_80, (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((~(safe_add_func_uint16_t_u_u((5L || 4294967286UL), l_188))))), 0x5FL)) & l_188), l_202)), l_203)))) != l_204[1][0]) , 1L))), l_202)) , 0xE04B37A05F2A7C57LL), 18446744073709551608UL)) > g_133[0])));
        l_222 = ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(2UL, ((g_133[0] = (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mod_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((g_41 = (l_202 | l_188)) >= (safe_add_func_int16_t_s_s(g_83, 65535UL))), g_183)), p_5)) , g_133[0]), 1)), l_203)), g_183))) >= p_5))), l_203)) ^ g_69);
        for (l_203 = (-20); (l_203 >= 5); ++l_203)
        { 
            return g_183;
        }
    }
    l_222 = g_83;
    return p_5;
}



static int8_t  func_9(const uint16_t  p_10, uint8_t  p_11, uint32_t  p_12, const uint64_t  p_13, uint8_t  p_14)
{ 
    const uint64_t l_140 = 0x9CA3844EF14F5BEELL;
    int32_t l_141 = (-1L);
    int32_t l_173[3][3] = {{0x1F803E92L,0xD39C2E69L,0x1F803E92L},{0xFB6B4A24L,0xFB6B4A24L,0xFB6B4A24L},{0x1F803E92L,0xD39C2E69L,0x1F803E92L}};
    int32_t l_179 = 0x9E1A7EA2L;
    int i, j;
    for (g_37 = 0; (g_37 <= 0); g_37 += 1)
    { 
        int i;
        if (((safe_unary_minus_func_uint8_t_u(((g_133[g_37] >= g_133[g_37]) < l_140))) < ((l_141 = 0L) , p_10)))
        { 
            uint8_t l_150 = 255UL;
            int32_t l_151 = 0x9FF8A606L;
            int i;
            g_125 = ((safe_lshift_func_uint16_t_u_s(g_133[g_37], (safe_sub_func_uint16_t_u_u(((g_133[g_37] == (g_41 |= ((l_151 &= ((safe_sub_func_uint8_t_u_u(g_133[g_37], ((safe_div_func_int8_t_s_s(g_133[g_37], g_125)) || g_133[0]))) >= l_150)) , p_12))) , l_151), (-1L))))) > g_133[g_37]);
            l_141 &= ((safe_div_func_int64_t_s_s((p_10 != ((((((safe_sub_func_int64_t_s_s(g_125, g_37)) ^ g_133[0]) > p_10) || 0x54L) | p_14) >= p_14)), 6UL)) ^ g_37);
        }
        else
        { 
            uint32_t l_156 = 0xFD9A5CC0L;
            g_125 = l_156;
        }
        g_125 = g_37;
    }
    for (g_83 = 0; (g_83 >= 6); g_83++)
    { 
        int32_t l_159 = 0x495BFAE3L;
        if (l_159)
            break;
        l_159 = p_14;
        l_179 &= ((safe_rshift_func_uint8_t_u_s(l_141, (safe_unary_minus_func_uint8_t_u((g_41--))))) <= (safe_rshift_func_int8_t_s_s(((1UL && ((safe_add_func_int16_t_s_s(((safe_div_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((((((l_173[0][0] = 0x5EB6223421460D04LL) && ((!(safe_div_func_int32_t_s_s((l_173[0][0] = (g_37 = (safe_div_func_uint16_t_u_u(((p_14 , l_159) | g_37), 0xBFF2L)))), l_159))) , g_69)) & 0xDCCCDC14L) && g_133[0]) != g_69), 9)), 9L)) ^ l_159), l_159)) < g_133[0])) & l_141), p_12)));
    }
    return p_10;
}



static uint8_t  func_27(uint8_t  p_28, int32_t  p_29, uint16_t  p_30, const int8_t  p_31, int32_t  p_32)
{ 
    int16_t l_61 = 0L;
    uint16_t l_62[5];
    int32_t l_81 = 0x7DCB2139L;
    int32_t l_82 = 0x6224F168L;
    uint16_t l_103[3];
    uint16_t l_135 = 0x5FA5L;
    int i;
    for (i = 0; i < 5; i++)
        l_62[i] = 0x9347L;
    for (i = 0; i < 3; i++)
        l_103[i] = 0x587BL;
    if ((+(((1UL == (((p_28 ^ 0x0D5DL) || (safe_div_func_uint8_t_u_u((g_37 > l_61), l_62[4]))) | g_37)) != 0xC13236C2L) , l_61)))
    { 
        uint32_t l_70 = 0x9ADBE56FL;
        int32_t l_78 = 0x93F16A1EL;
        uint8_t l_90 = 0xC4L;
        if ((safe_div_func_int8_t_s_s(l_62[3], (safe_sub_func_uint64_t_u_u((g_37 | (((p_30 == ((safe_mod_func_uint8_t_u_u(((g_69 = g_41) != g_37), g_37)) | 8L)) > g_41) == g_37)), g_37)))))
        { 
            int32_t l_77 = 0x155D2618L;
            int32_t l_79 = (-7L);
            g_80 &= (l_70 && (safe_mod_func_int8_t_s_s(g_37, ((safe_mod_func_int64_t_s_s((l_78 = (safe_rshift_func_int8_t_s_s((g_69 ^ (l_77 = (((1UL && 1UL) || p_29) > l_70))), g_69))), l_79)) , g_69))));
            g_83--;
        }
        else
        { 
            int8_t l_93[2];
            uint32_t l_94 = 5UL;
            int32_t l_95 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_93[i] = 0xF3L;
            l_78 = ((safe_sub_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(l_90, 4)), 0L)) , (l_95 = (((((g_37 = 0x16C6A45DL) && (safe_mul_func_uint16_t_u_u(((p_28 , l_93[0]) == g_80), l_61))) || p_30) && g_41) , l_94)));
        }
        g_69 ^= ((safe_lshift_func_uint8_t_u_s(255UL, ((l_78 = ((((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((p_30 | l_81), p_31)), l_61)) , 0xDDL) == 5UL) | l_61)) & l_70))) <= p_28);
    }
    else
    { 
        int32_t l_102 = 0L;
        ++l_103[2];
    }
    for (p_30 = (-19); (p_30 != 15); ++p_30)
    { 
        int32_t l_116 = (-1L);
        l_82 = ((safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(p_32, g_41)), (-1L))) > (safe_div_func_uint64_t_u_u(((l_81 < p_30) == 0xDEL), 2UL))) , 0x2E219839B2FD4BBALL) <= l_116), l_116)) & 4294967291UL);
        l_81 = (safe_mul_func_int8_t_s_s(((l_116 ^ (safe_rshift_func_int8_t_s_u(((g_69 <= (0xC87BL >= (((g_80 >= 0x8947EB49816E0766LL) , 65535UL) , 1L))) , g_37), 0))) < 0x2238E951L), g_41));
        for (l_61 = 1; (l_61 > (-3)); l_61 = safe_sub_func_uint64_t_u_u(l_61, 8))
        { 
            uint32_t l_126 = 0xCEA799ADL;
            int32_t l_134 = 3L;
            l_134 ^= (0x7E2B5FF2L & ((safe_mod_func_int16_t_s_s(((--l_126) , (((((((p_32 && (((safe_sub_func_uint32_t_u_u(l_116, (g_37 &= ((((((safe_lshift_func_int8_t_s_s(g_125, p_32)) && 1L) >= 4UL) | g_133[0]) , 0x99605DBDBD1F8265LL) , l_116)))) && 0xF20BB848F33B6043LL) & g_125)) , 0xBCL) > 0x75L) > g_41) != p_31) & g_83) , 0x3D6CL)), g_133[0])) , p_32));
        }
    }
    --l_135;
    return g_37;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_133[i], "g_133[i]", print_hash_value);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_259[i][j], "g_259[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_273, "g_273", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
