// SPDX-License-Identifier: MIT
// cctest_csmith_9b7c166d.c --- cctest case csmith_9b7c166d (csmith seed 2608600685)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xf00bc36f */
/* @exp_ticks 0x333a */

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

// Options:   -s 2608600685 -o /tmp/csmith_gen_xedv8liz/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 6L;
static uint64_t g_18 = 0x589FE57F6CC9CA31LL;
static uint8_t g_20 = 1UL;
static uint32_t g_49 = 0UL;
static uint32_t g_55 = 9UL;
static uint64_t g_86 = 18446744073709551615UL;
static int16_t g_88 = 0xF613L;
static uint32_t g_104 = 0UL;
static int8_t g_120 = 0x90L;
static int32_t g_121 = 0xDAB47FCAL;
static int32_t g_122 = 0xA2966C64L;
static int32_t g_132 = 0xB9873F28L;
static int8_t g_133 = 0x98L;
static int32_t g_134 = 0L;
static int8_t g_136 = (-1L);
static uint32_t g_137 = 0x41361E08L;
static int16_t g_164 = (-1L);
static int64_t g_201 = 0xCB076EB5C15DE777LL;
static int32_t g_202 = 0x73BDD419L;
static uint32_t g_203[3] = {18446744073709551610UL,18446744073709551610UL,18446744073709551610UL};



static int64_t  func_1(void);
static int64_t  func_27(int16_t  p_28, uint16_t  p_29);
static uint32_t  func_36(uint32_t  p_37, uint32_t  p_38, int16_t  p_39);




