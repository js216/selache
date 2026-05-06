// SPDX-License-Identifier: MIT
// cctest_csmith_0dbbdaf1.c --- cctest case csmith_0dbbdaf1 (csmith seed 230415089)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x8d3e650d */

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

// Options:   -s 230415089 -o /tmp/csmith_gen_lv4fyita/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int32_t g_2 = 0x90AC204EL;
static uint8_t g_48 = 1UL;
static int64_t g_53 = 0x7EA9B924E19C7819LL;
static uint32_t g_54 = 0x446B8CC3L;
static int32_t g_82 = 1L;
static int32_t g_92[5][1] = {{0x6D6C577BL},{0x6D6C577BL},{0x6D6C577BL},{0x6D6C577BL},{0x6D6C577BL}};
static uint16_t g_119[1][3][3] = {{{65530UL,0x27E8L,0x27E8L},{65530UL,0x27E8L,0x27E8L},{65530UL,0x27E8L,0x27E8L}}};
static uint32_t g_122[4] = {18446744073709551610UL,18446744073709551610UL,18446744073709551610UL,18446744073709551610UL};
static uint8_t g_126 = 0x2AL;
static uint32_t g_127 = 0UL;
static uint64_t g_128 = 18446744073709551612UL;
static uint32_t g_158 = 0UL;
static uint32_t g_192 = 0x40EAF7AEL;
static uint8_t g_196 = 247UL;
static uint16_t g_214 = 65535UL;
static uint32_t g_254 = 4UL;
static uint16_t g_255 = 0x2A9EL;
static uint64_t g_256 = 0x7CAC547049EDBDCELL;
static int32_t g_267 = (-1L);
static uint32_t g_304 = 18446744073709551615UL;
static int16_t g_315 = 0x00B0L;



static int32_t  func_1(void);
static uint16_t  func_5(int64_t  p_6, uint64_t  p_7);
static int64_t  func_13(int64_t  p_14, const int16_t  p_15);
static const uint16_t  func_29(int8_t  p_30, uint16_t  p_31, int64_t  p_32, uint32_t  p_33);




