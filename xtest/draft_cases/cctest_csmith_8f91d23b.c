// SPDX-License-Identifier: MIT
// cctest_csmith_8f91d23b.c --- cctest case csmith_8f91d23b (csmith seed 2408698427)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xd73e434c */

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

// Options:   -s 2408698427 -o /tmp/csmith_gen_c7e0kjqg/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_14 = (-1L);
static int64_t g_43 = (-4L);
static uint32_t g_44 = 8UL;
static int16_t g_52 = 0x85AAL;
static int8_t g_63 = (-6L);
static int32_t g_64 = 0x4046227AL;
static int32_t g_66 = (-1L);
static int32_t g_154 = 1L;
static int64_t g_155[2] = {0x95BFD217CE365D6BLL,0x95BFD217CE365D6BLL};
static uint32_t g_156 = 0xF53D4211L;
static uint8_t g_166[2] = {248UL,248UL};
static uint32_t g_167 = 0xA60F3683L;



static uint32_t  func_1(void);
static uint64_t  func_4(int32_t  p_5, int32_t  p_6, int32_t  p_7, int16_t  p_8);
static int8_t  func_9(uint8_t  p_10, int16_t  p_11, int32_t  p_12, int64_t  p_13);




static uint32_t  func_1(void)
{ 
    uint16_t l_15 = 0x834DL;
    int32_t l_170 = 0xEB4ECF4EL;
    g_167 &= (safe_sub_func_uint16_t_u_u((func_4((func_9(g_14, g_14, l_15, g_14) && l_15), g_14, l_15, l_15) <= 0x739D61DCCA4C161DLL), l_15));
    for (g_63 = (-19); (g_63 >= 14); g_63++)
    { 
        int16_t l_171 = 0xA0E5L;
        l_170 &= g_155[0];
        g_64 = g_63;
        if (l_171)
            continue;
    }
    return g_64;
}



