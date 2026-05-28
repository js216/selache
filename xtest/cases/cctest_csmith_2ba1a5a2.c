// SPDX-License-Identifier: MIT
// cctest_csmith_2ba1a5a2.c --- cctest case csmith_2ba1a5a2 (csmith seed 732013986)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x524c830d */
/* @exp_ticks 0x36a8 */

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

// Options:   -s 732013986 -o /tmp/csmith_gen_f_p_4unc/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 0x7DDC85F7L;
static int32_t g_5[4][3] = {{0x46158D32L,0x46158D32L,0x46158D32L},{1L,0xC3AD3B31L,1L},{0x46158D32L,0x46158D32L,0x46158D32L},{1L,0xC3AD3B31L,1L}};
static int8_t g_57 = 6L;
static uint16_t g_70 = 1UL;
static int64_t g_138 = 0L;
static uint32_t g_139 = 18446744073709551608UL;
static int8_t g_192 = 0xE3L;
static uint64_t g_193 = 18446744073709551615UL;
static uint32_t g_298 = 3UL;
static uint16_t g_313 = 0x112CL;
static uint32_t g_316 = 0UL;
static uint8_t g_334 = 254UL;
static uint32_t g_353 = 0x9E8DAD69L;
static uint16_t g_382[3] = {7UL,7UL,7UL};
static uint16_t g_399 = 65535UL;
static int32_t g_408 = 0L;
static uint64_t g_416[3] = {18446744073709551608UL,18446744073709551608UL,18446744073709551608UL};
static uint64_t g_420 = 0x3981001D6CA62EEBLL;



static int64_t  func_1(void);
static uint16_t  func_15(int8_t  p_16);
static uint8_t  func_18(int64_t  p_19, uint64_t  p_20);




