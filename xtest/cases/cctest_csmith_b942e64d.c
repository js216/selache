// SPDX-License-Identifier: MIT
// cctest_csmith_b942e64d.c --- cctest case csmith_b942e64d (csmith seed 3108169293)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x45f0b622 */
/* @exp_ticks 0x36fe */

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

// Options:   -s 3108169293 -o /tmp/csmith_gen_ke7q3wx5/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2 = 0L;
static int32_t g_6 = 1L;
static int32_t g_7 = 8L;
static uint8_t g_61[3][4] = {{0xD3L,0xD3L,0xD3L,0xD3L},{0xD3L,0xD3L,0xD3L,0xD3L},{0xD3L,0xD3L,0xD3L,0xD3L}};
static int64_t g_66 = (-1L);
static int32_t g_75[4] = {0L,0L,0L,0L};
static uint16_t g_78 = 65535UL;
static uint16_t g_119 = 65535UL;
static int64_t g_132 = 0x9A06140C101F1329LL;
static int8_t g_134 = 9L;
static uint32_t g_135 = 0xA2A759B8L;
static int8_t g_148 = 1L;
static int32_t g_163 = (-3L);
static int64_t g_174 = 0xECC9C5E52C1F7ECBLL;
static uint64_t g_175[3] = {0x6AC27E58AAE48550LL,0x6AC27E58AAE48550LL,0x6AC27E58AAE48550LL};
static uint16_t g_196 = 8UL;



static uint8_t  func_1(void);
static int16_t  func_14(int64_t  p_15, int64_t  p_16, int16_t  p_17, int8_t  p_18, uint8_t  p_19);
static uint16_t  func_41(int8_t  p_42, uint32_t  p_43, uint16_t  p_44, const int64_t  p_45);




