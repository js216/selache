// SPDX-License-Identifier: MIT
// cctest_csmith_e24ff350.c --- cctest case csmith_e24ff350 (csmith seed 3796890448)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8d368104 */

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

// Options:   -s 3796890448 -o /tmp/csmith_gen_sl5qg_8m/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int16_t g_2 = 0xEB90L;
static uint8_t g_4 = 249UL;
static int32_t g_30[2][5][3] = {{{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L}},{{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L},{0xF62C4DF8L,0xF62C4DF8L,0xF62C4DF8L}}};
static int8_t g_46 = 0x71L;
static uint16_t g_58[1] = {65535UL};
static int16_t g_59 = (-1L);
static int16_t g_106 = 5L;
static int8_t g_130 = 1L;
static int16_t g_132 = 0x97BCL;
static int8_t g_133 = 0L;
static uint32_t g_238 = 7UL;
static uint32_t g_239[5] = {0x4DF67537L,0x4DF67537L,0x4DF67537L,0x4DF67537L,0x4DF67537L};



static uint32_t  func_1(void);
static int16_t  func_9(uint32_t  p_10);
static uint8_t  func_16(int32_t  p_17);
static uint8_t  func_22(uint64_t  p_23, int64_t  p_24, int32_t  p_25, uint64_t  p_26);




static uint32_t  func_1(void)
{ 
    int64_t l_3 = 0x2CB13638ECF54C3CLL;
    const int16_t l_13[2][5][1] = {{{(-1L)},{1L},{1L},{(-1L)},{0L}},{{(-1L)},{1L},{1L},{(-1L)},{0L}}};
    uint8_t l_138 = 0xEEL;
    uint16_t l_202 = 0x9519L;
    int32_t l_207[2][2] = {{1L,1L},{1L,1L}};
    int32_t l_222[1][2][1];
    uint8_t l_237 = 1UL;
    uint32_t l_272 = 18446744073709551610UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_222[i][j][k] = 0x7C989E8BL;
        }
    }
lbl_171:
    g_4++;
    if ((g_2 || (safe_rshift_func_int16_t_s_s(func_9(((safe_rshift_func_int16_t_s_u(g_4, l_13[0][2][0])) >= 0x9C3D069F4981FF29LL)), g_106))))
    { 
        int32_t l_153[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_153[i][j] = 1L;
        }
        for (g_59 = 0; (g_59 <= 0); g_59 += 1)
        { 
            int i;
            g_30[1][1][2] = (g_58[g_59] < (l_138 >= (~(g_2 > (safe_mul_func_uint16_t_u_u((g_133 , g_2), 1L))))));
        }
        g_30[1][1][2] = (0xE453FC6319732EC2LL >= (safe_lshift_func_int8_t_s_u(((safe_add_func_uint16_t_u_u(((safe_unary_minus_func_int64_t_s(g_2)) >= (((((safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_add_func_uint16_t_u_u(g_30[1][1][1], l_153[0][0])), g_133)), l_13[0][2][0])) < g_58[0]) > 0x3A0D7201L) || 8L) && l_13[1][0][0])), 0xCC67L)) || 18446744073709551615UL), l_3)));
    }
    else
    { 
        uint64_t l_169 = 0x2D19C51062BF1770LL;
        int32_t l_181 = 0x148F4751L;
        int32_t l_206[4] = {0x65B96844L,0x65B96844L,0x65B96844L,0x65B96844L};
        int8_t l_249 = 0L;
        int i;
        if ((((g_46 ^ (safe_mod_func_int64_t_s_s(0x35583E1B125E79E5LL, (safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_add_func_int8_t_s_s((g_130 = (safe_mul_func_uint16_t_u_u((~g_58[0]), (safe_add_func_uint64_t_u_u(l_138, l_169))))), g_2)) , g_133), 0xF5L)), l_169)), 5))))) || g_58[0]) || l_13[0][2][0]))
        { 
            uint32_t l_170 = 18446744073709551606UL;
            return l_170;
        }
        else
        { 
            int64_t l_201[4][1][4] = {{{0x14A6E1C48D9708B6LL,0x3EAABCA9CE858CEDLL,0x14A6E1C48D9708B6LL,0x14A6E1C48D9708B6LL}},{{0x3EAABCA9CE858CEDLL,0x3EAABCA9CE858CEDLL,1L,0x3EAABCA9CE858CEDLL}},{{0x3EAABCA9CE858CEDLL,0x14A6E1C48D9708B6LL,0x14A6E1C48D9708B6LL,0x3EAABCA9CE858CEDLL}},{{0x14A6E1C48D9708B6LL,0x3EAABCA9CE858CEDLL,0x14A6E1C48D9708B6LL,0x14A6E1C48D9708B6LL}}};
            int8_t l_204[4] = {1L,1L,1L,1L};
            int32_t l_205 = (-2L);
            uint32_t l_208 = 2UL;
            int32_t l_212 = 6L;
            int i, j, k;
            if (l_138)
                goto lbl_171;
            if ((safe_rshift_func_int8_t_s_s(g_59, 4)))
            { 
                uint64_t l_200 = 0xF48C2FE74D0DCD5FLL;
                int32_t l_203 = 0x696941D4L;
                uint8_t l_213 = 250UL;
                l_203 = (((g_132 = (safe_mul_func_uint16_t_u_u((((l_207[0][1] = ((safe_unary_minus_func_uint16_t_u((safe_mul_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((l_181 = g_30[0][2][0]) < (l_206[3] = (safe_lshift_func_uint16_t_u_u(65530UL, ((g_4 >= (l_205 &= (safe_rshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((safe_rshift_func_uint16_t_u_s((((safe_sub_func_int8_t_s_s(((l_201[0][0][3] = (l_200 = (l_169 >= 0x879D1BA2L))) , l_201[3][0][3]), 0xC1L)) , l_202) <= l_169), g_46)) < g_2) >= l_203), g_2)), g_2)), 3L)), l_204[1])), g_4)), g_30[0][1][2])))) < g_30[1][1][2]))))), 0x25L)), (-7L))))) <= g_30[1][1][1])) ^ 7L) <= 9UL), l_169))) || 0xBB94L) , l_206[3]);
                if (l_202)
                    goto lbl_211;
