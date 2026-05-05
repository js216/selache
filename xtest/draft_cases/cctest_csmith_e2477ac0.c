// SPDX-License-Identifier: MIT
// cctest_csmith_e2477ac0.c --- cctest case csmith_e2477ac0 (csmith seed 3796335296)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0xb2814281 */

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

// Options:   -s 3796335296 -o /tmp/csmith_gen_hu9o2_lg/csmith.c --concise --no-bitfields --no-pointers --no-structs --no-unions --no-volatiles --no-volatile-pointers --max-funcs 3 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 4 --max-array-dim 2 --max-array-len-per-dim 4

static long __undefined;



static int32_t g_2[4][4] = {{6L,(-1L),0xADA439BEL,0xADA439BEL},{(-9L),(-9L),6L,0xADA439BEL},{0x63185299L,(-1L),0x63185299L,6L},{0x63185299L,6L,6L,0x63185299L}};
static int32_t g_5 = 0xCDB8FAAAL;
static uint8_t g_10 = 1UL;
static uint16_t g_15 = 65530UL;
static uint8_t g_18 = 0x11L;
static int32_t g_124[1] = {0xC96F0977L};
static int32_t g_126 = 9L;
static uint32_t g_157 = 0xD7867E7CL;
static uint64_t g_185[2] = {18446744073709551611UL,18446744073709551611UL};
static const int8_t g_219 = (-2L);
static int64_t g_236 = 0L;
static uint32_t g_310 = 18446744073709551615UL;
static uint32_t g_311 = 4294967295UL;



static int32_t  func_1(void);
static uint8_t  func_24(uint8_t  p_25, uint8_t  p_26, int32_t  p_27, int8_t  p_28, uint64_t  p_29);
static uint8_t  func_30(uint16_t  p_31, const uint64_t  p_32, int8_t  p_33);




