// SPDX-License-Identifier: MIT
// cctest_csmith_fff53725.c --- cctest case csmith_fff53725 (csmith seed 4294260517)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x888d2b44 */

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

// Options:   -s 4294260517 -o /tmp/csmith_gen_evwfyv2n/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static uint32_t g_6[3] = {6UL,6UL,6UL};
static uint32_t g_26[3] = {4294967295UL,4294967295UL,4294967295UL};
static int64_t g_29 = 6L;
static int32_t g_35 = 0L;
static int32_t g_36[2][3][4] = {{{0L,0xF744ED25L,(-4L),(-4L)},{0x80254F8DL,0x80254F8DL,0x6FBC6A68L,0xC17854C3L},{0x80254F8DL,(-9L),(-4L),0x80254F8DL}},{{0L,0xC17854C3L,0L,(-4L)},{0xF744ED25L,0xC17854C3L,0x6FBC6A68L,0x80254F8DL},{0xC17854C3L,(-9L),(-9L),0xC17854C3L}}};
static int64_t g_48 = 0x149F7FAE0CD5C0F4LL;
static uint16_t g_51 = 0x33DCL;
static uint64_t g_63 = 8UL;
static int32_t g_71 = 1L;
static uint8_t g_79[2] = {0xA5L,0xA5L};
static int64_t g_90 = 0x106FA44EC192D0F5LL;
static int32_t g_96 = 0L;
static uint64_t g_97 = 0xA8E5F853116D361FLL;
static int8_t g_129[4] = {0x9FL,0x9FL,0x9FL,0x9FL};
static int8_t g_130 = 0xF1L;
static int8_t g_132[1] = {0xF2L};
static uint16_t g_133 = 0x14C2L;
static int32_t g_157 = (-8L);
static const int32_t g_169[5][1][3] = {{{1L,1L,8L}},{{1L,1L,8L}},{{1L,1L,8L}},{{1L,1L,1L}},{{1L,1L,1L}}};
static uint32_t g_236[1] = {18446744073709551615UL};
static uint8_t g_248 = 1UL;



static int32_t  func_1(void);
static int8_t  func_7(uint8_t  p_8, uint8_t  p_9, uint32_t  p_10, int32_t  p_11, int8_t  p_12);
static uint32_t  func_13(uint64_t  p_14);
static uint64_t  func_15(int64_t  p_16);