lbl_211:
                --l_208;
                l_213++;
            }
            else
            { 
                uint16_t l_223 = 0x7A91L;
                int64_t l_232[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_232[i][j] = 0xF8FBDC1381652B82LL;
                }
                l_223 = (safe_div_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(g_130, g_46)) <= l_3), (l_13[1][0][0] != g_30[0][1][1]))) ^ l_222[0][0][0]), g_59));
                g_239[4] &= ((g_132 = (((g_238 = (((safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((l_181 = 0xABL), ((safe_lshift_func_int16_t_s_u(((l_237 = (l_222[0][0][0] ^ (safe_sub_func_uint8_t_u_u(l_232[0][0], (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(g_130, 8)), l_212)))))) > l_232[0][0]), l_206[3])) , l_206[0]))), g_4)) >= 1UL) && (-5L))) < g_30[0][0][0]) , g_133)) == l_201[0][0][3]);
            }
        }
        for (g_133 = 29; (g_133 != (-11)); --g_133)
        { 
            int16_t l_246 = 4L;
            int32_t l_250 = 0x29F115A3L;
            uint64_t l_251[3];
            uint32_t l_273 = 0x6A1A6AEEL;
            int i;
            for (i = 0; i < 3; i++)
                l_251[i] = 0x354FE0FA9FD3CF24LL;
            for (g_130 = 0; (g_130 < 1); g_130 = safe_add_func_int32_t_s_s(g_130, 5))
            { 
                uint8_t l_252[1][1];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_252[i][j] = 0UL;
                }
                g_30[1][1][2] &= (g_130 ^ (safe_sub_func_uint32_t_u_u((((l_246 >= (safe_mod_func_int64_t_s_s((((l_250 = (((((-4L) == (0L < l_249)) <= 0L) , g_46) < 2UL)) | 0x5FL) == l_251[2]), l_169))) == l_252[0][0]) != g_46), l_3)));
            }
            if (g_239[0])
                continue;
            l_207[0][1] = (l_273 |= ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_div_func_int64_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_169, ((safe_sub_func_int64_t_s_s(((safe_add_func_uint8_t_u_u((((((l_181 = ((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(g_30[0][2][2])), ((0x62L || (safe_mod_func_uint16_t_u_u(g_239[4], l_13[1][1][0]))) | g_30[1][1][2]))) >= g_58[0])) & l_272) , 1L) >= 0x26200834E5BC4767LL) & g_58[0]), (-10L))) , 0x160E171A2FFDF365LL), l_249)) >= l_206[0]))), g_130)), l_222[0][1][0])), 14)), 1L)) == g_46));
        }
    }
    return g_59;
}



static int16_t  func_9(uint32_t  p_10)
{ 
    uint32_t l_37 = 0xAF6082F4L;
    int32_t l_38 = (-4L);
    int32_t l_39[1][2][3];
    int32_t l_41 = (-3L);
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
                l_39[i][j][k] = 0x7C295A52L;
        }
    }
    l_41 ^= (safe_mul_func_int8_t_s_s(g_2, func_16((l_39[0][0][1] = ((((l_38 = (safe_lshift_func_uint16_t_u_s(0x8331L, ((safe_div_func_uint8_t_u_u(func_22(p_10, ((safe_sub_func_int8_t_s_s((!0x7DCDL), g_4)) & g_2), p_10, g_30[1][1][2]), l_37)) && p_10)))) , l_37) != g_2) > l_37)))));