static uint8_t  func_1(void)
{ 
    int32_t l_8 = 1L;
    int32_t l_189 = (-6L);
    uint32_t l_214[1][3];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_214[i][j] = 18446744073709551615UL;
    }
    for (g_2 = (-12); (g_2 < (-18)); g_2 = safe_sub_func_uint32_t_u_u(g_2, 2))
    { 
        int32_t l_5[1][4] = {{0L,0L,0L,0L}};
        uint16_t l_9 = 0x64CAL;
        int i, j;
        for (g_6 = 0; g_6 < 1; g_6 += 1)
        {
            for (g_7 = 0; g_7 < 4; g_7 += 1)
            {
                l_5[g_6][g_7] = (-4L);
            }
        }
        l_9 = l_8;
    }
    for (g_2 = 0; (g_2 != 0); g_2 = safe_add_func_uint8_t_u_u(g_2, 7))
    { 
        uint8_t l_20[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
        int32_t l_171 = 0x5127764FL;
        int i, j;
        if ((func_14(l_20[3][1], g_6, ((((((safe_add_func_int32_t_s_s((!l_8), 0x91B4956EL)) , 6UL) != g_2) | l_8) , g_2) != 255UL), l_8, l_8) || 0UL))
        { 
            int16_t l_172 = 0xF1F2L;
            int32_t l_173 = (-3L);
            ++g_175[2];
            if (g_148)
                continue;
            g_7 = (safe_sub_func_uint64_t_u_u((safe_mul_func_int8_t_s_s(l_8, (~((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_171 = l_20[1][0]), (-1L))), g_66)) , g_174)))), 0x8E28627D2885B45BLL));
        }
        else
        { 
            for (g_174 = 0; (g_174 <= 2); g_174 += 1)
            { 
                int i;
                g_7 = g_175[g_174];
                l_189 = (safe_mod_func_int32_t_s_s(((0xA8CFL ^ l_20[3][1]) <= ((g_2 && l_8) ^ g_175[g_174])), (-1L)));
            }
        }
    }
    for (g_6 = 3; (g_6 >= 0); g_6 -= 1)
    { 
        uint64_t l_213 = 0x59A891246E79F7EBLL;
        int i;
        if ((((((g_75[g_6] == (((g_6 && ((safe_lshift_func_int16_t_s_s((g_196 = (safe_lshift_func_int16_t_s_u((safe_mul_func_int16_t_s_s(l_189, 1L)), g_6))), g_61[0][2])) , l_8)) | g_78) != l_189)) , g_134) == g_75[g_6]) ^ g_75[g_6]) && g_135))
        { 
            int64_t l_206 = 0L;
            if (g_163)
                break;
            for (g_132 = 0; (g_132 < 20); ++g_132)
            { 
                uint8_t l_205 = 0x24L;
                g_2 = ((safe_lshift_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((g_175[2] && (safe_mod_func_int32_t_s_s(l_205, g_174))) != g_7) , g_6), l_206)), g_78)) < l_205);
            }
            l_189 = (safe_add_func_int32_t_s_s(((((safe_add_func_int8_t_s_s((((g_75[g_6] >= ((l_8 || (((safe_sub_func_uint16_t_u_u(l_206, g_135)) != g_175[2]) && g_135)) , l_213)) & 0x99347C11L) > 0xC9495E14DD746744LL), l_214[0][1])) && 0x2BL) <= l_206) <= 0x17C70540L), 0xD52DE870L));
        }
        else
        { 
            int64_t l_230 = (-10L);
            uint32_t l_231[4][2] = {{0UL,0UL},{0UL,0UL},{0UL,0UL},{0UL,0UL}};
            int i, j;
            for (l_189 = 0; l_189 < 3; l_189 += 1)
            {
                for (g_119 = 0; g_119 < 4; g_119 += 1)
                {
                    g_61[l_189][g_119] = 0xA0L;
                }
            }
            if ((safe_add_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(l_214[0][2], (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_int64_t_s((safe_sub_func_int32_t_s_s((-1L), (((safe_sub_func_int8_t_s_s(((l_214[0][2] < 255UL) >= g_196), g_163)) || l_189) , 0xB1F24016L))))) < g_75[g_6]), g_196)))), 0xCFL)) || g_78), 1L)))
            { 
                uint32_t l_229 = 4UL;
                l_229 = (~0xF96642D9L);
                l_189 = l_229;
            }
            else
            { 
                if (g_148)
                    break;
                l_189 |= g_7;
                g_7 |= (l_213 , g_66);
            }
            l_231[1][0]++;
        }
        for (g_174 = 0; (g_174 >= (-12)); g_174 = safe_sub_func_uint64_t_u_u(g_174, 6))
        { 
            int8_t l_240 = 9L;
            for (l_213 = 0; (l_213 >= 23); ++l_213)
            { 
                g_7 |= (((safe_sub_func_uint64_t_u_u((l_189 ^= (g_134 ^ (g_2 ^ l_240))), g_78)) ^ g_75[1]) , 1L);
            }
        }
        for (g_135 = 0; (g_135 <= 0); g_135 += 1)
        { 
            return l_213;
        }
    }
    return g_119;
}



static int16_t  func_14(int64_t  p_15, int64_t  p_16, int16_t  p_17, int8_t  p_18, uint8_t  p_19)
{ 
    int32_t l_33 = (-1L);
    int32_t l_34[4][4];
    uint32_t l_87 = 8UL;
    uint32_t l_112[1][2];
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_34[i][j] = 0L;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_112[i][j] = 0x77E0797FL;
    }
