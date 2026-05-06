// SPDX-License-Identifier: MIT
// cctest_csmith_49913571.c --- cctest case csmith_49913571 (csmith seed 1234253169)
// Copyright (c) 2026 Jakob Kastelic

/* @expect 0x32be2971 */

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

// Options:   -s 1234253169 -o /tmp/csmith_gen_syq_77wd/csmith.c --concise --no-pointers --no-structs --no-unions --no-bitfields --no-volatiles --no-volatile-pointers --max-funcs 4 --max-block-size 3 --max-block-depth 3 --max-expr-complexity 5 --max-array-dim 3 --max-array-len-per-dim 5

static long __undefined;



static int8_t g_6[5][1][3] = {{{0x85L,0x43L,0x85L}},{{0x85L,0x43L,0x85L}},{{0x85L,0x43L,0x85L}},{{0x85L,0x43L,0x85L}},{{0x85L,0x43L,0x85L}}};
static int32_t g_17 = 0x8EA38884L;
static int32_t g_20 = 0xA5202749L;
static uint32_t g_33 = 0UL;
static uint32_t g_62 = 1UL;
static uint32_t g_75 = 18446744073709551615UL;
static uint32_t g_88 = 0x4D04141EL;
static uint8_t g_114 = 1UL;
static uint64_t g_163 = 18446744073709551613UL;



static uint8_t  func_1(void);
static const uint8_t  func_7(const uint32_t  p_8, int16_t  p_9, uint16_t  p_10);
static int16_t  func_11(uint8_t  p_12);
static uint8_t  func_13(uint32_t  p_14);




static uint8_t  func_1(void)
{ 
    int64_t l_3 = (-5L);
    uint16_t l_89[1];
    uint64_t l_177 = 18446744073709551615UL;
    int i;
    for (i = 0; i < 1; i++)
        l_89[i] = 0xFDD8L;
    l_177 = (!(l_3 >= (safe_sub_func_int8_t_s_s((((g_6[3][0][0] , func_7(g_6[3][0][0], func_11((l_89[0] = (g_88 ^= func_13(g_6[3][0][0])))), l_3)) , l_89[0]) > g_6[3][0][0]), l_3))));
    return g_17;
}



static const uint8_t  func_7(const uint32_t  p_8, int16_t  p_9, uint16_t  p_10)
{ 
    return g_20;
}



