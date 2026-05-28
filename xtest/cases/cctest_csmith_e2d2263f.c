// SPDX-License-Identifier: MIT
// cctest_csmith_e2d2263f.c --- cctest case csmith_e2d2263f (csmith seed 3805423167)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xa2e4a311 */
/* @exp_ticks 0x38ce */

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

// Options:   -s 3805423167 -o /tmp/csmith_gen_iykje0l_/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int16_t g_10[2] = {1L,1L};
static int64_t g_11[1][4] = {{(-1L),(-1L),(-1L),(-1L)}};
static int8_t g_12 = 0L;
static int8_t g_13[3][2] = {{1L,1L},{1L,1L},{1L,1L}};
static int64_t g_14 = (-9L);
static int16_t g_15[1][4] = {{0xF44CL,0xF44CL,0xF44CL,0xF44CL}};
static uint64_t g_16 = 0xDF5EF889A278C007LL;
static uint64_t g_72 = 0x5669DD8B1DFEB859LL;
static int32_t g_76 = 0x3B01A633L;
static uint32_t g_88 = 18446744073709551612UL;
static int8_t g_89 = 0xBDL;
static uint8_t g_97 = 248UL;
static uint64_t g_102 = 18446744073709551608UL;
static uint8_t g_117 = 0xF0L;
static int32_t g_119[4] = {1L,1L,1L,1L};
static uint16_t g_129 = 0xD18BL;
static int16_t g_141 = 0x989DL;
static int32_t g_142[4] = {9L,9L,9L,9L};



static uint64_t  func_1(void);
static uint64_t  func_2(int32_t  p_3, int8_t  p_4, uint8_t  p_5, int8_t  p_6);
static int32_t  func_21(int32_t  p_22, int32_t  p_23, uint64_t  p_24, int16_t  p_25);




static uint64_t  func_1(void)
{ 
    int16_t l_7 = 0x2A4FL;
    int32_t l_8 = (-1L);
    int32_t l_9[1];
    uint8_t l_153 = 0x64L;
    const uint64_t l_156 = 0x273A5A0644EA386FLL;
    int64_t l_157 = 0x2F1DAB3D17502D14LL;
    int64_t l_172 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_9[i] = 0x1C157478L;
    if ((func_2((l_7 & (l_9[0] &= (g_16--))), g_15[0][0], (safe_add_func_int32_t_s_s(g_10[1], l_7)), g_15[0][3]) , 0xBDB59DC4L))
    { 
        uint64_t l_150 = 6UL;
        l_150 = (safe_mul_func_uint16_t_u_u(((safe_div_func_uint16_t_u_u(l_9[0], 0xC2A7L)) | (safe_lshift_func_uint8_t_u_s((g_72 > 0x98850522L), g_10[1]))), g_141));
        g_142[1] |= ((-2L) <= (safe_mul_func_uint16_t_u_u((l_153 = g_72), g_10[0])));
        l_157 = ((((g_13[2][1] , (safe_sub_func_uint64_t_u_u((l_9[0] <= (l_7 <= g_119[1])), g_10[1]))) >= g_89) , 0L) <= l_156);
    }
    else
    { 
        int8_t l_158 = (-1L);
        int32_t l_170[1];
        int i;
        for (i = 0; i < 1; i++)
            l_170[i] = 0xA2E41794L;
        if (l_158)
        { 
            return g_119[1];
        }
        else
        { 
            uint32_t l_171[2][4];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_171[i][j] = 4294967286UL;
            }
            g_119[1] &= (safe_mul_func_int8_t_s_s(((((((safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((l_8 | (l_171[0][2] = (safe_mul_func_int16_t_s_s((l_170[0] |= ((~g_15[0][2]) <= (l_9[0] = ((safe_sub_func_uint32_t_u_u(4294967291UL, g_72)) & 0x5BL)))), g_117)))), 0x6FL)), g_117)) == l_172) != l_7) <= 0L) > 0xA157L) | 0xFC2CB128940516E3LL), l_156));
        }
    }
    return g_72;
}



static uint64_t  func_2(int32_t  p_3, int8_t  p_4, uint8_t  p_5, int8_t  p_6)
{ 
    int64_t l_26 = 5L;
    int32_t l_143 = 0x0DE4AF1CL;
    l_143 = func_21(p_6, (l_26 <= ((((safe_sub_func_uint32_t_u_u(((p_6 && p_6) < g_13[0][0]), l_26)) >= 1UL) == p_5) || 65528UL)), l_26, l_26);
    return p_6;
}