static int32_t  func_1(void)
{ 
    int32_t l_54 = 0L;
    int32_t l_101[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
    const int64_t l_251 = 0x3963281A18FF7EC8LL;
    int i;
    g_248 = ((safe_mul_func_int16_t_s_s(0x860BL, (safe_mul_func_uint8_t_u_u(g_6[2], func_7((func_13((l_54 = func_15(g_6[2]))) , 0xDDL), g_6[2], g_36[1][2][2], g_90, l_101[3]))))) , 0x4460A3BBL);
    g_157 = (safe_mul_func_int16_t_s_s(((0x161A44FBL > l_54) | (((g_29 = (((l_251 < (((l_101[3] &= 0L) < 65535UL) != 0xCFL)) | 0UL) < l_54)) , (-1L)) <= 0x98L)), g_129[2]));
    return g_6[1];
}



static int8_t  func_7(uint8_t  p_8, uint8_t  p_9, uint32_t  p_10, int32_t  p_11, int8_t  p_12)
{ 
    uint64_t l_112[4];
    int32_t l_125 = (-7L);
    int16_t l_126 = 0xC88EL;
    uint64_t l_175 = 0xC5922DC5F9BFDDA3LL;
    uint32_t l_181 = 5UL;
    int32_t l_235[3];
    uint8_t l_247 = 255UL;
    int i;
    for (i = 0; i < 4; i++)
        l_112[i] = 1UL;
    for (i = 0; i < 3; i++)
        l_235[i] = 0xFB4F11C8L;
    if ((p_12 , (safe_div_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((0xF7B9E3EC41181933LL ^ (safe_lshift_func_int8_t_s_u(g_51, 3))), l_112[3])), g_96)) , 6L), g_36[1][2][2])) , 0x83L), (-2L)))))
    { 
        int16_t l_127 = (-2L);
        int32_t l_128 = 0x1B86E869L;
        for (p_9 = 0; (p_9 <= 1); p_9 += 1)
        { 
            int32_t l_131 = 0x36335431L;
            int i;
            l_125 = (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((65526UL > (safe_add_func_int8_t_s_s((g_26[(p_9 + 1)] || (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_s(5UL, 11)), l_112[0]))), p_10))) , 3UL), 0UL)), 0xC1C0L)), 0xF2F5847AL));
            g_133++;
            for (g_51 = 0; (g_51 <= 1); g_51 += 1)
            { 
                int i;
                l_125 |= (safe_add_func_uint64_t_u_u(g_51, (~(safe_mul_func_uint8_t_u_u((g_79[g_51] = (safe_mul_func_uint16_t_u_u((++g_133), ((safe_div_func_uint32_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_9, 11)) == (((g_96 , (safe_lshift_func_uint16_t_u_s((g_51 >= 0x18B0L), p_12))) == p_8) == g_36[1][1][3])) , 0x2D4CACFDL) && 0x8C0895B4L), p_10)) < g_26[0])))), g_129[2])))));
            }
        }
        for (g_97 = 0; (g_97 > 49); g_97 = safe_add_func_uint64_t_u_u(g_97, 4))
        { 
            for (g_96 = 0; (g_96 != 7); ++g_96)
            { 
                g_71 = p_8;
            }
            return p_10;
        }
        for (l_125 = 18; (l_125 > (-8)); --l_125)
        { 
            uint64_t l_158 = 18446744073709551607UL;
            --l_158;
            for (g_35 = 0; (g_35 >= 1); g_35 = safe_add_func_uint64_t_u_u(g_35, 6))
            { 
                int64_t l_170 = 0x6FF76FE41880D0CBLL;
                l_170 &= (4294967295UL > (safe_mod_func_uint8_t_u_u(255UL, ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x27L, 7)), (g_71 <= g_26[2]))) , g_169[3][0][1]))));
                g_157 = ((-1L) <= (g_79[0] && (((safe_lshift_func_int8_t_s_u((p_12 | ((safe_mod_func_int64_t_s_s((-3L), 1UL)) , l_170)), 6)) , l_175) != 0x179A001620824398LL)));
            }
        }
    }
    else
    { 
        const int64_t l_180 = 0x376BBF86D33B1CCBLL;
        int32_t l_206 = 0xE789F30DL;
        int32_t l_228[3];
        int i;
        for (i = 0; i < 3; i++)
            l_228[i] = (-1L);
        g_71 = ((g_157 ^= (safe_sub_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_s(l_180, 0)) <= l_181) & (((safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((g_96 , 18446744073709551615UL), p_9)), 7)) <= 0xF1BEL) , 0xF5L)) > l_180), 253UL))) & g_36[0][2][0]);
        for (p_8 = 0; (p_8 > 2); p_8++)
        { 
            uint16_t l_207 = 0UL;
            int32_t l_223 = 0x365C1E2DL;
            for (g_63 = (-3); (g_63 >= 14); g_63++)
            { 
                int32_t l_205 = 4L;
                g_157 = (safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(g_130, 0xF94CL)) | (safe_rshift_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_add_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((+l_180), 0UL)), p_10)) < (-8L)), 14)) , g_63), l_205)), 1))), l_181));
            }
            l_207--;
            if (((safe_mul_func_uint16_t_u_u((g_51 = l_206), (safe_div_func_uint64_t_u_u(g_79[0], l_206)))) ^ l_175))
            { 
                uint32_t l_214 = 0x43A831FEL;
                ++l_214;
                if (p_9)
                    continue;
                return g_36[1][2][2];
            }
            else
            { 
                g_71 = (((l_228[1] = ((safe_sub_func_uint16_t_u_u(0xE7BAL, (safe_mul_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_223 = 0x3D96L), (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((((g_133++) > (((safe_rshift_func_uint16_t_u_u((0UL >= (safe_lshift_func_int16_t_s_u((((-1L) <= 0UL) , (-1L)), l_180))), l_112[1])) & l_180) & 0xE1308BACL)) | l_228[0]), g_71)), 3)))), g_48)))) != 7L)) , g_96) >= p_10);
                --g_236[0];
            }
        }
        l_235[0] = l_175;
    }
    g_71 = (p_10 < (safe_sub_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((((safe_rshift_func_uint8_t_u_u(g_96, 3)) , 0xD6FF152E6D4CF9D2LL) <= l_247), 4)), g_79[0])), g_51)));
    return g_97;
}



