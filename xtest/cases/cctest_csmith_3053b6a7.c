// SPDX-License-Identifier: MIT
// cctest_csmith_3053b6a7.c --- cctest case csmith_3053b6a7 (csmith seed 810792615)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x27c5dd79 */
/* @exp_ticks 0x317a */

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

// Options:   -s 810792615 -o /tmp/csmith_gen_gpkv27t4/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_2 = 0x8D4081C2L;
static int64_t g_7 = (-1L);
static int32_t g_9 = 4L;
static int16_t g_10 = 2L;
static uint32_t g_11 = 4UL;
static uint32_t g_18 = 0UL;
static uint8_t g_90 = 0x37L;
static int32_t g_98 = 7L;
static uint64_t g_102 = 0xDB6AB3148BB49DA0LL;
static int16_t g_132 = 0xA50AL;
static uint32_t g_144 = 0x0479FFEDL;
static int64_t g_151 = 8L;
static uint32_t g_152 = 2UL;
static uint32_t g_235 = 4294967292UL;
static int32_t g_237 = 0xD9127033L;
static uint16_t g_244 = 5UL;



static int16_t  func_1(void);
static int32_t  func_14(uint16_t  p_15, const uint16_t  p_16, uint32_t  p_17);
static int8_t  func_21(uint64_t  p_22, uint32_t  p_23, uint32_t  p_24, uint8_t  p_25);




static int16_t  func_1(void)
{ 
    uint32_t l_6 = 0UL;
    int32_t l_28 = 0x0859495EL;
    int32_t l_213 = 7L;
    uint32_t l_238 = 1UL;
    uint16_t l_240 = 0x7114L;
lbl_214:
    g_2 = 0x1713B910L;
    for (g_2 = 7; (g_2 == 1); g_2--)
    { 
        int64_t l_5 = 1L;
        int32_t l_236 = (-1L);
        uint64_t l_239 = 18446744073709551609UL;
        int32_t l_242 = 0x7472D96CL;
        int32_t l_243 = 1L;
        if ((l_5 , l_6))
        { 
            uint8_t l_201 = 255UL;
            if (g_2)
            { 
                g_7 = 0L;
            }
            else
            { 
                int8_t l_8 = 0x82L;
                g_11++;
                l_201 = func_14(((g_18--) < func_21(g_2, (((l_28 ^= (0xDBF0L > ((((safe_sub_func_uint8_t_u_u(g_10, l_5)) , 5L) , 4L) || 2UL))) || l_5) , 0x2BA8D7D2L), g_7, g_9)), g_9, g_11);
                return l_28;
            }
            l_213 = ((safe_rshift_func_uint8_t_u_s(((l_28 = (((safe_add_func_uint8_t_u_u((--g_90), g_144)) & ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_2)), (((0L & l_28) >= g_102) == 0x45L))) < 1UL)) < g_7)) , g_7), g_102)) < l_6);
            if (g_7)
                goto lbl_214;
        }
        else
        { 
            int8_t l_219 = 0x91L;
            int32_t l_220 = 0x83D66D58L;
            int32_t l_241[4] = {1L,1L,1L,1L};
            int i;
            if ((safe_mod_func_int8_t_s_s(((l_219 >= l_220) ^ (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(((safe_add_func_int64_t_s_s(((((((g_237 = ((safe_rshift_func_uint8_t_u_s((((l_236 = ((((safe_div_func_uint64_t_u_u(((((g_235 |= (g_102++)) > (((l_5 && l_219) > l_5) > 255UL)) || 0x71L) >= 1UL), l_5)) == g_98) || l_28) >= l_28)) ^ g_18) < 0x4F152AADL), 5)) , g_132)) , g_151) , 0xB1FC9802L) || l_238) , 0x4A7598E7L) , g_237), l_220)) & l_238), g_7)), l_5)), 0)) | 1L) == 0x85L)), l_239)))
            { 
                g_98 &= l_213;
                return l_240;
            }
            else
            { 
                int16_t l_247 = 1L;
                --g_244;
                if (l_247)
                    break;
            }
        }
    }
    for (l_6 = 0; (l_6 >= 28); l_6 = safe_add_func_uint16_t_u_u(l_6, 8))
    { 
        int32_t l_254 = (-8L);
        for (l_240 = (-18); (l_240 > 31); ++l_240)
        { 
            l_28 = (safe_mul_func_uint8_t_u_u(((l_254 != (((0x1C675AF43916D171LL || g_237) < 0x48CFL) , g_10)) && 3L), g_7));
        }
    }
    return g_132;
}