static int16_t  func_11(uint8_t  p_12)
{ 
    uint8_t l_100 = 0x0BL;
    int32_t l_101 = 0x7B3B6DF6L;
    int32_t l_102 = 0xA778B6DBL;
    int32_t l_142[4][3];
    int32_t l_176 = 0x22935832L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            l_142[i][j] = 0x522227AEL;
    }
    if ((safe_lshift_func_int8_t_s_u(p_12, (safe_div_func_uint16_t_u_u((((safe_mul_func_int8_t_s_s(((g_88 > ((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_100, p_12)) && 0x241BC4ECL), 0x7E2FFC3EL)) < l_100)) & p_12), (-1L))) , p_12) > g_62), p_12)))))
    { 
        uint16_t l_103[5][5][4] = {{{3UL,0x36B0L,0xE630L,0xE630L},{0x7B3FL,0x7B3FL,0x3A2EL,65533UL},{0x55BDL,1UL,0UL,3UL},{3UL,65533UL,0xD6C5L,0UL},{0x36B0L,65533UL,8UL,3UL}},{{65533UL,1UL,0xE988L,65533UL},{0xF94FL,0x7B3FL,1UL,0xE630L},{0x7CC1L,0x36B0L,8UL,0UL},{0xE630L,8UL,1UL,0UL},{0UL,0xE630L,0xA7DFL,0xBC69L}},{{3UL,0xF94FL,0x55BDL,65526UL},{3UL,0x85D6L,0xA7DFL,0xD6C5L},{0UL,65526UL,1UL,65535UL},{0xE630L,0xE988L,3UL,0xF94FL},{0xE988L,0x85D6L,0x85D6L,0xE988L}},{{1UL,3UL,0x3A2EL,0xBC69L},{1UL,0UL,3UL,0xE630L},{0UL,8UL,0x009AL,0xE630L},{0UL,0UL,65535UL,0xBC69L},{0xF94FL,3UL,0x55BDL,0xE988L}},{{0xD6C5L,0x85D6L,0xBC69L,0xF94FL},{0UL,0xE988L,0UL,65535UL},{0UL,65526UL,3UL,0xD6C5L},{65526UL,0x85D6L,8UL,65526UL},{1UL,0xF94FL,8UL,0xBC69L}}};
        int32_t l_115 = (-7L);
        int i, j, k;
        l_103[3][2][3]++;
        for (l_101 = 0; (l_101 <= 3); l_101 += 1)
        { 
            uint16_t l_108[4][2][5] = {{{0x566FL,0xA339L,1UL,1UL,0xA339L},{0x566FL,0xA339L,1UL,1UL,0xA339L}},{{0x566FL,0xA339L,1UL,1UL,0xA339L},{0x566FL,0xA339L,1UL,1UL,0xA339L}},{{0x566FL,0xA339L,1UL,1UL,0xA339L},{0x566FL,0xA339L,1UL,1UL,0xA339L}},{{0x566FL,0xA339L,1UL,1UL,0xA339L},{0x566FL,0xA339L,1UL,1UL,0xA339L}}};
            int32_t l_136 = 0L;
            int i, j, k;
            if ((safe_add_func_uint64_t_u_u((l_108[3][1][3] == (((((0x20L && (((safe_unary_minus_func_int64_t_s((g_114 = ((safe_sub_func_uint32_t_u_u((0x082FL > (p_12 == 0xA2L)), 8UL)) & g_6[3][0][0])))) ^ g_6[0][0][0]) < l_108[3][1][3])) == 0xF7L) ^ 0xB4A0L) != 0x75L) > l_108[2][0][4])), l_108[2][1][1])))
            { 
                uint32_t l_116[1];
                int32_t l_135 = 0x6DA98BAAL;
                int i;
                for (i = 0; i < 1; i++)
                    l_116[i] = 0UL;
                l_116[0]++;
                if (g_114)
                    break;
                g_17 = ((((safe_div_func_uint64_t_u_u((l_115 = (safe_rshift_func_uint16_t_u_s(((safe_div_func_int8_t_s_s((l_136 &= ((((safe_div_func_uint32_t_u_u(l_115, 4294967295UL)) >= (safe_add_func_uint64_t_u_u(g_17, (((((((safe_add_func_uint64_t_u_u((l_102 |= (((safe_lshift_func_uint16_t_u_s(((safe_div_func_int32_t_s_s((l_135 |= (p_12 & l_116[0])), 0x085D5259L)) , l_115), g_75)) && p_12) >= l_116[0])), 2L)) && l_108[3][1][3]) <= p_12) , 0xD768DB52L) , g_114) != l_116[0]) == p_12)))) & l_108[3][1][3]) | p_12)), p_12)) < g_114), 14))), g_17)) > 0x6402E1C81CAAAA38LL) >= 18446744073709551615UL) == l_103[3][2][3]);
            }
            else
            { 
                l_115 ^= g_114;
            }
            for (g_33 = 0; (g_33 <= 3); g_33 += 1)
            { 
                l_142[2][0] = (safe_mod_func_uint8_t_u_u((+((l_102 = (((((g_75 , l_100) || 4294967294UL) > (safe_rshift_func_int16_t_s_u(g_114, p_12))) | p_12) ^ p_12)) , g_20)), g_6[2][0][2]));
            }
        }
    }
    else
    { 
        if ((safe_unary_minus_func_uint8_t_u(g_6[3][0][0])))
        { 
            for (g_62 = (-30); (g_62 != 30); g_62 = safe_add_func_int64_t_s_s(g_62, 3))
            { 
                int32_t l_150 = (-4L);
                g_17 = ((safe_mul_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u(((l_102 | (l_150 == ((safe_sub_func_uint32_t_u_u((((safe_mul_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s(g_6[3][0][0], (safe_sub_func_uint32_t_u_u(0x58C8BF5EL, p_12)))) & l_142[2][0]), p_12)) , p_12) >= p_12), p_12)) , g_62))) , 0xA1353FB5FCD5A05CLL), 1L)) && 18446744073709551615UL) , g_88) ^ p_12), l_150)) & p_12);
            }
        }
        else
        { 
            int32_t l_169 = 0x75A9E6D6L;
            int32_t l_171 = 0x653B0F06L;
            for (g_20 = 24; (g_20 <= 22); g_20 = safe_sub_func_int16_t_s_s(g_20, 4))
            { 
                int8_t l_168 = 0xF2L;
                uint32_t l_170 = 1UL;
                const int8_t l_175[2] = {(-9L),(-9L)};
                int i;
                l_171 ^= ((l_101 = (safe_div_func_int32_t_s_s((((p_12 , (g_163 = g_88)) & (l_170 = (((l_168 &= ((safe_div_func_uint32_t_u_u(p_12, ((safe_sub_func_int32_t_s_s((4294967295UL <= l_142[2][0]), 4294967287UL)) & p_12))) , 0UL)) , g_62) , l_169))) != g_6[2][0][2]), 0x09ED89A7L))) & g_20);
                g_17 = (safe_rshift_func_uint16_t_u_u((!l_175[1]), 12));
                return g_114;
            }
            return g_20;
        }
    }
    return l_176;
}



