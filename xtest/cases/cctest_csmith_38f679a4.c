// SPDX-License-Identifier: MIT
// cctest_csmith_38f679a4.c --- cctest case csmith_38f679a4 (csmith seed 955677092)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x977a7f14 */
/* @exp_ticks 0x377c */

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

// Options:   -s 955677092 -o /tmp/csmith_gen_k_gch694/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static uint32_t g_15 = 0x707822E6L;
static int16_t g_47 = 0xD540L;
static int64_t g_50 = 0x77FC3FE767E7924ALL;
static uint32_t g_55 = 1UL;
static uint32_t g_66[3][2] = {{4294967294UL,4294967294UL},{4294967294UL,4294967294UL},{4294967294UL,4294967294UL}};
static int16_t g_67 = 0x76E6L;
static uint32_t g_74 = 0x8A300FF6L;
static int32_t g_89 = 0x788274EAL;
static uint32_t g_94 = 0xABBA7F7EL;
static uint32_t g_103 = 0xCF876E49L;
static uint32_t g_110 = 0UL;
static int64_t g_111 = 0xD930511C70F4A075LL;
static uint32_t g_123[1] = {0x05804987L};
static uint32_t g_126 = 18446744073709551611UL;
static uint64_t g_129 = 18446744073709551615UL;
static int32_t g_130 = (-8L);
static int32_t g_138 = (-1L);
static int32_t g_153 = (-4L);
static int32_t g_157[1][4] = {{(-1L),(-1L),(-1L),(-1L)}};
static uint32_t g_197[4] = {6UL,6UL,6UL,6UL};



static const uint16_t  func_1(void);
static int32_t  func_2(int8_t  p_3, int8_t  p_4, int32_t  p_5);
static uint16_t  func_10(int32_t  p_11, int32_t  p_12);




static const uint16_t  func_1(void)
{ 
    int16_t l_18[4][3] = {{0x9D5FL,0xC2FDL,0x9D5FL},{0x9D5FL,0xC2FDL,0x9D5FL},{0x9D5FL,0xC2FDL,0x9D5FL},{0x9D5FL,0xC2FDL,0x9D5FL}};
    int32_t l_19[2][2];
    int64_t l_163 = 0x4E6105D753EC00BELL;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_19[i][j] = 0xFA831EB2L;
    }
    if (func_2((safe_lshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(func_10(((safe_add_func_uint8_t_u_u(g_15, ((safe_lshift_func_uint8_t_u_s((l_18[2][0] ^= 255UL), 2)) >= l_19[1][0]))) == 0L), g_15), g_130)), 14)), l_19[1][0], l_19[1][0]))
    { 
        uint8_t l_176 = 0xB6L;
        for (g_50 = 1; (g_50 >= 0); g_50 -= 1)
        { 
            return g_103;
        }
        for (g_94 = (-10); (g_94 == 12); g_94++)
        { 
            uint8_t l_158 = 0x6EL;
            for (g_55 = 0; (g_55 <= 1); g_55 += 1)
            { 
                int32_t l_156[4] = {0x561D20EAL,0x561D20EAL,0x561D20EAL,0x561D20EAL};
                int i, j;
                --l_158;
                l_163 = (l_18[(g_55 + 1)][(g_55 + 1)] < (l_19[g_55][g_55] , (safe_mod_func_uint16_t_u_u((((l_19[g_55][g_55] = g_157[0][0]) >= g_50) > g_123[0]), l_18[2][0]))));
            }
            g_157[0][0] |= ((safe_div_func_int8_t_s_s(l_158, ((l_19[1][1] = (safe_add_func_int64_t_s_s((safe_div_func_int64_t_s_s(((safe_mod_func_uint32_t_u_u(l_18[1][1], (safe_div_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((1UL <= 0L) == l_158), l_176)), l_18[2][0])))) ^ 0x0CC138C4916DE7A7LL), g_103)), 0x5B0AE68E361316C4LL))) & 18446744073709551606UL))) , 1L);
        }
    }
    else
    { 
        int64_t l_183 = (-1L);
        int32_t l_184 = (-9L);
        for (g_74 = (-14); (g_74 < 19); g_74++)
        { 
            uint32_t l_187 = 0UL;
            int32_t l_188 = 0L;
            for (g_110 = 0; (g_110 != 59); g_110++)
            { 
                l_184 = ((safe_mod_func_int32_t_s_s(0x44315D36L, g_55)) >= (l_183 == g_15));
            }
            l_184 = l_19[0][0];
            l_188 = (((((safe_sub_func_int32_t_s_s((g_126 < 0xB1A04533268B7DADLL), 4294967295UL)) ^ g_103) || l_187) <= l_187) >= g_157[0][1]);
        }
        if ((g_157[0][0] = 0x67A201F2L))
        { 
            return l_184;
        }
        else
        { 
            uint32_t l_201 = 0xBD4F2632L;
            g_157[0][1] = ((safe_sub_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((g_197[0] , (safe_div_func_int8_t_s_s((g_66[1][0] | (+g_89)), l_163))), g_15)), l_163)), g_130)), l_201)) | 0xF95BEDFBL);
        }
    }
    return l_18[2][2];
}