static int32_t  func_14(uint16_t  p_15, const uint16_t  p_16, uint32_t  p_17)
{ 
    int8_t l_56[4][4];
    int32_t l_57 = 0x445A15B6L;
    int64_t l_79[3];
    int32_t l_89[4] = {(-3L),(-3L),(-3L),(-3L)};
    const int64_t l_137 = 0x90AA376357ED5DE9LL;
    int64_t l_155 = 0L;
    int16_t l_190 = 1L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_56[i][j] = 0x70L;
    }
    for (i = 0; i < 3; i++)
        l_79[i] = (-4L);
lbl_196:
    for (g_11 = 0; (g_11 < 27); g_11 = safe_add_func_int64_t_s_s(g_11, 9))
    { 
        uint32_t l_37[2];
        int32_t l_44 = 7L;
        uint8_t l_68 = 1UL;
        int32_t l_99 = 6L;
        int i;
        for (i = 0; i < 2; i++)
            l_37[i] = 4294967286UL;
        for (p_15 = 0; (p_15 <= 1); p_15 += 1)
        { 
            int i;
            g_9 |= ((((l_44 ^= (l_37[p_15] && (((safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((((18446744073709551611UL >= ((l_37[p_15] , 0xA132L) , p_15)) || p_16) | 0L) || p_16), g_10)), 4)) , 1L) >= p_16))) && 0x96DB3533B016FEFDLL) | 0xF5E2L) || p_16);
            l_57 = (safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_div_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_unary_minus_func_int32_t_s((((p_15 , 0x87C3CB87840EF1F3LL) < g_11) , 0xC0D6813FL))), 1L)), 0xE3BADF38E70E9EE1LL)), l_56[3][2])), p_16)), p_15));
            g_9 = ((g_18 | p_17) | (safe_rshift_func_int8_t_s_u(g_9, l_37[p_15])));
        }
        if (p_16)
            continue;
        if ((safe_unary_minus_func_uint64_t_u((safe_mul_func_uint8_t_u_u((p_15 == 0x36B6A42DA4CB52C2LL), (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(p_17, l_57)) | 8L), p_16)))))))
        { 
            uint16_t l_67 = 0x62C0L;
            l_68 = (l_67 != (l_44 = 0x7CDBA006L));
            for (g_10 = 0; (g_10 == 1); ++g_10)
            { 
                int8_t l_77[1][1];
                int32_t l_78[2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_77[i][j] = (-7L);
                }
                for (i = 0; i < 2; i++)
                    l_78[i] = 0x13CFF855L;
                if (l_56[3][2])
                    break;
                l_78[1] |= (((safe_sub_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((255UL == (0x59L == ((safe_add_func_int64_t_s_s((l_77[0][0] = 0xE720F54F738DB222LL), g_7)) && g_7))), 0xB23DL)) | 0x56L), l_68)) != g_9) <= g_11);
            }
            if (l_79[2])
                break;
        }
        else
        { 
            int16_t l_88[4] = {8L,8L,8L,8L};
            int32_t l_97 = (-1L);
            int32_t l_101 = 0x27A36CEBL;
            int i;
            if ((l_57 ^= (((((safe_sub_func_uint32_t_u_u(0UL, (safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((l_88[0] ^ ((((p_17 > 247UL) ^ 0xFED0A01CL) , g_2) <= l_68)) && p_15), l_88[2])), 2)) , p_15), 5)))) != 0x99A9L) , g_18) , 0x7BBAC67CE96EA650LL) != p_15)))
            { 
                --g_90;
                g_9 = (~0xA39BL);
            }
            else
            { 
                return g_2;
            }
            for (p_17 = 0; (p_17 == 55); p_17++)
            { 
                int32_t l_96 = (-1L);
                int32_t l_100[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_100[i] = 0xA4FAC923L;
                g_102++;
                g_9 = (((((1L & (safe_sub_func_uint32_t_u_u(0x3C057171L, ((((safe_lshift_func_uint16_t_u_u((+g_18), p_16)) || 0xFB9A3054L) != (-7L)) >= l_44)))) == l_44) < g_9) , (-1L)) || 0L);
                g_9 |= (((((~(safe_mul_func_int16_t_s_s((p_15 != (g_90 &= (safe_lshift_func_uint16_t_u_s(1UL, 1)))), (l_88[0] == l_101)))) > g_18) >= 0x0620L) <= 9UL) > l_97);
            }
        }
    }
    for (g_90 = 0; (g_90 <= 47); g_90++)
    { 
        int16_t l_124[4][2] = {{0L,0L},{0L,0L},{0L,0L},{0L,0L}};
        int32_t l_131 = 1L;
        int i, j;
        g_98 = (safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((+(g_132 &= ((((l_131 = (l_124[1][1] != ((safe_add_func_int64_t_s_s(l_56[0][2], (safe_sub_func_uint64_t_u_u((((((safe_lshift_func_int8_t_s_s((l_124[2][1] , p_16), 0)) , l_57) != 0xFC35L) == g_90) && l_79[2]), g_10)))) != l_124[1][1]))) != g_18) != l_89[0]) > l_124[2][0]))) <= 0x4787L), (-1L))), g_90)), 0x6C79135E92A07A55LL));
        g_9 = (((p_15 && ((l_89[3] <= (safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_89[0], 9)), p_17))) >= 0x0682L)) == 0xAD6262BBL) | l_137);
        if (((g_144 ^= (0xE15FDC67L < (safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint8_t_u((((((safe_lshift_func_uint16_t_u_s((l_124[3][1] | (((!(5L || 9UL)) , p_16) > l_124[1][1])), p_15)) == l_89[0]) , g_10) & (-9L)) != g_7))), 5L)))) , 0L))
        { 
            int16_t l_149 = 0x95CCL;
            int32_t l_150[4];
            int i;
            for (i = 0; i < 4; i++)
                l_150[i] = (-1L);
            for (p_17 = 0; (p_17 > 16); p_17 = safe_add_func_int16_t_s_s(p_17, 1))
            { 
                int64_t l_147 = 0x2A04F454AEDB1328LL;
                int32_t l_148 = 1L;
                --g_152;
                g_98 = l_131;
            }
        }
        else
        { 
            g_98 = g_90;
            if (l_155)
                break;
        }
    }
    if (((((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(l_155, l_56[2][1])), 4)) & 0x82E7L) <= l_56[3][2]) < p_17))
    { 
        uint8_t l_169 = 0UL;
        l_57 = (safe_sub_func_uint16_t_u_u((!(((safe_mod_func_uint16_t_u_u((((p_16 & (safe_lshift_func_uint16_t_u_u(((l_169 = (((safe_mod_func_int16_t_s_s(p_17, p_17)) >= g_18) >= 7UL)) | 0x84D056A74C124A52LL), l_56[3][2]))) , 0L) , 0xB6E9L), 0x7AF9L)) , g_10) == 1L)), g_90));
        l_89[0] = (safe_add_func_uint32_t_u_u(((p_15 &= p_16) <= (safe_lshift_func_int8_t_s_s(l_169, (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_int32_t_s_s(g_98, p_17)), 0xF56CD849L)), p_17))))), 1L));
    }
    else
    { 
        int32_t l_187 = (-3L);
        int32_t l_188 = 0x6C1EB299L;
        int32_t l_197 = 0x7B3754A3L;
        for (g_10 = (-9); (g_10 <= (-23)); g_10 = safe_sub_func_uint32_t_u_u(g_10, 1))
        { 
            uint8_t l_189 = 9UL;
            int32_t l_195 = 1L;
            if (p_17)
                break;
            if ((((!(safe_unary_minus_func_uint8_t_u(0xADL))) >= ((((((((((((safe_div_func_uint32_t_u_u(((l_188 = (+(0x7EB8E4492BDCA7D1LL | (l_187 > 247UL)))) >= p_15), g_98)) & 1L) < 0UL) | 0UL) | l_189) , 0x3E12L) && 0xC916L) && g_10) < l_187) || p_17) > 0x683A552DL) == 0x332FL)) | l_190))
            { 
                l_188 = ((safe_div_func_uint8_t_u_u((l_195 = (p_15 & ((((((safe_add_func_int8_t_s_s((0UL < (p_16 ^ g_10)), l_189)) <= l_56[3][3]) , p_15) , g_152) == g_152) < g_10))), l_189)) , 0x4DC35AD3L);
                if (g_10)
                    break;
            }
            else
            { 
                uint32_t l_198 = 0x5BD74990L;
                if (l_155)
                    goto lbl_196;
                ++l_198;
            }
        }
    }
    return l_155;
}



static int8_t  func_21(uint64_t  p_22, uint32_t  p_23, uint32_t  p_24, uint8_t  p_25)
{ 
    int8_t l_29 = 0x29L;
    int16_t l_30 = (-7L);
    int32_t l_31[3];
    uint32_t l_32 = 18446744073709551612UL;
    int i;
    for (i = 0; i < 3; i++)
        l_31[i] = 0x27163995L;
    l_29 = p_22;
    l_32++;
    return g_10;
}





int test_main(void)
{
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_144, "g_144", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_237, "g_237", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