static uint32_t  func_13(uint64_t  p_14)
{ 
    uint64_t l_57[3][3];
    int32_t l_69 = 0x1979B998L;
    int32_t l_77 = (-8L);
    int32_t l_78 = 0xC80536D0L;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_57[i][j] = 1UL;
    }
    if ((safe_lshift_func_int16_t_s_s(l_57[1][2], 0)))
    { 
        int8_t l_62 = 0x39L;
        int32_t l_68 = 0x4A140C50L;
        int32_t l_70 = (-3L);
        int32_t l_72 = (-9L);
        l_72 |= (p_14 < (safe_sub_func_int8_t_s_s((g_71 &= (((safe_sub_func_uint64_t_u_u((g_63--), 0x9233C9E48991CD3CLL)) >= (l_70 ^= (safe_rshift_func_int16_t_s_u(((l_68 = l_57[0][0]) || ((l_68 <= l_69) | p_14)), l_62)))) & (-1L))), g_26[2])));
    }
    else
    { 
        int64_t l_73 = 0x317A7F359A1248F7LL;
        l_73 |= 0L;
    }
    for (p_14 = 0; (p_14 <= 2); p_14 += 1)
    { 
        int8_t l_74 = 0xCBL;
        int32_t l_75 = 0xEAA3CE9DL;
        int32_t l_76[5][2][1] = {{{0xA9E7339AL},{0x043A44ADL}},{{0xA9E7339AL},{0x043A44ADL}},{{0xA9E7339AL},{0x043A44ADL}},{{0xA9E7339AL},{0x043A44ADL}},{{0xA9E7339AL},{0x043A44ADL}}};
        int i, j, k;
        for (g_35 = 2; (g_35 >= 0); g_35 -= 1)
        { 
            for (g_29 = 0; (g_29 <= 2); g_29 += 1)
            { 
                int i, j;
                l_74 = g_26[p_14];
                if (l_57[p_14][g_35])
                    break;
            }
            g_79[0]++;
            for (g_48 = 2; (g_48 >= 0); g_48 -= 1)
            { 
                int i;
                g_71 = g_26[g_35];
            }
        }
        for (g_51 = 0; (g_51 <= 2); g_51 += 1)
        { 
            int32_t l_95[5] = {0x8C465D2EL,0x8C465D2EL,0x8C465D2EL,0x8C465D2EL,0x8C465D2EL};
            int i, j;
            l_75 = (safe_mul_func_int16_t_s_s(((l_57[g_51][g_51] >= 0L) && (l_57[p_14][p_14] , (65532UL >= 65535UL))), l_57[g_51][g_51]));
            if ((safe_rshift_func_int16_t_s_s(p_14, 1)))
            { 
                int32_t l_93[2][1][5] = {{{(-1L),0xA4A23C0FL,(-1L),(-1L),(-1L)}},{{(-1L),0xA4A23C0FL,(-1L),(-1L),(-1L)}}};
                int32_t l_94[2][3];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_94[i][j] = 8L;
                }
                l_93[0][0][1] = (p_14 == (((l_94[1][0] &= (safe_mul_func_int8_t_s_s(((l_57[p_14][g_51] = p_14) <= (((((((((l_76[4][1][0] ^= g_90) | ((safe_mul_func_uint16_t_u_u(l_93[0][0][1], p_14)) > l_93[0][0][2])) , l_93[1][0][4]) > 0x0C03L) >= 0x1EL) > p_14) < 65535UL) > l_78) <= l_75)), 0x78L))) <= l_95[4]) || g_79[0]));
                if (l_95[1])
                    break;
            }
            else
            { 
                int64_t l_100 = (-7L);
                g_97++;
                l_100 |= 0xD2A8C76CL;
            }
        }
    }
    l_77 = g_79[0];
    return g_79[0];
}



static uint64_t  func_15(int64_t  p_16)
{ 
    uint8_t l_19[4];
    int32_t l_24 = 0x2F144811L;
    int32_t l_25 = 0x6D8BC0D1L;
    uint8_t l_39[2];
    int i;
    for (i = 0; i < 4; i++)
        l_19[i] = 252UL;
    for (i = 0; i < 2; i++)
        l_39[i] = 255UL;
    if ((safe_lshift_func_int16_t_s_s((0x0315362DAAB72B21LL >= l_19[3]), ((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(((l_19[3] | ((18446744073709551613UL >= p_16) ^ g_6[2])) , 0x7051L), 10)), 1L)) != l_19[0]))))
    { 
        ++g_26[2];
    }
    else
    { 
        int64_t l_34[5] = {0xFF57440E708BEE6DLL,0xFF57440E708BEE6DLL,0xFF57440E708BEE6DLL,0xFF57440E708BEE6DLL,0xFF57440E708BEE6DLL};
        int32_t l_37 = 0L;
        int32_t l_38 = 0x265879A2L;
        int i;
        if (((((g_6[2] | (g_29 = (-8L))) > ((g_48 = (((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((((l_37 ^= (((--l_39[1]) != (safe_div_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(g_6[0], g_26[0])), 1)), p_16))) < l_38)) != (-10L)) , (-2L)) != 0xE2E7C525AC89D693LL), 14)), 0L)) , g_6[2]) > 0x9069002FCE4A839BLL)) > l_38)) && g_6[2]) != 1UL))
        { 
            uint8_t l_49 = 0x21L;
            return l_49;
        }
        else
        { 
            uint32_t l_50 = 0x7FCF6239L;
            l_37 = l_50;
            return l_50;
        }
    }
    g_51--;
    return p_16;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);

    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_26[i], "g_26[i]", print_hash_value);

    }
    transparent_crc(g_29, "g_29", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_36[i][j][k], "g_36[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_79[i], "g_79[i]", print_hash_value);

    }
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_129[i], "g_129[i]", print_hash_value);

    }
    transparent_crc(g_130, "g_130", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_132[i], "g_132[i]", print_hash_value);

    }
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_169[i][j][k], "g_169[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_236[i], "g_236[i]", print_hash_value);

    }
    transparent_crc(g_248, "g_248", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