lbl_109:
    l_39[0][0][1] = (safe_add_func_int8_t_s_s(((safe_mod_func_int16_t_s_s(g_30[0][1][2], (g_46 = p_10))) <= (safe_sub_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_mod_func_int64_t_s_s((safe_sub_func_int8_t_s_s(l_39[0][0][1], ((g_59 = (g_58[0] &= (safe_div_func_int16_t_s_s(((l_38 = g_4) == 4294967295UL), 0x17BAL)))) & 0xC4D7L))), p_10)))), l_39[0][0][1])), l_41))), 255UL));
    for (g_2 = 0; (g_2 < (-1)); g_2 = safe_sub_func_uint64_t_u_u(g_2, 9))
    { 
        uint8_t l_71 = 0x20L;
        uint32_t l_72[4] = {0x9BABE4A9L,0x9BABE4A9L,0x9BABE4A9L,0x9BABE4A9L};
        int32_t l_100 = 0L;
        int8_t l_114 = 1L;
        uint64_t l_134 = 0x93C35E3CEA876B16LL;
        int i;
        if ((0x6105F61CA7276463LL != (((safe_sub_func_int8_t_s_s(g_58[0], ((((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(l_41)), ((l_71 &= l_37) , g_46))), g_46)) | 0x65E5L) < l_72[2]) && l_72[2]))) < l_37) >= l_72[3])))
        { 
            g_30[1][1][2] |= ((g_58[0] ^ (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_39[0][0][0], 6)), (l_38 &= 0x46L))) && (safe_mul_func_uint16_t_u_u((p_10 , p_10), 0x6B35L))) && 0UL)) ^ l_72[1]);
            for (l_37 = 0; (l_37 > 44); l_37 = safe_add_func_uint64_t_u_u(l_37, 1))
            { 
                g_30[1][1][2] = g_4;
                return p_10;
            }
        }
        else
        { 
            uint16_t l_98 = 0x0AC9L;
            int32_t l_99 = (-4L);
            int8_t l_107 = 0x8EL;
            int32_t l_108 = 0x3D90BC21L;
            int32_t l_131 = 0x1667F30DL;
            l_41 |= (((safe_rshift_func_uint16_t_u_u((l_100 = ((0x3168F1D39FA4EE4BLL <= (l_99 |= ((safe_unary_minus_func_uint16_t_u((g_59 ^ ((safe_sub_func_int8_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u((((p_10 && (!(safe_sub_func_int32_t_s_s((~((safe_rshift_func_int8_t_s_s(0xAEL, g_46)) ^ l_39[0][0][1])), g_58[0])))) >= p_10) , g_59), g_30[1][0][1])) == g_30[1][1][2]), l_72[3])), 15)) >= 0x63L), (-10L))) | l_98)))) || 0UL))) , p_10)), g_4)) , p_10) != (-1L));
            if (((safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_4 = ((p_10 = (((((safe_unary_minus_func_uint16_t_u(g_106)) , l_71) | ((l_99 <= (0x3A67L == l_107)) , 6L)) < g_58[0]) , g_106)) , l_71)), l_108)), 0x3577L)) || g_2))
            { 
                if (l_107)
                    goto lbl_109;
                l_114 = (safe_sub_func_int32_t_s_s(g_58[0], (((safe_rshift_func_int8_t_s_u((p_10 , (((p_10 < l_108) , p_10) <= g_30[0][4][0])), p_10)) || g_58[0]) & g_30[1][0][2])));
            }
            else
            { 
                uint32_t l_129 = 0x01CF63C1L;
                int32_t l_137 = (-1L);
                l_131 = (((((safe_sub_func_int64_t_s_s((((((safe_mul_func_int8_t_s_s((g_46 &= (((safe_div_func_int8_t_s_s((p_10 != (((safe_mul_func_int8_t_s_s(((safe_div_func_int32_t_s_s(l_39[0][1][2], ((g_130 &= (safe_mod_func_int16_t_s_s(((l_99 = 5UL) & ((safe_rshift_func_int16_t_s_s(0x040FL, l_129)) <= 0x68FEE3948B2FD71BLL)), l_39[0][0][2]))) && g_106))) != p_10), l_38)) || 2L) , g_130)), l_39[0][0][1])) | 0xCEF6A3D7L) == 0x6BD8041EL)), p_10)) , 18446744073709551613UL) , p_10) ^ g_59) > 0x2BL), 0x8EE533B9E22A4178LL)) != l_39[0][1][0]) & l_108) <= l_100) ^ g_106);
                l_137 = ((l_134--) | g_130);
                if (g_130)
                    break;
            }
        }
    }
    return p_10;
}



static uint8_t  func_16(int32_t  p_17)
{ 
    int32_t l_40 = 0L;
    l_40 = 0x221EBC5FL;
    return g_30[1][1][2];
}



static uint8_t  func_22(uint64_t  p_23, int64_t  p_24, int32_t  p_25, uint64_t  p_26)
{ 
    uint32_t l_33 = 0x11EC1FCCL;
    uint32_t l_34 = 4294967293UL;
    for (g_4 = 0; (g_4 == 32); g_4 = safe_add_func_int64_t_s_s(g_4, 5))
    { 
        if (l_33)
            break;
    }
    --l_34;
    return g_30[1][1][2];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_30[i][j][k], "g_30[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_46, "g_46", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_58[i], "g_58[i]", print_hash_value);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_239[i], "g_239[i]", print_hash_value);

    }
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