static int64_t  func_1(void)
{ 
    const int16_t l_12 = 0L;
    int16_t l_19 = 0x8ECBL;
    uint32_t l_21 = 18446744073709551608UL;
    int32_t l_23[1];
    int32_t l_127 = (-1L);
    uint64_t l_159 = 0x980116228B080850LL;
    int32_t l_216 = (-1L);
    int i;
    for (i = 0; i < 1; i++)
        l_23[i] = 0x8CAC31E1L;
lbl_242:
    for (g_2 = (-22); (g_2 < (-24)); g_2--)
    { 
        int32_t l_26 = 0xF23E4692L;
        int32_t l_129[4] = {(-1L),(-1L),(-1L),(-1L)};
        const uint64_t l_142[1] = {0x3EC527E36A8F31C0LL};
        int i;
        if ((safe_sub_func_uint64_t_u_u(((safe_add_func_uint8_t_u_u((g_20 &= ((safe_lshift_func_int16_t_s_s((+l_12), (!(safe_mul_func_uint16_t_u_u(((g_18 = (((l_12 ^ (safe_lshift_func_int16_t_s_s(((18446744073709551612UL <= 0x188047D2038E85A7LL) <= 0x7FL), g_2))) , g_2) , l_12)) ^ g_2), g_2))))) ^ l_19)), 0xF0L)) , l_21), l_19)))
        { 
            int16_t l_22 = 0xC9F1L;
            l_23[0] = l_22;
            g_122 = (safe_add_func_uint32_t_u_u(((l_26 == func_27(g_18, g_20)) == g_20), g_2));
        }
        else
        { 
            int32_t l_130[4][1] = {{0L},{0x5C80B88CL},{0L},{0x5C80B88CL}};
            int32_t l_131 = 1L;
            int32_t l_135 = 0xAAE9426AL;
            uint16_t l_141[4][3] = {{0x6B39L,0x6B39L,0x6B39L},{65535UL,9UL,65535UL},{0x6B39L,0x6B39L,0x6B39L},{65535UL,9UL,65535UL}};
            int i, j;
            for (g_20 = 0; (g_20 <= 23); g_20++)
            { 
                int64_t l_128 = 0x524304B69D3DDFACLL;
                g_121 = ((safe_mod_func_int8_t_s_s((0xC6BE40DCL ^ g_121), 6UL)) && 0xFC7B43BFD2720855LL);
                l_128 = l_127;
                --g_137;
            }
            l_141[0][1] = (!0UL);
            l_129[0] = l_130[0][0];
        }
        g_121 ^= (((g_20 = 255UL) & ((((g_104 > g_132) > l_142[0]) != g_137) | 0x92D2L)) != 0L);
    }
    for (g_49 = 0; (g_49 == 3); ++g_49)
    { 
        int32_t l_162 = 0x71DE7DACL;
        uint32_t l_163 = 18446744073709551615UL;
        int32_t l_178 = (-1L);
        int32_t l_179 = 1L;
        uint32_t l_194 = 0xCC9C5E52L;
        int32_t l_198 = 0x261906B4L;
        int32_t l_199 = 0x5E47C546L;
        int32_t l_200 = (-1L);
        const uint8_t l_241 = 255UL;
        g_134 = (safe_lshift_func_int16_t_s_u(0xDBCCL, ((g_164 ^= (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((g_137 ^= (((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u((((((safe_mul_func_uint16_t_u_u((l_163 = (((l_23[0] = (((l_159 && ((safe_mod_func_int32_t_s_s((((((g_20 , l_21) , l_23[0]) == 0x49L) && 65535UL) <= l_162), l_162)) > 0x51206B3A0AE147BCLL)) , l_162) || (-1L))) , g_133) | g_121)), l_162)) <= l_162) && g_136) != g_55) , 0x33L), g_49)) | g_133) || 65535UL), 3)), l_159)) || l_12) < 0xCAE3633256DFF3C4LL)), 1UL)), g_2))) < l_127)));
        if (g_120)
        { 
            uint8_t l_175 = 5UL;
            for (g_137 = 0; (g_137 <= 0); g_137 += 1)
            { 
                int32_t l_176 = 0xFF3CA177L;
                int32_t l_177 = (-1L);
                int i;
                l_179 = (l_178 = (~((!l_23[g_137]) == (safe_add_func_int16_t_s_s((l_177 = (safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(((g_2 = (l_176 ^= (safe_mul_func_int8_t_s_s(g_122, l_175)))) && g_120), l_19)) && 0xF8D5673CL) , 0UL), g_104))), g_49)))));
            }
            l_23[0] = (safe_mul_func_int16_t_s_s(((~(g_134 || ((g_86 >= ((!l_175) < 0x1877L)) ^ l_162))) , 0x587FL), g_88));
        }
        else
        { 
            int16_t l_195 = 4L;
            int32_t l_196 = 0x28BDE808L;
            int32_t l_197 = 0x3228B0A1L;
            const int16_t l_217 = 0L;
            g_121 = ((safe_mod_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((((l_197 = (l_196 = (safe_add_func_uint64_t_u_u(((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(((g_120 = l_179) && (g_122 , l_194)), l_178)), l_195)) < g_2), 0x75C3078386D6A567LL)))) || 0L) || g_2) && l_194), 0x61L)) >= g_86), g_121)) && l_159);
            g_203[2]--;
            if ((safe_div_func_int8_t_s_s((g_120 &= ((safe_div_func_int16_t_s_s(0x7CC6L, ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u((l_198 == l_216), 0UL)) && l_194), l_217)), 2)) , l_197))) >= g_121)), g_203[2])))
            { 
                l_23[0] = (safe_div_func_uint64_t_u_u(0xBD1F0D1286CDD36ELL, (safe_mul_func_uint16_t_u_u(((((safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((safe_div_func_uint8_t_u_u(l_196, (safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int64_t_s_s(((safe_sub_func_int32_t_s_s((((g_86 = (g_164 <= g_203[2])) | g_88) & l_23[0]), g_55)) < g_2), 0UL)), 8)), g_122)))), 9)), 0x0030C72001B5967DLL)) < l_196) && 5UL) != g_132), (-5L)))));
                l_196 = g_88;
            }
            else
            { 
                int32_t l_240 = 0L;
                l_216 = (safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((g_164 != (((0xF559A891246E79F7LL >= ((((-9L) <= 0xD5L) && 0xC69A8B32BEE8E114LL) , l_240)) , 0L) == l_240)), l_195)), l_241));
                if (l_217)
                    goto lbl_242;
            }
        }
        for (g_18 = 0; (g_18 <= 2); g_18 += 1)
        { 
            int32_t l_261 = (-9L);
            uint32_t l_262 = 0UL;
            int i;
            g_132 = ((safe_lshift_func_int8_t_s_u((-3L), 5)) , (((safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((g_134 ^= (l_261 = (1L == ((safe_sub_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(g_203[g_18], g_203[g_18])), l_159)), g_88)), 0xECA850ECL)) == 7UL)))), l_262)) == l_127), (-1L))), g_86)), 5UL)) | 0xFE12L) > g_55));
            g_121 = (0x56L >= (safe_sub_func_int8_t_s_s(((0x5E295090CE47970ELL < ((safe_mod_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u(0x078BL, g_120)) <= l_19) & l_163), l_12)) != l_19)) & l_12), l_262)));
            for (g_202 = 2; (g_202 >= 0); g_202 -= 1)
            { 
                g_132 = (((safe_mod_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s((g_136 = g_137), ((l_200 = g_164) , g_120))), l_23[0])), g_132)) & 3UL) && g_164);
            }
        }
    }
    return l_127;
}



