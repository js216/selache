// SPDX-License-Identifier: MIT
// cctest_csmith_97361b58.c --- cctest case csmith_97361b58 (csmith seed 2536905560)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x17706753 */
/* @exp_ticks 0x349f */

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

// Options:   -s 2536905560 -o /tmp/csmith_gen_lrtkstd6/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_2[1][3] = {{4294967293UL,4294967293UL,4294967293UL}};
static int32_t g_3 = 0xE5596960L;
static int64_t g_40 = 7L;
static int8_t g_42 = 0xACL;
static int32_t g_58[2] = {0x41147C03L,0x41147C03L};
static uint64_t g_69 = 3UL;
static int64_t g_72 = 0x3884E3EED797CFCBLL;
static uint16_t g_81 = 65532UL;
static int16_t g_85 = 0x4F06L;
static uint32_t g_91 = 0UL;
static uint8_t g_92 = 0UL;
static uint32_t g_127 = 4294967286UL;
static uint8_t g_137 = 0xEDL;
static uint32_t g_164[1][4] = {{0x2E390C49L,0x2E390C49L,0x2E390C49L,0x2E390C49L}};



static int8_t  func_1(void);
static int32_t  func_4(int64_t  p_5, const uint64_t  p_6);
static int16_t  func_11(int16_t  p_12, const uint8_t  p_13, uint8_t  p_14, int32_t  p_15);




