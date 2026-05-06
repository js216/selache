// SPDX-License-Identifier: MIT
// cctest_csmith_cd07aa3f.c --- cctest case csmith_cd07aa3f (csmith seed 3439831615)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xe96c1f29 */

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

// Options:   -s 3439831615 -o /tmp/csmith_gen_5mjgrwvk/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = (-1L);
static int64_t g_4 = 1L;
static int16_t g_12 = 0x4CACL;
static uint8_t g_20[2][2] = {{249UL,249UL},{249UL,249UL}};
static int8_t g_27 = 0xBAL;
static int16_t g_28 = 0x7262L;
static int64_t g_29 = (-1L);
static int32_t g_30 = 0x85BB31CFL;
static uint32_t g_31 = 0xA59C3CBAL;
static int8_t g_52 = (-1L);
static int16_t g_61 = (-2L);
static uint64_t g_66 = 0UL;
static int32_t g_90 = 0L;
static uint32_t g_91 = 0x4D8F350AL;



static int32_t  func_1(void);
static uint8_t  func_7(int8_t  p_8);
static uint32_t  func_38(int8_t  p_39, uint64_t  p_40);




static int32_t  func_1(void)
{ 
    uint16_t l_3 = 0x31D8L;
    int32_t l_122 = 3L;
    int32_t l_129[4][4] = {{0xB3AD1B98L,0xB3AD1B98L,0xBF3C664DL,0xB3AD1B98L},{0xB3AD1B98L,0L,0L,0xB3AD1B98L},{0L,0xB3AD1B98L,0L,0L},{0xB3AD1B98L,0xB3AD1B98L,0xBF3C664DL,0xB3AD1B98L}};
    int i, j;
    g_4 = (0UL == (l_3 = (g_2 < (-6L))));
    if ((safe_lshift_func_uint8_t_u_u(func_7(l_3), l_3)))
    { 
        uint16_t l_113 = 0x9959L;
        return l_113;
    }
    else
    { 
        int32_t l_121 = 8L;
        int64_t l_124 = (-1L);
        int32_t l_125 = 0x389B2D0CL;
        l_122 = (((safe_sub_func_uint32_t_u_u((+0x10L), (safe_mod_func_uint8_t_u_u((safe_add_func_int64_t_s_s(((((9UL > l_121) | l_121) , l_121) == 0xEDF0L), g_29)), g_20[1][0])))) <= 0x6071L) != 0x11419659B86C8B6BLL);
        l_122 = g_61;
        l_125 &= (~l_124);
    }
    l_129[2][2] = ((~(0xB49DBEB4C7169202LL || ((+(+((((l_122 = g_20[1][0]) < 7UL) & l_3) && 0x13L))) || 0x836BL))) < g_61);
    return g_20[1][0];
}