static int32_t  func_2(int8_t  p_3, int8_t  p_4, int32_t  p_5)
{ 
    int32_t l_135[3];
    int i;
    for (i = 0; i < 3; i++)
        l_135[i] = 0xFFE84F9EL;
    for (g_67 = (-11); (g_67 != 6); g_67++)
    { 
        int8_t l_145 = 0x3FL;
        for (g_74 = 0; (g_74 >= 26); g_74++)
        { 
            l_145 = (l_135[0] , (safe_rshift_func_int8_t_s_s(((g_138 = g_110) <= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u(g_94, 1)), p_5)) && p_4), g_110))), p_5)));
            if (g_130)
                break;
        }
        if (p_5)
            continue;
        g_153 = (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((((~l_135[1]) <= (g_111 = (safe_mul_func_int8_t_s_s(0xBFL, p_4)))) == 0xC4L), 1UL)), l_145));
    }
    return g_138;
}



static uint16_t  func_10(int32_t  p_11, int32_t  p_12)
{ 
    uint32_t l_25 = 0xF72B5725L;
    int32_t l_29[3];
    int32_t l_30 = 0xEEF9A855L;
    uint32_t l_44 = 0x3B19D88CL;
    int64_t l_90 = 0x5CEFCB9D1C2D9EA4LL;
    uint32_t l_102 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 3; i++)
        l_29[i] = 0L;
    if ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((l_25 &= (safe_unary_minus_func_uint8_t_u(g_15))), (g_15 ^ (((+((safe_lshift_func_int16_t_s_s((l_29[1] = (g_15 && 0UL)), g_15)) , 0x23EDL)) , p_12) ^ 0xDD97L)))) | l_30), 11)))
    { 
        const uint64_t l_43 = 18446744073709551611UL;
        p_11 |= (((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(1L, ((((((safe_sub_func_int8_t_s_s((((p_12 == (safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(l_43, 0xD679BDD86BDAE894LL)), (-1L)))) <= l_43) != l_43), 249UL)) <= l_44) || 1UL) != g_15) | l_25) != 0xF7L))), 1L)) <= l_43) >= 0L);
        for (g_15 = 0; (g_15 >= 8); g_15 = safe_add_func_uint8_t_u_u(g_15, 7))
        { 
            int32_t l_49 = 0x481DB3AAL;
            if (g_15)
            { 
                if (p_11)
                    break;
                p_11 = (0x7C837E05L >= ((0x62E26A8AL > (-5L)) & g_15));
            }
            else
            { 
                g_47 = g_15;
            }
            if (l_30)
            { 
                return g_47;
            }
            else
            { 
                if (p_11)
                    break;
                p_11 = ((g_15 || ((p_11 > ((~(g_50 = (g_15 & l_49))) >= p_11)) | g_47)) , g_15);
            }
            for (g_47 = 0; (g_47 <= 2); g_47 += 1)
            { 
                int i;
                if (l_29[g_47])
                    break;
            }
        }
        g_66[1][0] = (safe_mul_func_uint16_t_u_u(g_50, ((safe_add_func_int64_t_s_s((g_55 &= g_50), (safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((((l_30 = ((safe_mul_func_int16_t_s_s(((((safe_div_func_int8_t_s_s((p_11 > 3L), g_50)) || p_11) <= g_50) != 0xD7B9L), g_15)) >= g_15)) && l_43) , 3L), 0x13L)), g_50)), 0x105CL)))) ^ 0x96AAL)));
    }
    else
    { 
        int32_t l_97[2];
        int i;
        for (i = 0; i < 2; i++)
            l_97[i] = (-1L);
        for (l_44 = 0; (l_44 <= 1); l_44 += 1)
        { 
            int32_t l_75 = 0L;
            int32_t l_76 = (-8L);
            int i;
            g_67 ^= 0x15A4C4AEL;
            if ((((((0x3AL > (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((l_75 &= ((((l_29[1] = l_29[l_44]) & (g_74 &= l_25)) , p_12) > p_11)), 0x1D01L)), l_76)) <= l_44) == p_11), 14))) && 0xBAL) & l_44) & 0x47B0CB41L) <= p_12))
            { 
                uint16_t l_82[2][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_82[i][j] = 65535UL;
                }
                p_11 = 0xB86846FFL;
                l_76 &= ((((+(safe_add_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u((l_29[l_44] < l_82[1][0]), ((safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_add_func_int16_t_s_s(((((g_89 |= p_11) != 1L) & (-9L)) | (-8L)), 65535UL)), 4294967293UL)), 0xFE19L)) != p_11))) | g_55), l_30))) < l_90) , p_11) == 1UL);
                l_76 = ((safe_mul_func_uint16_t_u_u((0UL | 0xC8L), (((g_67 != p_12) | 18446744073709551607UL) & 0x5C8DL))) , 0x9E83D486L);
            }
            else
            { 
                int32_t l_93 = 0x84BB253DL;
                g_94 = (((p_11 , g_15) && (l_93 &= p_12)) >= p_12);
                g_103 = ((((((safe_mod_func_uint16_t_u_u(l_97[1], (safe_add_func_int16_t_s_s(0x8046L, ((safe_lshift_func_uint16_t_u_u(((p_12 || g_94) , 0xDEB2L), l_102)) == g_74))))) <= l_97[1]) <= 0x89573D52L) <= g_94) <= l_90) ^ l_102);
                g_111 = ((safe_rshift_func_int8_t_s_u((0UL > (safe_mod_func_int8_t_s_s((p_11 | ((safe_mul_func_int8_t_s_s((g_110 = g_94), l_25)) <= l_25)), g_74))), 2)) , 0x1638B9B8L);
            }
            for (g_47 = 0; (g_47 <= 1); g_47 += 1)
            { 
                return g_74;
            }
            for (l_25 = 0; (l_25 <= 1); l_25 += 1)
            { 
                uint16_t l_116 = 0xC458L;
                p_11 = ((safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(l_116, 0x38A77D7D739AC8F4LL)), (((safe_rshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_29[2], g_111)), p_11)) || l_29[l_44]) <= p_12))) && g_110);
                g_123[0] ^= (((safe_add_func_uint64_t_u_u((g_55 ^ (0L && (((1L > l_29[1]) ^ 0x3A7E429369BD42CCLL) || l_116))), 0xF3380028DF6465DCLL)) , p_12) && p_11);
            }
        }
        for (g_74 = 0; (g_74 != 6); ++g_74)
        { 
            g_126--;
        }
    }
    g_129 = l_90;
    p_11 = l_25;
    return g_123[0];
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_47, "g_47", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_66[i][j], "g_66[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_123[i], "g_123[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_157[i][j], "g_157[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_197[i], "g_197[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