static int64_t  func_1(void)
{ 
    uint32_t l_17 = 18446744073709551615UL;
    int32_t l_280 = 0xC0796E71L;
    uint32_t l_297 = 0UL;
    int32_t l_306[2];
    uint16_t l_426[1];
    int i;
    for (i = 0; i < 2; i++)
        l_306[i] = 0L;
    for (i = 0; i < 1; i++)
        l_426[i] = 65530UL;
lbl_282:
    for (g_2 = 12; (g_2 < 19); ++g_2)
    { 
        uint8_t l_9 = 0UL;
        for (g_5[3][0] = 9; (g_5[3][0] > (-18)); g_5[3][0]--)
        { 
            uint8_t l_8 = 0x05L;
            return l_8;
        }
        l_9++;
    }
    if ((safe_mod_func_uint64_t_u_u(((~(func_15(((l_17 <= 0xF6285890L) >= func_18((g_5[2][1] ^ g_5[3][0]), l_17))) > 65535UL)) && g_5[3][2]), l_17)))
    { 
        uint32_t l_289 = 8UL;
        for (g_192 = 0; (g_192 <= 2); g_192 += 1)
        { 
            int16_t l_281[3][1];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_281[i][j] = (-6L);
            }
            for (g_138 = 2; (g_138 >= 0); g_138 -= 1)
            { 
                uint32_t l_275 = 0x08960F64L;
                int i, j;
                if (g_57)
                    break;
                g_5[(g_138 + 1)][g_192] = (safe_rshift_func_uint16_t_u_s(((l_280 = (((safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((g_5[3][0] , l_275) == (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(g_139, 4294967287UL)), g_2))), 0x4B02L)), 7)) > l_275) , 251UL)) == l_17), l_17));
            }
            for (g_57 = 2; (g_57 >= 0); g_57 -= 1)
            { 
                int i, j;
                g_5[(g_57 + 1)][g_192] = ((g_5[3][0] || (l_281[1][0] & 9UL)) ^ 18446744073709551615UL);
                return l_17;
            }
            for (g_57 = 0; (g_57 <= 2); g_57 += 1)
            { 
                if (g_70)
                    goto lbl_282;
            }
        }
        g_5[1][0] |= (g_70 > ((((safe_div_func_int64_t_s_s((l_280 = g_2), ((0UL <= 0x0AE5L) , 9UL))) || l_280) || 0x7C4E0F4D10C2F2DALL) & l_17));
        for (g_2 = 0; (g_2 <= 23); g_2 = safe_add_func_uint32_t_u_u(g_2, 6))
        { 
            for (l_280 = 6; (l_280 > (-18)); l_280 = safe_sub_func_uint64_t_u_u(l_280, 4))
            { 
                if (l_289)
                    break;
            }
            if (((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(g_70, 14)), g_2)) && (g_139 | g_193)))
            { 
                int16_t l_294[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_294[i] = 1L;
                return l_294[1];
            }
            else
            { 
                return l_17;
            }
        }
    }
    else
    { 
        int8_t l_304[2][4];
        int32_t l_310 = 0x513A414FL;
        int8_t l_328 = 0x8FL;
        uint8_t l_329 = 0x39L;
        int32_t l_332 = 6L;
        int32_t l_333 = 0x5CED1648L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_304[i][j] = (-3L);
        }
        if (g_139)
        { 
            int32_t l_299 = 0L;
            int32_t l_300 = (-1L);
            int32_t l_308 = (-9L);
            int32_t l_311 = 0L;
            int32_t l_312 = (-9L);
            if ((safe_add_func_int16_t_s_s((g_192 , g_192), (g_298 = ((l_280 , l_297) & g_5[3][0])))))
            { 
                uint16_t l_303[4];
                int32_t l_305 = (-1L);
                int32_t l_307 = 0x32BFF614L;
                int32_t l_309[1][1];
                int i, j;
                for (i = 0; i < 4; i++)
                    l_303[i] = 0x5D8FL;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_309[i][j] = 1L;
                }
                l_300 = l_299;
                l_303[2] |= (g_5[3][0] = ((1UL == 65535UL) , (safe_lshift_func_uint8_t_u_u(255UL, 7))));
                --g_313;
            }
            else
            { 
                g_5[2][0] |= ((g_316--) == (+g_2));
                g_2 = ((safe_mod_func_int64_t_s_s((l_310 ^= ((g_5[3][0] , (((((safe_add_func_int16_t_s_s(l_299, ((((safe_mul_func_uint16_t_u_u(g_139, g_139)) | g_298) || l_299) & 0x20B7L))) , g_316) > g_5[3][0]) , 0xFCB4L) > 0xFACFL)) < g_57)), 0x6B8C33217787A40ELL)) != g_316);
            }
            l_306[1] = (((l_308 = 0xF2D9L) ^ l_299) > (safe_mod_func_uint8_t_u_u(l_304[1][3], l_300)));
            l_280 = g_192;
        }
        else
        { 
            l_329--;
        }
        g_334--;
    }
    for (g_313 = 0; (g_313 <= 1); g_313 += 1)
    { 
        int32_t l_380 = 0L;
        int32_t l_398 = (-4L);
        int64_t l_425 = 0x830096BF941106FELL;
        int i;
        if (l_306[g_313])
        { 
            int64_t l_345 = (-7L);
            g_5[3][0] = ((((safe_mul_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u((l_17 < l_297), (((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(l_280, g_5[3][0])), l_306[g_313])) || 0xE46AL) | g_138))) >= l_345), g_193)) | 0x7BL) <= 0xB9A7L) == 252UL);
            if ((safe_div_func_uint64_t_u_u((safe_add_func_int32_t_s_s(l_345, ((safe_lshift_func_uint8_t_u_s(((((g_138 &= l_280) , (g_353 = (~g_193))) , g_313) | l_345), 1)) & g_316))), g_313)))
            { 
                const int8_t l_360 = 6L;
                int32_t l_361 = (-1L);
                l_280 = ((safe_div_func_int32_t_s_s((((g_334--) ^ (l_361 = (((g_139 & (safe_mod_func_uint16_t_u_u((((l_345 & l_306[g_313]) , g_139) , l_306[1]), g_192))) && (-9L)) <= l_360))) > (-1L)), l_360)) <= l_280);
                if (g_313)
                    break;
                if (g_70)
                    break;
            }
            else
            { 
                const uint8_t l_381 = 0x62L;
                g_5[1][1] = ((((((safe_div_func_int64_t_s_s(g_5[3][1], (0x23L && ((l_306[1] == 1UL) == l_345)))) | g_5[3][0]) ^ 0x5A95782EL) | g_57) || l_17) , 0x39BEEFECL);
                g_382[0] &= ((((safe_add_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u(l_345, (safe_add_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(0x4FL, g_57)), g_57)) && l_380) < l_280), 2L)), l_381)) == g_57) <= g_2), 5L)))) , 0xE820B8333B37FA22LL), 0x719F1A46904C3285LL)), g_5[1][1])) , 0UL) , g_70) < 0x39A6BB7FL);
                if (l_380)
                    continue;
            }
        }
        else
        { 
            uint32_t l_409 = 0x5DC0B329L;
            for (g_57 = 0; (g_57 <= 2); g_57 += 1)
            { 
                int32_t l_397 = 1L;
                int i, j;
                g_5[(g_313 + 2)][g_313] = (((g_193++) || (0x86D0L == ((((g_193 >= ((safe_div_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_div_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_s((-4L), 2)) && g_192) && g_138), 2UL)), 0x751D76652550F3DBLL)), l_397)) != g_57), l_280)) & l_398), 65535UL)) & 0L)) > g_399) && l_280) , 0x2AD8L))) , 0L);
                l_280 ^= ((g_353 ^ ((l_306[1] = ((65535UL | (g_408 = (safe_sub_func_int8_t_s_s((g_192 = (safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_2, g_382[1])), 0xABL)), g_193))), g_5[(g_313 + 2)][g_313])))) , g_5[(g_313 + 2)][g_313])) == g_316)) == g_298);
                if (l_409)
                    break;
            }
        }
        if (g_193)
            goto lbl_282;
        for (g_70 = 0; (g_70 <= 2); g_70 += 1)
        { 
            int i, j;
            for (g_57 = 0; (g_57 <= 2); g_57 += 1)
            { 
                int32_t l_419[2];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_419[i] = 0xB9CFE839L;
                g_5[g_70][g_70] = (safe_add_func_uint32_t_u_u((0x113662A0L != g_382[g_70]), l_306[g_313]));
                l_306[g_313] = (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_420 = (g_192 ^= ((l_419[1] &= (((((g_416[2] |= (g_2 != g_2)) , (safe_lshift_func_int16_t_s_s(l_398, g_5[g_70][g_70]))) >= 0UL) | l_306[g_313]) | l_306[g_313])) > g_382[2]))), l_306[g_313])), g_399));
            }
            l_426[0] &= (((((g_5[(g_313 + 1)][g_70] = ((safe_add_func_int16_t_s_s(0x87E1L, (safe_div_func_int32_t_s_s((g_192 > (0x8E52DD0CL > l_425)), 0x74A55781L)))) , g_382[0])) , 0xA492L) & 0x2604L) != (-7L)) | 0L);
            return g_353;
        }
    }
    return l_426[0];
}