static int32_t  func_1(void)
{ 
    int64_t l_80 = (-1L);
    int32_t l_93 = 0x1355DAA1L;
    int32_t l_157[2][1];
    int32_t l_159 = 2L;
    int64_t l_284 = 0L;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_157[i][j] = 0xF3F1ECA2L;
    }
    for (g_2 = 0; (g_2 <= 23); ++g_2)
    { 
        int32_t l_8 = (-2L);
        uint32_t l_121[5][5][1] = {{{1UL},{0UL},{0x6D2ED0B7L},{1UL},{0x6D2ED0B7L}},{{0UL},{1UL},{1UL},{1UL},{1UL}},{{0UL},{0x6D2ED0B7L},{1UL},{0x6D2ED0B7L},{0UL}},{{1UL},{1UL},{1UL},{1UL},{0UL}},{{0x6D2ED0B7L},{1UL},{0x6D2ED0B7L},{0UL},{1UL}}};
        uint8_t l_156 = 0UL;
        int i, j, k;
        if ((func_5((((6UL & l_8) || (safe_div_func_int64_t_s_s((safe_sub_func_int32_t_s_s((g_2 >= (func_13(g_2, g_2) | g_53)), l_80)), l_8))) , l_8), g_53) >= l_8))
        { 
            const int32_t l_89 = (-1L);
            l_93 |= (g_92[0][0] = (safe_add_func_int16_t_s_s((((safe_add_func_uint32_t_u_u(g_53, (safe_add_func_int8_t_s_s((9UL <= l_89), (safe_add_func_uint8_t_u_u(g_53, (-3L))))))) | 5L) , l_8), g_54)));
        }
        else
        { 
            int64_t l_117 = 0L;
            l_8 = l_8;
            if ((safe_div_func_int32_t_s_s((-1L), (safe_add_func_uint8_t_u_u(l_8, l_80)))))
            { 
                uint32_t l_118 = 1UL;
                int32_t l_120[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_120[i] = 4L;
                g_122[0] |= (((safe_mul_func_int8_t_s_s((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s(((((g_82 < (safe_mod_func_int32_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551608UL, ((safe_mul_func_int8_t_s_s((+(safe_sub_func_uint8_t_u_u((g_119[0][1][0] = (l_118 = (g_48 = (((safe_add_func_int16_t_s_s((((safe_sub_func_uint32_t_u_u(((g_92[3][0] && (l_117 >= 5UL)) , l_80), 0xEE719322L)) && g_2) >= l_80), l_93)) , 0L) || g_92[3][0])))), l_120[1]))), l_8)) | 8UL))), l_121[0][3][0]))) & (-1L)) ^ l_93) , l_118), l_93)), g_54)), g_53)) , l_118) , 7L);
                g_127 = (safe_rshift_func_int16_t_s_u(l_118, (l_118 && (g_126 = (~l_93)))));
                if (l_118)
                    continue;
            }
            else
            { 
                g_128++;
            }
            if (g_92[0][0])
                continue;
        }
        l_8 = (l_8 && (((safe_lshift_func_int16_t_s_u((1UL <= ((safe_div_func_uint64_t_u_u((((g_119[0][1][0] == (~((safe_rshift_func_int16_t_s_u(0x0C21L, g_122[0])) && g_128))) & g_119[0][1][0]) , 0xB2EE1CE7A6402E1CLL), 1UL)) , 0x89647ED5L)), 5)) || 0x89L) & l_80));
        l_159 &= (safe_div_func_uint32_t_u_u(l_121[0][3][0], ((safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_93 &= g_119[0][0][1]), (g_158 = ((safe_add_func_int32_t_s_s(((((0x7D5AD653C032282DLL > (safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s(((safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(l_156, 0x892BL)) || l_80) | 0xD000L), g_126)) && l_157[0][0]), g_122[0])) , g_54), 0x20DDCAC8L)) , 4L), l_157[0][0]))) , l_8) < g_54) | g_128), l_121[0][3][0])) == g_48)))), 0UL)) , g_82)));
    }
    if ((18446744073709551615UL ^ (safe_sub_func_uint64_t_u_u(g_119[0][1][0], (safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u(0x5CCEL, (safe_rshift_func_uint8_t_u_s(250UL, g_53)))), l_157[0][0]))))))
    { 
        int32_t l_177[5] = {1L,1L,1L,1L,1L};
        int32_t l_199[5][1][5] = {{{0x1FCA2756L,0x1FCA2756L,0x1FCA2756L,0x1FCA2756L,0x1FCA2756L}},{{1L,1L,1L,1L,1L}},{{0x1FCA2756L,0x1FCA2756L,0x1FCA2756L,0x1FCA2756L,0x1FCA2756L}},{{1L,1L,1L,1L,1L}},{{0x1FCA2756L,0x1FCA2756L,0x1FCA2756L,0x1FCA2756L,0x1FCA2756L}}};
        int i, j, k;
        if (((safe_lshift_func_int8_t_s_s(((0x01CBC849L == (safe_unary_minus_func_int64_t_s(((safe_add_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(g_122[0], (((g_54 = 4294967295UL) , g_92[3][0]) && l_157[0][0]))), g_119[0][1][0])) == 0x678AL)))) >= g_82), 6)) >= g_92[0][0]))
        { 
            uint32_t l_178 = 1UL;
            const int8_t l_191[4] = {0x4EL,0x4EL,0x4EL,0x4EL};
            int i;
            g_192 &= (((safe_mod_func_uint32_t_u_u(l_177[2], (((((g_128 = l_178) & (safe_sub_func_int8_t_s_s(((l_159 = (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint8_t_u_u(((((((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u(((l_177[0] , 1L) | l_159), 255UL)), 0x57AAL)), (-10L))) >= g_119[0][0][1]) & g_158) ^ 0xDD4F9EB425E41762LL) <= g_53) , g_92[2][0]), 0xCDL)) != 0x98AC174BAE2B492ALL), 4))) & g_48), g_2))) | l_177[0]) != g_92[1][0]) || g_92[0][0]))) , g_53) , l_191[0]);
            for (g_128 = 0; (g_128 != 30); g_128 = safe_add_func_uint64_t_u_u(g_128, 3))
            { 
                g_2 ^= g_92[2][0];
            }
            g_2 = (-5L);
        }
        else
        { 
            uint16_t l_200 = 0xA7C8L;
            for (g_2 = 0; (g_2 <= 0); g_2 += 1)
            { 
                int32_t l_195 = (-7L);
                g_196--;
            }
            l_200++;
        }
    }
    else
    { 
        int32_t l_210 = 0x11A96804L;
        for (g_126 = (-13); (g_126 > 43); ++g_126)
        { 
            uint64_t l_207[5];
            int32_t l_212 = 5L;
            int i;
            for (i = 0; i < 5; i++)
                l_207[i] = 1UL;
            if ((l_210 = (0UL >= (safe_mul_func_int16_t_s_s((l_159 < l_207[2]), (safe_div_func_uint16_t_u_u((0UL || (-1L)), l_157[0][0])))))))
            { 
                uint32_t l_211 = 0UL;
                int32_t l_213[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_213[i] = (-7L);
                l_212 = l_211;
                ++g_214;
            }
            else
            { 
                int32_t l_217 = 0L;
                int32_t l_257[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_257[i] = (-2L);
                l_217 = (-1L);
                g_2 = g_126;
                g_2 = (safe_lshift_func_uint16_t_u_u((g_119[0][1][0] = (l_257[0] = (safe_div_func_uint16_t_u_u(((l_159 = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_u(((~(((l_93 = (g_54 = (((safe_add_func_int8_t_s_s((g_256 &= (g_255 ^= (~(safe_mod_func_uint8_t_u_u((((safe_lshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((l_159 <= (safe_lshift_func_int8_t_s_s(g_158, 4))), (safe_div_func_uint32_t_u_u(((safe_sub_func_uint64_t_u_u((((safe_add_func_uint16_t_u_u((((l_217 , ((g_82 = ((safe_add_func_uint32_t_u_u(((g_254 = (safe_mul_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_u(g_53, 0)) , l_217), 0L))) < g_192), g_127)) > l_210)) , 0L)) || g_92[0][0]) & 5L), g_127)) < l_217) ^ 0UL), 0xBF0B67F1609E6741LL)) < 18446744073709551615UL), g_127)))) ^ (-4L)), 11)) >= g_53) <= l_217), 5L))))), l_80)) ^ g_126) >= l_80))) , g_254) <= l_217)) , 255UL), l_207[0])) && g_48) , g_92[0][0]), l_157[0][0])), 14)), 12))) < l_157[0][0]), g_122[2])))), 8));
            }
        }
    }
    for (g_53 = (-30); (g_53 < 21); g_53 = safe_add_func_uint64_t_u_u(g_53, 1))
    { 
        uint8_t l_266[3];
        int16_t l_302 = (-6L);
        int32_t l_314 = (-4L);
        int i;
        for (i = 0; i < 3; i++)
            l_266[i] = 255UL;
        for (g_254 = 0; (g_254 <= 0); g_254 += 1)
        { 
            int16_t l_264 = (-3L);
            const int32_t l_268 = 9L;
            uint8_t l_285[2];
            int32_t l_287 = 0x3C90197DL;
            int32_t l_301 = (-3L);
            int i;
            for (i = 0; i < 2; i++)
                l_285[i] = 0xE1L;
            if (((safe_sub_func_int16_t_s_s((g_267 = ((safe_lshift_func_uint16_t_u_u((l_264 = (g_92[4][0] , g_122[3])), 7)) , (safe_unary_minus_func_int16_t_s(((-8L) || (l_266[0] , l_93)))))), l_268)) || g_122[0]))
            { 
                return g_53;
            }
            else
            { 
                uint32_t l_283 = 0x42437FBEL;
                int64_t l_286 = 0x142BC99A05796CAELL;
                g_2 = (((g_256 = ((l_287 = (safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s((((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((g_196 | ((safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(((l_283 = ((g_53 || (+g_2)) , l_264)) & g_267))), l_284)) , l_285[1])), g_53)), l_284)) , g_158) | g_53), l_286)), (-5L))), g_92[0][0]))) == l_286)) , l_285[1]) , 1L);
            }
            g_2 = (l_302 ^= (+((safe_rshift_func_uint16_t_u_s((l_266[0] ^ (safe_div_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((l_268 == (l_301 ^= (safe_add_func_uint8_t_u_u(((l_93 = ((safe_mod_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(l_266[0], ((((l_266[0] < g_128) & l_266[2]) | 0xA4L) != l_266[0]))), 3L)) == l_80)) && 0xE8L), l_287)))), 3L)), l_266[0]))), g_158)) , 0x84L)));
            for (l_264 = 0; (l_264 <= 0); l_264 += 1)
            { 
                int32_t l_303 = 0x701506DAL;
                int i, j, k;
                g_304--;
                return g_119[l_264][(l_264 + 1)][(l_264 + 2)];
            }
        }
        g_2 = (g_122[2] != (l_159 = (g_315 = (safe_add_func_uint8_t_u_u(255UL, (safe_add_func_int64_t_s_s(((l_314 = ((+(((safe_mul_func_uint8_t_u_u(1UL, (8L > g_192))) || l_302) || g_122[0])) & l_266[0])) < 6UL), g_92[3][0])))))));
        for (g_48 = 0; (g_48 <= 3); g_48 += 1)
        { 
            int32_t l_320[5] = {0x622A97DCL,0x622A97DCL,0x622A97DCL,0x622A97DCL,0x622A97DCL};
            int i;
            l_320[4] = ((g_54--) && ((safe_sub_func_uint32_t_u_u(g_122[g_48], 0x7CFFBB7CL)) & 0x4866L));
            if (g_122[g_48])
                continue;
        }
    }
    return g_304;
}