static uint8_t  func_7(int8_t  p_8)
{ 
    const uint32_t l_18[3][3] = {{4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL},{4294967295UL,4294967295UL,4294967295UL}};
    uint16_t l_19[2];
    int32_t l_23 = 0xF55126EDL;
    int32_t l_24[3][3] = {{0x5F321EE0L,0xA0E40209L,0xA0E40209L},{0x5F321EE0L,0xA0E40209L,0xA0E40209L},{0x5F321EE0L,0xA0E40209L,0xA0E40209L}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_19[i] = 0x912EL;
    if ((((safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((g_4 <= (((g_12 = 1UL) || (!(safe_rshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(0UL, 6L)) ^ l_18[2][1]), 7)))) , 0x9F5954E3F1571C09LL)), g_2)))) , 0xFCL) <= 0xDDL))
    { 
        int32_t l_21[2][2];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_21[i][j] = 0x089CED66L;
        }
        for (g_2 = 0; g_2 < 2; g_2 += 1)
        {
            l_19[g_2] = 0x0467L;
        }
        g_20[1][0] = (1UL && l_18[0][0]);
        l_21[0][0] ^= 0xE63A5BEDL;
    }
    else
    { 
        int32_t l_22 = 0L;
        int32_t l_25 = 9L;
        int32_t l_26 = 0L;
        int32_t l_72 = (-1L);
        g_31--;
        for (l_25 = 0; (l_25 <= (-26)); l_25--)
        { 
            uint32_t l_76 = 1UL;
            int32_t l_78 = 0L;
            for (l_23 = 2; (l_23 >= 0); l_23 -= 1)
            { 
                int i, j;
                l_24[l_23][l_23] = (((safe_sub_func_int16_t_s_s((func_38((0x5C1EL & (l_24[l_23][l_23] >= (l_26 = g_2))), p_8) >= p_8), p_8)) , 0x511CL) || l_23);
                l_72 = ((l_26 , ((safe_lshift_func_int8_t_s_s((l_26 = 0L), 5)) , (((safe_lshift_func_int16_t_s_u(0x5D12L, p_8)) < 0xE4B2L) > g_66))) < l_24[l_23][l_23]);
            }
            g_30 = (((safe_unary_minus_func_int32_t_s((((l_24[1][2] = (safe_sub_func_int8_t_s_s(((g_52 && l_24[2][1]) == (l_23 = ((((p_8 && 0x47L) == g_30) & 3UL) != l_24[1][1]))), p_8))) , p_8) == 0x65L))) , 0xDCBA9C6CL) == l_76);
            if ((l_18[2][0] == ((0x36L && (l_78 = (!p_8))) || l_22)))
            { 
                if (g_27)
                    break;
            }
            else
            { 
                int32_t l_89 = 0xEF4C81FAL;
                g_30 ^= (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(((3L <= ((0xD6D6F57B8DD85FC2LL || (l_89 = ((safe_add_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((g_4 > p_8), 4)), g_31)) , p_8), g_4)) != g_61))) == p_8)) == 0xDEL), 6)), 5));
            }
        }
        ++g_91;
    }
    for (g_12 = (-24); (g_12 >= 21); g_12 = safe_add_func_uint64_t_u_u(g_12, 6))
    { 
        uint16_t l_104[4][1] = {{2UL},{0x92E1L},{2UL},{0x92E1L}};
        int32_t l_107 = 0x995C899AL;
        int i, j;
        for (g_52 = 0; (g_52 < 2); g_52 = safe_add_func_int32_t_s_s(g_52, 7))
        { 
            return g_27;
        }
        for (g_31 = 0; (g_31 <= 1); g_31 += 1)
        { 
            int i, j;
            l_24[(g_31 + 1)][g_31] |= (g_20[g_31][g_31] ^ (g_30 != (g_91 = (p_8 || (-1L)))));
            for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
            { 
                int i, j;
                l_24[1][2] = (safe_div_func_uint16_t_u_u(((g_20[g_31][g_4] = ((g_20[1][0] & ((g_27 = (safe_mod_func_uint32_t_u_u(g_27, (++l_104[2][0])))) ^ (((p_8 , 0x11L) < p_8) >= 0xF6106D1D53F2F9EBLL))) , 0x72L)) != l_107), p_8));
            }
        }
    }
    l_24[1][1] &= (l_23 = ((safe_rshift_func_int8_t_s_s(p_8, (safe_rshift_func_int16_t_s_u(((~0xFF6DL) || 1UL), 11)))) & 0xC3L));
    return l_24[1][2];
}



static uint32_t  func_38(int8_t  p_39, uint64_t  p_40)
{ 
    int8_t l_41 = 0x78L;
    int32_t l_67 = (-1L);
    l_41 = p_39;
    if (p_39)
    { 
        g_52 = (safe_mul_func_uint16_t_u_u(g_12, ((g_30 = (safe_rshift_func_int8_t_s_u((safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u(0xF8L, 0x34L)), 12)), 1L)), p_40))) > p_40)));
    }
    else
    { 
        uint8_t l_55 = 0xB1L;
        int32_t l_58 = 0x8B1CA070L;
        int32_t l_59 = 0x5B90C327L;
        int32_t l_60[4] = {0x1EAE5249L,0x1EAE5249L,0x1EAE5249L,0x1EAE5249L};
        int i;
        g_30 = ((safe_mul_func_uint16_t_u_u(0x443CL, 0x34FAL)) , (g_29 <= g_20[0][1]));
        for (g_2 = 0; (g_2 <= 1); g_2 += 1)
        { 
            int16_t l_62 = 0xEE62L;
            l_55--;
            for (g_28 = 0; (g_28 <= 1); g_28 += 1)
            { 
                uint8_t l_63 = 0xA1L;
                int i, j;
                --l_63;
                l_67 = (g_66 ^= (g_30 = (g_20[g_2][g_2] == (p_39 = (((l_62 | ((((-2L) ^ g_12) | 0x976CC22523F84E0FLL) || l_59)) || p_39) == (-2L))))));
            }
        }
    }
    l_67 = l_67;
    return l_41;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_20[i][j], "g_20[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