static uint8_t  func_13(uint32_t  p_14)
{ 
    uint32_t l_42 = 0UL;
    const uint32_t l_76 = 0x0F82EDDAL;
    for (p_14 = 0; (p_14 != 16); p_14 = safe_add_func_uint8_t_u_u(p_14, 4))
    { 
        int32_t l_45 = 6L;
        int32_t l_61 = (-1L);
        int32_t l_77 = 1L;
        for (g_17 = 0; (g_17 >= 3); g_17++)
        { 
            for (g_20 = 0; (g_20 >= (-8)); --g_20)
            { 
                uint16_t l_32[1][3][2] = {{{0xE7B1L,0xE7B1L},{0xE7B1L,0xE7B1L},{0xE7B1L,0xE7B1L}}};
                int i, j, k;
                g_33 = ((~(safe_mul_func_uint8_t_u_u(g_20, 0xEBL))) | ((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u(p_14, (safe_lshift_func_int8_t_s_s(p_14, l_32[0][1][0])))), g_6[3][0][0])) , 65535UL));
            }
        }
        for (g_20 = 0; (g_20 == 24); g_20 = safe_add_func_uint8_t_u_u(g_20, 8))
        { 
            int16_t l_46[2][3] = {{1L,1L,1L},{0xAC8CL,0xAC8CL,0xAC8CL}};
            int32_t l_60 = 0xF83F3A8AL;
            int i, j;
            g_17 = (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint64_t_u_u((1UL | (safe_add_func_int16_t_s_s(((l_42 != 8UL) || (((safe_lshift_func_int8_t_s_u((((g_20 & p_14) , p_14) , l_45), 6)) >= p_14) <= p_14)), l_46[1][2]))), g_6[3][0][0])) , l_45), g_20));
            for (g_17 = 0; (g_17 <= 1); g_17 += 1)
            { 
                int i, j;
                l_61 = (((l_60 = (((safe_mod_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((4L && ((safe_mod_func_uint64_t_u_u((g_20 ^ (l_46[g_17][g_17] = ((((!(p_14 , (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(g_6[3][0][0], 1)), 0)))) > g_17) && g_6[3][0][0]) != 0xC0978C76L))), g_33)) == 65528UL)), 0x20E9505C00D4B3BELL)), 5)) != 1L) ^ g_20), g_6[1][0][2])) ^ 0L) > 3UL)) || g_6[3][0][0]) > 1UL);
                g_62 = (-1L);
            }
            if (l_42)
            { 
                l_77 = ((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((p_14 | p_14), (safe_lshift_func_int8_t_s_u(((g_17 ^= (g_33 < (((l_61 = ((safe_mul_func_uint8_t_u_u((safe_add_func_int64_t_s_s((g_75 = (safe_div_func_int8_t_s_s(g_20, 0x78L))), g_33)), 0x89L)) && 18446744073709551615UL)) | l_76) && p_14))) , l_46[1][0]), g_6[4][0][0])))), 1)) && p_14);
                l_60 |= (safe_add_func_int32_t_s_s((g_17 = l_45), l_46[0][0]));
            }
            else
            { 
                int32_t l_87 = 0x6498492EL;
                g_17 = (p_14 && ((!g_75) > (safe_add_func_uint64_t_u_u(l_46[1][2], ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((l_87 &= p_14) == p_14), 8)), 4294967295UL)) || 255UL)))));
            }
        }
    }
    return g_6[3][0][0];
}





int test_main(void)
{
    int i, j, k;
    int print_hash_value = 0;

    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);

            }
        }
    }
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    return (int)(crc32_context ^ 0xFFFFFFFFUL);
}