static uint16_t  func_5(int64_t  p_6, uint64_t  p_7)
{ 
    int32_t l_81[5][5][1] = {{{(-5L)},{0xC1DF722EL},{0x73BF60C7L},{0xC1DF722EL},{(-5L)}},{{0xAF31781FL},{(-5L)},{0xC1DF722EL},{0x73BF60C7L},{0xC1DF722EL}},{{(-5L)},{0xAF31781FL},{(-5L)},{0xC1DF722EL},{0x73BF60C7L}},{{0xC1DF722EL},{(-5L)},{0xAF31781FL},{(-5L)},{0xC1DF722EL}},{{0x73BF60C7L},{0xC1DF722EL},{(-5L)},{0xAF31781FL},{(-5L)}}};
    int i, j, k;
    g_82 = (l_81[3][4][0] , (g_54 , 0x1241BC4EL));
    return l_81[2][2][0];
}



static int64_t  func_13(int64_t  p_14, const int16_t  p_15)
{ 
    int32_t l_26[2][3] = {{5L,0xFA2EF703L,0xFA2EF703L},{5L,0xFA2EF703L,0xFA2EF703L}};
    int32_t l_34 = (-1L);
    int8_t l_45 = 0x89L;
    int32_t l_51 = 0x9B20E950L;
    int32_t l_52 = 0xBEBDA3FAL;
    int i, j;
    if ((g_2 > (safe_rshift_func_uint8_t_u_s((safe_mul_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((((-8L) > 1UL) == ((safe_rshift_func_uint16_t_u_s(l_26[0][0], g_2)) != p_14)), g_2)), p_14)), l_26[0][1])), l_26[0][0]))))
    { 
        int64_t l_46[3][2][3] = {{{9L,(-4L),0xAD8A0F8393131EC8LL},{0x60ABED9978317D23LL,(-4L),(-4L)}},{{4L,(-4L),0xA0C844FC37F20BABLL},{9L,(-4L),0xAD8A0F8393131EC8LL}},{{0x60ABED9978317D23LL,(-4L),(-4L)},{4L,(-4L),0xA0C844FC37F20BABLL}}};
        int32_t l_47[1][5] = {{0x6DAD3F04L,0x6DAD3F04L,0x6DAD3F04L,0x6DAD3F04L,0x6DAD3F04L}};
        int i, j, k;
        l_52 &= ((l_51 ^= ((l_47[0][4] = ((safe_lshift_func_int8_t_s_u((func_29(g_2, (l_34 |= l_26[0][0]), (((l_47[0][4] = (safe_div_func_uint64_t_u_u((safe_mod_func_int32_t_s_s((((((safe_mul_func_int8_t_s_s((((((safe_mod_func_int8_t_s_s(p_14, (safe_div_func_int64_t_s_s(l_45, l_46[2][0][1])))) > l_45) == l_26[0][2]) ^ g_2) & 0xB2L), g_2)) , p_15) < l_26[0][0]) < 0xDCFEL) || 255UL), 0x8E1F9167L)), g_2))) <= (-1L)) != 0L), p_14) >= p_14), p_14)) , p_14)) == 0x23FEL)) > p_14);
        l_47[0][4] = ((g_54++) < p_15);
    }
    else
    { 
        uint32_t l_57 = 8UL;
        l_57 = 7L;
        l_52 = (g_54 | ((safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((g_2 ^ (--g_48)), 10)), (safe_mul_func_uint16_t_u_u((safe_div_func_int8_t_s_s((l_57 && ((((((safe_sub_func_int32_t_s_s(((safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u((((safe_sub_func_int32_t_s_s(0xB00F59FBL, p_15)) != p_15) , 0x7AL), 5UL)) , l_45), g_53)), g_2)) != 0L), (-10L))) | l_52) >= p_14) , 0xE278474A89AEEB1CLL) > g_2) | l_57)), l_57)), 0x8B4DL)))) | p_14));
    }
    return p_14;
}



static const uint16_t  func_29(int8_t  p_30, uint16_t  p_31, int64_t  p_32, uint32_t  p_33)
{ 
    g_48++;
    return p_30;
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_48, "g_48", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_92[i][j], "g_92[i][j]", print_hash_value);

        }
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_119[i][j][k], "g_119[i][j][k]", print_hash_value);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_122[i], "g_122[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_192, "g_192", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_267, "g_267", print_hash_value);
    transparent_crc(g_304, "g_304", print_hash_value);
    transparent_crc(g_315, "g_315", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