static uint64_t  func_4(int32_t  p_5, int32_t  p_6, int32_t  p_7, int16_t  p_8)
{ 
    int16_t l_25 = 0xCA70L;
    int32_t l_30 = 0x05A83D87L;
    int32_t l_32 = 0x3659EA4DL;
    int32_t l_35 = 1L;
    int32_t l_65 = 1L;
    uint8_t l_84[4][2] = {{0x9EL,0x9EL},{0UL,0x9EL},{0x9EL,0UL},{0x9EL,0x9EL}};
    uint64_t l_153 = 0xD915B70ED8B5597CLL;
    int i, j;
lbl_109:
    for (p_7 = 0; (p_7 > 12); p_7++)
    { 
        int32_t l_31[1];
        int32_t l_33 = 1L;
        int32_t l_34[3];
        uint32_t l_36 = 1UL;
        int i;
        for (i = 0; i < 1; i++)
            l_31[i] = (-1L);
        for (i = 0; i < 3; i++)
            l_34[i] = 0xC46BC227L;
        l_33 = ((safe_mul_func_int16_t_s_s((safe_mod_func_int64_t_s_s(p_6, ((safe_rshift_func_int16_t_s_s(l_25, ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((l_36--), (safe_div_func_uint16_t_u_u((l_34[2] |= ((((((((((+((!(l_31[0] <= 249UL)) , 4294967289UL)) || g_14) & g_14) , p_6) , 0x0CL) >= p_7) != l_33) || (-1L)) <= 8L) < l_35)), p_5)))), g_14)) ^ g_14))) & g_14))), l_25)) | g_14);
        p_6 ^= (l_35 | g_14);
        if ((((g_44 = (g_43 = 0xCE06DFE5L)) == (safe_div_func_int16_t_s_s(((((((g_52 = ((~l_36) <= (safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u(l_31[0], 3)), p_6)))) && 0xE5L) & l_33) <= (-1L)) == l_35) && (-1L)), 0x6116L))) || g_43))
        { 
            for (l_30 = 8; (l_30 >= (-10)); --l_30)
            { 
                uint8_t l_67 = 255UL;
                l_34[1] = ((2L <= ((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u((l_25 , (((safe_div_func_uint32_t_u_u((((p_7 ^ 0x5AL) || p_8) , 7UL), g_43)) , 0x6DF4L) || g_14)), g_52)) ^ g_52) , 0x8AL), g_44)), p_5)) != 0xC0L)) , l_30);
                ++l_67;
            }
        }
        else
        { 
            uint32_t l_72 = 0UL;
            for (g_63 = 16; (g_63 < (-19)); g_63 = safe_sub_func_uint32_t_u_u(g_63, 4))
            { 
                int64_t l_77[4] = {0xE3F4D67785DC571ELL,0xE3F4D67785DC571ELL,0xE3F4D67785DC571ELL,0xE3F4D67785DC571ELL};
                int i;
                l_72--;
                p_6 = ((1L & g_52) && (((l_77[0] |= ((safe_div_func_int8_t_s_s((0xDC4CL != p_7), 0xC4L)) != g_43)) , 1L) == 0x8CB009842105ADB5LL));
            }
        }
    }
    if (((safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_25, (((g_52 |= (p_8 = (safe_lshift_func_uint16_t_u_u(0UL, 9)))) >= (0xEBL != p_6)) == p_6))), (-1L))) != p_5))
    { 
        int32_t l_94 = (-2L);
        uint32_t l_131 = 0x24B7619CL;
        for (g_52 = 0; (g_52 <= 1); g_52 += 1)
        { 
            p_6 = ((safe_lshift_func_int8_t_s_u((p_8 > g_14), (safe_sub_func_uint8_t_u_u((l_94 &= ((+((l_32 = (safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(0x0960L, l_35)), 0xF313C854BE8D2C56LL))) , g_43)) == g_64)), (-1L))))) , 3L);
            for (g_66 = 1; (g_66 >= 0); g_66 -= 1)
            { 
                int i, j;
                g_64 &= l_84[(g_52 + 2)][g_66];
                return p_5;
            }
            for (p_5 = 0; (p_5 <= 1); p_5 += 1)
            { 
                int i, j;
                if (l_84[g_52][p_5])
                    break;
            }
        }
        for (l_30 = 0; (l_30 != 27); l_30 = safe_add_func_uint16_t_u_u(l_30, 9))
        { 
            int32_t l_99 = 0x4E34DAAEL;
            for (g_64 = (-8); (g_64 > (-16)); g_64 = safe_sub_func_int64_t_s_s(g_64, 3))
            { 
                if (g_63)
                    break;
                l_99 = g_64;
            }
            if (l_94)
                break;
        }
        for (g_63 = 0; (g_63 <= 1); g_63 += 1)
        { 
            int16_t l_107 = 0xD8CCL;
            int32_t l_108 = 0x778B1488L;
            if ((((g_52 == (g_66 , p_6)) && 0xF5551AFAABED9368LL) || l_32))
            { 
                int64_t l_106 = 9L;
                p_6 = (safe_add_func_int32_t_s_s(((l_107 = ((p_5 , (safe_div_func_uint8_t_u_u(0xAEL, ((safe_mod_func_uint64_t_u_u(((g_63 || 1UL) >= g_66), l_106)) , 0x01L)))) | p_7)) <= l_108), l_106));
                if (p_7)
                    break;
                if (p_7)
                    goto lbl_109;
            }
            else
            { 
                l_35 = (safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s(0x8A5CB8EC4A45BEF7LL, (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u(((((safe_lshift_func_uint16_t_u_s(((((l_108 = (((g_52 && (safe_add_func_uint32_t_u_u((+(safe_div_func_uint32_t_u_u((0x34F7B726L && p_5), (-1L)))), g_52))) <= 0xF6D1L) ^ p_7)) == (-10L)) >= g_43) || l_131), l_94)) <= 0UL) | l_65) && (-1L)), 18446744073709551614UL)) || g_44) && p_6), 6)) || 255UL), 4)), p_7)), p_8)))), p_8));
                g_64 = ((((safe_div_func_uint16_t_u_u(0xA19EL, g_63)) > (+g_43)) || g_52) <= p_6);
            }
            g_64 = (safe_lshift_func_int8_t_s_u((g_155[0] = (safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((p_8 , (safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((g_154 = (((((safe_lshift_func_int8_t_s_u((((((0xBBL == ((safe_mod_func_uint32_t_u_u(4294967286UL, p_6)) , p_8)) & g_43) && 0L) || 0xD40A9413L) , l_94), 2)) && l_108) , l_107) && g_66) ^ l_153)), g_43)), 0x5FECE657L)) | g_63), p_8))), g_52)), p_6))), 5));
            --g_156;
            for (p_7 = 0; (p_7 <= 1); p_7 += 1)
            { 
                int i, j;
                l_108 &= l_84[(g_63 + 2)][g_63];
                g_64 = l_153;
            }
        }
    }
    else
    { 
        int64_t l_165 = 0x8F1E01A2308598B8LL;
        g_64 = (safe_mul_func_int16_t_s_s((p_8 = (safe_sub_func_int64_t_s_s(((safe_div_func_int16_t_s_s(((((g_52 & p_7) == ((g_166[1] |= l_165) == l_153)) && g_43) & g_44), p_8)) > 0xED0FL), 0UL))), p_6));
    }
    return g_166[1];
}



static int8_t  func_9(uint8_t  p_10, int16_t  p_11, int32_t  p_12, int64_t  p_13)
{ 
    uint64_t l_16[2][2];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            l_16[i][j] = 0xD6092F644ACCB24CLL;
    }
    return l_16[1][1];
}





int test_main(void)
{
    int i;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_154, "g_154", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_155[i], "g_155[i]", print_hash_value);

    }
    transparent_crc(g_156, "g_156", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_166[i], "g_166[i]", print_hash_value);

    }
    transparent_crc(g_167, "g_167", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