static int32_t  func_21(int32_t  p_22, int32_t  p_23, uint64_t  p_24, int16_t  p_25)
{ 
    int64_t l_29 = 0xED4BCA925F321EE0LL;
    int32_t l_32[4] = {(-1L),(-1L),(-1L),(-1L)};
    int32_t l_66[1];
    int32_t l_67 = (-5L);
    int i;
    for (i = 0; i < 1; i++)
        l_66[i] = 0x7558CD18L;
    l_29 &= (p_25 && 8UL);
    if (((safe_mul_func_uint8_t_u_u(((l_32[1] = g_10[1]) >= (l_29 , ((p_24 == p_24) >= g_15[0][1]))), g_10[1])) < 0UL))
    { 
        const int32_t l_37 = 0L;
        int32_t l_38[2][2];
        int32_t l_65 = 8L;
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 2; j++)
                l_38[i][j] = 0xFF7CD2BAL;
        }
        p_23 = ((p_24 < (((safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_32[1], (((l_38[0][1] |= (((l_37 ^ p_22) & l_37) , g_16)) <= p_25) && (-10L)))), l_32[1])) < p_22) != p_23)) || g_15[0][1]);
        l_67 ^= (safe_rshift_func_uint16_t_u_u(l_29, (g_13[1][1] , (((((((safe_add_func_int32_t_s_s(((safe_div_func_int16_t_s_s((p_25 = ((((safe_mul_func_uint16_t_u_u(((((safe_add_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((+(safe_mod_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((~(safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(p_23, 65528UL)), 0x7260L))), 9)) , l_65) <= l_29), g_10[1]))) >= p_23), l_38[0][1])), 5)) , 0x0EL) , 0xEDL), 255UL)), 0x7139L)) | g_16) , l_32[1]) || 0x8B70E9AFB84C81E2LL), l_37)) , p_22) & (-1L)) <= l_66[0])), g_10[0])) , p_24), l_66[0])) & 0x10L) & l_37) | g_13[2][0]) < 6L) > p_24) >= 0x93L))));
    }
    else
    { 
        uint64_t l_79 = 0x331764C7F453ACC8LL;
        int32_t l_90 = 0x27463D6FL;
        uint32_t l_91 = 0x8DD85FC2L;
        uint8_t l_96 = 0UL;
        int16_t l_100 = (-2L);
        for (p_22 = 0; (p_22 <= (-13)); --p_22)
        { 
            int32_t l_75 = 0L;
            l_75 = (safe_rshift_func_int8_t_s_s((249UL & (++g_72)), (0x05D12CBED49F2EA6LL > g_15[0][2])));
            g_76 = p_23;
            l_90 = (safe_mod_func_int16_t_s_s((g_89 = (g_10[1] = (p_25 = (g_15[0][0] = ((l_79 > (l_75 > (safe_sub_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s((((g_88 |= (safe_sub_func_uint32_t_u_u((((safe_sub_func_uint64_t_u_u((g_16 &= 1UL), 0x8B78E619AEFA9ADBLL)) || g_11[0][3]) , 0UL), p_24))) >= l_79) & l_79), 3)) , 0x21C2L), l_75)))) == l_75))))), g_13[2][0]));
        }
        if (((l_91 |= 65531UL) != (safe_mod_func_uint8_t_u_u(((g_97 = ((l_67 = (safe_sub_func_uint8_t_u_u(l_96, g_15[0][3]))) < 4L)) || 0x7DL), g_76))))
        { 
            for (p_24 = 0; (p_24 <= 1); p_24 += 1)
            { 
                uint16_t l_101 = 1UL;
                g_102 |= (safe_div_func_uint64_t_u_u(l_100, l_101));
            }
        }
        else
        { 
            uint32_t l_124 = 0x9AB5F6EBL;
            p_23 = (p_25 , (safe_div_func_int64_t_s_s(7L, (safe_rshift_func_int16_t_s_s(0x0F9AL, 2)))));
            if (l_90)
            { 
                int8_t l_118 = 2L;
                int32_t l_130 = 1L;
                g_119[1] &= (safe_add_func_int32_t_s_s(((+(l_90 = ((safe_rshift_func_uint8_t_u_u(l_29, (safe_unary_minus_func_int64_t_s(((g_12 &= ((+((4294967295UL != (((l_118 = ((g_117 ^= (safe_unary_minus_func_uint8_t_u(((p_24++) || p_25)))) || g_13[2][0])) ^ l_66[0]) > g_13[2][1])) <= g_97)) < 0xCFD0L)) <= g_97))))) > p_22))) >= p_25), g_15[0][2]));
                l_130 |= (g_129 = ((safe_sub_func_uint16_t_u_u((((safe_mod_func_int32_t_s_s((g_119[1] ^= ((l_124 , 0xC2A5ADA2C71B4AC4LL) & (safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((l_96 && g_15[0][2]), g_102)) && g_15[0][1]), g_102)))), 0x4658BA9BL)) , p_23) && p_22), p_22)) , 0xB91DFB35L));
            }
            else
            { 
                g_119[2] = p_24;
            }
            l_32[1] = (g_142[2] = (g_141 &= (((safe_lshift_func_int8_t_s_s((((safe_mod_func_int16_t_s_s(((safe_div_func_int32_t_s_s((g_119[1] = 0x2362835DL), (((p_25 , (((((safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s((l_100 && g_11[0][0]), 0x4F0331C24E8149F6LL)), 7)) > 0x2EL) || g_72) >= l_100) && g_10[1])) == p_23) && g_13[2][0]))) , p_25), g_13[0][1])) & 0xAD1B9823F5DDD1E6LL) < 0UL), 7)) < p_24) , (-9L))));
        }
    }
    return l_32[1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_12, "g_12", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_13[i][j], "g_13[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_14, "g_14", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_15[i][j], "g_15[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_142[i], "g_142[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