static int64_t  func_27(int16_t  p_28, uint16_t  p_29)
{ 
    int32_t l_116 = 0x064EC293L;
    for (p_29 = (-1); (p_29 <= 38); p_29++)
    { 
        uint16_t l_40[1][3];
        int32_t l_46 = (-1L);
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_40[i][j] = 1UL;
        }
        l_116 = ((safe_add_func_uint64_t_u_u((g_18 , (safe_mul_func_int8_t_s_s((func_36(l_40[0][2], (safe_div_func_int64_t_s_s((l_46 ^= ((((safe_lshift_func_uint8_t_u_s((+0xCBDE6B78L), g_20)) == g_2) >= g_18) > g_2)), p_28)), p_29) && l_40[0][0]), p_29))), 0x16CEA6E34B743E6CLL)) > (-8L));
        g_120 = (safe_unary_minus_func_uint32_t_u((safe_sub_func_int16_t_s_s(l_116, l_116))));
    }
    g_121 = l_116;
    g_121 = g_121;
    return p_28;
}



static uint32_t  func_36(uint32_t  p_37, uint32_t  p_38, int16_t  p_39)
{ 
    uint16_t l_60 = 1UL;
    int32_t l_61 = 5L;
    int32_t l_87 = (-2L);
    uint32_t l_103 = 0x224A3AAFL;
    for (p_37 = (-15); (p_37 <= 22); p_37 = safe_add_func_int32_t_s_s(p_37, 7))
    { 
        uint8_t l_59 = 0x98L;
        int32_t l_62 = 1L;
        int32_t l_89 = 0x40D6A5A8L;
        int32_t l_90 = 1L;
        if (g_20)
        { 
            g_49 = (-6L);
            l_62 = (safe_div_func_int32_t_s_s((safe_div_func_uint64_t_u_u(0xC910760B96BC97DELL, (safe_unary_minus_func_int8_t_s((((g_55 = 0UL) <= ((((+(l_60 &= ((safe_sub_func_uint32_t_u_u(0xC5BCCBF7L, 0x03A67D62L)) && l_59))) >= 0UL) | g_49) , g_49)) < l_61))))), 0xE85184BFL));
        }
        else
        { 
            uint32_t l_91 = 0xA7E2F045L;
            int32_t l_107[2][2];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_107[i][j] = 1L;
            }
            for (l_62 = 0; (l_62 >= 14); l_62 = safe_add_func_uint8_t_u_u(l_62, 1))
            { 
                uint32_t l_85 = 0x97FBCB15L;
                l_91 = (l_90 = (safe_mod_func_int32_t_s_s(((l_89 = ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((l_87 = (g_88 ^= ((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((l_62 < ((((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((((safe_rshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(65529UL, ((g_86 = (l_85 >= g_18)) , p_37))), 7)) , p_39) == 0L) < g_49), 11)), g_2)) >= 0xF4L) != 0xDB7BAF68603386B4LL) && 4294967288UL)), g_55)), l_87)) , 0x99L))), 8UL)), p_38)), g_2)) & 0xECC15C487E88E123LL)) , l_61), (-1L))));
                g_104 = (safe_mod_func_int16_t_s_s((p_39 = (safe_lshift_func_uint8_t_u_u((safe_div_func_uint64_t_u_u(((safe_add_func_uint32_t_u_u(g_49, (0x17BB4FD8ED9CDEFDLL != (((!((l_61 ^= ((p_38 > 0xD11DCE25L) == p_39)) , l_103)) , 0x4902L) < l_62)))) , g_18), 0x7C0583186D9D6E25LL)), p_37))), l_59));
                l_107[1][1] = (p_39 , (g_20 && (((safe_mod_func_int32_t_s_s(g_104, g_88)) & 2UL) || l_60)));
            }
        }
    }
    l_87 ^= (safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_u(g_104, 6)) , (((safe_div_func_uint64_t_u_u((g_2 , l_103), g_49)) >= p_38) & l_60)) | (-5L)), 1L)), l_103));
    return p_39;
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_203[i], "g_203[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