static uint16_t  func_15(int8_t  p_16)
{ 
    const int16_t l_265 = 0L;
    int32_t l_266 = 0x3343C1BBL;
    int64_t l_267[1];
    int32_t l_268[1][4];
    int i, j;
    for (i = 0; i < 1; i++)
        l_267[i] = 0x96AF810B9F66EA20LL;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
            l_268[i][j] = 0L;
    }
    l_266 = l_265;
    l_266 = l_267[0];
    return l_268[0][0];
}



static uint8_t  func_18(int64_t  p_19, uint64_t  p_20)
{ 
    uint8_t l_33 = 0x53L;
    uint32_t l_37 = 1UL;
    int32_t l_38[4];
    int32_t l_39 = 0xB4028481L;
    int32_t l_77 = 0L;
    int32_t l_78[4];
    int32_t l_243 = 0xE02F516FL;
    int i;
    for (i = 0; i < 4; i++)
        l_38[i] = 1L;
    for (i = 0; i < 4; i++)
        l_78[i] = 0x95C78859L;
    if ((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint8_t_u_u((l_39 |= (safe_div_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(p_19, 3)) , ((safe_unary_minus_func_uint32_t_u(((safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_33, ((((((l_38[2] = ((safe_add_func_int16_t_s_s((!p_19), l_33)) | l_37)) | g_5[3][0]) && 0x210CBEDFL) == l_33) ^ p_19) & p_19))), g_5[3][0])) , 1UL))) >= g_5[3][0])) || p_20), (-6L)))), l_33)))))
    { 
        uint64_t l_40 = 0xDAF0B56FE18BD2E8LL;
        int32_t l_55 = 4L;
        int32_t l_76 = 9L;
        int32_t l_79 = 0x46375426L;
        int32_t l_80 = 0xDCE3FF50L;
        int32_t l_81 = 0x192EEDB0L;
        int32_t l_82[1][3];
        uint32_t l_83 = 1UL;
        int64_t l_96 = 0xE0A7320B692EDFCALL;
        int16_t l_134 = 0x079FL;
        int32_t l_154 = 0xAF5C710BL;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_82[i][j] = 0x056B0C4FL;
        }
        if (l_40)
        { 
            int8_t l_47[4] = {0x03L,0x03L,0x03L,0x03L};
            int32_t l_48 = 1L;
            int32_t l_56[4] = {0x3DCEDB1AL,0x3DCEDB1AL,0x3DCEDB1AL,0x3DCEDB1AL};
            int i;
            for (p_19 = 29; (p_19 > (-7)); p_19--)
            { 
                uint16_t l_58 = 0x4CEAL;
                int32_t l_67 = 0xA2DD3184L;
                l_48 = (safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s((g_5[3][0] & (g_5[3][0] <= 0x0CE695EFL)), 3L)) & l_47[3]), l_47[3]));
                g_2 |= (l_67 = (safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((l_48 < (--l_58)), ((safe_lshift_func_int8_t_s_u(p_19, 4)) , (safe_mod_func_uint32_t_u_u((safe_div_func_uint16_t_u_u(65535UL, p_20)), p_19))))), g_5[2][0])), 65533UL)));
            }
        }
        else
        { 
            const int8_t l_73 = 0x05L;
            int32_t l_75[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_75[i][j] = (-1L);
            }
            for (l_39 = (-23); (l_39 >= (-15)); l_39++)
            { 
                return g_70;
            }
            for (l_40 = (-7); (l_40 != 25); ++l_40)
            { 
                int32_t l_74[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_74[i] = (-1L);
                l_74[0] = l_73;
                g_5[3][1] = (l_39 = 1L);
                l_83++;
            }
        }
        if ((l_79 = (g_5[3][0] = (safe_rshift_func_int16_t_s_s(((l_38[1] = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((safe_div_func_int8_t_s_s(((++p_20) <= p_19), l_96)), (safe_div_func_int64_t_s_s(((g_70 , p_19) != g_70), 0xE352544EE796224ALL)))), 0))) || g_5[0][0]), 14)))))
        { 
            uint16_t l_114 = 0UL;
            g_2 = p_19;
            for (l_33 = 0; (l_33 < 4); l_33++)
            { 
                uint8_t l_115[1][4];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_115[i][j] = 248UL;
                }
                g_5[3][1] = (safe_lshift_func_uint8_t_u_u((~(((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((l_115[0][2] = ((safe_div_func_uint16_t_u_u(p_19, (safe_add_func_int8_t_s_s(l_38[1], ((safe_sub_func_uint32_t_u_u((((l_114 = p_20) | g_2) & p_20), p_20)) <= p_20))))) > 0xFA4CEBEEL)), g_57)), g_2)) == p_19) && 0x833CL)), 4));
                if (g_70)
                    break;
            }
        }
        else
        { 
            int8_t l_116 = 0L;
lbl_144:
            l_116 = p_20;
            for (l_33 = 23; (l_33 > 49); ++l_33)
            { 
                int64_t l_133 = 3L;
                int32_t l_135 = 0L;
                l_135 = (safe_rshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_u(((((l_81 ^= (((((-7L) || ((l_82[0][2] &= ((safe_add_func_uint16_t_u_u((l_55 = (safe_rshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(l_133, ((0x8BL != 0x7CL) & g_5[3][0]))), 5))), 0x0FB7L)) & 1UL)) && 0xA3L)) >= p_20) , p_19) && l_134)) == p_19) != 0xEA76F415013F2C8CLL) != l_133), l_116)) , g_2) ^ g_5[0][1]), 6)), p_20)) | g_2), l_33));
                l_78[2] = ((safe_add_func_int64_t_s_s(((--g_139) < (((safe_rshift_func_int8_t_s_s((l_135 = 1L), l_116)) && (g_5[2][1] & p_19)) && p_20)), l_38[1])) <= 0x57L);
                if (p_19)
                    goto lbl_144;
            }
            if ((safe_mul_func_int8_t_s_s((-1L), (safe_mul_func_int8_t_s_s((((+(g_138 = ((safe_unary_minus_func_uint64_t_u(0x9EAB44AF1E809F82LL)) || p_19))) <= p_19) | g_70), l_134)))))
            { 
                int8_t l_153 = 0xA5L;
                g_2 = (safe_lshift_func_uint16_t_u_u(1UL, l_116));
                l_153 = l_116;
                l_39 = p_20;
            }
            else
            { 
                uint32_t l_155[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_155[i] = 1UL;
                l_155[1]++;
            }
        }
        l_38[2] = ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u((((l_78[1] ^= l_96) >= 0x7CD5174218ACB783LL) , (safe_unary_minus_func_int8_t_s((((safe_lshift_func_int16_t_s_u((((g_2 != g_57) , l_78[2]) || (-3L)), p_20)) <= 0x209CDE0CL) | l_154)))), g_138)), 3)), 0x9FC003BC58EBAA32LL)) , l_55);
    }
    else
    { 
        uint16_t l_172 = 65528UL;
        int32_t l_175 = (-1L);
        int32_t l_177 = (-1L);
        int32_t l_179 = 1L;
        int32_t l_180 = 0xECADED1DL;
        int32_t l_183 = (-1L);
        int8_t l_204 = (-1L);
        int32_t l_205 = 0x7E5F227DL;
        int32_t l_206 = 0x3E69D149L;
        int32_t l_207 = 1L;
        int32_t l_208 = 0xE0D2957CL;
        int32_t l_209[3][1];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_209[i][j] = (-3L);
        }
        if (l_38[1])
        { 
            uint64_t l_169 = 0xB8081AEEC9762EA7LL;
            int32_t l_176 = 0x48EE826CL;
            int32_t l_178[1];
            uint32_t l_210 = 0xB10FF70AL;
            int i;
            for (i = 0; i < 1; i++)
                l_178[i] = 1L;
            if (g_5[0][2])
            { 
                uint16_t l_170[1][2];
                int32_t l_171 = 0x1EF617C7L;
                int32_t l_181 = 0x037CFC11L;
                int32_t l_182 = 0xF3264293L;
                int32_t l_184 = (-1L);
                uint32_t l_185 = 0x4E38CD69L;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_170[i][j] = 0xDFA6L;
                }
                l_171 ^= (safe_mul_func_uint16_t_u_u(((l_169 = (g_2 >= 3L)) , (((l_170[0][1] ^ g_138) > g_70) && g_2)), 1L));
                l_172++;
                --l_185;
            }
            else
            { 
                uint8_t l_199 = 0xBDL;
                uint8_t l_202[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_202[i] = 0UL;
lbl_203:
                l_180 ^= (safe_lshift_func_int16_t_s_u(((l_178[0] |= (safe_rshift_func_int16_t_s_s(((--g_193) , ((safe_rshift_func_int8_t_s_s((((!(0xBCL >= (p_20 | p_20))) , l_37) , 5L), 1)) > l_176)), 2))) , p_20), l_199));
                l_78[2] = (safe_lshift_func_uint8_t_u_s((l_199 == l_202[1]), (0x62ABAF8B371645DALL >= g_138)));
                if (l_172)
                    goto lbl_203;
            }
            ++l_210;
            for (l_204 = 5; (l_204 != 17); l_204++)
            { 
                g_5[3][0] = (((safe_rshift_func_uint16_t_u_u((g_70 = l_39), 15)) < 6L) , (g_2 &= (safe_mod_func_uint64_t_u_u((safe_div_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u((((safe_mul_func_int8_t_s_s(l_38[1], 0x58L)) == p_20) >= g_5[3][0]), 0x044356CBF89ECF18LL)) , l_178[0]), 0x4DL)), l_33))));
                l_176 = (((p_20 >= (246UL > (safe_rshift_func_uint16_t_u_s((l_178[0] = (safe_add_func_uint64_t_u_u(l_176, p_20))), p_20)))) | 0x1255F10BL) <= l_172);
                l_178[0] = (l_78[0] = 1L);
            }
        }
        else
        { 
            int64_t l_241 = (-10L);
            for (l_205 = 0; (l_205 != (-28)); l_205 = safe_sub_func_int64_t_s_s(l_205, 7))
            { 
                uint8_t l_242[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_242[i] = 0x0DL;
                l_243 = ((g_193 != (safe_mod_func_uint16_t_u_u(0xE93CL, (safe_div_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u((((((safe_rshift_func_int16_t_s_u(0x3776L, 1)) , 255UL) < l_241) , l_206) || l_242[2]), g_193)), l_242[2]))))) , g_5[3][0]);
            }
            g_5[3][0] = (safe_mod_func_uint16_t_u_u((g_70 ^= (p_19 , l_38[2])), l_207));
        }
        for (l_39 = 0; (l_39 <= 3); l_39 += 1)
        { 
            int i;
            l_38[l_39] = (l_38[l_39] & (((safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((!((safe_unary_minus_func_int16_t_s((safe_lshift_func_int16_t_s_u((1L <= g_193), 0)))) == p_19)), 1UL)), p_19)) , 1L) , g_2));
            for (g_2 = 0; g_2 < 4; g_2 += 1)
            {
                l_38[g_2] = 0x1FA072B1L;
            }
            l_38[2] = ((safe_div_func_uint64_t_u_u(p_20, ((safe_mul_func_uint16_t_u_u((l_38[l_39] | ((safe_unary_minus_func_int8_t_s(((safe_add_func_int16_t_s_s(0xBE2FL, p_19)) > l_180))) || g_5[2][0])), p_19)) | g_138))) & 0x7848F6BBE48DE73DLL);
            for (l_207 = 2; (l_207 >= 0); l_207 -= 1)
            { 
                int i, j;
                g_2 |= (g_5[(l_207 + 1)][l_207] == (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((p_19 = 0x768E370C6443E69BLL) , 0xDB85L), g_5[(l_207 + 1)][l_207])), p_20)));
                return l_208;
            }
        }
    }
    return l_78[2];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_5[i][j], "g_5[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_193, "g_193", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_313, "g_313", print_hash_value);
    transparent_crc(g_316, "g_316", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    transparent_crc(g_353, "g_353", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_382[i], "g_382[i]", print_hash_value);

    }
    transparent_crc(g_399, "g_399", print_hash_value);
    transparent_crc(g_408, "g_408", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_416[i], "g_416[i]", print_hash_value);

    }
    transparent_crc(g_420, "g_420", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