lbl_170:
    if (((7L <= 0x68451F1EL) | 3UL))
    { 
        int32_t l_32 = 0xD9403132L;
        int32_t l_67 = 5L;
        if ((safe_add_func_uint8_t_u_u((safe_div_func_int32_t_s_s((l_33 = ((safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(l_32, g_6)), (p_16 , 0x209A488DL))) != g_7)), l_32)), l_34[2][2])))
        { 
            uint8_t l_46[3];
            int i;
            for (i = 0; i < 3; i++)
                l_46[i] = 0x59L;
            g_61[2][2] |= (safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((func_41(l_46[0], g_6, (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u((p_19 = (g_2 == p_17)), g_2)), l_32)), g_7) != (-5L)), g_6)), g_2)), 0x8E87L));
            l_33 = (l_34[3][1] = ((((safe_sub_func_int8_t_s_s(p_19, ((l_67 = ((p_15 == ((g_66 = ((safe_lshift_func_int8_t_s_s(((7L == p_18) > l_34[2][2]), 2)) > 0x55L)) | l_32)) == 0x6677L)) & p_18))) ^ p_18) , p_17) < p_19));
        }
        else
        { 
            int8_t l_68 = 0x4FL;
            int32_t l_76 = 0L;
            int32_t l_77 = (-1L);
            l_68 = (1UL | p_18);
            for (p_17 = 0; (p_17 <= 23); p_17++)
            { 
                l_67 |= p_15;
                return p_18;
            }
            l_67 = (safe_sub_func_int64_t_s_s(((safe_mul_func_uint16_t_u_u((++g_78), (safe_mod_func_uint16_t_u_u(p_15, ((safe_mod_func_int64_t_s_s((p_15 & (safe_div_func_uint16_t_u_u((g_66 <= g_61[0][1]), 65531UL))), g_61[1][1])) || 0x5158L))))) , g_75[2]), 0x96E72D3BEAFE2AE0LL));
        }
        l_34[1][3] = ((((g_66 = l_87) && 0xA85175EF58E71DF6LL) || (0xDCE2L < p_19)) ^ 255UL);
    }
    else
    { 
        uint16_t l_90 = 0x751AL;
        int32_t l_96[4][1];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_96[i][j] = (-1L);
        }
        g_6 = (safe_add_func_uint32_t_u_u((l_90 | (((+(safe_mod_func_int64_t_s_s(((l_96[1][0] &= ((g_61[2][2] = ((safe_div_func_int64_t_s_s(0xFA0F5A0A6BD2E779LL, (g_2 || p_17))) != g_61[0][3])) ^ p_19)) == 65535UL), 0xF45F95DF25DB31B8LL))) || 2L) | p_16)), 1L));
    }
    for (g_7 = 0; (g_7 == (-8)); g_7 = safe_sub_func_int8_t_s_s(g_7, 3))
    { 
        int16_t l_99 = (-3L);
        uint32_t l_100[3];
        int32_t l_101 = 0x064EC293L;
        int32_t l_131[2][2] = {{0xE05CF484L,0xE05CF484L},{0xE05CF484L,0xE05CF484L}};
        int16_t l_133[3];
        int i, j;
        for (i = 0; i < 3; i++)
            l_100[i] = 0xA9C08A91L;
        for (i = 0; i < 3; i++)
            l_133[i] = 1L;
        if ((l_99 , (l_100[2] ^ ((((g_75[3] ^ 0x516CL) >= 0x4BL) , 0L) ^ l_101))))
        { 
            uint16_t l_104 = 65534UL;
            int32_t l_111 = 0x1B120E24L;
            if (((l_104 = (-1L)) && ((g_75[1] > (safe_rshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((((l_111 = (((safe_rshift_func_uint8_t_u_s(p_19, 6)) != g_2) , 0x8B34L)) || l_33) | g_78) & 0xCEDD96C0B5FFC7B4LL), l_112[0][1])), g_7))) > l_99)))
            { 
                int64_t l_122[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_122[i] = 0xAD06F0504CB07E90LL;
                l_122[3] = (((safe_sub_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u(0x9AL, (safe_mul_func_uint16_t_u_u((g_119 , ((((((safe_mul_func_uint16_t_u_u(((-1L) < g_7), p_18)) | p_16) <= p_18) , p_19) || l_33) <= p_18)), p_16)))) > 1UL), 0x64E3L)) <= p_17) && p_15);
            }
            else
            { 
                int32_t l_129[4][3] = {{0x04AE8C7AL,0x04AE8C7AL,0x801E7C2DL},{0L,0L,0x04AE8C7AL},{0L,0L,0x04AE8C7AL},{0L,0L,0x04AE8C7AL}};
                int i, j;
                l_129[3][1] = (safe_div_func_uint64_t_u_u((safe_lshift_func_int8_t_s_u(((((l_34[2][2] < (safe_sub_func_int32_t_s_s((l_33 &= g_61[2][2]), (4L || p_17)))) < (-1L)) | 0UL) & p_16), l_111)), 0x2993284A0DC95FA1LL));
                if (p_18)
                    break;
            }
            return g_7;
        }
        else
        { 
            uint32_t l_130 = 1UL;
            l_130 = (18446744073709551615UL && l_112[0][0]);
            if (p_16)
                continue;
        }
        g_135--;
        l_33 &= ((safe_sub_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u((+l_34[2][2]), 7L)) , (l_34[1][1] != 0xC7E4F71DL)) != g_7), 1UL)) <= l_100[2]) <= l_101) <= l_100[2]), 0xE00AL)) & p_17);
    }
    for (g_6 = (-27); (g_6 != (-26)); g_6++)
    { 
        int8_t l_155 = 0x46L;
        if (g_61[2][2])
        { 
            int8_t l_147 = 0xB8L;
            l_147 = (-8L);
            for (g_7 = 0; (g_7 <= 2); g_7 += 1)
            { 
                int i, j;
                g_148 ^= 0xC4140F93L;
                l_34[(g_7 + 1)][g_7] = (((safe_rshift_func_int8_t_s_u(0x36L, 3)) , l_34[(g_7 + 1)][g_7]) , 0x3C42993BL);
            }
            if ((((safe_div_func_uint64_t_u_u(0x26A71AB2586FDAF3LL, 4UL)) > ((safe_sub_func_uint16_t_u_u(l_147, l_147)) , 0x64C6L)) == p_19))
            { 
                g_7 = (-8L);
                l_155 = p_16;
                if (l_147)
                    break;
            }
            else
            { 
                const int8_t l_162 = 0xBEL;
                g_163 = (safe_rshift_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((g_7 = (l_34[2][2] = (0xFCL || (((p_17 , l_162) , p_17) ^ l_34[2][2])))) || g_66), p_19)), 1)) , 0L) > p_19), 5));
            }
        }
        else
        { 
            g_7 = (safe_mul_func_int16_t_s_s(((((safe_mod_func_int64_t_s_s(((p_16 | (p_19++)) , p_18), g_66)) ^ 9UL) || l_34[2][2]) & 0UL), g_134));
            for (g_135 = 0; (g_135 <= 0); g_135 += 1)
            { 
                if (g_78)
                    goto lbl_170;
            }
        }
    }
    return g_61[2][2];
}



static uint16_t  func_41(int8_t  p_42, uint32_t  p_43, uint16_t  p_44, const int64_t  p_45)
{ 
    uint64_t l_51[3];
    int32_t l_59 = 4L;
    int32_t l_60 = 0L;
    int i;
    for (i = 0; i < 3; i++)
        l_51[i] = 0UL;
    g_7 = ((((-1L) != (l_51[2] > ((safe_div_func_int16_t_s_s((l_51[2] != g_2), (-4L))) != p_42))) > p_42) | 0x5A25L);
    l_60 ^= (255UL != (safe_add_func_uint8_t_u_u(((l_59 ^= (safe_sub_func_uint32_t_u_u((((g_2 <= (!(l_51[2] == p_44))) | l_51[1]) && g_2), g_7))) | p_43), g_6)));
    return l_51[1];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_61[i][j], "g_61[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_66, "g_66", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);

    }
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_175[i], "g_175[i]", print_hash_value);

    }
    transparent_crc(g_196, "g_196", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