static int32_t  func_1(void)
{ 
    int32_t l_9 = 0x3A18E418L;
    uint32_t l_186 = 0x001A0E29L;
    int32_t l_220 = 0x22E85F59L;
    int32_t l_222 = 0L;
    int32_t l_227 = 5L;
    int32_t l_228 = 6L;
    int32_t l_229[4] = {6L,6L,6L,6L};
    int32_t l_230 = 0L;
    int32_t l_231 = 0x1E4377C8L;
    int32_t l_232 = 1L;
    int32_t l_233 = (-4L);
    int32_t l_234 = 1L;
    int32_t l_235 = (-7L);
    int64_t l_246 = 0x1EAD67A6C11A0814LL;
    int64_t l_272 = (-1L);
    int32_t l_282 = 4L;
    uint32_t l_318 = 0x0DFB2D17L;
    uint16_t l_321 = 3UL;
    int32_t l_377 = 0x1051B631L;
    int i;
    for (g_2[0][0] = 0; (g_2[0][0] > 22); g_2[0][0]++)
    { 
        int16_t l_34[4] = {(-1L),(-1L),(-1L),(-1L)};
        const uint16_t l_35 = 0xC44DL;
        int32_t l_218[4][1] = {{0L},{(-5L)},{0L},{(-5L)}};
        int16_t l_224[2];
        uint32_t l_237[2][3];
        int64_t l_279 = (-1L);
        int64_t l_280 = (-7L);
        int32_t l_281 = 0L;
        uint8_t l_283[4][3] = {{1UL,0x78L,0x69L},{1UL,1UL,0x78L},{0x70L,0x78L,0x78L},{0x78L,255UL,0x69L}};
        uint8_t l_312 = 251UL;
        int i, j;
        for (i = 0; i < 2; i++)
            l_224[i] = (-1L);
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_237[i][j] = 0xF28DE542L;
        }
        for (g_5 = 0; (g_5 != 28); g_5 = safe_add_func_uint32_t_u_u(g_5, 4))
        { 
            int32_t l_8[2][4] = {{0x55595070L,0x55595070L,0L,0xDBDA7FE6L},{0xDBDA7FE6L,0L,0L,0xDBDA7FE6L}};
            int i, j;
            ++g_10;
            for (g_10 = 25; (g_10 != 9); --g_10)
            { 
                uint32_t l_21 = 0UL;
                g_15++;
                g_18--;
                l_21 = (-1L);
            }
        }
        if (((safe_sub_func_int64_t_s_s((func_24(func_30(g_5, ((g_2[0][1] , (((l_9 <= 18446744073709551610UL) > l_34[1]) == l_9)) , l_35), l_9), g_2[1][2], l_34[2], l_35, g_126) && g_185[1]), g_185[1])) & l_9))
        { 
            int8_t l_211 = 0xDCL;
            int32_t l_221[1];
            uint8_t l_263 = 0x69L;
            int i;
            for (i = 0; i < 1; i++)
                l_221[i] = (-3L);
            if (((l_186 | (((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_sub_func_int64_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_lshift_func_int16_t_s_u((+(((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((!g_157) || ((((safe_div_func_uint32_t_u_u(0UL, l_186)) & g_15) | 0x00D04547L) & g_126)), l_211)) > l_9), g_15)), l_186)) || g_5) != l_34[1])), 7)) != g_18) >= g_185[1]), 15)), 2)), 13)), 1UL)) != g_124[0]), g_15)), g_2[2][0])) , 0xA1B52123L) < l_211)) | l_211))
            { 
                uint64_t l_212 = 1UL;
                if (g_2[2][3])
                    break;
                l_212++;
                g_124[0] = g_185[1];
            }
            else
            { 
                uint16_t l_217 = 1UL;
                int8_t l_223 = 0x49L;
                int32_t l_225 = 0x16177B4BL;
                int32_t l_226[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_226[i][j] = 1L;
                }
                l_9 = ((safe_rshift_func_int8_t_s_u(((l_218[1][0] |= ((l_217 == (g_124[0] && 255UL)) <= 0xBB31F0EAL)) | g_219), l_217)) > 0xB615696DL);
                l_237[0][1]--;
            }
            if (((((l_224[0] == (((0xB1BCL > ((((((l_221[0] = (((safe_mul_func_int16_t_s_s((-1L), 0xA179L)) == g_124[0]) <= 0xF7625D64D038AAF2LL)) >= l_224[1]) , l_232) , l_229[0]) | 1UL) > 0xB3L)) || l_186) < (-1L))) , g_15) , g_5) & l_211))
            { 
                int32_t l_243 = 0xB80F26FCL;
                l_228 ^= (0xDBFAL && (safe_unary_minus_func_uint16_t_u(((((l_211 , g_185[1]) | g_124[0]) >= l_237[0][1]) < 0xEAL))));
                l_243 = 0x0C7B6A19L;
                if (g_124[0])
                    break;
            }
            else
            { 
                int32_t l_247 = 0x0BC6D34CL;
                int32_t l_248 = 2L;
                g_5 &= ((l_246 = 0xD240L) == ((((((l_247 = l_220) > ((((g_18 <= 4L) >= g_10) , l_231) ^ 0x9EL)) && l_237[0][1]) ^ 0x4540L) , 1L) <= l_248));
                l_222 = l_237[1][2];
            }
            if ((safe_rshift_func_uint16_t_u_u((((safe_div_func_int8_t_s_s((safe_div_func_int16_t_s_s(l_34[0], (l_218[1][0] = (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u((g_18 && (safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((g_124[0] < l_221[0]) && l_34[1]) || g_185[1]), g_124[0])), l_263))), 4)), 65528UL))))), 1L)) || 18446744073709551615UL) || l_237[1][2]), 1)))
            { 
                l_218[1][0] = (safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_124[0], 6)), g_236));
                if (l_230)
                    break;
            }
            else
            { 
                return g_126;
            }
        }
        else
        { 
            uint32_t l_270 = 0x96DFD013L;
            int32_t l_273 = 8L;
            int32_t l_275[1][1];
            uint16_t l_276 = 1UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_275[i][j] = (-3L);
            }
            for (l_222 = 0; (l_222 > 8); l_222 = safe_add_func_int32_t_s_s(l_222, 8))
            { 
                uint32_t l_271[2][3];
                int32_t l_274 = (-7L);
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_271[i][j] = 1UL;
                }
                l_231 = (((((g_18 ^= (l_270 && g_124[0])) > 0x62L) , 0UL) > 0L) | l_271[0][0]);
                --l_276;
            }
            l_283[0][0]++;
        }
        for (g_126 = 0; (g_126 != 2); g_126 = safe_add_func_int16_t_s_s(g_126, 1))
        { 
            uint32_t l_293 = 18446744073709551615UL;
            int32_t l_296[3];
            int i;
            for (i = 0; i < 3; i++)
                l_296[i] = (-6L);
            g_124[0] = g_2[3][0];
            g_5 = (g_2[0][0] < (safe_unary_minus_func_uint64_t_u((--g_185[1]))));
            for (l_230 = 0; (l_230 > (-6)); --l_230)
            { 
                int32_t l_297 = 0x10CBC175L;
                int32_t l_298[2][3];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_298[i][j] = 0xEB511B20L;
                }
                l_298[0][2] |= (((l_296[1] = (l_293 & (g_124[0] , (safe_lshift_func_int8_t_s_s((0x02L >= 0x8DL), g_157))))) && g_15) < l_297);
                g_124[0] ^= (safe_lshift_func_int8_t_s_u((g_311 = (safe_sub_func_uint32_t_u_u((safe_div_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((1L <= (safe_unary_minus_func_int32_t_s((g_10 , ((safe_sub_func_int8_t_s_s((g_310 = (((l_218[1][0] = 4294967295UL) && l_296[1]) ^ 0L)), g_15)) > 0x3217L))))), 0x71F4L)), l_296[1])), 0x6BE5335BL))), 0));
                ++l_312;
            }
        }
    }
    if (((+(((safe_lshift_func_uint8_t_u_s((((0x3AC702A8L && l_232) == ((((l_318 = (0x52BDL == l_228)) , l_235) <= g_185[1]) >= g_219)) > l_227), g_126)) ^ g_124[0]) ^ g_236)) <= 0x3CL))
    { 
        uint32_t l_322[1][4] = {{18446744073709551609UL,18446744073709551609UL,18446744073709551609UL,18446744073709551609UL}};
        int16_t l_323 = 0L;
        uint64_t l_334 = 0xBFBD1E1DB443416DLL;
        int32_t l_337[4][2] = {{9L,9L},{9L,9L},{9L,9L},{9L,9L}};
        uint8_t l_363[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_363[i][j] = 252UL;
        }
        for (g_18 = 0; (g_18 == 16); g_18 = safe_add_func_uint64_t_u_u(g_18, 5))
        { 
            l_322[0][2] |= l_321;
        }
        if ((l_322[0][2] , (l_323 || (l_323 <= 0xDEA7871D96F4DC4DLL))))
        { 
            uint32_t l_332 = 0x14EC5ED5L;
            int32_t l_333 = 0x64B5874EL;
            l_333 = (((safe_rshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((g_157 | (safe_rshift_func_int8_t_s_u(l_332, (g_219 >= 255UL)))), l_322[0][1])), l_332)), 10)) && g_124[0]) & l_332);
        }
        else
        { 
            int16_t l_335[3];
            int32_t l_338 = 1L;
            int32_t l_339 = 0xFB92A9F2L;
            int32_t l_340 = 0xD4CCEA3EL;
            int32_t l_342 = 0x0078BCC8L;
            int32_t l_343 = (-1L);
            int32_t l_344 = 0x9D655A31L;
            uint16_t l_345[4];
            int i;
            for (i = 0; i < 3; i++)
                l_335[i] = 1L;
            for (i = 0; i < 4; i++)
                l_345[i] = 0x294BL;
            if (((l_228 <= (g_2[0][0] | l_334)) , l_335[0]))
            { 
                int64_t l_336 = 7L;
                int32_t l_341[1][2];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 2; j++)
                        l_341[i][j] = 0xF3727B0FL;
                }
                l_345[1]--;
            }
            else
            { 
                const uint64_t l_361 = 0x827F1B1AC4B74264LL;
                int32_t l_362 = 0xEEA618A1L;
                g_5 &= (((((((~((((~((safe_lshift_func_int16_t_s_s(((((safe_add_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u(0xECL, ((safe_unary_minus_func_uint32_t_u(((safe_div_func_uint32_t_u_u(0x285390B3L, l_337[1][1])) & g_15))) == g_219))), l_343)), g_2[3][0])) && 0x02A8A9666FFBF402LL) <= g_185[0]) != l_361), l_361)) | g_157)) , 0xE936L) , l_361) < g_15)) < g_10) | l_337[1][1]) || g_2[2][0]) , 0x025E17D8L) >= g_185[0]) < 0x2DL);
                l_363[0][1]++;
            }
        }
    }
    else
    { 
        uint64_t l_371 = 0x47B4517E80FDE94FLL;
        int32_t l_374 = 0xC68FEC65L;
        int32_t l_375[3];
        int32_t l_376[4];
        uint32_t l_378 = 18446744073709551610UL;
        int i;
        for (i = 0; i < 3; i++)
            l_375[i] = 0x4D3B09A2L;
        for (i = 0; i < 4; i++)
            l_376[i] = 0x97B1F19CL;
        for (g_5 = 0; (g_5 < (-4)); g_5 = safe_sub_func_uint32_t_u_u(g_5, 8))
        { 
            if (g_124[0])
                break;
            for (l_228 = (-18); (l_228 != 24); l_228++)
            { 
                int16_t l_370 = 1L;
                ++l_371;
                g_2[0][0] = 0xBB74991EL;
            }
            if (l_234)
                break;
        }
        --l_378;
    }
    for (g_126 = 0; (g_126 > (-22)); --g_126)
    { 
        if (g_2[1][0])
            break;
    }
    return l_318;
}