static int8_t  func_1(void)
{ 
    int64_t l_26 = 0x36BE856DFC9B996ALL;
    uint16_t l_29 = 0xE26BL;
    int32_t l_128 = (-1L);
    uint8_t l_136 = 0xF8L;
lbl_181:
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    { 
        int32_t l_27 = 0x1466AC3AL;
        int32_t l_28 = (-10L);
        int32_t l_134 = 0x6F35BB46L;
        if (func_4((g_85 = (((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(func_11(((safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s((l_28 &= ((g_3 >= (safe_rshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u((((g_2[0][0] <= (0x3DC9L || g_2[0][2])) , g_3) , 65529UL), l_26)) >= 9UL), l_27))) , g_3)), l_27)), g_3)), 0)) && 0x205300CEL), l_27, l_27, l_29), 15)), g_3)) || l_28) & g_2[0][0])), l_29))
        { 
            uint64_t l_103 = 0UL;
            int32_t l_117[3][3] = {{0x77FD266EL,1L,0x77FD266EL},{(-1L),(-1L),(-1L)},{0x77FD266EL,1L,0x77FD266EL}};
            int32_t l_119 = (-1L);
            int i, j;
            if ((safe_div_func_uint16_t_u_u((((g_85 = ((((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(((safe_div_func_uint16_t_u_u(65535UL, (g_81 = (((0xD54F57EBL || (safe_sub_func_int16_t_s_s(((-1L) >= l_26), (-4L)))) != g_2[0][0]) ^ l_103)))) & g_92), l_26)), l_28)) >= g_85) & g_91) == l_103)) , l_103) > g_92), 0x503AL)))
            { 
                const uint16_t l_116[2] = {0x23AEL,0x23AEL};
                int32_t l_118 = 0x92195432L;
                int i;
                l_119 |= (safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(l_28, (safe_div_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((l_118 = (l_117[0][2] = ((safe_mul_func_uint8_t_u_u(0xE3L, ((safe_sub_func_uint16_t_u_u(l_116[1], l_103)) <= l_116[1]))) < g_81))), g_42)) > g_92), l_27)))), g_92));
            }
            else
            { 
                uint16_t l_123 = 65533UL;
                if (g_58[1])
                    break;
                l_119 = (((-1L) >= (~(safe_div_func_uint8_t_u_u((g_92 = 0xFDL), l_123)))) || g_69);
            }
        }
        else
        { 
            uint64_t l_126 = 0xB76206065F2B768FLL;
            int32_t l_133 = 0xC11C586FL;
            for (g_81 = 0; g_81 < 2; g_81 += 1)
            {
                g_58[g_81] = 0L;
            }
            for (l_28 = 0; (l_28 <= 0); l_28 += 1)
            { 
                int i, j;
                l_128 = ((g_127 |= ((safe_mod_func_int64_t_s_s((5L ^ ((g_2[l_28][(g_3 + 1)] = ((l_126 = (0x754D72C3A22099EBLL < g_2[l_28][(g_3 + 2)])) == l_26)) && 0xE0D8C1B6L)), l_27)) != g_72)) || g_92);
                l_133 = (0xAAE7FF6F2D310D21LL < (safe_rshift_func_uint8_t_u_u(255UL, (((safe_lshift_func_int16_t_s_u(0x0AA6L, 4)) ^ 0x8C019427022D3B1CLL) , 0x45L))));
            }
        }
        l_134 ^= (((((((((((l_28 = (l_27 , 18446744073709551615UL)) || 18446744073709551615UL) > l_27) & g_40) | 4L) > g_40) | l_27) || g_58[1]) & l_27) , 0x82D9L) > 7UL);
        for (g_40 = 0; (g_40 >= 0); g_40 -= 1)
        { 
            int32_t l_138 = 0x64346866L;
            uint32_t l_157 = 0xDBE92475L;
            int i, j;
            g_137 = (1L ^ ((g_2[g_40][g_3] ^ (safe_unary_minus_func_int64_t_s(l_136))) ^ l_128));
            for (l_134 = 0; (l_134 <= 0); l_134 += 1)
            { 
                l_138 = g_137;
                return l_28;
            }
            g_164[0][1] = ((safe_sub_func_int8_t_s_s((safe_add_func_int16_t_s_s((+(safe_div_func_uint8_t_u_u((l_134 = (safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(6UL, (safe_add_func_int16_t_s_s(((safe_unary_minus_func_int64_t_s((safe_mod_func_uint8_t_u_u((((((l_157 = l_128) , (safe_mod_func_int16_t_s_s(((((safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s((l_27 <= 0xBDL), l_128)), l_138)) < g_40) <= l_27) & g_92), l_27))) >= l_29) > 0x72EEF0EDL) <= l_28), 249UL)))) > g_81), g_137)))), 0xA2L)) , 0x1DL), 1L))), g_2[g_40][g_3]))), 1UL)), l_28)) , l_136);
        }
    }
    for (l_136 = 0; (l_136 <= 0); l_136 += 1)
    { 
        uint16_t l_171 = 0xC63AL;
        int32_t l_173 = 1L;
        uint16_t l_179 = 65529UL;
        int32_t l_180 = 3L;
        for (g_40 = 0; (g_40 >= 0); g_40 -= 1)
        { 
            int32_t l_172 = (-8L);
            int i, j;
            l_172 = (g_164[l_136][(g_40 + 1)] < (((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((l_171 |= (safe_div_func_int8_t_s_s(g_164[g_40][(l_136 + 2)], (g_137 , g_58[1])))), 0)) & g_164[l_136][(g_40 + 1)]), 0xEDEFL)) && l_171) , l_128) || g_164[g_40][(l_136 + 2)]) <= g_164[g_40][(l_136 + 2)]));
            for (l_128 = 0; (l_128 >= 0); l_128 -= 1)
            { 
                int i, j;
                l_173 = ((g_58[(l_128 + 1)] | 0x69CC3E7F264C02D8LL) >= g_58[(l_128 + 1)]);
                return g_2[l_128][(l_128 + 1)];
            }
        }
        l_180 = (safe_div_func_uint16_t_u_u(((l_173 = (l_179 |= (((safe_unary_minus_func_int32_t_s((g_58[1] >= ((l_128 = (l_29 & (safe_add_func_int32_t_s_s(g_3, 4294967290UL)))) ^ l_29)))) <= l_136) || (-5L)))) == 0xDCL), g_69));
        for (l_128 = 0; (l_128 >= 0); l_128 -= 1)
        { 
            uint32_t l_182 = 0x37CEF4F5L;
            int32_t l_211 = 0x4F27B7FAL;
            int32_t l_222 = 0L;
            int32_t l_223 = (-6L);
            int64_t l_233 = 0L;
            for (g_40 = 0; (g_40 <= 0); g_40 += 1)
            { 
                int i, j;
                l_180 = g_2[g_40][l_128];
            }
            if (g_69)
                goto lbl_181;
            if (l_182)
            { 
                int32_t l_201 = 1L;
                g_3 = (safe_mod_func_int64_t_s_s((((((!((safe_rshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((safe_add_func_int64_t_s_s((((g_42 = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((((l_180 <= (((l_128 > (g_69--)) < (0xB3813AB9L == 0x4D477D69L)) | l_201)) || 0x5DL) | 0x07BBA012L))), l_173)), (-4L))), 0)) <= g_58[1])) & g_164[0][2]) == l_29), g_137)) <= (-1L)), l_201)), l_201)) || 3UL)) && l_179) != 1L) >= g_3) >= 0x459EL), 0xE83F6A43E87FF4EDLL));
                l_223 = (safe_sub_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_222 = ((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((~((l_211 = 0xC4L) & (safe_lshift_func_int16_t_s_s(0L, 6)))), ((safe_unary_minus_func_int32_t_s((safe_mul_func_uint8_t_u_u((((+((safe_lshift_func_uint8_t_u_s((safe_sub_func_int16_t_s_s(0x1CCFL, l_136)), 0)) | l_128)) , l_182) , l_182), 0xC0L)))) ^ 6UL))), g_72)) > g_58[0])), 1UL)) <= g_58[0]), l_173));
            }
            else
            { 
                int32_t l_230 = 0xB484F157L;
                int32_t l_234 = 0x36BD08AEL;
                l_234 = (safe_mul_func_int8_t_s_s(g_127, ((((safe_sub_func_uint16_t_u_u((((safe_mod_func_uint32_t_u_u((l_230 != (safe_rshift_func_int16_t_s_u((l_233 != g_137), l_223))), (-1L))) < 0UL) > l_173), 0UL)) > 0xAFECL) > l_182) , 0x45L)));
                g_3 = (-1L);
            }
        }
    }
    return g_58[1];
}