static uint8_t  func_24(uint8_t  p_25, uint8_t  p_26, int32_t  p_27, int8_t  p_28, uint64_t  p_29)
{ 
    uint32_t l_184[3];
    int i;
    for (i = 0; i < 3; i++)
        l_184[i] = 0x8B036ACEL;
    for (p_26 = 0; p_26 < 1; p_26 += 1)
    {
        g_124[p_26] = 1L;
    }
    g_124[0] = ((safe_mul_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((((p_26 != (0x1DEB0A87L ^ (safe_mul_func_uint8_t_u_u(p_26, p_27)))) , g_2[3][0]) <= l_184[0]) == 0xCFD9L) || 0UL), l_184[0])) , g_124[0]), g_124[0])) | g_15), 8L)) & p_25);
    return l_184[0];
}



static uint8_t  func_30(uint16_t  p_31, const uint64_t  p_32, int8_t  p_33)
{ 
    uint32_t l_38[3][3] = {{0x58BBE58EL,0x80A7C6DDL,0x58BBE58EL},{8UL,8UL,8UL},{0x58BBE58EL,0x80A7C6DDL,0x58BBE58EL}};
    int32_t l_41 = 0xAA9634D7L;
    uint32_t l_125 = 1UL;
    int32_t l_129 = 0x055545B6L;
    int i, j;
lbl_80:
    for (g_18 = (-27); (g_18 < 41); g_18 = safe_add_func_uint64_t_u_u(g_18, 1))
    { 
        int64_t l_60[4] = {8L,8L,8L,8L};
        uint32_t l_69 = 1UL;
        int i;
        for (p_31 = 0; p_31 < 3; p_31 += 1)
        {
            for (g_5 = 0; g_5 < 3; g_5 += 1)
            {
                l_38[p_31][g_5] = 4294967295UL;
            }
        }
        for (g_10 = (-19); (g_10 >= 52); g_10 = safe_add_func_uint64_t_u_u(g_10, 1))
        { 
            l_41 = g_18;
            if ((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_add_func_uint64_t_u_u((0xDC068927L ^ (safe_mod_func_int64_t_s_s((((safe_div_func_uint32_t_u_u(p_32, g_2[0][0])) <= p_32) >= p_31), g_5))), g_15)), 3)), 1L)))
            { 
                uint8_t l_58 = 1UL;
                int32_t l_59 = 0x63260039L;
                l_60[0] = (safe_div_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(g_15, 0x4914L)) , (l_58 = (safe_div_func_int16_t_s_s(((g_5 == p_31) == g_2[0][0]), (-10L))))), l_59));
                l_59 = (l_41 = l_38[2][1]);
                if (p_31)
                    break;
            }
            else
            { 
                if (g_5)
                    break;
            }
            return g_15;
        }
        if ((((safe_lshift_func_uint16_t_u_u((l_41 = ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_mul_func_uint8_t_u_u((l_38[0][1] & p_31), ((1UL && g_10) & g_5))), 5)), g_15)) | p_32)), 10)) < p_32) < 0x1EFC39FA237FF9BDLL))
        { 
            l_69++;
        }
        else
        { 
            l_41 |= (safe_div_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(g_2[0][2], 2)), p_32));
        }
    }
    if (((safe_add_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(1L, p_32)) >= 0xD9L), l_38[0][2])) & p_32))
    { 
        uint8_t l_99 = 0x21L;
        int32_t l_100 = 0L;
        int32_t l_101 = 8L;
        if (g_10)
            goto lbl_80;
        if (((g_18 , ((safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s((safe_div_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((-1L), ((safe_mul_func_int8_t_s_s(((safe_div_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(l_41, g_18)) , p_33), 0xD2L)) , p_32), g_18)) && g_2[1][2]))) < p_33), g_18)), l_38[1][1])), g_2[0][0])) & l_38[2][0])) > p_32))
        { 
            l_100 = (((safe_lshift_func_int8_t_s_u((safe_add_func_int64_t_s_s(g_15, ((l_99 = 0xD542D3F7L) <= p_33))), l_100)) , 0xEC44L) , l_41);
        }
        else
        { 
            return l_101;
        }
        for (g_5 = 0; (g_5 <= 2); g_5 += 1)
        { 
            uint32_t l_102 = 0x1225765CL;
            return l_102;
        }
    }
    else
    { 
        const uint64_t l_115 = 0UL;
        int32_t l_127 = 0x12E21983L;
        uint16_t l_161 = 0xD86BL;
        for (g_18 = 0; (g_18 <= 2); g_18 += 1)
        { 
            int64_t l_114[1];
            int32_t l_128 = (-7L);
            int16_t l_132 = 0x4F77L;
            int i;
            for (i = 0; i < 1; i++)
                l_114[i] = 0x808108B99CB9CEB5LL;
            if ((g_5 = (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((p_31 &= (g_15 = ((g_15 < (g_18 > ((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((~0xD6E0D248L) < 0x030DL), 6)) , l_114[0]), g_15)) ^ g_2[0][0]))) >= g_15))) && p_32), 255UL)), l_114[0])), 3L))))
            { 
                int32_t l_138[4] = {0x40FDB04FL,0x40FDB04FL,0x40FDB04FL,0x40FDB04FL};
                int i;
                if (l_115)
                    break;
                g_5 ^= (l_129 &= ((l_128 = (l_127 = (safe_lshift_func_uint8_t_u_s((safe_div_func_uint32_t_u_u((((safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u((g_124[0] ^= (p_32 > p_33)), l_114[0])), l_115)) || l_125) & l_38[1][0]), (-7L))), g_126)))) == l_41));
                g_5 = (safe_div_func_int64_t_s_s(((l_132 = p_32) <= (!(safe_sub_func_uint64_t_u_u((safe_add_func_int16_t_s_s((l_138[0] &= g_124[0]), (((g_10 == l_114[0]) >= p_31) | p_31))), p_32)))), p_31));
            }
            else
            { 
                return p_33;
            }
            for (g_10 = 0; (g_10 <= 2); g_10 += 1)
            { 
                int i, j;
                g_124[0] = ((safe_add_func_uint64_t_u_u(((((safe_add_func_uint16_t_u_u(l_38[g_18][g_10], ((-1L) ^ (safe_mod_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((l_38[g_10][g_18] && l_38[g_10][g_10]), 0xD6L)) , 0x8765FAFB16363166LL), p_32))))) & l_41) | p_33) != l_38[g_10][g_18]), 0UL)) || p_31);
            }
            for (p_31 = 0; (p_31 <= 2); p_31 += 1)
            { 
                int i, j;
                l_127 = (l_38[p_31][g_18] , (((safe_mod_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u(0UL, ((0x52L && p_31) != 0x4AA9L))) < l_38[p_31][g_18]), 0xF33B6043L)), p_32)), l_38[p_31][g_18])) | 0xF311A8DCBC2B75F9LL) , g_5));
            }
        }
        for (l_41 = 0; (l_41 <= (-9)); l_41--)
        { 
            uint8_t l_158 = 3UL;
            if (p_33)
                break;
            if (((((g_157 &= (l_127 = l_129)) , ((l_158 >= (safe_rshift_func_uint16_t_u_s(((((1UL || 0L) & l_158) , 0x32B9FEB6L) | g_124[0]), 13))) || 1L)) & 0xF533L) , g_126))
            { 
                --l_161;
            }
            else
            { 
                g_124[0] ^= ((safe_div_func_int64_t_s_s((0UL | (((safe_add_func_uint64_t_u_u(g_5, (safe_add_func_int64_t_s_s((((safe_add_func_uint8_t_u_u((++g_18), g_2[1][0])) && p_31) , 0xB5352CA7B4D5CE25LL), 1L)))) , p_33) <= 0x534C0AFD8232EDDALL)), 0x8E2A20AB37EAFC3DLL)) && l_115);
            }
        }
    }
    return p_32;
}





int test_main(void)
{
    int i, j;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);

        }
    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_124[i], "g_124[i]", print_hash_value);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_157, "g_157", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_185[i], "g_185[i]", print_hash_value);

    }
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