static int32_t  func_4(int64_t  p_5, const uint64_t  p_6)
{ 
    int32_t l_90 = 0x11437717L;
    for (p_5 = 1; (p_5 != (-15)); --p_5)
    { 
        g_91 = ((safe_rshift_func_uint16_t_u_s(65533UL, 7)) && (l_90 = 0x9E5B7364L));
    }
    g_92 |= (4L || 0x282FL);
    return p_5;
}



static int16_t  func_11(int16_t  p_12, const uint8_t  p_13, uint8_t  p_14, int32_t  p_15)
{ 
    uint32_t l_36 = 8UL;
    int32_t l_37 = 0x7B17B4D2L;
    int32_t l_43 = 0xEEA39BA5L;
    int32_t l_44 = (-4L);
    int32_t l_45 = 0xA7E8B7DDL;
    int32_t l_46 = 1L;
    int64_t l_57 = (-9L);
    uint32_t l_82 = 0xC35E3C92L;
    if (g_2[0][2])
    { 
        const int64_t l_39 = 4L;
        l_36 |= (safe_mul_func_int16_t_s_s((-9L), (g_2[0][2] , (safe_sub_func_int8_t_s_s((safe_sub_func_int64_t_s_s(g_3, p_15)), 255UL)))));
        for (p_15 = 0; (p_15 >= 0); p_15 -= 1)
        { 
            int64_t l_38 = 0xB5FB49A5C1B09C82LL;
            l_37 = 0L;
            if (p_13)
                continue;
            for (p_12 = 0; (p_12 >= 0); p_12 -= 1)
            { 
                int i, j;
                l_38 = g_2[p_15][(p_15 + 1)];
                if (l_39)
                    break;
            }
        }
    }
    else
    { 
        int32_t l_41[4][2] = {{1L,(-1L)},{1L,1L},{(-1L),1L},{1L,(-1L)}};
        int i, j;
        p_15 ^= (((g_2[0][0] && ((g_3 != (g_40 = p_12)) && l_41[3][1])) != 2UL) ^ p_13);
    }
    if ((((++p_14) && ((0xE882L >= (g_58[1] = (safe_lshift_func_uint8_t_u_u(l_44, ((safe_lshift_func_uint8_t_u_u(((l_57 &= (safe_add_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(l_36, l_36)), 0L))) != l_46), 3)) > 0x7048L))))) & l_36)) >= 0x9A83ADABL))
    { 
        uint16_t l_70 = 0x5AF7L;
        for (g_42 = 0; (g_42 >= 0); g_42 -= 1)
        { 
            int32_t l_59 = 6L;
            int64_t l_71[4];
            int i;
            for (i = 0; i < 4; i++)
                l_71[i] = 0x38BBD88186F270ADLL;
            if (g_58[(g_42 + 1)])
            { 
                l_59 = 0xA847E08AL;
            }
            else
            { 
                uint32_t l_68 = 0x697A12B2L;
                l_70 = (((safe_rshift_func_uint16_t_u_u(p_12, ((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((g_69 = (safe_mod_func_int16_t_s_s((l_68 || (0xB9L == p_15)), p_14))) | g_58[(g_42 + 1)]), 0x466640DD146F1888LL)), g_58[1])) , g_2[0][1]))) && p_15) & 0xABD119E2L);
                if (g_3)
                    continue;
                if (l_71[0])
                    continue;
            }
            for (p_15 = 0; (p_15 <= 0); p_15 += 1)
            { 
                l_59 = (p_14 & ((g_72 = (g_58[1] , p_13)) & (-6L)));
            }
        }
        g_81 = (safe_mul_func_int8_t_s_s(((((((safe_rshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((g_42 ^= l_70), ((p_14 ^= l_45) ^ (((safe_div_func_uint64_t_u_u(((p_15 , 0xB9L) , p_15), p_13)) ^ g_3) , g_3)))), g_69)) >= g_58[1]) , l_70) <= p_13) ^ g_72) == g_3), 1L));
    }
    else
    { 
        --l_82;
        return g_69;
    }
    return g_58[0];
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
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_164[i][j], "g_164[i][j]", print_hash_value);

        }
    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
